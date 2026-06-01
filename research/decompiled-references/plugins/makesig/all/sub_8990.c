__int64 __fastcall sub_8990(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm2
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 i; // r15
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __m128i si128; // xmm3
  __int64 v15; // r12
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __m128i v18; // xmm4
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 j; // r12
  __int64 *v23; // rax
  __int64 v24; // rdi
  __m128i v25; // xmm5
  __int64 v26; // r12
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm6
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 *v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r13
  __int64 k; // r15
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rdi
  __m128i v40; // xmm7
  __int64 v41; // r12
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 result; // rax
  __m128i v45; // [rsp+0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+18h] [rbp-50h]
  __m128i v47[4]; // [rsp+20h] [rbp-48h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  v5 = *(_QWORD *)(a1 + 8);
  v46 = v3;
  v47[0] = v4;
  if ( v5 )
  {
    v45.m128i_i64[0] = *(_QWORD *)(a1 + 16);
    if ( v45.m128i_i64[0] )
    {
      v6 = 0;
      do
      {
        v7 = (__int64 *)(v5 + (v6 << 6));
        v8 = v7[4];
        if ( v8 )
        {
          v9 = v7[5];
          if ( v9 )
          {
            for ( i = 0; i != v9; ++i )
            {
              v11 = (__int64 *)(v8 + 32 * i);
              v12 = *v11;
              if ( *v11 )
              {
                v11[1] = 0;
                qfree(v12);
                v8 = v7[4];
              }
            }
          }
          v7[5] = 0;
          qfree(v8);
        }
        v13 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v13);
        }
        v5 = *(_QWORD *)(a1 + 8);
        ++v6;
      }
      while ( v45.m128i_i64[0] != v6 );
    }
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v5);
  }
  si128 = _mm_load_si128(v47);
  *(_QWORD *)(a1 + 8) = v46;
  *(__m128i *)(a1 + 16) = si128;
  v15 = *(_QWORD *)(a2 + 32);
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0;
  v17 = *(_QWORD *)(a1 + 32);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v45 = v16;
    qfree(v17);
    v16 = _mm_load_si128(&v45);
  }
  *(__m128i *)(a1 + 40) = v16;
  *(_QWORD *)(a1 + 32) = v15;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  v19 = *(_QWORD *)(a2 + 64);
  *(_OWORD *)(a2 + 72) = 0;
  *(_QWORD *)(a2 + 64) = 0;
  v20 = *(_QWORD *)(a1 + 64);
  v45 = v18;
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 72);
    if ( v21 )
    {
      for ( j = 0; j != v21; ++j )
      {
        v23 = (__int64 *)(v20 + 32 * j);
        v24 = *v23;
        if ( *v23 )
        {
          v23[1] = 0;
          qfree(v24);
          v20 = *(_QWORD *)(a1 + 64);
        }
      }
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v20);
  }
  v25 = _mm_load_si128(&v45);
  *(_QWORD *)(a1 + 64) = v19;
  *(__m128i *)(a1 + 72) = v25;
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  *(_BYTE *)(a1 + 89) = *(_BYTE *)(a2 + 89);
  *(_WORD *)(a1 + 96) = *(_WORD *)(a2 + 96);
  v26 = *(_QWORD *)(a2 + 104);
  v27 = _mm_loadu_si128((const __m128i *)(a2 + 112));
  *(_QWORD *)(a2 + 104) = 0;
  *(_OWORD *)(a2 + 112) = 0;
  v28 = *(_QWORD *)(a1 + 104);
  if ( v28 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    v45 = v27;
    qfree(v28);
    v27 = _mm_load_si128(&v45);
  }
  *(__m128i *)(a1 + 112) = v27;
  *(_QWORD *)(a1 + 104) = v26;
  v29 = *(_QWORD *)(a2 + 128);
  v30 = _mm_loadu_si128((const __m128i *)(a2 + 136));
  *(_QWORD *)(a2 + 128) = 0;
  *(_OWORD *)(a2 + 136) = 0;
  v31 = *(_QWORD *)(a1 + 128);
  v46 = v29;
  v47[0] = v30;
  if ( v31 )
  {
    v45.m128i_i64[0] = *(_QWORD *)(a1 + 136);
    if ( v45.m128i_i64[0] )
    {
      v32 = 0;
      do
      {
        v33 = (__int64 *)(v31 + (v32 << 6));
        v34 = v33[4];
        if ( v34 )
        {
          v35 = v33[5];
          if ( v35 )
          {
            for ( k = 0; k != v35; ++k )
            {
              v37 = (__int64 *)(v34 + 32 * k);
              v38 = *v37;
              if ( *v37 )
              {
                v37[1] = 0;
                qfree(v38);
                v34 = v33[4];
              }
            }
          }
          v33[5] = 0;
          qfree(v34);
        }
        v39 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v39);
        }
        v31 = *(_QWORD *)(a1 + 128);
        ++v32;
      }
      while ( v45.m128i_i64[0] != v32 );
    }
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v31);
  }
  v40 = _mm_load_si128(v47);
  *(_QWORD *)(a1 + 128) = v46;
  *(__m128i *)(a1 + 136) = v40;
  v41 = *(_QWORD *)(a2 + 152);
  v42 = _mm_loadu_si128((const __m128i *)(a2 + 160));
  *(_QWORD *)(a2 + 152) = 0;
  *(_OWORD *)(a2 + 160) = 0;
  v43 = *(_QWORD *)(a1 + 152);
  if ( v43 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    v45 = v42;
    qfree(v43);
    v42 = _mm_load_si128(&v45);
  }
  *(_QWORD *)(a1 + 152) = v41;
  *(__m128i *)(a1 + 160) = v42;
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 184);
  *(_BYTE *)(a1 + 188) = *(_BYTE *)(a2 + 188);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a2 + 192);
  result = *(unsigned __int8 *)(a2 + 200);
  *(_BYTE *)(a1 + 200) = result;
  return result;
}
