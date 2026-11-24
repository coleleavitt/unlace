/* dfsim_plain: single-step one gdb simulator for tools/difffuzz (gdbsim_backend.py).
   This copy uses only the sim/sim.h interface, for the simulators with their own main.c (rx,
   m32c, rl78) whose libsim.a is the gdb-if.c interface; reads commands on stdin,
   answers one line each on stdout:
     W <addr> <hex>      write memory          -> OK <bytes written>
     R <addr> <len>      read memory           -> OK <hex> | E <bytes read>
     S <regno> <hex>     store a register      -> OK <rc>
     G <regno> <len>     fetch a register      -> OK <hex> <rc>
     T                   step one instruction  -> OK <reason> <signal>
     Q                   quit
   Addresses are hex, register bytes are in target byte order.  */
#include "defs.h"

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "bfd.h"
#include "sim/callback.h"
#include "sim/sim.h"

extern host_callback default_callback;

static FILE *resp;
#define printf(...) fprintf (resp, __VA_ARGS__)

static int
unhex (const char *s, unsigned char *out, int max)
{
  int n = 0;
  while (s[0] && s[1] && n < max)
    {
      unsigned v;
      if (sscanf (s, "%2x", &v) != 1)
        break;
      out[n++] = v;
      s += 2;
    }
  return n;
}

static void
puthex (const unsigned char *b, int n)
{
  for (int i = 0; i < n; i++)
    printf ("%02x", b[i]);
}

int
main (int argc, char **argv)
{
  static char line[1 << 17];
  static unsigned char buf[1 << 16];
  SIM_DESC sd;
  struct bfd *prog_bfd;
  const char *name;

  /* these simulators print diagnostics (section loads, execution errors) on stdout: answer on a
     copy of the original stdout and send everything else to stderr */
  resp = fdopen (dup (1), "w");
  dup2 (2, 1);
  default_callback.init (&default_callback);
  name = argv[argc - 1];
  prog_bfd = bfd_openr (name, 0);
  if (prog_bfd == NULL || !bfd_check_format (prog_bfd, bfd_object))
    return 1;
  sd = sim_open (SIM_OPEN_DEBUG, &default_callback, prog_bfd, argv);
  if (sd == 0)
    return 1;
  if (sim_load (sd, name, prog_bfd, 0) == SIM_RC_FAIL)
    return 1;
  sim_create_inferior (sd, prog_bfd, argv, NULL);
  printf ("READY\n");
  fflush (resp);

  while (fgets (line, sizeof line, stdin))
    {
      char op = line[0];
      if (op == 'Q')
        break;
      if (op == 'W')
        {
          unsigned long long a;
          char hex[sizeof line];
          if (sscanf (line + 1, "%llx %s", &a, hex) != 2)
            { printf ("E parse\n"); }
          else
            {
              int n = unhex (hex, buf, sizeof buf);
              printf ("OK %d\n", (int) sim_write (sd, a, buf, n) == n ? n : -1);
            }
        }
      else if (op == 'R')
        {
          unsigned long long a;
          int n;
          sscanf (line + 1, "%llx %d", &a, &n);
          if (n > (int) sizeof buf)
            n = sizeof buf;
          int got = sim_read (sd, a, buf, n);
          if (got != n)
            printf ("E %d\n", got);
          else
            {
              printf ("OK ");
              puthex (buf, n);
              printf ("\n");
            }
        }
      else if (op == 'S')
        {
          int rn;
          char hex[256];
          sscanf (line + 1, "%d %255s", &rn, hex);
          int n = unhex (hex, buf, 64);
          printf ("OK %d\n", sim_store_register (sd, rn, buf, n));
        }
      else if (op == 'G')
        {
          int rn, n;
          sscanf (line + 1, "%d %d", &rn, &n);
          memset (buf, 0, 64);
          int rc = sim_fetch_register (sd, rn, buf, n);
          printf ("OK ");
          puthex (buf, n);
          printf (" %d\n", rc);
        }
      else if (op == 'T')
        {
          enum sim_stop reason;
          int sigrc = 0;
          sim_resume (sd, 1, 0);
          sim_stop_reason (sd, &reason, &sigrc);
          printf ("OK %d %d\n", (int) reason, sigrc);
        }
      else
        printf ("E op\n");
      fflush (resp);
    }
  sim_close (sd, 0);
  return 0;
}
