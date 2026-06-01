__int64 __fastcall sub_1C6910(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, double a5, __m128 a6)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  _DWORD _0[6]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  v8 = sub_339CA0();
  sub_1C59F0((__int64)_0, v8, a2, a4, 0, a5);
  v9 = sub_1C4550(a1, _0, a3, a4, a5, a6);
  cleanup_argloc();
  return v9;
}

