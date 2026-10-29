unsigned __int64 __fastcall sub_362D40(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // r15
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  unsigned __int64 v15; // rbx
  __m128i v16; // xmm0
  __int64 v17; // r8
  _QWORD *v18; // r13
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // r14d
  __int64 v24; // r13
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v33; // rax
  void **v34; // r12
  void *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r14
  unsigned __int64 v38; // r13
  __int64 func; // rax
  __int64 v40; // rdx
  __int64 v41; // rbx
  __m128i *v42; // r12
  unsigned __int64 v43; // rdx
  __int64 v44; // rbx
  _QWORD *v45; // rcx
  const __m128i *v46; // rax
  int v47; // edi
  __int64 v48; // rsi
  __int64 v49; // [rsp+0h] [rbp-80h]
  __int64 v50; // [rsp+8h] [rbp-78h]
  unsigned __int64 v51; // [rsp+10h] [rbp-70h]
  __m128i v53; // [rsp+28h] [rbp-58h] BYREF
  __int128 v54; // [rsp+38h] [rbp-48h]
  unsigned __int64 v55; // [rsp+48h] [rbp-38h]

  v10 = *(_QWORD *)a1;
  v11 = *(_QWORD *)(a2 + 800);
  v55 = __readfsqword(0x28u);
  (*(void (__fastcall **)(unsigned int *, _QWORD))(v10 + 168))(a1, 0);
  if ( *((_QWORD *)a1 + 25) )
  {
    *((_QWORD *)a1 + 26) = 0;
    qfree();
    *((_QWORD *)a1 + 25) = 0;
    *((_QWORD *)a1 + 27) = 0;
  }
  *(_BYTE *)(v11 + 520) = 1;
  v15 = *(_QWORD *)(a3 + 8);
  v16.m128i_i64[0] = 0;
  v53.m128i_i64[1] = 0;
  v54 = 0;
  if ( v15 )
  {
    v53.m128i_i64[1] = qvector_reserve();
    v37 = 0;
    v38 = 0;
    memset((void *)(v53.m128i_i64[1] + 16 * v54), 0, 16 * (v15 - v54));
    *(_QWORD *)&v54 = v15;
    do
    {
      func = get_func();
      if ( func )
      {
        v40 = v53.m128i_i64[1] + 16 * v38;
        *(_QWORD *)v40 = func;
        *(_DWORD *)(v40 + 8) = v38++;
      }
      ++v37;
    }
    while ( v15 != v37 );
    v41 = 16 * v38;
    v42 = (__m128i *)(v53.m128i_i64[1] + 16 * v38);
    if ( v42 == (__m128i *)v53.m128i_i64[1] )
      goto LABEL_39;
    if ( v41 >> 4 )
    {
      _BitScanReverse64(&v43, v41 >> 4);
      sub_358990((__m128i *)v53.m128i_i64[1], (__m128i *)(v53.m128i_i64[1] + 16 * v38), 2LL * (int)v43);
      if ( v41 > 256 )
      {
        v44 = v53.m128i_i64[1] + 256;
        sub_358880((__m128i *)v53.m128i_i64[1], (__m128i *)(v53.m128i_i64[1] + 256));
        do
        {
          v45 = *(_QWORD **)v44;
          v46 = (const __m128i *)(v44 - 16);
          v47 = *(_DWORD *)(v44 + 8);
          if ( **(_QWORD **)v44 >= **(_QWORD **)(v44 - 16) )
          {
            v48 = v44;
          }
          else
          {
            do
            {
              v16 = _mm_loadu_si128(v46);
              v48 = (__int64)v46--;
              v46[2] = v16;
            }
            while ( *v45 < *(_QWORD *)v46->m128i_i64[0] );
          }
          v44 += 16;
          *(_QWORD *)v48 = v45;
          *(_DWORD *)(v48 + 8) = v47;
        }
        while ( v42 != (__m128i *)v44 );
        goto LABEL_39;
      }
    }
    else
    {
      sub_358990((__m128i *)v53.m128i_i64[1], (__m128i *)(v53.m128i_i64[1] + 16 * v38), -2);
    }
    sub_358880((__m128i *)v53.m128i_i64[1], v42);
LABEL_39:
    v15 = v38;
  }
  v17 = *(_QWORD *)(v11 + 328);
  v18 = *(_QWORD **)(v11 + 296);
  v53.m128i_i64[0] = -1;
  v19 = *(_QWORD *)(v11 + 288);
  v20 = *(_QWORD *)(v11 + 312);
  v21 = *(_QWORD *)(v11 + 272);
  v22 = ((v19 - v21) >> 3)
      + ((*(_QWORD *)(v11 + 304) - v20) >> 3)
      + (((v17 == 0) + ((v17 - (__int64)v18) >> 3) - 1) << 6);
  if ( v22 < v15 )
  {
    sub_3618E0(
      (__m128i *)(v11 + 256),
      *(__m128i **)(v11 + 304),
      v20,
      *(double *)v16.m128i_i64,
      a5,
      a6,
      a7,
      v13,
      v14,
      a10,
      *(_QWORD *)(v11 + 320),
      v17,
      v15 - v22,
      &v53);
    goto LABEL_7;
  }
  if ( v15 < v22 )
  {
    v50 = *(_QWORD *)(v11 + 280);
    v33 = v15 + ((v21 - v50) >> 3);
    if ( v33 < 0 )
    {
      v36 = ~((unsigned __int64)~v33 >> 6);
    }
    else
    {
      if ( v33 <= 63 )
      {
        v49 = v21 + 8 * v15;
LABEL_22:
        v34 = (void **)(v18 + 1);
        v51 = v17 + 8;
        if ( (unsigned __int64)(v18 + 1) < v17 + 8 )
        {
          do
          {
            v35 = *v34++;
            operator delete(v35, 0x200u);
          }
          while ( (unsigned __int64)v34 < v51 );
        }
        *(_QWORD *)(v11 + 320) = v19;
        *(_QWORD *)(v11 + 328) = v18;
        *(_QWORD *)(v11 + 304) = v49;
        *(_QWORD *)(v11 + 312) = v50;
        goto LABEL_6;
      }
      v36 = v33 >> 6;
    }
    v18 += v36;
    v50 = *v18;
    v19 = *v18 + 512LL;
    v49 = *v18 + 8 * (v33 - (v36 << 6));
    goto LABEL_22;
  }
LABEL_6:
  if ( v15 )
  {
LABEL_7:
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    do
    {
      while ( 1 )
      {
        v27 = v53.m128i_i64[1] + 16 * v26;
        v28 = v24;
        v24 = *(_QWORD *)v27;
        if ( *(_QWORD *)v27 != v28 )
          v25 = sub_35B480(a1, *(_QWORD **)v27);
        v29 = *(int *)(v27 + 8);
        v30 = v29 + ((__int64)(*(_QWORD *)(v11 + 272) - *(_QWORD *)(v11 + 280)) >> 3);
        if ( v30 >= 0 )
          break;
        v31 = ~((unsigned __int64)~v30 >> 6);
LABEL_14:
        ++v23;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 296) + 8 * v31) + 8 * (v30 - (v31 << 6))) = v25;
        v26 = v23;
        if ( v23 >= v15 )
          goto LABEL_15;
      }
      if ( v30 > 63 )
      {
        v31 = v30 >> 6;
        goto LABEL_14;
      }
      ++v23;
      *(_QWORD *)(*(_QWORD *)(v11 + 272) + 8 * v29) = v25;
      v26 = v23;
    }
    while ( v23 < v15 );
  }
LABEL_15:
  if ( v53.m128i_i64[1] )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  return v55 - __readfsqword(0x28u);
}

