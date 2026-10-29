unsigned __int64 __fastcall sub_313A90(__int64 a1, unsigned int a2, double a3, __m128 a4)
{
  unsigned int v4; // eax
  int v5; // ecx
  __int64 v6; // r12
  __m128i v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  sub_312B80(a1, a3);
  v4 = 8 * *(_DWORD *)(a1 + 4);
  if ( a2 >= v4 )
  {
    if ( !under_debugger )
      sub_383060(0xCA1Fu, a3);
    BUG();
  }
  if ( v4 - 1 == a2 )
  {
    *(_DWORD *)a1 = 1;
  }
  else
  {
    sub_312B80(a1, a3);
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 0;
    *(_OWORD *)(a1 + 16) = 0;
    v6 = -(1LL << a2);
    if ( v5 != 8 )
      v6 &= ~(-1LL << (8 * (unsigned __int8)v5));
    v8.m128i_i64[1] = 1LL << a2;
    v8.m128i_i64[0] = 0;
    sub_316BB0((__int64 *)(a1 + 8), &v8, 0.0, a4);
    v8.m128i_i64[0] = v6;
    v8.m128i_i64[1] = 1LL << a2;
    sub_316BB0((__int64 *)(a1 + 8), &v8, 0.0, a4);
  }
  return v9 - __readfsqword(0x28u);
}

