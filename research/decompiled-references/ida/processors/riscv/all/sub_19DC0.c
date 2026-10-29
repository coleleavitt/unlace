__int64 __fastcall sub_19DC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // r14d
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __m128i si128; // xmm1
  __int64 v11; // rdi
  _BYTE *v12; // rdx
  bool v13; // zf
  bool v14; // cc
  __int64 v15; // rsi
  __m128i *v16; // r14
  __int64 v17; // rax
  _BYTE *v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // r15
  const __m128i *v25; // rdi
  __int64 v26; // rdx
  __m128i v27; // xmm0
  bool v28; // cf
  __int64 v29; // rax
  const __m128i *v30; // rdi
  __int64 v31; // r15
  const __m128i *v32; // rdx
  __int64 v33; // rcx
  __m128i v34; // xmm0
  _BYTE v35[24]; // [rsp+0h] [rbp-468h] BYREF
  __int64 v36; // [rsp+18h] [rbp-450h]
  _BYTE *v37; // [rsp+20h] [rbp-448h]
  __m128i v38; // [rsp+30h] [rbp-438h] BYREF
  __m128i v39; // [rsp+40h] [rbp-428h] BYREF
  _BYTE *v40; // [rsp+50h] [rbp-418h]
  __int64 (__fastcall **v41)(); // [rsp+60h] [rbp-408h] BYREF
  char v42; // [rsp+68h] [rbp-400h]
  _BYTE v43[360]; // [rsp+70h] [rbp-3F8h] BYREF
  _QWORD v44[19]; // [rsp+1D8h] [rbp-290h] BYREF
  int v45; // [rsp+270h] [rbp-1F8h]
  char v46; // [rsp+379h] [rbp-EFh]
  void *v47; // [rsp+388h] [rbp-E0h]
  __int64 v48; // [rsp+390h] [rbp-D8h]
  __int128 v49; // [rsp+398h] [rbp-D0h]
  __int64 v50; // [rsp+3A8h] [rbp-C0h]
  __int128 v51; // [rsp+3B0h] [rbp-B8h]
  const __m128i *v52; // [rsp+3C0h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+3C8h] [rbp-A0h]
  __int64 v54; // [rsp+3D8h] [rbp-90h]
  __int64 v55; // [rsp+3E0h] [rbp-88h]
  __int128 v56; // [rsp+3E8h] [rbp-80h]
  char v57; // [rsp+3F8h] [rbp-70h]
  __int64 v58; // [rsp+400h] [rbp-68h]
  __int128 v59; // [rsp+408h] [rbp-60h]
  char v60; // [rsp+418h] [rbp-50h]
  __int64 v61; // [rsp+420h] [rbp-48h]
  unsigned __int64 v62; // [rsp+428h] [rbp-40h]

  v3 = 0;
  v62 = __readfsqword(0x28u);
  if ( (unsigned int)get_auto_state() != 40 )
    return v3;
  v42 = 1;
  v7 = &v43[40];
  v41 = off_34C40;
  *(_QWORD *)&v43[24] = 0;
  *(_QWORD *)&v43[32] = 0;
  memset(v43, 255, 24);
  do
  {
    v8 = 0;
    v9 = 0;
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( v44 != v7 );
  v44[0] = a1;
  v45 = -1;
  v46 = 0;
  v47 = &unk_2B050;
  v48 = 0;
  v50 = 0;
  v52 = nullptr;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  if ( !a1 )
  {
    memset(v35, 0, sizeof(v35));
    v16 = nullptr;
    v12 = v35;
    v17 = *((_QWORD *)&v53 + 1);
    v36 = 0;
    LODWORD(v37) = 0;
    goto LABEL_23;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_2B110);
  v11 = *(_QWORD *)(a1 + 96);
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
  if ( !v11 )
  {
    *(_QWORD *)v35 = 0;
    v36 = 0;
    LODWORD(v37) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v35[8] = 0;
    goto LABEL_29;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree(v11);
  v13 = (_QWORD)v53 == 1;
  v14 = (unsigned __int64)v53 <= 1;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v13 )
    goto LABEL_8;
  memset(v35, 0, sizeof(v35));
  v36 = 0;
  LODWORD(v37) = 0;
  if ( v14 )
  {
LABEL_29:
    v16 = (__m128i *)v52;
    v17 = *((_QWORD *)&v53 + 1);
    v12 = v35;
    if ( v35 < (_BYTE *)v52 )
    {
LABEL_24:
      if ( v17 )
        goto LABEL_25;
      v23 = qvector_reserve(&v52, 0, 1, 40);
      v24 = *((_QWORD *)&v53 + 1);
      v16 = (__m128i *)v23;
      *((_QWORD *)&v53 + 1) = 0;
      v25 = v52;
      v26 = v53 - 1;
      if ( (__int64)v53 - 1 >= 0 )
      {
        do
        {
          v27 = _mm_loadu_si128(v25);
          v23 += 40;
          v25 = (const __m128i *)((char *)v25 + 40);
          *(__m128i *)(v23 - 40) = v27;
          *(__m128i *)(v23 - 24) = _mm_loadu_si128((const __m128i *)((char *)v25 - 24));
          *(_QWORD *)(v23 - 8) = v25[-1].m128i_i64[1];
          v28 = v26-- == 0;
        }
        while ( !v28 );
        v25 = v52;
      }
      qfree(v25);
      v52 = v16;
      *((_QWORD *)&v53 + 1) = v24;
      if ( !(_QWORD)v53 )
      {
LABEL_25:
        v18 = v37;
        *v16 = _mm_load_si128((const __m128i *)v35);
        v19 = _mm_load_si128((const __m128i *)&v35[16]);
        v16[2].m128i_i64[0] = (__int64)v18;
        v16[1] = v19;
      }
      goto LABEL_26;
    }
LABEL_23:
    if ( v35 < &v16->m128i_i8[40 * v17] )
    {
      v12 = v37;
      v38 = _mm_load_si128((const __m128i *)v35);
      v20 = _mm_load_si128((const __m128i *)&v35[16]);
      v40 = v37;
      v39 = v20;
      if ( v17 )
        goto LABEL_32;
      v29 = qvector_reserve(&v52, 0, 1, 40);
      v30 = v52;
      v16 = (__m128i *)v29;
      v31 = *((_QWORD *)&v53 + 1);
      *((_QWORD *)&v53 + 1) = 0;
      v32 = v52;
      v33 = v53 - 1;
      if ( (__int64)v53 - 1 >= 0 )
      {
        do
        {
          v34 = _mm_loadu_si128(v32);
          v29 += 40;
          v32 = (const __m128i *)((char *)v32 + 40);
          *(__m128i *)(v29 - 40) = v34;
          *(__m128i *)(v29 - 24) = _mm_loadu_si128((const __m128i *)((char *)v32 - 24));
          *(_QWORD *)(v29 - 8) = v32[-1].m128i_i64[1];
          v28 = v33-- == 0;
        }
        while ( !v28 );
        v30 = v52;
      }
      qfree(v30);
      v52 = v16;
      *((_QWORD *)&v53 + 1) = v31;
      if ( !(_QWORD)v53 )
      {
LABEL_32:
        v21 = (__int64)v40;
        *v16 = _mm_load_si128(&v38);
        v22 = _mm_load_si128(&v39);
        v16[2].m128i_i64[0] = v21;
        v16[1] = v22;
      }
      goto LABEL_26;
    }
    goto LABEL_24;
  }
LABEL_26:
  *(_QWORD *)&v53 = 1;
LABEL_8:
  v54 = a3;
  qmemcpy(v43, a2, sizeof(v43));
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v60 = 0;
  v61 = 0;
  v45 = 0;
  v41 = off_316A8;
  v56 = 0;
  v59 = 0;
  if ( (unsigned __int8)match_jpt(
                          &v41,
                          a2 + 45,
                          v12,
                          0,
                          v8,
                          v9,
                          *(_QWORD *)v35,
                          *(_QWORD *)&v35[8],
                          *(_QWORD *)&v35[16],
                          v36)
    && (v15 = a2[2], v44[5] = -1, (v3 = check_flat_jump_table(a1, v15, 1, 0.0)) != 0)
    && *(_WORD *)(a1 + 4) )
  {
    sub_19680((__int64)&v41);
  }
  else
  {
    v3 = 0;
  }
  v41 = off_315D8;
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  v41 = off_34C40;
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
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
  return v3;
}

