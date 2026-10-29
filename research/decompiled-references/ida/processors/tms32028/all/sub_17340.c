__int64 __fastcall sub_17340(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  int v8; // edx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax

  if ( a2 )
  {
    result = 2;
    if ( a3 != 3 )
      return result;
    if ( !strcmp(a2, "TMS32028_IO") )
    {
      v10 = *(_WORD *)(a1 + 252);
      if ( *a4 )
        *(_WORD *)(a1 + 252) = v10 | 1;
      else
        *(_WORD *)(a1 + 252) = v10 & 0xFFFE;
    }
    else if ( !strcmp(a2, "TMS32028_OBJMODE") )
    {
      v11 = *(_WORD *)(a1 + 252);
      if ( *a4 )
        *(_WORD *)(a1 + 252) = v11 | 2;
      else
        *(_WORD *)(a1 + 252) = v11 & 0xFFFD;
    }
    else
    {
      v8 = strcmp(a2, "TMS32028_AMODE");
      result = 1;
      if ( v8 )
        return result;
      v9 = *(_WORD *)(a1 + 252);
      if ( *a4 )
        *(_WORD *)(a1 + 252) = v9 | 4;
      else
        *(_WORD *)(a1 + 252) = v9 & 0xFFFB;
    }
  }
  else
  {
    sub_17010(
      (__int64)"HELP\n"
               "TMS320C28x specific options\n"
               "\n"
               " Use I/O definitions\n"
               "\n"
               "       If this option is on, IDA will use I/O definitions\n"
               "       from the configuration file into a macro instruction.\n"
               "\n"
               " Device name\n"
               "\n"
               "       Choose the exact device name for the processor.\n"
               "       If you don't see the name you want, you can add\n"
               "       a section about it to the tms32028.cfg file\n"
               "\n"
               " OBJMODE\n"
               "\n"
               "       The OBJMODE bit allows you to select between\n"
               "       code compiled for a C28x (OBJMODE == 1) and\n"
               "       code compiled for a C27x (OBJMODE == 0).\n"
               "\n"
               " AMODE\n"
               "\n"
               "       The AMODE bit allows you to select between\n"
               "       C28x/C27x instruction addressing modes (AMODE == 0)\n"
               "       and C2xLP compatible instruction addressing\n"
               "       modes (AMODE == 1).\n"
               "\n"
               "ENDHELP\n"
               "TMS320C28x specific options\n"
               "%*\n"
               " <Use ~I~/O definitions:C>\n"
               "\n"
               " <~O~BJMODE:C>\n"
               "\n"
               " <~A~MODE:C>>\n"
               "\n"
               " <~C~hoose device name:B:0:::>\n"
               "\n",
      a1,
      a1 + 252,
      sub_16480);
  }
  if ( a5 )
    netnode_supset();
  return 0;
}

