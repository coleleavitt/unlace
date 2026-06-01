__int64 __fastcall sub_1DA40(__int64 a1, const void *a2, __int64 a3)
{
  _QWORD *v6; // rax
  __m128i v7; // xmm1
  __int64 v8; // rdi
  bool v9; // zf
  bool v10; // cc
  unsigned int v11; // ebp
  const __m128i *v13; // rdx
  unsigned __int64 v14; // r13
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
  __int64 v26; // r15
  const __m128i *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __m128i v31; // xmm0
  bool v32; // cf
  __int64 v33; // rax
  __int64 v34; // rsi
  const __m128i *v35; // r15
  const __m128i *v36; // rdi
  __int64 v37; // rdx
  __m128i v38; // xmm0
  __int64 v39; // [rsp+0h] [rbp-430h]
  _BYTE v40[24]; // [rsp+8h] [rbp-428h] BYREF
  __int64 v41; // [rsp+20h] [rbp-410h]
  __int64 v42; // [rsp+28h] [rbp-408h]
  __m128i si128; // [rsp+38h] [rbp-3F8h] BYREF
  __m128i v44; // [rsp+48h] [rbp-3E8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-3D8h]
  __int64 (__fastcall **v46)(); // [rsp+68h] [rbp-3C8h] BYREF
  char v47; // [rsp+70h] [rbp-3C0h]
  _BYTE v48[360]; // [rsp+78h] [rbp-3B8h] BYREF
  _QWORD v49[19]; // [rsp+1E0h] [rbp-250h] BYREF
  int v50; // [rsp+278h] [rbp-1B8h]
  char v51; // [rsp+381h] [rbp-AFh]
  void *v52; // [rsp+390h] [rbp-A0h]
  __int64 v53; // [rsp+398h] [rbp-98h]
  __int128 v54; // [rsp+3A0h] [rbp-90h]
  __int64 v55; // [rsp+3B0h] [rbp-80h]
  __int128 v56; // [rsp+3B8h] [rbp-78h]
  const __m128i *v57; // [rsp+3C8h] [rbp-68h] BYREF
  __int128 v58; // [rsp+3D0h] [rbp-60h]
  __int64 v59; // [rsp+3E0h] [rbp-50h]
  unsigned __int64 v60; // [rsp+3F0h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v46 = off_2DBA0;
  v6 = &v48[40];
  v47 = 1;
  *(_QWORD *)&v48[24] = 0;
  *(_QWORD *)&v48[32] = 0;
  memset(v48, 255, 24);
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v49 != v6 );
  v49[0] = a1;
  v50 = -1;
  v51 = 0;
  v52 = &unk_25CE0;
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
LABEL_24:
    if ( v40 < &v13->m128i_i8[40 * v14] )
    {
      si128 = _mm_load_si128((const __m128i *)v40);
      v20 = _mm_load_si128((const __m128i *)&v40[16]);
      v45 = v42;
      v44 = v20;
      if ( v14 <= 1 )
      {
        v33 = qvector_reserve(&v57, 0, 2, 40);
        v34 = *((_QWORD *)&v58 + 1);
        v35 = (const __m128i *)v33;
        *((_QWORD *)&v58 + 1) = v14;
        v36 = v57;
        v37 = v58 - 1;
        if ( (__int64)v58 - 1 >= 0 )
        {
          do
          {
            v38 = _mm_loadu_si128(v36);
            v33 += 40;
            v36 = (const __m128i *)((char *)v36 + 40);
            *(__m128i *)(v33 - 40) = v38;
            *(__m128i *)(v33 - 24) = _mm_loadu_si128((const __m128i *)((char *)v36 - 24));
            *(_QWORD *)(v33 - 8) = v36[-1].m128i_i64[1];
            v32 = v37-- == 0;
          }
          while ( !v32 );
          v36 = v57;
        }
        qfree(v36);
        v57 = v35;
        *((_QWORD *)&v58 + 1) = v34;
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
      goto LABEL_22;
    }
LABEL_17:
    if ( v14 <= 1 )
    {
      v26 = qvector_reserve(&v57, 0, 2, 40);
      v27 = v57;
      v28 = *((_QWORD *)&v58 + 1);
      *((_QWORD *)&v58 + 1) = v14;
      v29 = v58 - 1;
      if ( (__int64)v58 - 1 >= 0 )
      {
        v30 = v26;
        do
        {
          v31 = _mm_loadu_si128(v27);
          v30 += 40;
          v27 = (const __m128i *)((char *)v27 + 40);
          *(__m128i *)(v30 - 40) = v31;
          *(__m128i *)(v30 - 24) = _mm_loadu_si128((const __m128i *)((char *)v27 - 24));
          *(_QWORD *)(v30 - 8) = v27[-1].m128i_i64[1];
          v32 = v29-- == 0;
        }
        while ( !v32 );
        v27 = v57;
      }
      v39 = v28;
      qfree(v27);
      v57 = (const __m128i *)v26;
      *((_QWORD *)&v58 + 1) = v39;
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
LABEL_22:
    *(_QWORD *)&v58 = 2;
    goto LABEL_6;
  }
  v7 = _mm_load_si128((const __m128i *)&xmmword_23BD0);
  v8 = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)a1 = 0x800000;
  *(__m128i *)(a1 + 8) = v7;
  *(_WORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 2;
  *(_QWORD *)(a1 + 88) = -1;
  *(_OWORD *)(a1 + 24) = -1;
  if ( !v8 )
  {
    *(_QWORD *)v40 = 0;
    v41 = 0;
    LODWORD(v42) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v40[8] = 0;
    goto LABEL_16;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree(v8);
  v9 = (_QWORD)v58 == 2;
  v10 = (unsigned __int64)v58 <= 2;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v9 )
    goto LABEL_6;
  memset(v40, 0, sizeof(v40));
  v41 = 0;
  LODWORD(v42) = 0;
  if ( v10 )
  {
LABEL_16:
    v13 = v57;
    v14 = *((_QWORD *)&v58 + 1);
    if ( v40 < (_BYTE *)v57 )
      goto LABEL_17;
    goto LABEL_24;
  }
  *(_QWORD *)&v58 = 2;
LABEL_6:
  v46 = off_2DC70;
  v59 = a3;
  *(_DWORD *)v49[0] |= 0x40000u;
  v46 = off_2DA78;
  v47 = 0;
  v50 = 0;
  *(_DWORD *)v49[0] |= 0x400000u;
  qmemcpy(v48, a2, sizeof(v48));
  v11 = 0;
  if ( (unsigned __int8)match_jpt(&v46) )
  {
    op_offset(v49[1], 0, 130, -1, 0, 0);
    del_items(*(_QWORD *)(a1 + 8), 0, 1, 0);
    v11 = 1;
  }
  v46 = off_2DBA0;
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
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  return v11;
}
