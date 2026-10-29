void __fastcall sub_3358A0(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v6; // rbp
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 v9; // rax
  __m128 v10; // xmm2
  unsigned __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // r12
  __m128i v14; // xmm0
  __m128i si128; // xmm4
  __m128i v16; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+10h] [rbp-58h]
  __int64 v18; // [rsp+18h] [rbp-50h]
  __m128i v19[4]; // [rsp+20h] [rbp-48h] BYREF

  v17 = a2;
  if ( a1 != a2 && a2 != a1 + 24 )
  {
    v3 = a1 + 48;
    do
    {
      v4 = *(_QWORD *)(v3 - 16);
      v5 = (__int64 *)(v3 - 24);
      v6 = v3;
      if ( *(_QWORD *)(a1 + 8) )
      {
        v7 = *(const char **)a1;
        v8 = s1;
        if ( !v4 )
          goto LABEL_7;
      }
      else
      {
        v7 = s1;
        if ( !v4 )
          goto LABEL_18;
      }
      v8 = *(const char **)(v3 - 24);
LABEL_7:
      if ( strcmp(v8, v7) < 0 )
      {
        v9 = *(_QWORD *)(v3 - 24);
        v10 = _mm_loadh_ps((const double *)(v3 - 8));
        *(_QWORD *)(v3 - 24) = 0;
        v18 = v9;
        v19[0] = (__m128i)v10;
        v11 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v5 - a1) >> 3);
        *(_OWORD *)(v3 - 16) = 0;
        if ( (__int64)v5 - a1 > 0 )
        {
          do
          {
            v12 = *v5;
            v5 -= 3;
            v13 = *v5;
            v14 = _mm_loadu_si128((const __m128i *)(v5 + 1));
            *v5 = 0;
            *(_OWORD *)(v5 + 1) = 0;
            if ( v12 )
            {
              v5[4] = 0;
              v16 = v14;
              qfree();
              v14 = _mm_load_si128(&v16);
            }
            v5[3] = v13;
            *((__m128i *)v5 + 2) = v14;
            --v11;
          }
          while ( v11 );
        }
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          qfree();
        }
        si128 = _mm_load_si128(v19);
        *(_QWORD *)a1 = v18;
        *(__m128i *)(a1 + 8) = si128;
        goto LABEL_15;
      }
LABEL_18:
      sub_3350E0(v3 - 24);
LABEL_15:
      v3 += 24;
    }
    while ( v17 != v6 );
  }
}

