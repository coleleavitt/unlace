__int64 __fastcall sub_3BA80(__int64 a1, char *a2, __int64 a3)
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
  __int64 v16; // rdx
  unsigned int v17; // ebp
  unsigned __int64 v19; // r14
  __m128i v20; // xmm1
  __int64 v21; // rcx
  __int64 j; // rax
  __m128i v23; // xmm1
  __int64 v24; // rcx
  __int64 i; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r15
  const __m128i *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __m128i v32; // xmm0
  bool v33; // cf
  __int64 v34; // rax
  __int64 v35; // rsi
  const __m128i *v36; // r15
  const __m128i *v37; // rdi
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // [rsp+0h] [rbp-470h]
  _BYTE v41[24]; // [rsp+8h] [rbp-468h] BYREF
  __int64 v42; // [rsp+20h] [rbp-450h]
  __int64 v43; // [rsp+28h] [rbp-448h]
  __m128i si128; // [rsp+38h] [rbp-438h] BYREF
  __m128i v45; // [rsp+48h] [rbp-428h] BYREF
  __int64 v46; // [rsp+58h] [rbp-418h]
  __int64 (__fastcall **v47)(); // [rsp+68h] [rbp-408h] BYREF
  char v48; // [rsp+70h] [rbp-400h]
  _BYTE v49[360]; // [rsp+78h] [rbp-3F8h] BYREF
  _QWORD v50[19]; // [rsp+1E0h] [rbp-290h] BYREF
  int v51; // [rsp+278h] [rbp-1F8h]
  char v52; // [rsp+381h] [rbp-EFh]
  void *v53; // [rsp+390h] [rbp-E0h]
  __int64 v54; // [rsp+398h] [rbp-D8h]
  __int128 v55; // [rsp+3A0h] [rbp-D0h]
  __int64 v56; // [rsp+3B0h] [rbp-C0h]
  __int128 v57; // [rsp+3B8h] [rbp-B8h]
  const __m128i *v58; // [rsp+3C8h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+3D0h] [rbp-A0h]
  __int64 v60; // [rsp+3E0h] [rbp-90h]
  __int64 v61; // [rsp+3E8h] [rbp-88h]
  char v62; // [rsp+3F0h] [rbp-80h]
  __int64 v63; // [rsp+3F8h] [rbp-78h]
  int v64; // [rsp+400h] [rbp-70h]
  __int64 v65; // [rsp+408h] [rbp-68h]
  int v66; // [rsp+410h] [rbp-60h]
  __int64 v67; // [rsp+418h] [rbp-58h]
  int v68; // [rsp+420h] [rbp-50h]
  char v69; // [rsp+424h] [rbp-4Ch]
  unsigned __int64 v70; // [rsp+430h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v47 = off_94B90;
  v6 = &v49[40];
  v48 = 1;
  *(_QWORD *)&v49[24] = 0;
  *(_QWORD *)&v49[32] = 0;
  memset(v49, 255, 24);
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
  while ( v50 != v6 );
  v50[0] = a1;
  v51 = -1;
  v52 = 0;
  v53 = &unk_7A040;
  v54 = 0;
  v56 = 0;
  v58 = nullptr;
  v55 = 0;
  v57 = 0;
  v59 = 0;
  if ( !a1 )
  {
    memset(v41, 0, sizeof(v41));
    v12 = nullptr;
    v19 = *((_QWORD *)&v59 + 1);
    v42 = 0;
    LODWORD(v43) = 0;
LABEL_27:
    v12 = (const __m128i *)((char *)v12 + 40 * v19);
    if ( v41 < (_BYTE *)v12 )
    {
      si128 = _mm_load_si128((const __m128i *)v41);
      v7 = _mm_load_si128((const __m128i *)&v41[16]);
      v46 = v43;
      v45 = v7;
      if ( v19 <= 1 )
      {
        v34 = qvector_reserve(&v58, 0, 2, 40);
        v35 = *((_QWORD *)&v59 + 1);
        v36 = (const __m128i *)v34;
        *((_QWORD *)&v59 + 1) = v19;
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
            v7 = _mm_loadu_si128((const __m128i *)((char *)v37 - 24));
            *(__m128i *)(v34 - 24) = v7;
            *(_QWORD *)(v34 - 8) = v37[-1].m128i_i64[1];
            v33 = v38-- == 0;
          }
          while ( !v33 );
          v37 = v58;
        }
        qfree(v37, v35, v38, *(double *)v7.m128i_i64);
        v58 = v36;
        *((_QWORD *)&v59 + 1) = v35;
      }
      if ( (unsigned __int64)v59 <= 1 )
      {
        v23 = _mm_load_si128(&si128);
        v7 = _mm_load_si128(&v45);
        v24 = v46;
        for ( i = 40 * v59; ; i = 40 )
        {
          v12 = v58;
          v58[2].m128i_i64[(unsigned __int64)i / 8] = v24;
          *(__m128i *)((char *)v12 + i) = v23;
          *(__m128i *)((char *)v12 + i + 16) = v7;
          if ( i )
            break;
        }
      }
      goto LABEL_25;
    }
