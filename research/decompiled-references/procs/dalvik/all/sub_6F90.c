__int64 __fastcall sub_6F90(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 next_byte; // al
  __int16 *v3; // rbp
  __int16 v4; // ax
  __int64 result; // rax

  next_byte = insn_get_next_byte(a2);
  v3 = (__int16 *)sub_6060(next_byte, *(_DWORD *)(a1 + 128));
  v4 = *v3;
  *(_BYTE *)(a2 + 41) = 0;
  *(_WORD *)(a2 + 24) = v4;
  sub_6A00(a1, a2, (__int64)v3);
  LOWORD(result) = 2 * v3[1];
  *(_WORD *)(a2 + 26) = result;
  return (unsigned __int16)result;
}
