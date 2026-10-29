__int64 __fastcall sub_D040(__int64 a1, const void *a2, __int64 a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdi
  __m128i si128; // xmm1
  __m128i v9; // xmm1
  bool v10; // zf
  bool v11; // cc
  unsigned int v12; // r13d
  const __m128i *v14; // rdx
  unsigned __int64 v15; // r14
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rax
  const __m128i *v20; // rdx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rax
  const __m128i *v26; // rdx
  __int64 v27; // r15
  const __m128i *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __m128i v32; // xmm0
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // rsi
  const __m128i *v36; // r15
  const __m128i *v37; // rdi
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __m128i v40; // [rsp+0h] [rbp-458h] BYREF
  _BYTE v41[24]; // [rsp+10h] [rbp-448h] BYREF
  __int64 v42; // [rsp+28h] [rbp-430h]
  __int64 v43; // [rsp+30h] [rbp-428h]
  __m128i v44; // [rsp+40h] [rbp-418h] BYREF
  __m128i v45; // [rsp+50h] [rbp-408h] BYREF
  __int64 v46; // [rsp+60h] [rbp-3F8h]
  __int64 (__fastcall **v47)(); // [rsp+70h] [rbp-3E8h]
  char v48; // [rsp+78h] [rbp-3E0h]
  _BYTE v49[360]; // [rsp+80h] [rbp-3D8h] BYREF
  __int64 v50; // [rsp+1E8h] [rbp-270h] BYREF
  int v51; // [rsp+280h] [rbp-1D8h]
  char v52; // [rsp+389h] [rbp-CFh]
  void *v53; // [rsp+398h] [rbp-C0h]
  __int64 v54; // [rsp+3A0h] [rbp-B8h]
  __int128 v55; // [rsp+3A8h] [rbp-B0h]
  __int64 v56; // [rsp+3B8h] [rbp-A0h]
  __int128 v57; // [rsp+3C0h] [rbp-98h]
  const __m128i *v58; // [rsp+3D0h] [rbp-88h]
  __int128 v59; // [rsp+3D8h] [rbp-80h]
  __int64 v60; // [rsp+3E8h] [rbp-70h]
  __m128i v61; // [rsp+3F0h] [rbp-68h]
  __int128 v62; // [rsp+400h] [rbp-58h]
  int v63; // [rsp+410h] [rbp-48h]
  unsigned __int64 v64; // [rsp+418h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v47 = off_1CBA0;
  v6 = (__int64 *)&v49[40];
  v48 = 1;
  *(_QWORD *)&v49[24] = 0;
  *(_QWORD *)&v49[32] = 0;
  memset(v49, 255, 24);
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
  while ( &v50 != v6 );
  v50 = a1;
  v51 = -1;
  v52 = 0;
  v53 = &unk_146F0;
  v54 = 0;
  v56 = 0;
  v58 = nullptr;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    *(_DWORD *)a1 = 0x800000;
    si128 = _mm_load_si128((const __m128i *)&xmmword_14760);
    *(_WORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = -1;
    *(_BYTE *)(a1 + 68) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 80) = 2;
    *(_QWORD *)(a1 + 88) = -1;
    *(__m128i *)(a1 + 8) = si128;
    *(_OWORD *)(a1 + 24) = -1;
    if ( v7 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      v40 = si128;
      qfree();
      v9 = _mm_load_si128(&v40);
      v10 = (_QWORD)v59 == 4;
      v11 = (unsigned __int64)v59 <= 4;
      *(_QWORD *)(a1 + 96) = 0;
      *(_OWORD *)(a1 + 104) = 0;
      if ( v10 )
        goto LABEL_6;
      memset(v41, 0, sizeof(v41));
      v42 = 0;
      LODWORD(v43) = 0;
      if ( !v11 )
        goto LABEL_22;
    }
    else
    {
      *(_QWORD *)v41 = 0;
      v42 = 0;
      LODWORD(v43) = 0;
      *(_OWORD *)(a1 + 104) = 0;
      *(_OWORD *)&v41[8] = 0;
    }
    v14 = v58;
    v15 = *((_QWORD *)&v59 + 1);
    if ( v41 < (_BYTE *)v58 )
    {
LABEL_17:
      if ( v15 <= 3 )
      {
        v27 = qvector_reserve();
        v28 = v58;
        v29 = *((_QWORD *)&v59 + 1);
        *((_QWORD *)&v59 + 1) = v15;
        v30 = v59 - 1;
        if ( (__int64)v59 - 1 >= 0 )
        {
          v31 = v27;
          do
          {
            v32 = _mm_loadu_si128(v28);
            v31 += 40;
            v28 = (const __m128i *)((char *)v28 + 40);
            *(__m128i *)(v31 - 40) = v32;
            *(__m128i *)(v31 - 24) = _mm_loadu_si128((const __m128i *)((char *)v28 - 24));
            *(_QWORD *)(v31 - 8) = v28[-1].m128i_i64[1];
            v33 = v30-- == 0;
          }
          while ( !v33 );
        }
        v40.m128i_i64[0] = v29;
        qfree();
        v58 = (const __m128i *)v27;
        *((_QWORD *)&v59 + 1) = v40.m128i_i64[0];
      }
      if ( (unsigned __int64)v59 <= 3 )
      {
        v16 = _mm_load_si128((const __m128i *)v41);
        v17 = _mm_load_si128((const __m128i *)&v41[16]);
        v18 = v43;
        v19 = 5 * v59;
        do
        {
          v20 = v58;
          v58[2].m128i_i64[v19] = v18;
          *(__m128i *)((char *)v20 + v19 * 8) = v16;
          *(__m128i *)((char *)v20 + v19 * 8 + 16) = v17;
          v19 += 5;
        }
        while ( v19 != 20 );
      }
      v9 = _mm_load_si128((const __m128i *)&xmmword_14760);
LABEL_22:
      *(_QWORD *)&v59 = 4;
      goto LABEL_6;
    }
  }
  else
  {
    memset(v41, 0, sizeof(v41));
    v14 = nullptr;
    v15 = *((_QWORD *)&v59 + 1);
    v42 = 0;
    LODWORD(v43) = 0;
  }
  if ( v41 >= &v14->m128i_i8[40 * v15] )
    goto LABEL_17;
  v44 = _mm_load_si128((const __m128i *)v41);
  v21 = _mm_load_si128((const __m128i *)&v41[16]);
  v46 = v43;
  v45 = v21;
  if ( v15 <= 3 )
  {
    v34 = qvector_reserve();
    v35 = *((_QWORD *)&v59 + 1);
    v36 = (const __m128i *)v34;
    *((_QWORD *)&v59 + 1) = v15;
    v37 = v58;
    v38 = v59 - 1;
    if ( (__int64)v59 - 1 >= 0 )
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
    v40.m128i_i64[0] = v35;
    qfree();
    v58 = v36;
    *((_QWORD *)&v59 + 1) = v40.m128i_i64[0];
  }
  if ( (unsigned __int64)v59 <= 3 )
  {
    v22 = _mm_load_si128(&v44);
    v23 = _mm_load_si128(&v45);
    v24 = v46;
    v25 = 5 * v59;
    do
    {
      v26 = v58;
      v58[2].m128i_i64[v25] = v24;
      *(__m128i *)((char *)v26 + v25 * 8) = v22;
      *(__m128i *)((char *)v26 + v25 * 8 + 16) = v23;
      v25 += 5;
    }
    while ( v25 != 20 );
  }
  *(_QWORD *)&v59 = 4;
  v9 = _mm_load_si128((const __m128i *)&xmmword_14760);
LABEL_6:
  v60 = a3;
  qmemcpy(v49, a2, sizeof(v49));
  v63 = 0;
  v47 = off_1ADC0;
  v61 = v9;
  v62 = 0;
  v12 = 0;
  if ( (unsigned __int8)match_jpt() )
  {
    create_switch_table();
    v12 = 1;
  }
  v47 = off_1CBA0;
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  return v12;
}