LABEL_20:
    if ( v19 <= 1 )
    {
      v26 = 0;
      v28 = qvector_reserve(&v58, 0, 2, 40);
      v29 = v58;
      v30 = *((_QWORD *)&v59 + 1);
      *((_QWORD *)&v59 + 1) = v19;
      v31 = v59 - 1;
      if ( (__int64)v59 - 1 >= 0 )
      {
        v27 = v28;
        do
        {
          v32 = _mm_loadu_si128(v29);
          v27 += 40;
          v29 = (const __m128i *)((char *)v29 + 40);
          *(__m128i *)(v27 - 40) = v32;
          v7 = _mm_loadu_si128((const __m128i *)((char *)v29 - 24));
          *(__m128i *)(v27 - 24) = v7;
          v26 = v29[-1].m128i_i64[1];
          *(_QWORD *)(v27 - 8) = v26;
          v33 = v31-- == 0;
        }
        while ( !v33 );
        v29 = v58;
      }
      v40 = v30;
      qfree(v29, v26, v27, *(double *)v7.m128i_i64);
      v58 = (const __m128i *)v28;
      *((_QWORD *)&v59 + 1) = v40;
    }
    if ( (unsigned __int64)v59 <= 1 )
    {
      v20 = _mm_load_si128((const __m128i *)v41);
      v7 = _mm_load_si128((const __m128i *)&v41[16]);
      v21 = v43;
      for ( j = 40 * v59; ; j = 40 )
      {
        v12 = v58;
        v58[2].m128i_i64[(unsigned __int64)j / 8] = v21;
        *(__m128i *)((char *)v12 + j) = v20;
        *(__m128i *)((char *)v12 + j + 16) = v7;
        if ( j )
          break;
      }
    }
LABEL_25:
    *(_QWORD *)&v59 = 2;
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
    *(_QWORD *)v41 = 0;
    v42 = 0;
    LODWORD(v43) = 0;
    *(_OWORD *)(a1 + 104) = 0;
    *(_OWORD *)&v41[8] = 0;
    goto LABEL_19;
  }
  *(_QWORD *)(a1 + 104) = 0;
  qfree(v11, 0, v50, 0.0);
  v7.m128i_i64[0] = 0;
  v13 = (_QWORD)v59 == 2;
  v14 = (unsigned __int64)v59 <= 2;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  if ( v13 )
    goto LABEL_6;
  memset(v41, 0, sizeof(v41));
  v42 = 0;
  LODWORD(v43) = 0;
  if ( v14 )
  {
LABEL_19:
    v12 = v58;
    v19 = *((_QWORD *)&v59 + 1);
    if ( v41 < (_BYTE *)v58 )
      goto LABEL_20;
    goto LABEL_27;
  }
  *(_QWORD *)&v59 = 2;
LABEL_6:
  v60 = a3;
  v62 = 0;
  qmemcpy(v49, a2, sizeof(v49));
  v15 = (__int64)(a2 + 360);
  v61 = 0x11900000000LL;
  v63 = -1;
  v64 = -1;
  v65 = -1;
  v66 = 0;
  v67 = -1;
  v68 = -1;
  v69 = 0;
  v47 = off_84868;
  if ( (unsigned __int8)match_jpt(&v47, a2 + 360, v12, 0, v8, v9) )
  {
    v17 = v61;
    if ( (_DWORD)v61 )
    {
      *(_QWORD *)(v50[0] + 24LL) = -1;
      *(_WORD *)(v50[0] + 4LL) = v61;
      if ( v50[3] == -1 )
        *(_DWORD *)a1 &= ~0x200u;
      sub_39DE0((__int64)&v47);
      v15 = 6;
      mark_switch_insns_jpt(&v47, 6, 0);
      v17 = 1;
    }
  }
  else
  {
    v17 = 0;
  }
  v47 = off_94B90;
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58, v15, v16, *(double *)v7.m128i_i64);
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56, v15, v16, *(double *)v7.m128i_i64);
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54, v15, v16, *(double *)v7.m128i_i64);
  }
  return v17;
}

