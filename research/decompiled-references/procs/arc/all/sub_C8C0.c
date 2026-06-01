__int64 __fastcall sub_C8C0(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rdi
  const __m128i *v11; // rdx
  bool v12; // zf
  bool v13; // cc
  __int64 v14; // rdi
  unsigned int v15; // ebx
  unsigned __int64 v17; // rbx
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rcx
  __int64 j; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int64 i; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  const __m128i *v29; // r14
  const __m128i *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __m128i v33; // xmm0
  bool v34; // cf
  __int64 v35; // rax
  __int64 v36; // r15
  const __m128i *v37; // r14
  const __m128i *v38; // rdi
  __int64 v39; // rdx
  __m128i v40; // xmm0
  _BYTE v41[24]; // [rsp+0h] [rbp-438h] BYREF
  __int64 v42; // [rsp+18h] [rbp-420h]
  __int64 v43; // [rsp+20h] [rbp-418h]
  __m128i si128; // [rsp+30h] [rbp-408h] BYREF
  __m128i v45; // [rsp+40h] [rbp-3F8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-3E8h]
  __int64 (__fastcall **v47)(); // [rsp+60h] [rbp-3D8h] BYREF
  char v48; // [rsp+68h] [rbp-3D0h]
  _BYTE v49[360]; // [rsp+70h] [rbp-3C8h] BYREF
  _QWORD v50[17]; // [rsp+1D8h] [rbp-260h] BYREF
  char v51; // [rsp+262h] [rbp-1D6h]
  int v52; // [rsp+270h] [rbp-1C8h]
  char v53; // [rsp+379h] [rbp-BFh]
  void *v54; // [rsp+388h] [rbp-B0h]
  __int64 v55; // [rsp+390h] [rbp-A8h]
  __int128 v56; // [rsp+398h] [rbp-A0h]
  __int64 v57; // [rsp+3A8h] [rbp-90h]
  __int128 v58; // [rsp+3B0h] [rbp-88h]
  const __m128i *v59; // [rsp+3C0h] [rbp-78h] BYREF
  __int128 v60; // [rsp+3C8h] [rbp-70h]
  __int64 v61; // [rsp+3D8h] [rbp-60h]
  __int128 v62; // [rsp+3E0h] [rbp-58h]
  __int64 v63; // [rsp+3F0h] [rbp-48h]
  unsigned __int64 v64; // [rsp+3F8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v47 = off_29C60;
  v8 = &v49[40];
  v48 = 1;
  *(_QWORD *)&v49[24] = 0;
  *(_QWORD *)&v49[32] = 0;
  memset(v49, 255, 24);
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 5;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *(v8 - 2) = 0;
  }
  while ( v50 != v8 );
  v50[0] = a1;
  v52 = -1;
  v53 = 0;
  v54 = &unk_1F5D0;
  v55 = 0;
  v57 = 0;
  v59 = nullptr;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  if ( !a1 )
  {
    memset(v41, 0, sizeof(v41));
    v11 = nullptr;
    v17 = *((_QWORD *)&v60 + 1);
    v42 = 0;
    LODWORD(v43) = 0;
LABEL_28:
    v11 = (const __m128i *)((char *)v11 + 40 * v17);
    if ( v41 < (_BYTE *)v11 )
    {
      si128 = _mm_load_si128((const __m128i *)v41);
      v22 = _mm_load_si128((const __m128i *)&v41[16]);
      v46 = v43;
      v45 = v22;
      if ( v17 <= 1 )
      {
        v35 = qvector_reserve(&v59, 0, 2, 40);
        v36 = *((_QWORD *)&v60 + 1);
        v37 = (const __m128i *)v35;
        *((_QWORD *)&v60 + 1) = v17;
        v38 = v59;
        v39 = v60 - 1;
        if ( (__int64)v60 - 1 >= 0 )
        {
          do
          {
            v40 = _mm_loadu_si128(v38);
            v35 += 40;
            v38 = (const __m128i *)((char *)v38 + 40);
            *(__m128i *)(v35 - 40) = v40;
            *(__m128i *)(v35 - 24) = _mm_loadu_si128((const __m128i *)((char *)v38 - 24));
            *(_QWORD *)(v35 - 8) = v38[-1].m128i_i64[1];
            v34 = v39-- == 0;
          }
          while ( !v34 );
          v38 = v59;
        }
        qfree(v38);
        v59 = v37;
        *((_QWORD *)&v60 + 1) = v36;
      }
      if ( (unsigned __int64)v60 <= 1 )
      {
        v23 = _mm_load_si128(&si128);
        v24 = _mm_load_si128(&v45);
        v25 = v46;
        for ( i = 40 * v60; ; i = 40 )
        {
          v11 = v59;
          v59[2].m128i_i64[(unsigned __int64)i / 8] = v25;
          *(__m128i *)((char *)v11 + i) = v23;
          *(__m128i *)((char *)v11 + i + 16) = v24;
          if ( i )
            break;
        }
      }
      goto LABEL_26;
    }
LABEL_21:
    if ( v17 <= 1 )
    {
      v27 = qvector_reserve(&v59, 0, 2, 40);
      v28 = *((_QWORD *)&v60 + 1);
      v29 = (const __m128i *)v27;
      *((_QWORD *)&v60 + 1) = v17;
      v30 = v59;
      v31 = v60 - 1;
      if ( (__int64)v60 - 1 >= 0 )
      {
        v32 = v27;
        do
        {
          v33 = _mm_loadu_si128(v30);
          v32 += 40;
          v30 = (const __m128i *)((char *)v30 + 40);
          *(__m128i *)(v32 - 40) = v33;
          *(__m128i *)(v32 - 24) = _mm_loadu_si128((const __m128i *)((char *)v30 - 24));
          *(_QWORD *)(v32 - 8) = v30[-1].m128i_i64[1];
          v34 = v31-- == 0;
        }
        while ( !v34 );
        v30 = v59;
      }
      qfree(v30);
      v59 = v29;
      *((_QWORD *)&v60 + 1) = v28;
    }
    if ( (unsigned __int64)v60 <= 1 )
    {
      v18 = _mm_load_si128((const __m128i *)v41);
      v19 = _mm_load_si128((const __m128i *)&v41[16]);
      v20 = v43;
      for ( j = 40 * v60; ; j = 40 )
      {
        v11 = v59;
        v59[2].m128i_i64[(unsigned __int64)j / 8] = v20;
        *(__m128i *)((char *)v11 + j) = v18;
        *(__m128i *)((char *)v11 + j + 16) = v19;
        if ( j )
          break;
      }
    }
LABEL_26:
    *(_QWORD *)&v60 = 2;
    goto LABEL_6;
  }
  v9 = _mm_load_si128((const __m128i *)&xmmword_1F650);
  v10 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)a1 = 0x800000;
  *(_WORD *)(a1 + 4) = 0;
  *(__m128i *)(a1 + 8) = v9;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_BYTE *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 2;
  *(_QWORD *)(a1 + 88) = -1;
  *(_OWORD *)(a1 + 24) = -1;
  if ( !v10 )
  {
    *(_QWORD *)v41 = 0;
    v42 = 0;
    LODWORD(v43) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v41[8] = 0;
    goto LABEL_20;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree(v10);
  v12 = (_QWORD)v60 == 2;
  v13 = (unsigned __int64)v60 <= 2;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v12 )
    goto LABEL_6;
  memset(v41, 0, sizeof(v41));
  v42 = 0;
  LODWORD(v43) = 0;
  if ( v13 )
  {
LABEL_20:
    v11 = v59;
    v17 = *((_QWORD *)&v60 + 1);
    if ( v41 < (_BYTE *)v59 )
      goto LABEL_21;
    goto LABEL_28;
  }
  *(_QWORD *)&v60 = 2;
