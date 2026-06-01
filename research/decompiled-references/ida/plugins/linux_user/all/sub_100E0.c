int __fastcall sub_100E0(unsigned int pid, unsigned int sig)
{
  int *v2; // rax
  bool v3; // zf
  int *v5; // rbx
  int v6; // edx

  v2 = __errno_location();
  v3 = byte_48134 == 0;
  *v2 = 0;
  if ( !v3 )
    return kill(pid, sig);
  v5 = v2;
  v6 = syscall(200, pid, sig);
  if ( v6 && *v5 == 38 )
  {
    *v5 = 0;
    byte_48134 = 1;
    return kill(pid, sig);
  }
  if ( byte_48134 )
    return kill(pid, sig);
  return v6;
}

