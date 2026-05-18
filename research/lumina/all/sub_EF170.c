__m128i *__fastcall sub_EF170(__int64 *a1, int a2, double a3)
{
  const __m128i *v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __m128i *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d

  if ( !a1 )
    return nullptr;
  v3 = (const __m128i *)(a1[16] + 56LL * a2 - 56);
  if ( (v3[1].m128i_i8[4] & 1) != 0 )
    return nullptr;
  v4 = *a1;
  v7 = (__m128i *)sub_DC1C0(*a1, 0x38u);
  if ( v7 )
  {
    v7[1].m128i_i16[2] = 1;
    v7[1].m128i_i64[1] = v4;
    sub_E0AC0(v7, v3, v5, v6, v8, v9);
    sub_EF100((__int64)v7, 65, 1u, v10, v11, v12, a3);
  }
  return v7;
}
