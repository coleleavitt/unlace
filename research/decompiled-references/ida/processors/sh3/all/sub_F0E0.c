__int64 __fastcall sub_F0E0(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // rdi
  __int16 v12; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( !a2 )
  {
    v12 = *(_WORD *)(a1 + 256) ^ 1;
    if ( (unsigned int)sub_EB20(
                         (__int64)"HELP\n"
                                  "\n"
                                  "Convert immediate loads\n"
                                  "  The immediates loaded from the literal\n"
                                  "  pool are converted to actual values, e.g.:\n"
                                  "\n"
                                  "  mov.l   dword_BBA9C, r4 ; h'6E9C2\n"
                                  "\n"
                                  "  is converted into:\n"
                                  "\n"
                                  "  mov.l   #h'6E9C2, r4\n"
                                  "ENDHELP\n"
                                  "SuperH specific analyzer options\n"
                                  "%*\n"
                                  " <#Put the immediates loaded from the literal pool into the instruction itself#Convert"
                                  " ~i~mmediate loads:C>>\n"
                                  "\n"
                                  " <~C~hoose a device:B:1:::>\n"
                                  "\n",
                         a1,
                         &v12,
                         sub_F0C0) )
      *(_WORD *)(a1 + 256) = v12 ^ 1;
    goto LABEL_9;
  }
  if ( !strcmp(a2, "SH3_INLINE_IMMVALS") )
  {
    result = 2;
    if ( a3 != 3 )
      return result;
    if ( !*a4 )
    {
LABEL_13:
      *(_WORD *)(a1 + 256) |= 1u;
      goto LABEL_9;
    }
  }
  else
  {
    v9 = strcmp(a2, "SH3_DONT_INLINE_IMM");
    result = 1;
    if ( v9 )
      return result;
    result = 2;
    if ( a3 != 3 )
      return result;
    if ( *a4 )
      goto LABEL_13;
  }
  *(_WORD *)(a1 + 256) &= ~1u;
LABEL_9:
  if ( a5 )
  {
    v11 = *(_QWORD *)(a1 + 248);
    v13[0] = *(unsigned __int16 *)(a1 + 256);
    netnode_supset(v11, -3, v13, 8, 65);
  }
  return 0;
}