LABEL_6:
  v61 = a3;
  v47 = off_28D50;
  v63 = -1;
  v48 = 0;
  v62 = -1;
  *(_DWORD *)v50[0] |= 0x40000u;
  qmemcpy(v49, a2, sizeof(v49));
  v52 = 0;
  if ( (unsigned __int8)match_jpt(
                          &v47,
                          a2 + 360,
                          v11,
                          0,
                          a5,
                          a6,
                          *(_QWORD *)v41,
                          *(_QWORD *)&v41[8],
                          *(_QWORD *)&v41[16],
                          v42) )
  {
    if ( !v51 )
    {
      if ( v50[2] == -1 || *((_QWORD *)&v62 + 1) == -1 )
      {
        v14 = v62;
        if ( (_QWORD)v62 == -1 )
          goto LABEL_11;
      }
      else
      {
        op_offset(*((_QWORD *)&v62 + 1), HIDWORD(v63), 2, -1, 0, 0);
        v14 = v62;
        if ( (_QWORD)v62 == -1 )
          goto LABEL_11;
      }
      op_offset(v14, (unsigned int)v63, 2, -1, 0, 0);
    }
LABEL_11:
    v15 = 1;
    goto LABEL_12;
  }
  v15 = 0;
LABEL_12:
  v47 = off_29C60;
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  return v15;
}
