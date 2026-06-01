__int64 __fastcall sub_33D00(__int64 a1, char *a2, __int64 a3)
{
  _QWORD *v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i v10; // xmm1
  __int64 v11; // rdi
  const __m128i *v12; // rdx
  bool v13; // zf
  bool v14; // cc
  __int64 v15; // rsi
  char matched; // al
  __int64 v17; // rdx
  unsigned int v18; // ebp
  unsigned __int64 v20; // rbx
  __m128i v21; // xmm1
  __int64 v22; // rcx
  __int64 j; // rax
  __m128i v24; // xmm1
  __int64 v25; // rcx
  __int64 i; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r15
  const __m128i *v31; // r14
  const __m128i *v32; // rdi
  __int64 v33; // rcx
  __m128i v34; // xmm0
  bool v35; // cf
  __int64 v36; // rax
  __int64 v37; // r15
  const __m128i *v38; // r14
  const __m128i *v39; // rdi
  __int64 v40; // rdx
  __m128i v41; // xmm0
  _BYTE v42[24]; // [rsp+0h] [rbp-468h] BYREF
  __int64 v43; // [rsp+18h] [rbp-450h]
  __int64 v44; // [rsp+20h] [rbp-448h]
  __m128i si128; // [rsp+30h] [rbp-438h] BYREF
  __m128i v46; // [rsp+40h] [rbp-428h] BYREF
  __int64 v47; // [rsp+50h] [rbp-418h]
  __int64 (__fastcall **v48)(); // [rsp+60h] [rbp-408h] BYREF
  char v49; // [rsp+68h] [rbp-400h]
  _BYTE v50[360]; // [rsp+70h] [rbp-3F8h] BYREF
  _QWORD v51[19]; // [rsp+1D8h] [rbp-290h] BYREF
  int v52; // [rsp+270h] [rbp-1F8h]
  char v53; // [rsp+379h] [rbp-EFh]
  void *v54; // [rsp+388h] [rbp-E0h]
  __int64 v55; // [rsp+390h] [rbp-D8h]
  __int128 v56; // [rsp+398h] [rbp-D0h]
  __int64 v57; // [rsp+3A8h] [rbp-C0h]
  __int128 v58; // [rsp+3B0h] [rbp-B8h]
  const __m128i *v59; // [rsp+3C0h] [rbp-A8h] BYREF
  __int128 v60; // [rsp+3C8h] [rbp-A0h]
  __int64 v61; // [rsp+3D8h] [rbp-90h]
  __int64 v62; // [rsp+3E0h] [rbp-88h]
  char v63; // [rsp+3E8h] [rbp-80h]
  __int64 v64; // [rsp+3F0h] [rbp-78h]
  int v65; // [rsp+3F8h] [rbp-70h]
  __int64 v66; // [rsp+400h] [rbp-68h]
  int v67; // [rsp+408h] [rbp-60h]
  __int64 v68; // [rsp+410h] [rbp-58h]
  int v69; // [rsp+418h] [rbp-50h]
  char v70; // [rsp+41Ch] [rbp-4Ch]
  unsigned __int64 v71; // [rsp+428h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v48 = off_94B90;
  v6 = &v50[40];
  v49 = 1;
  *(_QWORD *)&v50[24] = 0;
  *(_QWORD *)&v50[32] = 0;
  memset(v50, 255, 24);
  v7.m128i_i64[0] = 0;
  do
  {
    v8 = 0;
    v9 = 0;
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v51 != v6 );
  v51[0] = a1;
  v52 = -1;
  v53 = 0;
  v54 = &unk_7A020;
  v55 = 0;
  v57 = 0;
  v59 = nullptr;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  if ( !a1 )
  {
    memset(v42, 0, sizeof(v42));
    v12 = nullptr;
    v20 = *((_QWORD *)&v60 + 1);
    v43 = 0;
    LODWORD(v44) = 0;
LABEL_24:
    v12 = (const __m128i *)((char *)v12 + 40 * v20);
    if ( v42 < (_BYTE *)v12 )
    {
      si128 = _mm_load_si128((const __m128i *)v42);
      v7 = _mm_load_si128((const __m128i *)&v42[16]);
      v47 = v44;
      v46 = v7;
      if ( v20 <= 1 )
      {
        v36 = qvector_reserve(&v59, 0, 2, 40);
        v37 = *((_QWORD *)&v60 + 1);
        v38 = (const __m128i *)v36;
        *((_QWORD *)&v60 + 1) = v20;
        v39 = v59;
        v40 = v60 - 1;
        if ( (__int64)v60 - 1 >= 0 )
        {
          do
          {
            v41 = _mm_loadu_si128(v39);
            v36 += 40;
            v39 = (const __m128i *)((char *)v39 + 40);
            *(__m128i *)(v36 - 40) = v41;
            v7 = _mm_loadu_si128((const __m128i *)((char *)v39 - 24));
            *(__m128i *)(v36 - 24) = v7;
            *(_QWORD *)(v36 - 8) = v39[-1].m128i_i64[1];
            v35 = v40-- == 0;
          }
          while ( !v35 );
          v39 = v59;
        }
        qfree(v39, 0, v40, *(double *)v7.m128i_i64);
        v59 = v38;
        *((_QWORD *)&v60 + 1) = v37;
      }
      if ( (unsigned __int64)v60 <= 1 )
      {
        v24 = _mm_load_si128(&si128);
        v7 = _mm_load_si128(&v46);
        v25 = v47;
        for ( i = 40 * v60; ; i = 40 )
        {
          v12 = v59;
          v59[2].m128i_i64[(unsigned __int64)i / 8] = v25;
          *(__m128i *)((char *)v12 + i) = v24;
          *(__m128i *)((char *)v12 + i + 16) = v7;
          if ( i )
            break;
        }
      }
      goto LABEL_22;
    }
LABEL_17:
    if ( v20 <= 1 )
    {
      v27 = 0;
      v28 = qvector_reserve(&v59, 0, 2, 40);
      v30 = *((_QWORD *)&v60 + 1);
      v31 = (const __m128i *)v28;
      *((_QWORD *)&v60 + 1) = v20;
      v32 = v59;
      v33 = v60 - 1;
      if ( (__int64)v60 - 1 >= 0 )
      {
        v29 = v28;
        do
        {
          v34 = _mm_loadu_si128(v32);
          v29 += 40;
          v32 = (const __m128i *)((char *)v32 + 40);
          *(__m128i *)(v29 - 40) = v34;
          v7 = _mm_loadu_si128((const __m128i *)((char *)v32 - 24));
          *(__m128i *)(v29 - 24) = v7;
          v27 = v32[-1].m128i_i64[1];
          *(_QWORD *)(v29 - 8) = v27;
          v35 = v33-- == 0;
        }
        while ( !v35 );
        v32 = v59;
      }
      qfree(v32, v27, v29, *(double *)v7.m128i_i64);
      v59 = v31;
      *((_QWORD *)&v60 + 1) = v30;
    }
    if ( (unsigned __int64)v60 <= 1 )
    {
      v21 = _mm_load_si128((const __m128i *)v42);
      v7 = _mm_load_si128((const __m128i *)&v42[16]);
      v22 = v44;
      for ( j = 40 * v60; ; j = 40 )
      {
        v12 = v59;
        v59[2].m128i_i64[(unsigned __int64)j / 8] = v22;
        *(__m128i *)((char *)v12 + j) = v21;
        *(__m128i *)((char *)v12 + j + 16) = v7;
        if ( j )
          break;
      }
    }
LABEL_22:
    *(_QWORD *)&v60 = 2;
    goto LABEL_6;
  }
  v10 = _mm_load_si128((const __m128i *)&xmmword_77D80);
  v11 = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)a1 = 0x800000;
  *(__m128i *)(a1 + 8) = v10;
  *(_WORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 2;
  *(_QWORD *)(a1 + 88) = -1;
  *(_OWORD *)(a1 + 24) = -1;
  if ( !v11 )
  {
    *(_QWORD *)v42 = 0;
    v43 = 0;
    LODWORD(v44) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v42[8] = 0;
    goto LABEL_16;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree(v11, 0, v51, 0.0);
  v7.m128i_i64[0] = 0;
  v13 = (_QWORD)v60 == 2;
  v14 = (unsigned __int64)v60 <= 2;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v13 )
    goto LABEL_6;
  memset(v42, 0, sizeof(v42));
  v43 = 0;
  LODWORD(v44) = 0;
  if ( v14 )
  {
LABEL_16:
    v12 = v59;
    v20 = *((_QWORD *)&v60 + 1);
    if ( v42 < (_BYTE *)v59 )
      goto LABEL_17;
    goto LABEL_24;
  }
  *(_QWORD *)&v60 = 2;
LABEL_6:
  v61 = a3;
  qmemcpy(v50, a2, sizeof(v50));
  v15 = (__int64)(a2 + 360);
  v62 = 0x11900000000LL;
  v63 = 0;
  v64 = -1;
  v65 = -1;
  v66 = -1;
  v67 = 0;
  v68 = -1;
  v69 = -1;
  v70 = 0;
  v48 = off_84938;
  matched = match_jpt(&v48, a2 + 360, v12, 0, v8, v9, *(_QWORD *)v42, *(_QWORD *)&v42[8], *(_QWORD *)&v42[16], v43);
  v18 = 0;
  if ( matched )
  {
    v15 = 4;
    mark_switch_insns_jpt(&v48, 4, 0);
    v18 = 1;
  }
  v48 = off_94B90;
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59, v15, v17, *(double *)v7.m128i_i64);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57, v15, v17, *(double *)v7.m128i_i64);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55, v15, v17, *(double *)v7.m128i_i64);
  }
  return v18;
}

