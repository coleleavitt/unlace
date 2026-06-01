unsigned __int64 __fastcall sub_313160(__int64 a1, unsigned __int64 a2, double a3, __m128 a4)
{
  int v5; // ecx
  __int64 *v6; // rdi
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  sub_312B80(a1, a3);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = (__int64 *)(a1 + 8);
  *(_DWORD *)a1 = 2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( v5 != 8 && (1LL << (8 * (unsigned __int8)v5)) - 1 < a2 )
    sub_312A40(0.0);
  v8.m128i_i64[0] = a2;
  v8.m128i_i64[1] = 1;
  sub_316BB0(v6, &v8, 0.0, a4);
  return v9 - __readfsqword(0x28u);
}

