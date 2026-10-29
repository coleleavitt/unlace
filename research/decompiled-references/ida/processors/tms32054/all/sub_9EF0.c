__int64 __fastcall sub_9EF0(__int64 a1, const char *a2, int a3, _QWORD *a4, char a5)
{
  __int64 result; // rax
  int v9; // edx
  __int16 v10; // ax
  __int16 v11; // ax

  if ( a2 )
  {
    if ( !strcmp(a2, "TMS320C54_DSEG") )
    {
      if ( a3 == 2 )
        *(_QWORD *)(a1 + 224) = *a4;
      return 2;
    }
    if ( a3 != 3 )
      return 2;
    if ( !strcmp(a2, "TMS320C54_IO") )
    {
      v11 = *(_WORD *)(a1 + 232);
      if ( *(_DWORD *)a4 )
        *(_WORD *)(a1 + 232) = v11 | 1;
      else
        *(_WORD *)(a1 + 232) = v11 & 0xFFFE;
    }
    else
    {
      v9 = strcmp(a2, "TMS320C54_MMR");
      result = 1;
      if ( v9 )
        return result;
      v10 = *(_WORD *)(a1 + 232);
      if ( *(_DWORD *)a4 )
        *(_WORD *)(a1 + 232) = v10 | 2;
      else
        *(_WORD *)(a1 + 232) = v10 & 0xFFFD;
    }
  }
  else
  {
    sub_9B60(
      (__int64)"HELP\n"
               "TMS320C54 specific options\n"
               "\n"
               " Use I/O definitions\n"
               "\n"
               "       If this option is on, IDA will use I/O definitions\n"
               "       from the configuration file into a macro instruction.\n"
               "\n"
               " Detect memory mapped registers\n"
               "\n"
               "       If this option is on, IDA will replace addresses\n"
               "       by an equivalent memory mapped register.\n"
               "\n"
               " Device name\n"
               "\n"
               "       Choose the exact device name for the processor.\n"
               "       If you don't see the name you want, you can add\n"
               "       a section about it to the tms320c54.cfg file\n"
               "\n"
               " Data segment address\n"
               "\n"
               "       The data segment linear address.\n"
               "\n"
               "ENDHELP\n"
               "TMS320C54 specific options\n"
               "%*\n"
               " <Use ~I~/O definitions:C>\n"
               " <Detect memory mapped ~r~egisters:C>>\n"
               "\n"
               " <~C~hoose device name:B:0:::>\n"
               "\n"
               " <~D~ata segment address:N::18::>\n"
               "\n",
      a1,
      a1 + 232,
      sub_9180,
      a1 + 224);
  }
  if ( a5 )
  {
    netnode_supset();
    netnode_supset();
  }
  return 0;
}

