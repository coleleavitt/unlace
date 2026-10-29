__int64 __fastcall sub_13B80(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  int v9; // edx
  __int64 result; // rax
  __int16 v11; // ax
  __int64 v12; // rdi
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( a2 )
  {
    v9 = strcmp(a2, "MC68K_UNSIGNED_OPS");
    result = 1;
    if ( v9 )
      return result;
    result = 2;
    if ( a3 != 3 )
      return result;
    v11 = *(_WORD *)(a1 + 184);
    if ( *a4 )
      *(_WORD *)(a1 + 184) = v11 | 1;
    else
      *(_WORD *)(a1 + 184) = v11 & 0xFFFE;
  }
  else if ( !(unsigned int)sub_13840(
                             (__int64)"HELP\n"
                                      "MC68K specific analyzer options\n"
                                      "\n"
                                      "Immediate operands are unsigned by default\n"
                                      "\n"
                                      "       If this option is off, then\n"
                                      "         a 8bit operand like 0xF0 will be represented as -0x10\n"
                                      "         a 16bit operand like 0xFF00 will be represented as -0x100\n"
                                      "         a 32bit operand like 0xFFFF0000 will be represented as -0x10000\n"
                                      "ENDHELP\n"
                                      "MC68K specific analyzer options\n"
                                      "\n"
                                      " <Immediate operands are ~u~nsigned by default:C>>\n"
                                      "\n"
                                      "\n",
                             a1 + 184) )
  {
    return 0;
  }
  if ( a5 )
  {
    v12 = *(_QWORD *)(a1 + 120);
    v13[0] = *(unsigned __int16 *)(a1 + 184);
    netnode_supset(v12, -1, v13, 8, 65);
  }
  return 0;
}

