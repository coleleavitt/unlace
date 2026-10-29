__int64 __fastcall sub_1F4E0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v7; // r13
  int v8; // eax
  unsigned __int64 v9; // r12
  int i; // r12d
  __m128i *v11; // rax
  __int32 v12; // r8d
  const __m128i *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  const __m128i *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __m128i v23; // xmm0
  bool v24; // cf
  __int64 v25; // rcx
  __int64 v26; // rsi
  const __m128i *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r15
  const __m128i *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm0
  int v39; // [rsp+0h] [rbp-84h]
  __int64 v40; // [rsp+4h] [rbp-80h]
  const __m128i *v41; // [rsp+4h] [rbp-80h]
  __int32 v42; // [rsp+4h] [rbp-80h]
  __int64 v43; // [rsp+4h] [rbp-80h]
  __int64 v44; // [rsp+Ch] [rbp-78h]
  const __m128i *v45; // [rsp+Ch] [rbp-78h]
  __int64 v46; // [rsp+24h] [rbp-60h] BYREF
  __m128i v47; // [rsp+2Ch] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+44h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v4 = a3[1];
  if ( v4 )
  {
    v46 = *a3;
    v7 = v4 + v46;
    v8 = unpack_dd(&v46, v4 + v46);
    v9 = *(_QWORD *)(a1 + 16);
    v39 = v8;
    if ( v9 < v8 )
    {
      v31 = qvector_reserve(a1, 0, v8, 16);
      v32 = *(_QWORD *)(a1 + 8);
      v33 = v31;
      v34 = *(const __m128i **)a1;
      v35 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v9;
      v36 = v32 - 1;
      if ( v36 >= 0 )
      {
        v37 = v33;
        do
        {
          v38 = _mm_loadu_si128(v34);
          v37 += 16;
          ++v34;
          *(__m128i *)(v37 - 16) = v38;
          v24 = v36-- == 0;
        }
        while ( !v24 );
        v34 = *(const __m128i **)a1;
      }
      v43 = v35;
      qfree(v34);
      *(_QWORD *)a1 = v33;
      *(_QWORD *)(a1 + 16) = v43;
    }
    if ( v39 > 0 )
    {
      for ( i = 0; i != v39; ++i )
      {
        a2 = a2 + unpack_dq(&v46, v7) - 1;
        v12 = unpack_dd(&v46, v7) - 1;
        v13 = *(const __m128i **)a1;
        v14 = *(_QWORD *)(a1 + 8);
        v47.m128i_i64[0] = a2;
        v47.m128i_i32[2] = v12;
        v15 = *(_QWORD *)(a1 + 16);
        v16 = v14 + 1;
        if ( &v47 < v13 || &v47 >= &v13[v15] )
        {
          if ( v15 < v16 )
          {
            v40 = *(_QWORD *)(a1 + 16);
            v17 = qvector_reserve(a1, 0, v16, 16);
            v18 = *(_QWORD *)(a1 + 8);
            v19 = *(_QWORD *)(a1 + 16);
            v20 = *(const __m128i **)a1;
            *(_QWORD *)(a1 + 16) = v40;
            v21 = v18 - 1;
            if ( v21 >= 0 )
            {
              v22 = v17;
              do
              {
                v23 = _mm_loadu_si128(v20);
                v22 += 16;
                ++v20;
                *(__m128i *)(v22 - 16) = v23;
                v24 = v21-- == 0;
              }
              while ( !v24 );
              v20 = *(const __m128i **)a1;
            }
            v41 = (const __m128i *)v17;
            qfree(v20);
            v13 = v41;
            v14 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v41;
            *(_QWORD *)(a1 + 16) = v19;
          }
          v13[v14] = _mm_load_si128(&v47);
        }
        else
        {
          if ( v15 < v16 )
          {
            v44 = *(_QWORD *)(a1 + 16);
            v42 = v12;
            v25 = qvector_reserve(a1, 0, v16, 16);
            v26 = *(_QWORD *)(a1 + 16);
            v27 = *(const __m128i **)a1;
            v28 = *(_QWORD *)(a1 + 8) - 1LL;
            *(_QWORD *)(a1 + 16) = v44;
            if ( v28 >= 0 )
            {
              v29 = v25;
              do
              {
                v30 = _mm_loadu_si128(v27);
                v29 += 16;
                ++v27;
                *(__m128i *)(v29 - 16) = v30;
                v24 = v28-- == 0;
              }
              while ( !v24 );
              v27 = *(const __m128i **)a1;
            }
            v45 = (const __m128i *)v25;
            qfree(v27);
            v13 = v45;
            v14 = *(_QWORD *)(a1 + 8);
            v12 = v42;
            *(_QWORD *)a1 = v45;
            *(_QWORD *)(a1 + 16) = v26;
          }
          v11 = (__m128i *)&v13[v14];
          v11->m128i_i64[0] = a2;
          v11->m128i_i32[2] = v12;
        }
        ++*(_QWORD *)(a1 + 8);
      }
    }
  }
  return a1;
}
