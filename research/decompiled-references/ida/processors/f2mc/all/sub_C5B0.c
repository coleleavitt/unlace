__int64 __fastcall sub_C5B0(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  int v8; // edx
  __int16 v9; // ax

  if ( a2 )
  {
    result = 2;
    if ( a3 != 3 )
      return result;
    v8 = strcmp(a2, "F2MC_MACRO");
    result = 1;
    if ( v8 )
      return result;
    v9 = *(_WORD *)(a1 + 242);
    if ( *a4 )
      *(_WORD *)(a1 + 242) = v9 | 1;
    else
      *(_WORD *)(a1 + 242) = v9 & 0xFFFE;
  }
  else
  {
    sub_C1E0(
      (__int64)"HELP\n"
               "F2MC specific options\n"
               "\n"
               " Use macro instructions\n"
               "\n"
               "       If this option is on, IDA will try to combine several instructions\n"
               "       into a macro instruction\n"
               "       For example,\n"
               "\n"
               "            sbbs    data:7, $1\n"
               "            bra     $2\n"
               "          $1:\n"
               "            jmp     LABEL\n"
               "          $2:\n"
               "\n"
               "       will be replaced by\n"
               "\n"
               "            sbbs16  data:7, LABEL\n"
               "\n"
               "ENDHELP\n"
               "F2MC specific options\n"
               "%*\n"
               " <Use ~m~acro instructions:C>>\n"
               "\n"
               " <~C~hoose device name:B:0::>\n"
               "\n"
               "\n",
      a1,
      a1 + 242,
      sub_C580);
  }
  if ( a5 )
    netnode_supset();
  return 0;
}

