__int64 __fastcall sub_83B0(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  int v8; // edx
  __int16 v9; // ax

  if ( a2 )
  {
    result = 2;
    if ( a3 != 3 )
      return result;
    v8 = strcmp(a2, "I960_STRICT");
    result = 1;
    if ( v8 )
      return result;
    v9 = *(_WORD *)(a1 + 232);
    if ( *a4 )
      *(_WORD *)(a1 + 232) = v9 | 1;
    else
      *(_WORD *)(a1 + 232) = v9 & 0xFFFE;
  }
  else
  {
    sub_7FD0(
      (__int64)"HELP\n"
               "Intel 960 specific options\n"
               "\n"
               " Choose device name\n"
               "       Here you may select a specific Intel 960 device\n"
               "       IDA will use the definitions in the I960.CFG file for\n"
               "       the i/o port names\n"
               "\n"
               " Strictly adhere to instruction encodings\n"
               "       If this option is on, IDA will check that unused fields\n"
               "       of instructions are filled by zeroes. If they are not,\n"
               "       it will refuse to disassemble the instruction.\n"
               "\n"
               "ENDHELP\n"
               "Intel 960 specific options\n"
               "%*\n"
               " <~C~hoose device name:B:0:::>\n"
               "\n"
               " <~S~trictly adhere to instruction encodings:C>>\n"
               "\n"
               "\n",
      a1,
      sub_8330,
      a1 + 232);
  }
  if ( a5 )
    netnode_supset();
  return 0;
}

