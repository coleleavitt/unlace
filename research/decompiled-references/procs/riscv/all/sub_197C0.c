__int64 __fastcall sub_197C0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i si128; // xmm1
  __int64 v9; // rdi
  _BYTE *v10; // rdx
  bool v11; // zf
  bool v12; // cc
  unsigned int v13; // ebx
  __m128i *v15; // r13
  __int64 v16; // rax
  _BYTE *v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // r15
  const __m128i *v24; // rdi
  __int64 v25; // rdx
  __m128i v26; // xmm0
  bool v27; // cf
  __int64 v28; // rax
  __int64 v29; // r15
  const __m128i *v30; // rdi
  __int64 v31; // rdx
  __m128i v32; // xmm0
  _BYTE v33[24]; // [rsp+0h] [rbp-468h] BYREF
  __int64 v34; // [rsp+18h] [rbp-450h]
  _BYTE *v35; // [rsp+20h] [rbp-448h]
  __m128i v36; // [rsp+30h] [rbp-438h] BYREF
  __m128i v37; // [rsp+40h] [rbp-428h] BYREF
  _BYTE *v38; // [rsp+50h] [rbp-418h]
  __int64 (__fastcall **v39)(); // [rsp+60h] [rbp-408h] BYREF
  char v40; // [rsp+68h] [rbp-400h]
  _BYTE v41[360]; // [rsp+70h] [rbp-3F8h] BYREF
  __int64 v42; // [rsp+1D8h] [rbp-290h] BYREF
  int v43; // [rsp+270h] [rbp-1F8h]
  char v44; // [rsp+379h] [rbp-EFh]
  void *v45; // [rsp+388h] [rbp-E0h]
  __int64 v46; // [rsp+390h] [rbp-D8h]
  __int128 v47; // [rsp+398h] [rbp-D0h]
  __int64 v48; // [rsp+3A8h] [rbp-C0h]
  __int128 v49; // [rsp+3B0h] [rbp-B8h]
  const __m128i *v50; // [rsp+3C0h] [rbp-A8h] BYREF
  __int128 v51; // [rsp+3C8h] [rbp-A0h]
  __int64 v52; // [rsp+3D8h] [rbp-90h]
  __int64 v53; // [rsp+3E0h] [rbp-88h]
  __int128 v54; // [rsp+3E8h] [rbp-80h]
  char v55; // [rsp+3F8h] [rbp-70h]
  __int64 v56; // [rsp+400h] [rbp-68h]
  __int128 v57; // [rsp+408h] [rbp-60h]
  char v58; // [rsp+418h] [rbp-50h]
  __int64 v59; // [rsp+420h] [rbp-48h]
  unsigned __int64 v60; // [rsp+428h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v39 = off_34C40;
  v5 = (__int64 *)&v41[40];
  v40 = 1;
  *(_QWORD *)&v41[24] = 0;
  *(_QWORD *)&v41[32] = 0;
  memset(v41, 255, 24);
  do
  {
    v6 = 0;
    v7 = 0;
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v42 != v5 );
  v42 = a1;
  v43 = -1;
  v44 = 0;
  v45 = &unk_2B070;
  v46 = 0;
  v48 = 0;
  v50 = nullptr;
  v47 = 0;
  v49 = 0;
  v51 = 0;
  if ( !a1 )
  {
    memset(v33, 0, sizeof(v33));
    v15 = nullptr;
    v10 = v33;
    v16 = *((_QWORD *)&v51 + 1);
    v34 = 0;
    LODWORD(v35) = 0;
    goto LABEL_27;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_2B110);
  v9 = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 68) = 0;
  *(_DWORD *)a1 = 0x800000;
  *(__m128i *)(a1 + 8) = si128;
  *(_WORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = -1;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 2;
  *(_QWORD *)(a1 + 88) = -1;
  *(_OWORD *)(a1 + 24) = -1;
  if ( !v9 )
  {
    *(_QWORD *)v33 = 0;
    v34 = 0;
    LODWORD(v35) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v33[8] = 0;
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree(v9);
  v11 = (_QWORD)v51 == 1;
  v12 = (unsigned __int64)v51 <= 1;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( !v11 )
  {
    memset(v33, 0, sizeof(v33));
    v34 = 0;
    LODWORD(v35) = 0;
    if ( !v12 )
    {
LABEL_24:
      *(_QWORD *)&v51 = 1;
      goto LABEL_6;
    }
LABEL_21:
    v15 = (__m128i *)v50;
    v16 = *((_QWORD *)&v51 + 1);
    v10 = v33;
    if ( v33 < (_BYTE *)v50 )
    {
LABEL_22:
      if ( v16 )
        goto LABEL_23;
      v22 = qvector_reserve(&v50, 0, 1, 40);
      v23 = *((_QWORD *)&v51 + 1);
      v15 = (__m128i *)v22;
      *((_QWORD *)&v51 + 1) = 0;
      v24 = v50;
      v25 = v51 - 1;
      if ( (__int64)v51 - 1 >= 0 )
      {
        do
        {
          v26 = _mm_loadu_si128(v24);
          v22 += 40;
          v24 = (const __m128i *)((char *)v24 + 40);
          *(__m128i *)(v22 - 40) = v26;
          *(__m128i *)(v22 - 24) = _mm_loadu_si128((const __m128i *)((char *)v24 - 24));
          *(_QWORD *)(v22 - 8) = v24[-1].m128i_i64[1];
          v27 = v25-- == 0;
        }
        while ( !v27 );
        v24 = v50;
      }
      qfree(v24);
      v50 = v15;
      *((_QWORD *)&v51 + 1) = v23;
      if ( !(_QWORD)v51 )
      {
LABEL_23:
        v17 = v35;
        *v15 = _mm_load_si128((const __m128i *)v33);
        v18 = _mm_load_si128((const __m128i *)&v33[16]);
        v15[2].m128i_i64[0] = (__int64)v17;
        v15[1] = v18;
      }
      goto LABEL_24;
    }
LABEL_27:
    if ( v33 < &v15->m128i_i8[40 * v16] )
    {
      v10 = v35;
      v36 = _mm_load_si128((const __m128i *)v33);
      v19 = _mm_load_si128((const __m128i *)&v33[16]);
      v38 = v35;
      v37 = v19;
      if ( v16 )
        goto LABEL_29;
      v28 = qvector_reserve(&v50, 0, 1, 40);
      v29 = *((_QWORD *)&v51 + 1);
      v15 = (__m128i *)v28;
      *((_QWORD *)&v51 + 1) = 0;
      v30 = v50;
      v31 = v51 - 1;
      if ( (__int64)v51 - 1 >= 0 )
      {
        do
        {
          v32 = _mm_loadu_si128(v30);
          v28 += 40;
          v30 = (const __m128i *)((char *)v30 + 40);
          *(__m128i *)(v28 - 40) = v32;
          *(__m128i *)(v28 - 24) = _mm_loadu_si128((const __m128i *)((char *)v30 - 24));
          *(_QWORD *)(v28 - 8) = v30[-1].m128i_i64[1];
          v27 = v31-- == 0;
        }
        while ( !v27 );
        v30 = v50;
      }
      qfree(v30);
      v50 = v15;
      *((_QWORD *)&v51 + 1) = v29;
      if ( !(_QWORD)v51 )
      {
LABEL_29:
        v20 = (__int64)v38;
        *v15 = _mm_load_si128(&v36);
        v21 = _mm_load_si128(&v37);
        v15[2].m128i_i64[0] = v20;
        v15[1] = v21;
      }
      goto LABEL_24;
    }
    goto LABEL_22;
  }
LABEL_6:
  v52 = a3;
  v53 = 0;
  qmemcpy(v41, a2, sizeof(v41));
  v39 = off_315D8;
  v55 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v43 = 0;
  v54 = 0;
  v57 = 0;
  if ( (unsigned __int8)match_jpt(
                          &v39,
                          a2 + 45,
                          v10,
                          0,
                          v6,
                          v7,
                          *(_QWORD *)v33,
                          *(_QWORD *)&v33[8],
                          *(_QWORD *)&v33[16],
                          v34)
    && (v13 = check_flat_jump_table(a1, a2[2], 1, 0.0)) != 0 )
  {
    sub_19680((__int64)&v39);
  }
  else
  {
    v13 = 0;
  }
  v39 = off_315D8;
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  v39 = off_34C40;
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  return v13;
}
