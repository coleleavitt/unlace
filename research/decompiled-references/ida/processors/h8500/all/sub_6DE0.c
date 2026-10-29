__int64 __fastcall sub_6DE0(__int64 a1, const char *a2, int a3, _DWORD *a4, char a5)
{
  int v8; // edx
  __int64 result; // rax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( a2 )
  {
    v8 = strcmp(a2, "H8500_MIXED_SIZE");
    result = 1;
    if ( v8 )
      return result;
    result = 2;
    if ( a3 != 3 )
      return result;
    if ( *a4 )
      *(_WORD *)(a1 + 152) &= ~1u;
    else
      *(_WORD *)(a1 + 152) |= 1u;
  }
  else
  {
    LOWORD(v10[0]) = (*(_BYTE *)(a1 + 152) & 1) == 0;
    sub_6A80(
      (__int64)"HELP\n"
               "H8/500 specific analyzer options\n"
               "\n"
               "Disassemble mixed size instructions\n"
               "\n"
               "        According to the documentation, instructions like\n"
               "\n"
               "        cmp:g.b #1:16, @0x222:16\n"
               "\n"
               "        are not allowed. The correct instruction is:\n"
               "\n"
               "        cmp:g.b #1:8, @0x222:16\n"
               "\n"
               "        The size of the first operand should agree with the size\n"
               "        of the instruction. (exception mov:g)\n"
               "\n"
               "ENDHELP\n"
               "H8/500 specific analyzer options\n"
               "\n"
               " <Disassemble ~m~ixed size instructions:C>>\n"
               "\n"
               "\n",
      v10);
    *(_WORD *)(a1 + 152) = (v10[0] & 1) == 0;
  }
  if ( a5 )
  {
    v10[0] = *(unsigned __int16 *)(a1 + 152);
    netnode_supset();
  }
  return 0;
}

