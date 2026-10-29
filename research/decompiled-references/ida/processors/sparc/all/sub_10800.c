__int64 __fastcall sub_10800(__int64 a1, const char *a2, unsigned int a3, __int64 a4, char a5)
{
  int v9; // eax
  int v10; // edx
  __int64 result; // rax
  __int64 v12; // rdi
  char v13; // al
  __int16 v14; // dx
  __int16 v15; // ax
  __int16 v16; // cx
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // ax
  __int16 v21; // cx
  __int16 v22; // cx
  __int16 v23; // ax
  __int16 v24; // cx
  __int16 v25; // cx
  __int16 v26; // ax
  __int16 v27; // cx
  _QWORD v28[7]; // [rsp+0h] [rbp-38h] BYREF

  v28[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    LOWORD(v28[0]) = (*(_BYTE *)(a1 + 160) & 1) != 0;
    v13 = getinf_flag(11, 4);
    v14 = *(_WORD *)(a1 + 160);
    if ( v13 || (v14 & 2) != 0 )
      v15 = LOWORD(v28[0]) | 2;
    else
      v15 = v28[0] & 0xFFFD;
    v16 = v15;
    v17 = v15 & 0xFFFB;
    v18 = v16 | 4;
    if ( (v14 & 8) != 0 )
      v17 = v18;
    LOWORD(v28[0]) = v17;
    if ( (unsigned int)sub_10310(
                         (__int64)"HELP\n"
                                  "SPARC specific options\n"
                                  "\n"
                                  " Strictly adhere to instruction formats\n"
                                  "\n"
                                  "       If this option is on, IDA will check that unused fields\n"
                                  "       of instructions are filled by zeroes. If they are not,\n"
                                  "       it will refuse to disassemble the instruction.\n"
                                  "\n"
                                  " Simplify instructions\n"
                                  "\n"
                                  "       If this option is on, IDA will simplify instructions and replace\n"
                                  "       them by clearer pseudo-instructions\n"
                                  "       For example,\n"
                                  "\n"
                                  "               or      %g0, regimm, x\n"
                                  "\n"
                                  "       will be replaced by\n"
                                  "\n"
                                  "               mov     regimm, x\n"
                                  "       If macros are enabled, this options should be turned on.\n"
                                  "\n"
                                  " Architecture V8\n"
                                  "\n"
                                  "       If this option is on, IDA will disassemble V8 instructions\n"
                                  "       Otherwise, V9 is assumed\n"
                                  "ENDHELP\n"
                                  "SPARC specific options\n"
                                  "%/\n"
                                  " <St~r~ictly adhere to instruction formats:C>\n"
                                  " <~S~implify instructions:C1>\n"
                                  " <Architecture ~V~8:C>>\n"
                                  "\n"
                                  "\n",
                         sub_FDE0,
                         v28) )
    {
      v19 = *(_WORD *)(a1 + 160);
      v20 = v19 & 0xFFFE;
      v21 = v19 | 1;
      if ( (v28[0] & 1) != 0 )
        v20 = v21;
      v22 = v20;
      v23 = v20 & 0xFFFD;
      v24 = v22 | 2;
      if ( (v28[0] & 2) != 0 )
        v23 = v24;
      v25 = v23;
      v26 = v23 | 8;
      v27 = v25 & 0xFFF7;
      if ( (v28[0] & 4) == 0 )
        v26 = v27;
      *(_WORD *)(a1 + 160) = v26;
    }
LABEL_8:
    if ( (unsigned __int8)getinf_flag(11, 4) )
      *(_WORD *)(a1 + 160) |= 2u;
    if ( a5 )
    {
      v12 = *(_QWORD *)(a1 + 120);
      v28[0] = *(unsigned __int16 *)(a1 + 160);
      ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64, __int64))netnode_supset)(v12, -1, v28, 8, 65);
    }
    return 0;
  }
  v9 = strcmp("SPARC_STRICT", a2);
  if ( v9 )
  {
    if ( !strcmp("SPARC_SIMPLIFY", a2) )
    {
      v9 = 1;
    }
    else
    {
      v10 = strcmp("SPARC_V8", a2);
      result = 1;
      if ( v10 )
        return result;
      v9 = 2;
    }
  }
  result = cfgopt_t__apply3(&(&off_18060)[5 * v9], 0, a3, a4, a1);
  if ( !result )
    goto LABEL_8;
  return result;
}

