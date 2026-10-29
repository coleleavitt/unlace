void __fastcall sub_3C7F0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  __m128i *v6; // rax
  __m128i *v7; // r12
  __m128i *v8; // r15
  __m128i v9; // xmm1
  __m128i *v10; // rdi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i *v15; // rbx
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rax
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  __m128i v28; // xmm1
  __m128i *v29; // r15
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // rax
  __m128i si128; // xmm0
  __int64 v34; // rdi
  __int64 v35; // rax
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int8 v39; // al
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // [rsp+18h] [rbp-50h]
  __int64 v43; // [rsp+18h] [rbp-50h]
  __m128i v44[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0xE38E38E38E38E3LL;
  *a1 = a3;
  a1[1] = 0;
  if ( a3 <= 0xE38E38E38E38E3LL )
    v3 = a3;
  a1[2] = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v5 = 9 * v3;
      v6 = (__m128i *)operator new(144 * v3, (const std::nothrow_t *)&std::nothrow);
      v7 = v6;
      if ( v6 )
        break;
      if ( v3 == 1 )
        return;
      v3 = (v3 + 1) >> 1;
    }
    v8 = &v6[v5];
    if ( &v6[v5] != v6 )
    {
      v9 = _mm_loadu_si128((const __m128i *)(a2 + 48));
      v10 = v6 + 4;
      *v6 = _mm_loadu_si128((const __m128i *)a2);
      v11 = *(_QWORD *)(a2 + 16);
      v12 = _mm_loadu_si128((const __m128i *)(a2 + 24));
      *(_QWORD *)(a2 + 16) = 0;
      v7[1].m128i_i64[0] = v11;
      v13 = *(_QWORD *)(a2 + 40);
      v7[4].m128i_i64[0] = 0;
      v7[2].m128i_i64[1] = v13;
      *(_QWORD *)(a2 + 40) = 0;
      *(__m128i *)((char *)v7 + 24) = v12;
      *(_OWORD *)(a2 + 24) = 0;
      v7[3] = v9;
      *(_OWORD *)(a2 + 48) = 0;
      copy_tinfo_t(v10, a2 + 64);
      v14 = *(_QWORD *)(a2 + 120);
      v15 = v7 + 9;
      v16 = *(_QWORD *)(a2 + 128);
      *(__m128i *)((char *)v7 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
      v17 = _mm_loadu_si128((const __m128i *)(a2 + 88));
      v7[7].m128i_i64[1] = v14;
      LOBYTE(v14) = *(_BYTE *)(a2 + 136);
      *(__m128i *)((char *)v7 + 88) = v17;
      v18 = _mm_loadu_si128((const __m128i *)(a2 + 104));
      v7[8].m128i_i64[0] = v16;
      *(__m128i *)((char *)v7 + 104) = v18;
      v19 = 0;
      v7[8].m128i_i8[8] = v14;
      if ( 144 * v3 == 144 )
      {
        v29 = v7;
      }
      else
      {
        do
        {
          v20 = v15[-8].m128i_i64[0];
          v21 = _mm_loadu_si128(v15 - 9);
          v15[-8].m128i_i64[0] = 0;
          v15[1].m128i_i64[0] = v20;
          v22 = v15[-7].m128i_i64[1];
          *v15 = v21;
          v23 = _mm_loadu_si128((__m128i *)((char *)v15 - 120));
          v15[2].m128i_i64[1] = v22;
          *(__m128i *)((char *)v15 + 24) = v23;
          v24 = _mm_loadu_si128(v15 - 6);
          v15[-7].m128i_i64[1] = 0;
          v15[4].m128i_i64[0] = 0;
          *(__m128i *)((char *)v15 - 120) = v19;
          v15[3] = v24;
          v15[-6] = v19;
          copy_tinfo_t(&v15[4], &v15[-5]);
          v25 = v15[-2].m128i_i64[1];
          v26 = _mm_loadu_si128((__m128i *)((char *)v15 - 72));
          v15 += 9;
          v19 = 0;
          v15[-2].m128i_i64[1] = v25;
          LODWORD(v25) = v15[-10].m128i_i32[0];
          *(__m128i *)((char *)v15 - 72) = v26;
          v27 = _mm_loadu_si128((__m128i *)((char *)v15 - 200));
          v15[-1].m128i_i32[0] = v25;
          LODWORD(v25) = v15[-10].m128i_i32[1];
          *(__m128i *)((char *)v15 - 56) = v27;
          v28 = _mm_loadu_si128((__m128i *)((char *)v15 - 184));
          v15[-1].m128i_i32[1] = v25;
          LOBYTE(v25) = v15[-10].m128i_i8[8];
          *(__m128i *)((char *)v15 - 40) = v28;
          v15[-1].m128i_i8[8] = v25;
        }
        while ( v8 != v15 );
        v29 = v15 - 9;
      }
      v30 = _mm_loadu_si128(v29);
      v31 = *(_QWORD *)(a2 + 16);
      v32 = v29[1].m128i_i64[0];
      v29[1].m128i_i64[0] = 0;
      *(__m128i *)a2 = v30;
      si128 = _mm_loadu_si128((__m128i *)((char *)v29 + 24));
      *(__m128i *)((char *)&v29[1] + 8) = 0;
      if ( v31 )
      {
        *(_QWORD *)(a2 + 24) = 0;
        v42 = v32;
        v44[0] = si128;
        qfree(v31);
        si128 = _mm_load_si128(v44);
        v32 = v42;
      }
      v34 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 16) = v32;
      *(__m128i *)(a2 + 24) = si128;
      v35 = v29[2].m128i_i64[1];
      v36 = _mm_loadu_si128(v29 + 3);
      v29[2].m128i_i64[1] = 0;
      v29[3] = 0;
      if ( v34 )
      {
        *(_QWORD *)(a2 + 48) = 0;
        v43 = v35;
        v44[0] = v36;
        qfree(v34);
        v36 = _mm_load_si128(v44);
        v35 = v43;
      }
      *(_QWORD *)(a2 + 40) = v35;
      *(__m128i *)(a2 + 48) = v36;
      copy_tinfo_t(a2 + 64, &v29[4]);
      v37 = _mm_loadu_si128((__m128i *)((char *)v29 + 72));
      v38 = v29[8].m128i_i64[0];
      *(_DWORD *)(a2 + 120) = v29[7].m128i_i32[2];
      v39 = v29[8].m128i_i8[8];
      *(__m128i *)(a2 + 72) = v37;
      v40 = _mm_loadu_si128((__m128i *)((char *)v29 + 88));
      *(_QWORD *)(a2 + 128) = v38;
      *(__m128i *)(a2 + 88) = v40;
      v41 = _mm_loadu_si128((__m128i *)((char *)v29 + 104));
      *(_BYTE *)(a2 + 136) = v39;
      *(__m128i *)(a2 + 104) = v41;
    }
    a1[2] = (__int64)v7;
    a1[1] = v3;
  }
}

