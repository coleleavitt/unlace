__int64 __fastcall sub_139D0(__int64 a1, __int64 *a2, int a3)
{
  __int64 result; // rax
  __int64 *v6; // r15
  unsigned __int64 v7; // rax
  __int32 v8; // ecx
  __int64 *v9; // r13
  __m128i v10; // xmm5
  __int32 v11; // r14d
  unsigned __int8 v12; // al
  bool v13; // cl
  __int64 v14; // rax
  __m128i v15; // xmm5
  __int64 *v16; // r14
  __int64 v17; // rax
  __m128i v18; // xmm5
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // r15
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // r15
  __m128i v25; // xmm0
  int v26; // edx
  __m128i v27; // xmm7
  __int64 v28; // rdi
  __m128i v29; // xmm7
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // xmm5
  __m128i *v33; // r13
  __m128i v34; // xmm7
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  __m128i v38; // xmm0
  __int64 v39; // rdi
  __int64 v40; // rbx
  __m128i v41; // xmm0
  __int32 v42; // ecx
  __int32 v43; // ecx
  __m128i si128; // xmm6
  __int64 v45; // rdi
  __m128i v46; // xmm5
  __int64 v47; // rax
  unsigned __int8 v48; // [rsp+Fh] [rbp-99h]
  __m128i v49; // [rsp+10h] [rbp-98h] BYREF
  __int64 v50; // [rsp+20h] [rbp-88h]
  __int64 v51; // [rsp+28h] [rbp-80h]
  __int64 *v52; // [rsp+30h] [rbp-78h]
  __int64 v53; // [rsp+38h] [rbp-70h]
  __m128i v54; // [rsp+40h] [rbp-68h] BYREF
  __m128i v55; // [rsp+50h] [rbp-58h] BYREF
  __m128i v56[4]; // [rsp+60h] [rbp-48h] BYREF

  v52 = a2;
  if ( (__int64 *)a1 == a2 || a2 == (__int64 *)(a1 + 64) )
    return result;
  v6 = (__int64 *)(a1 + 64);
  do
  {
    v7 = v6[6];
    v8 = *(_DWORD *)(a1 + 48);
    v9 = v6;
    v10 = (__m128i)v7;
    v50 = v7;
    v11 = v7;
    v12 = *((_BYTE *)v6 + 56);
    LODWORD(v51) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v10, 229));
    v48 = v12;
    if ( v8 == v11 )
    {
      if ( v12 != *(_BYTE *)(a1 + 56) )
      {
        if ( v12 )
        {
LABEL_9:
          v14 = *v6;
          v15 = _mm_loadu_si128((const __m128i *)(v6 + 1));
          *v6 = 0;
          v16 = v6 + 8;
          v51 = v14;
          v17 = v6[3];
          v54 = v15;
          v18 = _mm_loadu_si128((const __m128i *)v6 + 2);
          v19 = ((__int64)v6 - a1) >> 6;
          v53 = v17;
          v6[3] = 0;
          *(_OWORD *)(v6 + 1) = 0;
          v55 = v18;
          *((_OWORD *)v6 + 2) = 0;
          if ( (__int64)v6 - a1 > 0 )
          {
            do
            {
              v20 = *v9;
              v9 -= 8;
              v21 = *v9;
              v22 = _mm_loadu_si128((const __m128i *)(v9 + 1));
              *v9 = 0;
              *(_OWORD *)(v9 + 1) = 0;
              if ( v20 )
              {
                v9[9] = 0;
                v49 = v22;
                qfree();
                v22 = _mm_load_si128(&v49);
              }
              v23 = v9[11];
              v9[8] = v21;
              *(__m128i *)(v9 + 9) = v22;
              v24 = v9[3];
              v25 = _mm_loadu_si128((const __m128i *)v9 + 2);
              v9[3] = 0;
              *((_OWORD *)v9 + 2) = 0;
              if ( v23 )
              {
                v9[12] = 0;
                v49 = v25;
                qfree();
                v25 = _mm_load_si128(&v49);
              }
              v26 = *((_DWORD *)v9 + 12);
              v9[11] = v24;
              *((__m128i *)v9 + 6) = v25;
              *((_DWORD *)v9 + 28) = v26;
              *((_DWORD *)v9 + 29) = *((_DWORD *)v9 + 13);
              *((_BYTE *)v9 + 120) = *((_BYTE *)v9 + 56);
              --v19;
            }
            while ( v19 );
          }
          if ( *(_QWORD *)a1 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            qfree();
          }
          v27 = _mm_load_si128(&v54);
          v28 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)a1 = v51;
          *(__m128i *)(a1 + 8) = v27;
          if ( v28 )
          {
            *(_QWORD *)(a1 + 32) = 0;
            qfree();
          }
          v29 = _mm_load_si128(&v55);
          *(_QWORD *)(a1 + 24) = v53;
          v30 = v50;
          *(__m128i *)(a1 + 32) = v29;
          *(_QWORD *)(a1 + 48) = v30;
          result = v48;
          *(_BYTE *)(a1 + 56) = v48;
          goto LABEL_20;
        }
        goto LABEL_23;
      }
      v13 = *(_DWORD *)(a1 + 52) > (int)v51;
      goto LABEL_8;
    }
    if ( a3 == v11 )
      goto LABEL_9;
    if ( v8 != a3 )
    {
      v13 = v8 > v11;
LABEL_8:
      if ( v13 )
        goto LABEL_9;
    }
