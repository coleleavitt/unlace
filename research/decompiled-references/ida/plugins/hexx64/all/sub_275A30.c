void __fastcall sub_275A30(__int64 a1, double a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i *v7; // r13
  __int64 v8; // rbx
  __m128i *v9; // r12
  unsigned __int64 v10; // rdx
  const __m128i *v11; // rbx
  const __m128i *v12; // rdi

  v2 = *(_QWORD *)(a1 + 56);
  v3 = v2 + 32LL * *(_QWORD *)(a1 + 64);
  if ( v3 != v2 )
  {
    do
    {
      v4 = v2;
      v2 += 32;
      sub_26BCB0(a1, v4, a2);
    }
    while ( v3 != v2 );
    v7 = *(__m128i **)(a1 + 56);
    v8 = 2LL * *(_QWORD *)(a1 + 64);
    v9 = &v7[v8];
    if ( v7 != &v7[v8] )
    {
      if ( (v8 * 16) >> 5 )
      {
        _BitScanReverse64(&v10, (v8 * 16) >> 5);
        sub_275700(v7, &v7[v8], 2LL * (int)v10, (__int64 (__fastcall *)(__int64, __int64))sub_269EF0, v5, v6);
        if ( v8 > 32 )
        {
          v11 = v7 + 32;
          sub_2752D0(v7, v7 + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_269EF0);
          do
          {
            v12 = v11;
            v11 += 2;
            sub_275240(v12, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_269EF0);
          }
          while ( v9 != v11 );
          return;
        }
      }
      else
      {
        sub_275700(v7, &v7[v8], -2, (__int64 (__fastcall *)(__int64, __int64))sub_269EF0, v5, v6);
      }
      sub_2752D0(v7, &v7[v8], (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_269EF0);
    }
  }
}

