void __fastcall sub_7B440(__int64 a1, __m128i *a2, __int64 (__fastcall *a3)(const __m128i *, __int64 *))
{
  __int64 v6; // rdx
  __int64 i; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __m128i *v11; // r12
  __m128i *v12; // rbp
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rsi
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i *v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rdi
  __m128i v23; // xmm1
  __int64 v24; // rdi
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  unsigned __int64 v27; // rax
  __int8 *v28; // r9
  __m128i *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rsi
  __m128i v32; // xmm1
  __m128i v33; // xmm0
  __int64 *v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // [rsp+0h] [rbp-50h]
  __int64 (__fastcall *v38)(const __m128i *, __int64 *); // [rsp+8h] [rbp-48h]
  __int64 v39; // [rsp+10h] [rbp-40h]

  if ( (__m128i *)a1 != a2 )
  {
    v6 = (__int64)(0xCCCCCCCCCCCCCCCDLL * (((__int64)a2->m128i_i64 - a1) >> 4) + 1) / 2;
    if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * (((__int64)a2->m128i_i64 - a1) >> 4) + 1) <= 1 )
    {
      if ( v6 )
        sub_7A350((__int64 *)a1, a2, a3);
      else
        sub_7B2D0((__m128i *)a1, (__m128i *)a1, a2, nullptr, a3);
      operator delete(nullptr, 0);
    }
    else
    {
      for ( i = (__int64)(0xCCCCCCCCCCCCCCCDLL * (((__int64)a2->m128i_i64 - a1) >> 4) + 1) / 2; ; i = (v37 + 1) >> 1 )
      {
        v39 = v6;
        v8 = 80 * i;
        v38 = a3;
        v37 = i;
        v9 = 5 * i;
        v10 = operator new(80 * i, (const std::nothrow_t *)&std::nothrow);
        a3 = v38;
        v6 = v39;
        v11 = (__m128i *)v10;
        if ( v10 )
          break;
        if ( v37 == 1 )
        {
          sub_7A350((__int64 *)a1, a2, v38);
          v9 = 0;
LABEL_18:
          operator delete(v11, v9 * 16);
          return;
        }
      }
      v12 = (__m128i *)(v10 + v8);
      if ( v10 != v10 + v8 )
      {
        v13 = _mm_loadu_si128((const __m128i *)a1);
        v14 = *(_QWORD *)(a1 + 32);
        v15 = v10 + 80;
        *(_QWORD *)(a1 + 32) = 0;
        v16 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        v17 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        *(__m128i *)v10 = v13;
        v18 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_QWORD *)(v10 + 32) = v14;
        *(__m128i *)(v10 + 16) = v18;
        *(__m128i *)(v10 + 40) = v16;
        v19 = *(_QWORD *)(a1 + 56);
        *(_OWORD *)(a1 + 40) = 0;
        v11[3].m128i_i64[1] = v19;
        v20 = v11 + 5;
        *(_QWORD *)(a1 + 56) = 0;
        v11[4] = v17;
        *(_OWORD *)(a1 + 64) = 0;
        if ( v8 == 80 )
        {
          v29 = v11;
        }
        else
        {
          do
          {
            v21 = _mm_loadu_si128(v20 - 5);
            v22 = v20[-3].m128i_i64[0];
            v20 += 5;
            v20[-8].m128i_i64[0] = 0;
            v20[-5] = v21;
            v23 = _mm_loadu_si128(v20 - 9);
            v20[-3].m128i_i64[0] = v22;
            v24 = v20[-7].m128i_i64[1];
            v20[-4] = v23;
            v25 = _mm_loadu_si128((__m128i *)((char *)v20 - 120));
            v20[-2].m128i_i64[1] = v24;
            *(__m128i *)((char *)v20 - 40) = v25;
            v26 = _mm_loadu_si128(v20 - 6);
            *(__m128i *)((char *)&v20[-8] + 8) = 0;
            v20[-7].m128i_i64[1] = 0;
            v20[-1] = v26;
            v20[-6] = 0;
          }
          while ( v20 != v12 );
          v27 = ((char *)v12 - (char *)v11 - 160) & 0xFFFFFFFFFFFFFFF0LL;
          v28 = &v11->m128i_i8[v27];
          v29 = (__m128i *)(v15 + v27);
          v14 = *((_QWORD *)v28 + 14);
          v16 = _mm_loadu_si128((const __m128i *)(v28 + 120));
        }
        v30 = _mm_loadu_si128(v29);
        v31 = v29[3].m128i_i64[1];
        *(__m128i *)(a1 + 40) = v16;
        v32 = _mm_loadu_si128(v29 + 4);
        v29[2].m128i_i64[0] = 0;
        *(__m128i *)a1 = v30;
        v33 = _mm_loadu_si128(v29 + 1);
        *(_QWORD *)(a1 + 32) = v14;
        *(__m128i *)(a1 + 16) = v33;
        v29[3].m128i_i64[1] = 0;
        *(_QWORD *)(a1 + 56) = v31;
        *(__m128i *)((char *)&v29[2] + 8) = 0;
        v29[4] = 0;
        *(__m128i *)(a1 + 64) = v32;
        if ( v39 == v37 )
        {
          sub_7B2D0((__m128i *)a1, (__m128i *)(a1 + v8), a2, v11, v38);
          goto LABEL_11;
        }
LABEL_24:
        sub_7B350((__m128i *)a1, a2, v11, v37, v38);
        v12 = &v11[v9];
LABEL_11:
        if ( v12 != v11 )
        {
          v34 = (__int64 *)v11;
          do
          {
            v35 = v34[7];
            if ( v35 )
            {
              v34[8] = 0;
              qfree(v35);
            }
            v36 = v34[4];
            if ( v36 )
            {
              v34[5] = 0;
              qfree(v36);
            }
            v34 += 10;
          }
          while ( v12 != (__m128i *)v34 );
        }
        goto LABEL_18;
      }
      if ( v39 != v37 )
      {
        v9 = 0;
        goto LABEL_24;
      }
      sub_7B2D0((__m128i *)a1, (__m128i *)a1, a2, (__m128i *)(v10 + v8), v38);
      operator delete(v12, 0);
    }
  }
}

