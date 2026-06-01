__int64 *__fastcall sub_2A0D0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  signed __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 *v5; // r15
  __int64 *v6; // r12
  __int64 v7; // r14
  __m128i v8; // xmm6
  __int64 v9; // r13
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int32 v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __m128i v15; // xmm1
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int32 v18; // eax
  __m128i v19; // xmm7
  __int64 *v20; // r12
  __int64 *v21; // r15
  __int64 v22; // r14
  __int64 v23; // r13
  __int32 v24; // eax
  __m128i v25; // xmm2
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rsi
  __int64 v29; // rsi
  __m128i v30; // xmm1
  __int64 v31; // rdi
  __int64 v32; // rdi
  __m128i v33; // xmm3
  __int32 v34; // eax
  __int64 *v36; // rbx
  __int128 v37; // xmm0
  __int64 *v38; // rcx
  __int64 v39; // r12
  __m128i v40; // xmm1
  __m128i v41; // xmm2
  int v42; // ebp
  __int64 v43; // r13
  __m128i v44; // xmm3
  __int64 v45; // rdi
  __int64 *v46; // rdx
  __int64 v47; // rdi
  __int64 *v48; // rax
  __m128i v49; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v50; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v51; // [rsp+20h] [rbp-98h] BYREF
  __m128i v52; // [rsp+30h] [rbp-88h] BYREF
  __m128i v53; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-60h]
  __int64 *v55; // [rsp+60h] [rbp-58h]
  __int64 *v56; // [rsp+68h] [rbp-50h]
  __int64 *v57; // [rsp+70h] [rbp-48h]
  __int64 *v58; // [rsp+78h] [rbp-40h]

  v56 = a1;
  v57 = a2;
  v58 = a3;
  if ( a1 == a2 )
    return v58;
  if ( a2 == a3 )
    return v56;
  v55 = a1;
  v3 = 0xAAAAAAAAAAAAAAABLL * (((char *)a2 - (char *)a1) >> 4);
  v54 = 0xAAAAAAAAAAAAAAABLL * (((char *)a3 - (char *)a1) >> 4);
  if ( v3 == v54 - v3 )
  {
    v36 = a2;
    v37 = 0;
    do
    {
      v38 = v56;
      v39 = v56[2];
      v40 = _mm_loadu_si128((const __m128i *)(v56 + 3));
      v56[2] = 0;
      *(_OWORD *)(v38 + 3) = v37;
      v41 = _mm_loadu_si128((const __m128i *)v38);
      v42 = *((_DWORD *)v38 + 10);
      *v38 = *v36;
      v38[1] = v36[1];
      v43 = v36[2];
      v44 = _mm_loadu_si128((const __m128i *)(v36 + 3));
      v36[2] = 0;
      *(_OWORD *)(v36 + 3) = v37;
      v45 = v38[2];
      if ( v45 )
      {
        v38[3] = 0;
        v51 = v44;
        v50 = v41;
        v49 = v40;
        qfree(v45);
        v44 = _mm_load_si128(&v51);
        v41 = _mm_load_si128(&v50);
        v37 = 0;
        v40 = _mm_load_si128(&v49);
      }
      v46 = v56;
      v56[2] = v43;
      *(__m128i *)(v46 + 3) = v44;
      *((_DWORD *)v46 + 10) = *((_DWORD *)v36 + 10);
      v47 = v36[2];
      *(__m128i *)v36 = v41;
      if ( v47 )
      {
        v36[3] = 0;
        v49 = v40;
        qfree(v47);
        v40 = _mm_load_si128(&v49);
        v37 = 0;
      }
      v56 += 6;
      v36 += 6;
      v48 = v56;
      *(v36 - 4) = v39;
      *(__m128i *)(v36 - 3) = v40;
      *((_DWORD *)v36 - 2) = v42;
    }
    while ( v57 != v48 );
    return v57;
  }
  else
  {
    v4 = v54 - v3;
    if ( v3 >= (__int64)(v54 - v3) )
      goto LABEL_16;
    while ( 1 )
    {
      v5 = v55;
      v6 = &v55[6 * v3];
      if ( v4 > 0 )
      {
        v7 = 0;
        do
        {
          v8 = _mm_loadu_si128((const __m128i *)(v5 + 3));
          v9 = v5[2];
          v5[2] = 0;
          *(_OWORD *)(v5 + 3) = 0;
          v10 = *v6;
          v11 = _mm_loadu_si128((const __m128i *)v5);
          v12 = *((_DWORD *)v5 + 10);
          v50 = v8;
          *v5 = v10;
          v13 = v6[1];
          v49.m128i_i32[0] = v12;
          v5[1] = v13;
          v14 = v6[2];
          v6[2] = 0;
          v15 = _mm_loadu_si128((const __m128i *)(v6 + 3));
          *(_OWORD *)(v6 + 3) = 0;
          v16 = v5[2];
          if ( v16 )
          {
            v5[3] = 0;
            v51.m128i_i64[0] = v14;
            v53 = v11;
            v52 = v15;
            qfree(v16);
            v11 = _mm_load_si128(&v53);
            v15 = _mm_load_si128(&v52);
            v14 = v51.m128i_i64[0];
          }
          v5[2] = v14;
          *(__m128i *)(v5 + 3) = v15;
          *((_DWORD *)v5 + 10) = *((_DWORD *)v6 + 10);
          v17 = v6[2];
          *(__m128i *)v6 = v11;
          if ( v17 )
          {
            v6[3] = 0;
            qfree(v17);
          }
          v18 = v49.m128i_i32[0];
          ++v7;
          v6[2] = v9;
          v5 += 6;
          v19 = _mm_load_si128(&v50);
          v6 += 6;
          *((_DWORD *)v6 - 2) = v18;
          *(__m128i *)(v6 - 3) = v19;
        }
        while ( v4 != v7 );
        v55 += 6 * v4;
      }
      if ( !(v54 % v3) )
        break;
      v4 = v3;
      v3 -= v54 % v3;
      while ( 1 )
      {
        v54 = v4;
        v4 -= v3;
        if ( v3 < v4 )
          break;
LABEL_16:
        v20 = &v55[6 * v54];
        v55 = &v20[-6 * v4];
        if ( v3 > 0 )
        {
          v21 = &v20[-6 * v4];
          v22 = 0;
          do
          {
            v20 -= 6;
            v23 = *(v21 - 4);
            v24 = *((_DWORD *)v21 - 2);
            v25 = _mm_loadu_si128((const __m128i *)(v21 - 3));
            *(v21 - 4) = 0;
            v21 -= 6;
            *(_OWORD *)(v21 + 3) = 0;
            v26 = *v20;
            v27 = _mm_loadu_si128((const __m128i *)v21);
            v49.m128i_i32[0] = v24;
            *v21 = v26;
            v28 = v20[1];
            v50 = v25;
            v21[1] = v28;
            v29 = v20[2];
            v20[2] = 0;
            v30 = _mm_loadu_si128((const __m128i *)(v20 + 3));
            *(_OWORD *)(v20 + 3) = 0;
            v31 = v21[2];
            if ( v31 )
            {
              v21[3] = 0;
              v51.m128i_i64[0] = v29;
              v53 = v27;
              v52 = v30;
              qfree(v31);
              v27 = _mm_load_si128(&v53);
              v30 = _mm_load_si128(&v52);
              v29 = v51.m128i_i64[0];
            }
            v21[2] = v29;
            *(__m128i *)(v21 + 3) = v30;
            *((_DWORD *)v21 + 10) = *((_DWORD *)v20 + 10);
            v32 = v20[2];
            *(__m128i *)v20 = v27;
            if ( v32 )
            {
              v20[3] = 0;
              qfree(v32);
            }
            v33 = _mm_load_si128(&v50);
            v34 = v49.m128i_i32[0];
            ++v22;
            v20[2] = v23;
            *((_DWORD *)v20 + 10) = v34;
            *(__m128i *)(v20 + 3) = v33;
          }
          while ( v3 != v22 );
          v55 -= 6 * v3;
        }
        v3 = v54 % v4;
        if ( !(v54 % v4) )
          return (__int64 *)((char *)v56 + (char *)v58 - (char *)v57);
      }
    }
    return (__int64 *)((char *)v56 + (char *)v58 - (char *)v57);
  }
}

