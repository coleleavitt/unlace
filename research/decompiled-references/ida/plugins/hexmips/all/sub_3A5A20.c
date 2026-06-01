__int64 __fastcall sub_3A5A20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // r14
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // r13
  __m128i v19; // xmm0
  const __m128i *v20; // rsi
  const __m128i *v21; // rcx
  const __m128i *v22; // roff
  __m128 v23; // xmm2
  __m128i v24; // xmm3
  unsigned __int64 v25; // xmm6_8
  __int64 v26; // r13
  __int128 v27; // xmm1
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rbp
  __int64 v31; // rdi
  __m128i si128; // xmm5
  __int64 result; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rbp
  __m128i v37; // [rsp+0h] [rbp-88h] BYREF
  __m128i v38; // [rsp+10h] [rbp-78h] BYREF
  __m128i v39; // [rsp+20h] [rbp-68h] BYREF
  const __m128i *v40; // [rsp+30h] [rbp-58h]
  unsigned int v41; // [rsp+3Ch] [rbp-4Ch]
  __m128i v42[4]; // [rsp+40h] [rbp-48h] BYREF

  v39.m128i_i64[0] = a3;
  v40 = a4;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v15 = a2;
    v16 = a1 + 48 * a2;
  }
  else
  {
    v12 = (a3 - 1) / 2;
    v13 = a2;
    v14 = 0;
    while ( 1 )
    {
      v15 = 2 * (v13 + 1);
      v16 = a1 + 96 * (v13 + 1);
      if ( *(_QWORD *)(v16 + 8) < *(_QWORD *)(v16 - 40) )
      {
        --v15;
        v16 = a1 + 48 * v15;
      }
      v17 = a1 + 48 * v13;
      *(_QWORD *)v17 = *(_QWORD *)v16;
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v16 + 8);
      v18 = *(_QWORD *)(v16 + 16);
      v19 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = v14;
      if ( *(_QWORD *)(v17 + 16) )
      {
        *(_QWORD *)(v17 + 24) = 0;
        v37.m128i_i64[0] = v15;
        v38 = v19;
        qfree();
        v19 = _mm_load_si128(&v38);
        v15 = v37.m128i_i64[0];
        v14 = 0;
      }
      *(_QWORD *)(v17 + 16) = v18;
      *(__m128i *)(v17 + 24) = v19;
      *(_DWORD *)(v17 + 40) = *(_DWORD *)(v16 + 40);
      if ( v15 >= v12 )
        break;
      v13 = v15;
    }
  }
  if ( (v39.m128i_i8[0] & 1) == 0 && (v39.m128i_i64[0] - 2) / 2 == v15 )
  {
    v34 = v15 + 1;
    v35 = 2 * v34;
    v36 = a1 + 96 * v34 - 48;
    *(_QWORD *)v16 = *(_QWORD *)v36;
    *(_QWORD *)(v16 + 8) = *(_QWORD *)(v36 + 8);
    sub_3A4550((_QWORD *)(v16 + 16), (__int64 *)(v36 + 16));
    *(_DWORD *)(v16 + 40) = *(_DWORD *)(v36 + 40);
    v15 = v35 - 1;
    v16 = a1 + 48 * (v35 - 1);
  }
  v20 = v40;
  v21 = (const __m128i *)v40[1].m128i_i64[0];
  v22 = v40;
  v23 = (__m128)_mm_loadu_si128(v40);
  v40[1].m128i_i64[0] = 0;
  v24 = _mm_loadu_si128((const __m128i *)((char *)v22 + 24));
  *(const __m128i *)((char *)&v20[1] + 8) = 0;
  v40 = v21;
  LODWORD(v21) = v20[2].m128i_i32[2];
  v25 = _mm_movehl_ps(a11, v23).m128_u64[0];
  v39 = (__m128i)v23;
  v41 = (unsigned int)v21;
  v42[0] = v24;
  v26 = (v15 - 1) / 2;
  if ( v15 > a2 )
  {
    v27 = 0;
    while ( 1 )
    {
      v30 = a1 + 48 * v26;
      v16 = a1 + 48 * v15;
      if ( *(_QWORD *)(v30 + 8) >= v25 )
        break;
      *(_QWORD *)v16 = *(_QWORD *)v30;
      *(_QWORD *)(v16 + 8) = *(_QWORD *)(v30 + 8);
      v28 = *(_QWORD *)(v30 + 16);
      v29 = _mm_loadu_si128((const __m128i *)(v30 + 24));
      *(_QWORD *)(v30 + 16) = 0;
      *(_OWORD *)(v30 + 24) = v27;
      if ( *(_QWORD *)(v16 + 16) )
      {
        *(_QWORD *)(v16 + 24) = 0;
        v38.m128i_i64[0] = v28;
        v37 = v29;
        qfree();
        v28 = v38.m128i_i64[0];
        v29 = _mm_load_si128(&v37);
        v27 = 0;
      }
      *(_QWORD *)(v16 + 16) = v28;
      *(__m128i *)(v16 + 24) = v29;
      *(_DWORD *)(v16 + 40) = *(_DWORD *)(v30 + 40);
      v15 = v26;
      if ( a2 >= v26 )
      {
        v16 = a1 + 48 * v26;
        break;
      }
      v26 = (v26 - 1) / 2;
    }
  }
  v31 = *(_QWORD *)(v16 + 16);
  *(__m128i *)v16 = _mm_load_si128(&v39);
  if ( v31 )
  {
    *(_QWORD *)(v16 + 24) = 0;
    qfree();
  }
  si128 = _mm_load_si128(v42);
  *(_QWORD *)(v16 + 16) = v40;
  result = v41;
  *(__m128i *)(v16 + 24) = si128;
  *(_DWORD *)(v16 + 40) = result;
  return result;
}

