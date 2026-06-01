__int64 __fastcall sub_11040(__int64 a1, const void *a2, __int64 a3)
{
  _QWORD *v5; // rax
  __m128i v6; // xmm1
  __int64 v7; // rdi
  bool v8; // zf
  bool v9; // cc
  unsigned __int8 matched; // al
  unsigned int v11; // ebx
  const __m128i *v13; // rdx
  unsigned __int64 v14; // rbx
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __int64 j; // rax
  const __m128i *v19; // rdx
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 i; // rax
  const __m128i *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r15
  const __m128i *v28; // r14
  const __m128i *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // r15
  const __m128i *v36; // r14
  const __m128i *v37; // rdi
  __int64 v38; // rdx
  __m128i v39; // xmm0
  _BYTE v40[24]; // [rsp+0h] [rbp-438h] BYREF
  __int64 v41; // [rsp+18h] [rbp-420h]
  __int64 v42; // [rsp+20h] [rbp-418h]
  __m128i si128; // [rsp+30h] [rbp-408h] BYREF
  __m128i v44; // [rsp+40h] [rbp-3F8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-3E8h]
  __int64 (__fastcall **v46)(); // [rsp+60h] [rbp-3D8h]
  char v47; // [rsp+68h] [rbp-3D0h]
  _BYTE v48[360]; // [rsp+70h] [rbp-3C8h] BYREF
  _DWORD *v49; // [rsp+1D8h] [rbp-260h] BYREF
  int v50; // [rsp+270h] [rbp-1C8h]
  char v51; // [rsp+379h] [rbp-BFh]
  __int64 *v52; // [rsp+388h] [rbp-B0h]
  __int64 v53; // [rsp+390h] [rbp-A8h]
  __int128 v54; // [rsp+398h] [rbp-A0h]
  __int64 v55; // [rsp+3A8h] [rbp-90h]
  __int128 v56; // [rsp+3B0h] [rbp-88h]
  const __m128i *v57; // [rsp+3C0h] [rbp-78h]
  __int128 v58; // [rsp+3C8h] [rbp-70h]
  __int64 v59; // [rsp+3D8h] [rbp-60h]
  __int64 v60; // [rsp+3E0h] [rbp-58h]
  char v61; // [rsp+3E8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+3F8h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v46 = off_29C40;
  v5 = &v48[40];
  v47 = 1;
  *(_QWORD *)&v48[24] = 0;
  *(_QWORD *)&v48[32] = 0;
  memset(v48, 255, 24);
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v49 != v5 );
  v49 = (_DWORD *)a1;
  v50 = -1;
  v51 = 0;
  v52 = qword_1A080;
  v53 = 0;
  v55 = 0;
  v57 = nullptr;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  if ( !a1 )
  {
    memset(v40, 0, sizeof(v40));
    v13 = nullptr;
    v14 = *((_QWORD *)&v58 + 1);
    v41 = 0;
    LODWORD(v42) = 0;
LABEL_22:
    if ( v40 < &v13->m128i_i8[40 * v14] )
    {
      si128 = _mm_load_si128((const __m128i *)v40);
      v20 = _mm_load_si128((const __m128i *)&v40[16]);
      v45 = v42;
      v44 = v20;
      if ( v14 <= 1 )
      {
        v34 = qvector_reserve();
        v35 = *((_QWORD *)&v58 + 1);
        v36 = (const __m128i *)v34;
        *((_QWORD *)&v58 + 1) = v14;
        v37 = v57;
        v38 = v58 - 1;
        if ( (__int64)v58 - 1 >= 0 )
        {
          do
          {
            v39 = _mm_loadu_si128(v37);
            v34 += 40;
            v37 = (const __m128i *)((char *)v37 + 40);
            *(__m128i *)(v34 - 40) = v39;
            *(__m128i *)(v34 - 24) = _mm_loadu_si128((const __m128i *)((char *)v37 - 24));
            *(_QWORD *)(v34 - 8) = v37[-1].m128i_i64[1];
            v33 = v38-- == 0;
          }
          while ( !v33 );
        }
        qfree();
        v57 = v36;
        *((_QWORD *)&v58 + 1) = v35;
      }
      if ( (unsigned __int64)v58 <= 1 )
      {
        v21 = _mm_load_si128(&si128);
        v22 = _mm_load_si128(&v44);
        v23 = v45;
        for ( i = 40 * v58; ; i = 40 )
        {
          v25 = v57;
          v57[2].m128i_i64[(unsigned __int64)i / 8] = v23;
          *(__m128i *)((char *)v25 + i) = v21;
          *(__m128i *)((char *)v25 + i + 16) = v22;
          if ( i )
            break;
        }
      }
      goto LABEL_20;
    }
LABEL_15:
    if ( v14 <= 1 )
    {
      v26 = qvector_reserve();
      v27 = *((_QWORD *)&v58 + 1);
      v28 = (const __m128i *)v26;
      *((_QWORD *)&v58 + 1) = v14;
      v29 = v57;
      v30 = v58 - 1;
      if ( (__int64)v58 - 1 >= 0 )
      {
        v31 = v26;
        do
        {
          v32 = _mm_loadu_si128(v29);
          v31 += 40;
          v29 = (const __m128i *)((char *)v29 + 40);
          *(__m128i *)(v31 - 40) = v32;
          *(__m128i *)(v31 - 24) = _mm_loadu_si128((const __m128i *)((char *)v29 - 24));
          *(_QWORD *)(v31 - 8) = v29[-1].m128i_i64[1];
          v33 = v30-- == 0;
        }
        while ( !v33 );
      }
      qfree();
      v57 = v28;
      *((_QWORD *)&v58 + 1) = v27;
    }
    if ( (unsigned __int64)v58 <= 1 )
    {
      v15 = _mm_load_si128((const __m128i *)v40);
      v16 = _mm_load_si128((const __m128i *)&v40[16]);
      v17 = v42;
      for ( j = 40 * v58; ; j = 40 )
      {
        v19 = v57;
        v57[2].m128i_i64[(unsigned __int64)j / 8] = v17;
        *(__m128i *)((char *)v19 + j) = v15;
        *(__m128i *)((char *)v19 + j + 16) = v16;
        if ( j )
          break;
      }
    }
LABEL_20:
    *(_QWORD *)&v58 = 2;
    goto LABEL_6;
  }
  v6 = _mm_load_si128((const __m128i *)&xmmword_1A0C0);
  v7 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)a1 = 0x800000;
  *(_WORD *)(a1 + 4) = 0;
  *(__m128i *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_BYTE *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 2;
  *(_QWORD *)(a1 + 88) = -1;
  *(_OWORD *)(a1 + 24) = -1;
  if ( !v7 )
  {
    *(_QWORD *)v40 = 0;
    v41 = 0;
    LODWORD(v42) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v40[8] = 0;
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree();
  v8 = (_QWORD)v58 == 2;
  v9 = (unsigned __int64)v58 <= 2;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v8 )
    goto LABEL_6;
  memset(v40, 0, sizeof(v40));
  v41 = 0;
  LODWORD(v42) = 0;
  if ( v9 )
  {
LABEL_14:
    v13 = v57;
    v14 = *((_QWORD *)&v58 + 1);
    if ( v40 < (_BYTE *)v57 )
      goto LABEL_15;
    goto LABEL_22;
  }
  *(_QWORD *)&v58 = 2;
LABEL_6:
  v59 = a3;
  v46 = off_27AF0;
  v60 = 0;
  v61 = 0;
  *v49 |= 0x40000u;
  qmemcpy(v48, a2, sizeof(v48));
  v50 = 0;
  matched = match_jpt();
  v46 = off_29C40;
  v11 = matched;
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  return v11;
}

