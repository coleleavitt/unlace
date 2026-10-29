void __fastcall sub_44380(__int64 a1, double a2, double a3, double a4, double a5, double a6, __m128 a7)
{
  const __m128i *v7; // r12
  unsigned __int64 v8; // rax
  __m128 v9; // xmm2
  __m128i v10; // xmm1
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // xmm5_8
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  void **v16; // r14
  unsigned __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 i; // rbp
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 k; // r15
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // r15
  __int64 m; // rbp
  unsigned __int64 v35; // rbx
  void *v36; // rdi
  __m128i v37; // xmm4
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 j; // r13
  _QWORD *v42; // [rsp+0h] [rbp-90h]
  const __m128i *v43; // [rsp+0h] [rbp-90h]
  const __m128i *v44; // [rsp+0h] [rbp-90h]
  __m128i v45; // [rsp+8h] [rbp-88h] BYREF
  __m128i v46; // [rsp+18h] [rbp-78h] BYREF
  const __m128i *v47; // [rsp+28h] [rbp-68h]
  __int64 v48; // [rsp+30h] [rbp-60h]
  __int64 v49; // [rsp+38h] [rbp-58h]
  void **v50; // [rsp+40h] [rbp-50h]
  __int64 v51; // [rsp+48h] [rbp-48h]
  unsigned __int64 v52; // [rsp+50h] [rbp-40h]

  v7 = *(const __m128i **)(a1 + 144);
  *(_WORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 165) = 0;
  v8 = v7[4].m128i_u64[1];
  v9 = (__m128)_mm_loadu_si128(v7 + 2);
  v10 = _mm_loadu_si128(v7 + 1);
  v11 = v7[3].m128i_i64[0];
  v12 = v7[3].m128i_i64[1];
  v13 = _mm_movehl_ps(a7, v9).m128_u64[0];
  v46 = v10;
  v14 = v10.m128i_i64[0];
  v15 = v13;
  v45 = (__m128i)v9;
  v16 = (void **)(v13 + 8);
  if ( v13 + 8 < v8 )
  {
    v47 = v7;
    v17 = v8;
    v18 = (_QWORD *)(v13 + 8);
    v48 = v11;
    v50 = (void **)(v13 + 8);
    v51 = v12;
    v49 = v10.m128i_i64[0];
    v52 = v13;
    do
    {
      v42 = v18;
      v19 = *v18 + 512LL;
      v20 = *v18;
      do
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v20 + 16);
          if ( v22 )
          {
            v23 = 0;
            for ( i = 0; i != v22; ++i )
            {
              if ( *(_QWORD *)(v21 + v23 + 112) )
              {
                *(_QWORD *)(v21 + v23 + 120) = 0;
                qfree();
                v21 = *(_QWORD *)(v20 + 8);
              }
              v23 += 184;
            }
          }
          *(_QWORD *)(v20 + 16) = 0;
          qfree();
        }
        v20 += 32;
      }
      while ( v20 != v19 );
      v18 = v42 + 1;
    }
    while ( (unsigned __int64)(v42 + 1) < v17 );
    v7 = v47;
    v11 = v48;
    v8 = v17;
    v14 = v49;
    v16 = v50;
    v12 = v51;
    v15 = v52;
  }
  if ( v8 == v15 )
  {
    if ( v11 != v14 )
    {
      v44 = v7;
      do
      {
        v38 = *(_QWORD *)(v14 + 8);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v14 + 16);
          if ( v39 )
          {
            v40 = 0;
            for ( j = 0; j != v39; ++j )
            {
              if ( *(_QWORD *)(v38 + v40 + 112) )
              {
                *(_QWORD *)(v38 + v40 + 120) = 0;
                qfree();
                v38 = *(_QWORD *)(v14 + 8);
              }
              v40 += 184;
            }
          }
          *(_QWORD *)(v14 + 16) = 0;
          qfree();
        }
        v14 += 32;
      }
      while ( v11 != v14 );
      goto LABEL_36;
    }
  }
  else
  {
    if ( v45.m128i_i64[0] != v14 )
    {
      v43 = v7;
      v48 = v12;
      v47 = (const __m128i *)v11;
      v25 = v14;
      v26 = v45.m128i_i64[0];
      do
      {
        v27 = *(_QWORD *)(v25 + 8);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v25 + 16);
          if ( v28 )
          {
            v29 = 0;
            for ( k = 0; k != v28; ++k )
            {
              if ( *(_QWORD *)(v27 + v29 + 112) )
              {
                *(_QWORD *)(v27 + v29 + 120) = 0;
                qfree();
                v27 = *(_QWORD *)(v25 + 8);
              }
              v29 += 184;
            }
          }
          *(_QWORD *)(v25 + 16) = 0;
          qfree();
        }
        v25 += 32;
      }
      while ( v25 != v26 );
      v7 = v43;
      v11 = (__int64)v47;
      v12 = v48;
    }
    if ( v11 != v12 )
    {
      v44 = v7;
      do
      {
        v31 = *(_QWORD *)(v12 + 8);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v12 + 16);
          if ( v32 )
          {
            v33 = 0;
            for ( m = 0; m != v32; ++m )
            {
              if ( *(_QWORD *)(v31 + v33 + 112) )
              {
                *(_QWORD *)(v31 + v33 + 120) = 0;
                qfree();
                v31 = *(_QWORD *)(v12 + 8);
              }
              v33 += 184;
            }
          }
          *(_QWORD *)(v12 + 16) = 0;
          qfree();
        }
        v12 += 32;
      }
      while ( v11 != v12 );
LABEL_36:
      v7 = v44;
    }
  }
  v35 = v7[4].m128i_i64[1] + 8;
  while ( (unsigned __int64)v16 < v35 )
  {
    v36 = *v16++;
    operator delete(v36, 0x200u);
  }
  v37 = _mm_load_si128(&v45);
  v7[3] = _mm_load_si128(&v46);
  v7[4] = v37;
}

