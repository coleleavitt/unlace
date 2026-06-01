__int64 __fastcall sub_1EF9B0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __m128i v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 1440) + a2;
  v4 = (_QWORD *)(a1 + 232);
  v8 = __readfsqword(0x28u);
  v5 = v4[158];
  v7.m128i_i64[1] = a3;
  v7.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & v3;
  return sub_317E70(v4, &v7, 0);
}

