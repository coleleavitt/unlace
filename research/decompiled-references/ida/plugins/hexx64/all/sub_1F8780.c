unsigned __int64 __fastcall sub_1F8780(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm0
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __m128 v6; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 j; // r14
  __int64 *v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rbp
  _QWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rbp
  int v32; // ebx
  __int64 k; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-110h]
  __int64 i; // [rsp+8h] [rbp-108h]
  __m128 v50; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v51[2]; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-C8h]
  __m128i v53; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+60h] [rbp-B0h]
  __m128i v55; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+78h] [rbp-98h]
  unsigned __int64 v57; // [rsp+80h] [rbp-90h]
  __int64 v58[2]; // [rsp+88h] [rbp-88h] BYREF
  __int64 v59; // [rsp+98h] [rbp-78h]
  __m128i v60; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-60h]
  __m128i v62; // [rsp+B8h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+D0h] [rbp-40h]

  v2 = 0;
  v63 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_DWORD *)(a2 + 64) )
    *(_QWORD *)a1 = qvector_reserve(a1, 0, *(int *)(a2 + 64), 80);
  for ( i = *(_QWORD *)(a2 + 520); i; i = *(_QWORD *)(i + 8) )
  {
    v4 = *(_QWORD *)a1;
    v51[0] = 0;
    v53 = 0;
    v5 = *(_QWORD *)(a1 + 16);
    v51[1] = 0;
    v52 = 0;
    v6 = _mm_loadh_ps((const double *)(i + 48));
    v50 = v6;
    v54 = 0;
    v55 = 0;
    if ( (unsigned __int64)&v50 < v4 || (unsigned __int64)&v50 >= v4 + 80 * v5 )
    {
      v38 = *(_QWORD *)(a1 + 8);
      if ( v5 < v38 + 1 )
      {
        v42 = qvector_reserve(a1, v4, v38 + 1, 80);
        *(_QWORD *)a1 = v42;
        v4 = v42;
        v38 = *(_QWORD *)(a1 + 8);
      }
      v39 = v4 + 80 * v38;
      *(__m128 *)v39 = v50;
      sub_64000((__int64 *)(v39 + 16), (__int64)v51, *(double *)v6.m128_u64);
      v40 = v52;
      v41 = _mm_loadu_si128(&v53);
      v52 = 0;
      v53 = 0;
      *(_QWORD *)(v39 + 32) = v40;
      *(__m128i *)(v39 + 40) = v41;
      v2 = (__m128)_mm_load_si128(&v55);
      *(_QWORD *)(v39 + 56) = v54;
      *(__m128 *)(v39 + 64) = v2;
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      v56 = i;
      v57 = v50.m128_u64[1];
      sub_64000(v58, (__int64)v51, *(double *)v6.m128_u64);
      v7 = v52;
      v8 = _mm_loadu_si128(&v53);
      v52 = 0;
      v9 = *(_QWORD *)a1;
      v53 = 0;
      v59 = v7;
      v60 = v8;
      v10 = _mm_load_si128(&v55);
      v61 = v54;
      v11 = *(_QWORD *)(a1 + 8);
      v54 = 0;
      v62 = v10;
      v55 = 0;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v11 + 1) )
      {
        v46 = qvector_reserve(a1, v9, v11 + 1, 80);
        *(_QWORD *)a1 = v46;
        v9 = v46;
        v11 = *(_QWORD *)(a1 + 8);
      }
      v12 = v9 + 80 * v11;
      *(_QWORD *)v12 = v56;
      *(_QWORD *)(v12 + 8) = v57;
      sub_64000((__int64 *)(v12 + 16), (__int64)v58, *(double *)v10.m128i_i64);
      v13 = v58[0];
      v14 = _mm_loadu_si128(&v60);
      *(_QWORD *)(v12 + 32) = v59;
      *(__m128i *)(v12 + 40) = v14;
      v2 = (__m128)_mm_load_si128(&v62);
      *(_QWORD *)(v12 + 56) = v61;
      *(__m128 *)(v12 + 64) = v2;
      qfree(v13);
      v15 = v54;
      ++*(_QWORD *)(a1 + 8);
      if ( v15 )
      {
        v47 = v55.m128i_i64[0];
        if ( v55.m128i_i64[0] )
        {
          v16 = 0;
          do
          {
            v17 = (__int64 *)(v15 + 96 * v16);
            v18 = v17[5];
            if ( v18 )
            {
              v19 = v17[6];
              if ( v19 )
              {
                for ( j = 0; j != v19; ++j )
                {
                  v21 = (__int64 *)(v18 + 40 * j);
                  v22 = v21[2];
                  if ( v22 )
                  {
                    v21[3] = 0;
                    qfree(v22);
                  }
                  qfree(*v21);
                  v18 = v17[5];
                }
              }
              v17[6] = 0;
              qfree(v18);
            }
            v23 = v17[2];
            if ( v23 )
            {
              v17[3] = 0;
              qfree(v23);
            }
            ++v16;
            qfree(*v17);
            v15 = v54;
          }
          while ( v47 != v16 );
        }
        v55.m128i_i64[0] = 0;
        qfree(v15);
      }
    }
    if ( v52 )
    {
      v53.m128i_i64[0] = 0;
      qfree(v52);
    }
    qfree(v51[0]);
  }
  v24 = *(_QWORD **)(a2 + 800);
  v25 = (_QWORD *)*v24;
  if ( *v24 && v24[1] )
  {
    v26 = (_QWORD *)v25[1];
LABEL_28:
    while ( v25 != v26 )
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)(a2 + 432) + 104LL * *((int *)v26 + 12);
        if ( (*(_BYTE *)(v27 + 27) & 2) != 0 )
        {
          v28 = v26[3];
          if ( *(_BYTE *)v28 == 15 && *(_DWORD *)(v28 + 4) <= *(_DWORD *)(v27 + 88) )
            sub_1F20C0(
              (_QWORD *)(*(_QWORD *)a1 + 80LL * *((int *)v26 + 18)),
              *((_DWORD *)v26 + 12),
              v26[7],
              v28,
              *((_BYTE *)v26 + 76),
              *(double *)v2.m128_u64);
        }
        if ( (*v26 & 2) != 0 )
          break;
        v29 = (_QWORD *)v26[2];
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
          v43 = (_QWORD *)(*v26 & 0xFFFFFFFFFFFFFFFCLL);
          v44 = *v43;
          if ( (*v43 & 2) == 0 )
          {
            while ( (_QWORD *)v43[2] == v26 )
            {
              v26 = v43;
              v45 = v44 & 0xFFFFFFFFFFFFFFFCLL;
              v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v44 & 2) != 0 )
              {
                v26 = (_QWORD *)v45;
                goto LABEL_28;
              }
              v43 = (_QWORD *)v45;
            }
          }
          v26 = v43;
          goto LABEL_28;
        }
        do
        {
          v26 = v29;
          v29 = (_QWORD *)v29[1];
        }
        while ( (*(_BYTE *)v29 & 2) == 0 );
        if ( v25 == v26 )
          goto LABEL_35;
      }
    }
  }
