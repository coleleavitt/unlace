void __fastcall sub_49C50(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rbx
  __m128i *v6; // rax
  __m128i *v7; // r12
  __m128i *v8; // r14
  __m128i v9; // xmm1
  __m128i *v10; // rdi
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i *v15; // rbx
  __int64 v16; // rdx
  __int8 v17; // al
  __m128i v18; // xmm0
  __int32 v19; // eax
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm1
  __m128i v29; // xmm1
  __m128i v30; // xmm1
  __m128i *v31; // r14
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __int64 v34; // rax
  __m128i si128; // xmm0
  __int64 v36; // rdi
  __int64 v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __int8 v41; // al
  __m128i v42; // xmm0
  __int32 v43; // eax
  __m128i v44; // xmm0
  __int64 v45; // [rsp+18h] [rbp-50h]
  __int64 v46; // [rsp+18h] [rbp-50h]
  __m128i v47[4]; // [rsp+20h] [rbp-48h] BYREF

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
      v14 = _mm_loadu_si128((const __m128i *)(a2 + 72));
      v15 = v7 + 9;
      v16 = *(_QWORD *)(a2 + 128);
      v7[7].m128i_i64[1] = *(_QWORD *)(a2 + 120);
      v17 = *(_BYTE *)(a2 + 136);
      *(__m128i *)((char *)v7 + 72) = v14;
      v18 = _mm_loadu_si128((const __m128i *)(a2 + 88));
      v7[8].m128i_i8[8] = v17;
      v19 = *(_DWORD *)(a2 + 140);
      *(__m128i *)((char *)v7 + 88) = v18;
      v20 = _mm_loadu_si128((const __m128i *)(a2 + 104));
      v7[8].m128i_i64[0] = v16;
      *(__m128i *)((char *)v7 + 104) = v20;
      v21 = 0;
      v7[8].m128i_i32[3] = v19;
      if ( 144 * v3 == 144 )
      {
        v31 = v7;
      }
      else
      {
        do
        {
          v22 = v15[-8].m128i_i64[0];
          v23 = _mm_loadu_si128(v15 - 9);
          v15[-8].m128i_i64[0] = 0;
          v15[1].m128i_i64[0] = v22;
          v24 = v15[-7].m128i_i64[1];
          *v15 = v23;
          v25 = _mm_loadu_si128((__m128i *)((char *)v15 - 120));
          v15[2].m128i_i64[1] = v24;
          *(__m128i *)((char *)v15 + 24) = v25;
          v26 = _mm_loadu_si128(v15 - 6);
          v15[-7].m128i_i64[1] = 0;
          v15[4].m128i_i64[0] = 0;
          *(__m128i *)((char *)v15 - 120) = v21;
          v15[3] = v26;
          v15[-6] = v21;
          copy_tinfo_t(&v15[4], &v15[-5]);
          v27 = v15[-2].m128i_i64[1];
          v28 = _mm_loadu_si128((__m128i *)((char *)v15 - 72));
          v15 += 9;
          v21 = 0;
          v15[-2].m128i_i64[1] = v27;
          LODWORD(v27) = v15[-10].m128i_i32[0];
          *(__m128i *)((char *)v15 - 72) = v28;
          v29 = _mm_loadu_si128((__m128i *)((char *)v15 - 200));
          v15[-1].m128i_i32[0] = v27;
          LODWORD(v27) = v15[-10].m128i_i32[1];
          *(__m128i *)((char *)v15 - 56) = v29;
          v30 = _mm_loadu_si128((__m128i *)((char *)v15 - 184));
          v15[-1].m128i_i32[1] = v27;
          LOBYTE(v27) = v15[-10].m128i_i8[8];
          *(__m128i *)((char *)v15 - 40) = v30;
          v15[-1].m128i_i8[8] = v27;
          v15[-1].m128i_i32[3] = v15[-10].m128i_i32[3];
        }
        while ( v8 != v15 );
        v31 = v15 - 9;
      }
      v32 = _mm_loadu_si128(v31);
      v33 = *(_QWORD *)(a2 + 16);
      v34 = v31[1].m128i_i64[0];
      v31[1].m128i_i64[0] = 0;
      *(__m128i *)a2 = v32;
      si128 = _mm_loadu_si128((__m128i *)((char *)v31 + 24));
      *(__m128i *)((char *)&v31[1] + 8) = 0;
      if ( v33 )
      {
        *(_QWORD *)(a2 + 24) = 0;
        v45 = v34;
        v47[0] = si128;
        qfree(v33);
        si128 = _mm_load_si128(v47);
        v34 = v45;
      }
      v36 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 16) = v34;
      *(__m128i *)(a2 + 24) = si128;
      v37 = v31[2].m128i_i64[1];
      v38 = _mm_loadu_si128(v31 + 3);
      v31[2].m128i_i64[1] = 0;
      v31[3] = 0;
      if ( v36 )
      {
        *(_QWORD *)(a2 + 48) = 0;
        v46 = v37;
        v47[0] = v38;
        qfree(v36);
        v38 = _mm_load_si128(v47);
        v37 = v46;
      }
      *(_QWORD *)(a2 + 40) = v37;
      *(__m128i *)(a2 + 48) = v38;
      copy_tinfo_t(a2 + 64, &v31[4]);
      v39 = _mm_loadu_si128((__m128i *)((char *)v31 + 72));
      v40 = v31[8].m128i_i64[0];
      *(_DWORD *)(a2 + 120) = v31[7].m128i_i32[2];
      v41 = v31[8].m128i_i8[8];
      *(__m128i *)(a2 + 72) = v39;
      v42 = _mm_loadu_si128((__m128i *)((char *)v31 + 88));
      *(_BYTE *)(a2 + 136) = v41;
      v43 = v31[8].m128i_i32[3];
      *(__m128i *)(a2 + 88) = v42;
      v44 = _mm_loadu_si128((__m128i *)((char *)v31 + 104));
      *(_QWORD *)(a2 + 128) = v40;
      *(_DWORD *)(a2 + 140) = v43;
      *(__m128i *)(a2 + 104) = v44;
    }
    a1[2] = (__int64)v7;
    a1[1] = v3;
  }
}