LABEL_23:
    v31 = *v6;
    v32 = _mm_loadu_si128((const __m128i *)(v6 + 1));
    v33 = (__m128i *)v6;
    v34 = _mm_loadu_si128((const __m128i *)v6 + 2);
    *v6 = 0;
    v53 = v31;
    v35 = v6[3];
    v56[0] = v32;
    v54.m128i_i64[0] = v35;
    v6[3] = 0;
    *(_OWORD *)(v6 + 1) = 0;
    v55 = v34;
    *((_OWORD *)v6 + 2) = 0;
    while ( 1 )
    {
      v43 = v33[-1].m128i_i32[0];
      if ( v43 != v11 )
        break;
      if ( v48 == v33[-1].m128i_i8[8] )
      {
        if ( v33[-1].m128i_i32[1] <= (int)v51 )
          goto LABEL_35;
      }
      else if ( !v48 )
      {
        goto LABEL_35;
      }
LABEL_27:
      v36 = v33->m128i_i64[0];
      v37 = v33[-4].m128i_i64[0];
      v33[-4].m128i_i64[0] = 0;
      v38 = _mm_loadu_si128((__m128i *)((char *)v33 - 56));
      *(__m128i *)((char *)&v33[-4] + 8) = 0;
      if ( v36 )
      {
        v33->m128i_i64[1] = 0;
        v49 = v38;
        qfree();
        v38 = _mm_load_si128(&v49);
      }
      v39 = v33[1].m128i_i64[1];
      v33->m128i_i64[0] = v37;
      *(__m128i *)((char *)v33 + 8) = v38;
      v40 = v33[-3].m128i_i64[1];
      v41 = _mm_loadu_si128(v33 - 2);
      v33[-3].m128i_i64[1] = 0;
      v33[-2] = 0;
      if ( v39 )
      {
        v33[2].m128i_i64[0] = 0;
        v49 = v41;
        qfree();
        v41 = _mm_load_si128(&v49);
      }
      v42 = v33[-1].m128i_i32[0];
      v33[1].m128i_i64[1] = v40;
      v33 -= 4;
      v33[6] = v41;
      v33[7].m128i_i32[0] = v42;
      v33[7].m128i_i32[1] = v33[3].m128i_i32[1];
      v33[7].m128i_i8[8] = v33[3].m128i_i8[8];
    }
    if ( a3 == v11 || v43 != a3 && v43 > v11 )
      goto LABEL_27;
LABEL_35:
    if ( v33->m128i_i64[0] )
    {
      v33->m128i_i64[1] = 0;
      qfree();
    }
    si128 = _mm_load_si128(v56);
    v45 = v33[1].m128i_i64[1];
    v33->m128i_i64[0] = v53;
    *(__m128i *)((char *)v33 + 8) = si128;
    if ( v45 )
    {
      v33[2].m128i_i64[0] = 0;
      qfree();
    }
    v46 = _mm_load_si128(&v55);
    v16 = v6 + 8;
    v33[1].m128i_i64[1] = v54.m128i_i64[0];
    v47 = v50;
    v33[2] = v46;
    v33[3].m128i_i64[0] = v47;
    result = v48;
    v33[3].m128i_i8[8] = v48;
LABEL_20:
    v6 = v16;
  }
  while ( v52 != v16 );
  return result;
}

