__int64 __fastcall sub_15A30(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  int v8; // edx
  __int16 v9; // ax
  __int16 v10; // ax

  if ( a2 )
  {
    result = 2;
    if ( a3 != 3 )
      return result;
    if ( !strcmp(a2, "TMS320C55_IO") )
    {
      v10 = *(_WORD *)(a1 + 256);
      if ( *a4 )
        *(_WORD *)(a1 + 256) = v10 | 1;
      else
        *(_WORD *)(a1 + 256) = v10 & 0xFFFE;
    }
    else
    {
      v8 = strcmp(a2, "TMS320C55_MMR");
      result = 1;
      if ( v8 )
        return result;
      v9 = *(_WORD *)(a1 + 256);
      if ( *a4 )
        *(_WORD *)(a1 + 256) = v9 | 2;
      else
        *(_WORD *)(a1 + 256) = v9 & 0xFFFD;
    }
  }
  else
  {
    sub_15920(
      (__int64)"HELP\n"
               "TMS320C55 specific options\n"
               "\n"
               " Use I/O definitions \n"
               "\n"
               "       If this option is on, IDA will use I/O definitions\n"
               "       from the configuration file into a macro instruction.\n"
               "\n"
               " Detect memory mapped registers \n"
               "\n"
               "       If this option is on, IDA will replace addresses\n"
               "       by an equivalent memory mapped register.\n"
               "\n"
               "ENDHELP\n"
               "TMS320C55 specific options\n"
               "%*\n"
               " <Use ~I~/O definitions:C>\n"
               " <Detect memory mapped ~r~egisters:C>>\n"
               "\n"
               " <~C~hoose device name:B:0::>\n"
               "\n"
               "\n",
      a1,
      a1 + 256,
      sub_14DC0);
  }
  if ( a5 )
    netnode_supset();
  return 0;
}

