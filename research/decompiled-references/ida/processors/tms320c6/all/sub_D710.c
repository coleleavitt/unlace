__int64 __fastcall sub_D710(__int64 a1, const char *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int16 v7; // dx
  __int16 v8; // ax
  __int16 v9; // dx
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    LOWORD(v10[0]) = (*(_BYTE *)(a1 + 154) & 1) != 0;
    if ( (unsigned int)sub_D170(
                         (__int64)"HELP\n"
                                  "TMS6 specific options\n"
                                  "\n"
                                  " Automatically scale offsets\n"
                                  "\n"
                                  "       If this options is on, IDA will automatically scale offsets.\n"
                                  "       For example,\n"
                                  "\n"
                                  "               STH .D1 A2, *A5++[2]\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               STH .D1 A2, *A5++(4)\n"
                                  "\n"
                                  "ENDHELP\n"
                                  "TMS6 specific options\n"
                                  " <Scale ~o~ffsets:C1>>\n"
                                  "\n",
                         v10) )
    {
      v7 = *(_WORD *)(a1 + 154);
      v8 = v7 | 1;
      v9 = v7 & 0xFFFE;
      if ( (v10[0] & 1) == 0 )
        v8 = v9;
      *(_WORD *)(a1 + 154) = v8;
    }
LABEL_6:
    if ( a5 )
    {
      v10[0] = *(unsigned __int16 *)(a1 + 154);
      netnode_supset();
    }
    return 0;
  }
  if ( strcmp("TMS6_SCALE_OFFSETS", a2) )
    return 1;
  result = cfgopt_t__apply3();
  if ( !result )
    goto LABEL_6;
  return result;
}

