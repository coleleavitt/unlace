__int64 __fastcall sub_9BA0(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  int v8; // edx
  __int16 v9; // ax
  __int64 v10; // rdx
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // ax

  if ( !a2 )
  {
    sub_9610(
      (__int64)"HELP\n"
               "DEC Alpha specific options\n"
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
               "               bis     $31, $1, $2\n"
               "\n"
               "       will be replaced by\n"
               "\n"
               "               mov     $1, $2\n"
               "\n"
               " Use mnemonic register names\n"
               "\n"
               "       If checked, IDA will use mnemonic names of the registers,\n"
               "       like s0, s1, t0, v0...\n"
               "ENDHELP\n"
               "ALPHA specific options\n"
               "%*\n"
               " <St~r~ictly adhere to instruction formats:C>\n"
               " <~S~implify instructions:C>\n"
               " <~U~se mnemonic register names:C>>\n"
               "\n"
               " <Specify ~a~rchitecture:B:0:::>\n"
               "\n"
               "\n",
      a1,
      a1 + 216,
      sub_99D0);
    v12 = *(_WORD *)(a1 + 216);
    goto LABEL_17;
  }
  result = 2;
  if ( a3 != 3 )
    return result;
  if ( !strcmp(a2, "ALPHA_STRICT") )
  {
    v11 = *(_WORD *)(a1 + 216);
    if ( *a4 )
      v12 = v11 | 1;
    else
      v12 = v11 & 0xFFFE;
    *(_WORD *)(a1 + 216) = v12;
LABEL_17:
    if ( !a5 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !strcmp(a2, "ALPHA_SIMPLIFY") )
  {
    v13 = *(_WORD *)(a1 + 216);
    if ( *a4 )
      v12 = v13 | 2;
    else
      v12 = v13 & 0xFFFD;
    *(_WORD *)(a1 + 216) = v12;
    goto LABEL_17;
  }
  v8 = strcmp(a2, "ALPHA_MNEMONIC");
  result = 1;
  if ( !v8 )
  {
    v9 = *(_WORD *)(a1 + 216);
    if ( *a4 )
    {
      *(_WORD *)(a1 + 216) = v9 | 4;
      if ( !a5 )
      {
        v10 = *(_QWORD *)(a1 + 16);
LABEL_10:
        *(_QWORD *)(v10 + 56) = off_11720;
        return 0;
      }
    }
    else
    {
      *(_WORD *)(a1 + 216) = v9 & 0xFFFB;
      if ( !a5 )
      {
        v10 = *(_QWORD *)(a1 + 16);
        goto LABEL_13;
      }
    }
LABEL_18:
    netnode_supset();
    v12 = *(_WORD *)(a1 + 216);
LABEL_19:
    v10 = *(_QWORD *)(a1 + 16);
    if ( (v12 & 4) != 0 )
      goto LABEL_10;
LABEL_13:
    *(_QWORD *)(v10 + 56) = off_11940;
    return 0;
  }
  return result;
}