LABEL_35:
  v30 = *(_QWORD *)a1;
  v31 = *(_QWORD *)a1 + 80LL * *(_QWORD *)(a1 + 8);
  if ( v31 != *(_QWORD *)a1 )
  {
    do
    {
      sub_1F86C0(v30, v2);
      v30 += 80;
    }
    while ( v31 != v30 );
  }
  v32 = 0;
  for ( k = 0; (unsigned __int64)v32 < *(_QWORD *)(a2 + 440); k = v32 )
  {
    v34 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(int *)(*(_QWORD *)(a2 + 432) + 104 * k + 92));
    if ( *(_QWORD *)(*v34 + 48LL) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v34 + 64LL) + 432LL) + 104 * k + 27) & 2) != 0 )
    {
      v35 = v34[7];
      v36 = v35 + 96LL * v34[8];
      if ( v35 == v36 )
      {
LABEL_58:
        sub_1F20C0(v34, v32, 0, 0, 0, *(double *)v2.m128_u64);
      }
      else
      {
        while ( v32 != *(_DWORD *)(v35 + 80) || !*(_BYTE *)(v35 + 84) )
        {
          v35 += 96;
          if ( v36 == v35 )
            goto LABEL_58;
        }
      }
    }
    ++v32;
  }
  return v63 - __readfsqword(0x28u);
}

