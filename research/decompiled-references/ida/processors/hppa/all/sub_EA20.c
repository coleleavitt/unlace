__int64 __fastcall sub_EA20(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  int v8; // edx
  __int16 v9; // ax
  __int16 v10; // dx
  __int16 v11; // ax
  __int64 v12; // rcx
  char **v13; // rdx
  __int16 v14; // ax
  __int16 v15; // dx
  __int16 v16; // ax

  if ( a2 )
  {
    result = 2;
    if ( a3 != 3 )
      return result;
    if ( !strcmp(a2, "HPPA_SIMPLIFY") )
    {
      v14 = *(_WORD *)(a1 + 152);
      if ( *a4 )
        v15 = v14 | 1;
      else
        v15 = v14 & 0xFFFE;
      v11 = v14 & 4;
      *(_WORD *)(a1 + 152) = v15;
    }
    else
    {
      if ( !strcmp(a2, "HPPA_MNEMONIC") )
      {
        v16 = *(_WORD *)(a1 + 152);
        if ( *a4 )
        {
          v12 = *(_QWORD *)(a1 + 16);
          v13 = off_16220;
          *(_WORD *)(a1 + 152) = v16 | 4;
          goto LABEL_12;
        }
        v12 = *(_QWORD *)(a1 + 16);
        *(_WORD *)(a1 + 152) = v16 & 0xFFFB;
        goto LABEL_11;
      }
      v8 = strcmp(a2, "HPPA_PSW_W");
      result = 1;
      if ( v8 )
        return result;
      v9 = *(_WORD *)(a1 + 152);
      if ( *a4 )
        v10 = v9 | 2;
      else
        v10 = v9 & 0xFFFD;
      v11 = v9 & 4;
      *(_WORD *)(a1 + 152) = v10;
    }
  }
  else
  {
    sub_E730(
      (__int64)"HELP\n"
               "HP PA-RISC specific options\n"
               "\n"
               " Simplify instructions\n"
               "\n"
               "       If this option is on, IDA will simplify instructions and replace\n"
               "       them by clearer pseudo-instructions\n"
               "       For example,\n"
               "\n"
               "               or      0, 0, 0\n"
               "\n"
               "       will be replaced by\n"
               "\n"
               "               nop\n"
               "\n"
               " PSW bit W is on\n"
               "\n"
               "       If this option is on, IDA will disassemble instructions as if\n"
               "       PSW W bit is on, i.e. addresses are treated as 64bit. In fact,\n"
               "       IDA still will truncate them to 32 bit, but this option changes\n"
               "       disassembly of load/store instructions.\n"
               "\n"
               " Use mnemonic register names\n"
               "\n"
               "       If checked, IDA will use mnemonic names of the registers:\n"
               "         %r26:  %arg0\n"
               "         %r25:  %arg1\n"
               "         %r24:  %arg2\n"
               "         %r23:  %arg3\n"
               "         %r28:  %ret0\n"
               "\n"
               "\n"
               "ENDHELP\n"
               "HPPA specific options\n"
               "\n"
               " <~S~implify instructions:C>\n"
               " <PSW bit W is on (for 64-bit):C>\n"
               " <Use ~m~nemonic register names:C>>\n"
               "\n"
               "\n",
      a1 + 152);
    v11 = *(_WORD *)(a1 + 152) & 4;
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = off_16220;
  if ( !v11 )
LABEL_11:
    v13 = off_166C0;
LABEL_12:
  *(_QWORD *)(v12 + 56) = v13;
  if ( a5 )
    netnode_supset();
  return 0;
}

