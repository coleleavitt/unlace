void __fastcall sub_4D8C0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__m128 *, __m128i *))
{
  __int64 v6; // rcx
  __int64 i; // r9
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r12
  __m128i *v11; // rbp
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __int64 v17; // rax
  __m128i v18; // xmm2
  __int64 v19; // rax
  __m128i *v20; // rax
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rsi
  __m128i *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // [rsp+0h] [rbp-50h]
  __int64 v40; // [rsp+8h] [rbp-48h]
  __int64 v41; // [rsp+10h] [rbp-40h]

  if ( a1 != a2 )
  {
    v6 = (0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3) + 1) / 2;
    if ( 0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3) + 1 <= 1 )
    {
      if ( v6 )
        sub_48A20(a1, a2, a3);
      else
        sub_4D740((__m128i *)a1, (__m128i *)a1, a2, nullptr, a3);
      operator delete(nullptr, 0);
    }
    else
    {
      for ( i = (0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3) + 1) / 2; ; i = (v39 + 1) >> 1 )
      {
        v40 = v6;
        v39 = i;
        v41 = 104 * i;
        v8 = 104 * i;
        v9 = operator new(104 * i, (const std::nothrow_t *)&std::nothrow);
        v6 = v40;
        v10 = v9;
        if ( v9 )
          break;
        if ( v39 == 1 )
        {
          sub_48A20(a1, a2, a3);
          v8 = 0;
LABEL_16:
          operator delete((void *)v10, v8);
          return;
        }
      }
      v11 = (__m128i *)(v9 + v41);
      if ( v9 != v9 + v41 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        v13 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        v14 = v9 + 104;
        v15 = _mm_loadu_si128((const __m128i *)a1);
        *(_OWORD *)(a1 + 24) = 0;
        v16 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        *(_QWORD *)(v9 + 16) = v12;
        *(__m128i *)v9 = v15;
        *(__m128i *)(v9 + 24) = v13;
        v17 = *(_QWORD *)(a1 + 40);
        *(__m128i *)(v10 + 48) = v16;
        v18 = _mm_loadu_si128((const __m128i *)(a1 + 88));
        *(_QWORD *)(v10 + 40) = v17;
        v19 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 16) = 0;
        *(_QWORD *)(v10 + 64) = v19;
        LOBYTE(v19) = *(_BYTE *)(a1 + 72);
        *(__m128i *)(v10 + 88) = v18;
        *(_BYTE *)(v10 + 72) = v19;
        *(_QWORD *)(v10 + 80) = *(_QWORD *)(a1 + 80);
        v20 = (__m128i *)(v10 + 104);
        if ( v41 == 104 )
        {
          v31 = v10;
        }
        else
        {
          do
          {
            v21 = v20[-6].m128i_i64[1];
            v22 = _mm_loadu_si128((__m128i *)((char *)v20 - 104));
            v20[-6].m128i_i64[1] = 0;
            v20 = (__m128i *)((char *)v20 + 104);
            v20[-6].m128i_i64[1] = v21;
            v23 = v20[-11].m128i_i64[1];
            *(__m128i *)((char *)v20 - 104) = v22;
            v24 = _mm_loadu_si128((__m128i *)((char *)v20 - 184));
            v20[-4].m128i_i64[0] = v23;
            v25 = v20[-9].m128i_i64[0];
            v20[-5] = v24;
            v26 = _mm_loadu_si128(v20 - 10);
            v20[-3].m128i_i64[1] = v25;
            LOBYTE(v25) = v20[-9].m128i_i8[8];
            *(__m128i *)((char *)v20 - 56) = v26;
            v27 = _mm_loadu_si128((__m128i *)((char *)v20 - 120));
            v20[-2].m128i_i8[0] = v25;
            v28 = v20[-8].m128i_i64[0];
            *(__m128i *)((char *)&v20[-12] + 8) = 0;
            v20[-2].m128i_i64[1] = v28;
            v20[-1] = v27;
          }
          while ( v20 != v11 );
          v29 = 104 * ((0xEC4EC4EC4EC4EC5LL * (((unsigned __int64)&v11[-13] - v10) >> 3)) & 0x1FFFFFFFFFFFFFFFLL);
          v30 = v29 + v10;
          v31 = v14 + v29;
          v15 = _mm_loadu_si128((const __m128i *)(v30 + 104));
          v12 = *(_QWORD *)(v30 + 120);
          v13 = _mm_loadu_si128((const __m128i *)(v30 + 128));
        }
        *(_QWORD *)(a1 + 16) = v12;
        v32 = *(_QWORD *)(v31 + 40);
        *(__m128i *)(a1 + 24) = v13;
        v33 = _mm_loadu_si128((const __m128i *)(v31 + 48));
        *(_QWORD *)(a1 + 40) = v32;
        v34 = *(_QWORD *)(v31 + 64);
        *(__m128i *)(a1 + 48) = v33;
        v35 = _mm_loadu_si128((const __m128i *)(v31 + 88));
        *(_QWORD *)(a1 + 64) = v34;
        LOBYTE(v34) = *(_BYTE *)(v31 + 72);
        *(__m128i *)a1 = v15;
        *(_BYTE *)(a1 + 72) = v34;
        v36 = *(_QWORD *)(v31 + 80);
        *(_QWORD *)(v31 + 16) = 0;
        *(_QWORD *)(a1 + 80) = v36;
        *(_OWORD *)(v31 + 24) = 0;
        *(__m128i *)(a1 + 88) = v35;
        if ( v40 == v39 )
        {
          sub_4D740((__m128i *)a1, (__m128i *)(a1 + v41), a2, (__m128i *)v10, a3);
          goto LABEL_11;
        }
LABEL_22:
        sub_4D7C0((__m128i *)a1, a2, (__m128i *)v10, v39, a3);
        v11 = (__m128i *)(v10 + v8);
LABEL_11:
        if ( (__m128i *)v10 != v11 )
        {
          v37 = (__m128i *)v10;
          do
          {
            v38 = v37[1].m128i_i64[0];
            if ( v38 )
            {
              v37[1].m128i_i64[1] = 0;
              qfree(v38);
            }
            v37 = (__m128i *)((char *)v37 + 104);
          }
          while ( v11 != v37 );
        }
        goto LABEL_16;
      }
      if ( v40 != v39 )
      {
        v8 = 0;
        goto LABEL_22;
      }
      sub_4D740((__m128i *)a1, (__m128i *)a1, a2, (__m128i *)(v9 + v41), a3);
      operator delete(v11, 0);
    }
  }
}

