__int64 __fastcall sub_20000(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char *v6; // r12
  int v7; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r8
  size_t v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  void *v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm2
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 j; // r15
  __int64 v24; // rax
  __int64 v25; // rdi
  __m128i v26; // xmm3
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r15
  const __m128i *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __m128i v39; // xmm0
  bool v40; // cf
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r15
  __int64 v44; // r14
  const __m128i *v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // [rsp+0h] [rbp-B0h]
  unsigned __int64 v52; // [rsp+0h] [rbp-B0h]
  __m128i v53; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+18h] [rbp-98h]
  int i; // [rsp+20h] [rbp-90h]
  int v56; // [rsp+24h] [rbp-8Ch]
  void *src; // [rsp+30h] [rbp-80h] BYREF
  __int64 v58; // [rsp+38h] [rbp-78h] BYREF
  __int128 v59; // [rsp+40h] [rbp-70h]
  __int64 v60; // [rsp+58h] [rbp-58h] BYREF
  __m128i v61; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+70h] [rbp-40h]

  v54 = a2;
  v62 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
  {
    src = *(void **)a3;
    v6 = (char *)src + v4;
    v7 = unpack_dd(&src, (char *)src + v4);
    v8 = *(_QWORD *)(a1 + 16);
    v56 = v7;
    if ( v8 < v7 )
    {
      v41 = qvector_reserve(a1, 0, v7, 40);
      v42 = *(_QWORD *)(a1 + 8);
      v43 = *(_QWORD *)(a1 + 16);
      v44 = v41;
      *(_QWORD *)(a1 + 16) = v8;
      v45 = *(const __m128i **)a1;
      v46 = v42 - 1;
      if ( v46 >= 0 )
      {
        v47 = v41;
        do
        {
          v48 = v45->m128i_i64[0];
          v47 += 40;
          v45 = (const __m128i *)((char *)v45 + 40);
          *(_QWORD *)(v47 - 40) = v48;
          *(_DWORD *)(v47 - 32) = v45[-2].m128i_i32[0];
          v49 = v45[-2].m128i_i64[1];
          v50 = _mm_loadu_si128(v45 - 1);
          v45[-2].m128i_i64[1] = 0;
          *(_QWORD *)(v47 - 24) = v49;
          *(__m128i *)(v47 - 16) = v50;
          v45[-1] = 0;
          v40 = v46-- == 0;
        }
        while ( !v40 );
        v45 = *(const __m128i **)a1;
      }
      qfree(v45);
      *(_QWORD *)a1 = v44;
      *(_QWORD *)(a1 + 16) = v43;
    }
    if ( v56 > 0 )
    {
      for ( i = 0; i != v56; ++i )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(a1 + 16);
        if ( v10 < v9 + 1 )
        {
          v32 = qvector_reserve(a1, 0, v9 + 1, 40);
          v33 = *(_QWORD *)(a1 + 8);
          v34 = *(_QWORD *)(a1 + 16);
          v11 = v32;
          *(_QWORD *)(a1 + 16) = v10;
          v35 = *(const __m128i **)a1;
          v36 = v33 - 1;
          if ( v36 >= 0 )
          {
            do
            {
              v37 = v35->m128i_i64[0];
              v32 += 40;
              v35 = (const __m128i *)((char *)v35 + 40);
              *(_QWORD *)(v32 - 40) = v37;
              *(_DWORD *)(v32 - 32) = v35[-2].m128i_i32[0];
              v38 = v35[-2].m128i_i64[1];
              v39 = _mm_loadu_si128(v35 - 1);
              v35[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v32 - 24) = v38;
              *(__m128i *)(v32 - 16) = v39;
              v35[-1] = 0;
              v40 = v36-- == 0;
            }
            while ( !v40 );
            v35 = *(const __m128i **)a1;
          }
          qfree(v35);
          *(_QWORD *)a1 = v11;
          v9 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(a1 + 16) = v34;
        }
        else
        {
          v11 = *(_QWORD *)a1;
        }
        v12 = v11 + 40 * v9;
        *(_DWORD *)(v12 + 8) = -3;
        *(_QWORD *)v12 = 0xFFFFFFFEFFFFFFFFLL;
        *(_QWORD *)(v12 + 16) = 0;
        *(_OWORD *)(v12 + 24) = 0;
        ++*(_QWORD *)(a1 + 8);
        *(_DWORD *)v12 = unpack_dd(&src, v6);
        *(_DWORD *)(v12 + 4) = unpack_dd(&src, v6);
        *(_DWORD *)(v12 + 8) = unpack_dd(&src, v6);
        v58 = 0;
        v59 = 0;
        v13 = unpack_dd(&src, v6);
        if ( v13 )
        {
          v14 = v59;
          v15 = v13;
          v16 = v58;
          v17 = v59 + v13;
          if ( *((_QWORD *)&v59 + 1) < v17 )
          {
            v53.m128i_i64[0] = v59;
            v52 = v59 + v13;
            v58 = qvector_reserve(&v58, v58, v17, 1);
            v14 = v53.m128i_i64[0];
            v16 = v58;
            v17 = v52;
          }
          v18 = src;
          *(_QWORD *)&v59 = v17;
          if ( !__CFADD__(v15, src) && v6 >= (char *)src + v15 )
          {
            src = (char *)src + v15;
            memcpy((void *)(v16 + v14), v18, v15);
          }
        }
        sub_1FA70(&v60, v54, (__int64)&v58);
        v19 = v60;
        v20 = _mm_loadu_si128(&v61);
        v60 = 0;
        v61 = 0;
        v21 = *(_QWORD *)(v12 + 16);
        v51 = v19;
        v53 = v20;
        if ( v21 )
        {
          v22 = *(_QWORD *)(v12 + 24);
          if ( v22 )
          {
            for ( j = 0; j != v22; ++j )
            {
              v24 = v21 + 72 * j;
              v25 = *(_QWORD *)(v24 + 32);
              if ( v25 )
              {
                *(_QWORD *)(v24 + 40) = 0;
                qfree(v25);
                v21 = *(_QWORD *)(v12 + 16);
              }
            }
          }
          *(_QWORD *)(v12 + 24) = 0;
          qfree(v21);
          v26 = _mm_load_si128(&v53);
          v27 = v60;
          *(_QWORD *)(v12 + 16) = v51;
          *(__m128i *)(v12 + 24) = v26;
          if ( v27 )
          {
            v28 = v61.m128i_i64[0];
            if ( v61.m128i_i64[0] )
            {
              v29 = 0;
              do
              {
                v30 = v27 + 72 * v29;
                v31 = *(_QWORD *)(v30 + 32);
                if ( v31 )
                {
                  *(_QWORD *)(v30 + 40) = 0;
                  qfree(v31);
                  v27 = v60;
                }
                ++v29;
              }
              while ( v28 != v29 );
            }
            v61.m128i_i64[0] = 0;
            qfree(v27);
          }
        }
        else
        {
          *(_QWORD *)(v12 + 16) = v19;
          *(__m128i *)(v12 + 24) = v20;
        }
        if ( v58 )
        {
          *(_QWORD *)&v59 = 0;
          qfree(v58);
        }
      }
    }
  }
  return a1;
}
