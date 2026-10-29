__int64 __fastcall sub_43410(__int64 a1, _QWORD *a2, __int64 a3, __m128i *a4, __int64 a5, __int64 a6)
{
  _QWORD *v11; // r12
  __int64 v12; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  void *v18; // rax
  const void *v19; // rsi
  void *v20; // r14
  __int64 v21; // rdi
  __m128i v22; // xmm3
  __int64 v23; // r14
  int v24; // r13d
  __int64 v25; // r15
  __int128 v26; // kr00_16
  __m128i v27; // xmm0
  _QWORD *v28; // r12
  _QWORD *v29; // r13
  _QWORD *v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128i v34; // xmm0
  __m128i *v35; // rax
  __m128i *v36; // r14
  __int64 *v37; // r12
  __m128i si128; // xmm0
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  _QWORD *v50; // r15
  __int16 v51; // ax
  unsigned __int64 v52; // rdx
  _DWORD *v53; // rsi
  unsigned __int8 v54; // al
  _QWORD *v55; // r8
  _DWORD *v56; // rsi
  bool v57; // cc
  char v58; // r13
  int v59; // eax
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rdi
  __int64 v65; // r14
  __int64 v66; // r13
  _QWORD *v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // eax
  _QWORD *v74; // [rsp+8h] [rbp-100h]
  __m128i v75; // [rsp+10h] [rbp-F8h] BYREF
  __int64 *v76; // [rsp+20h] [rbp-E8h]
  __int64 *v77; // [rsp+28h] [rbp-E0h]
  size_t n; // [rsp+30h] [rbp-D8h]
  __int64 *v79; // [rsp+38h] [rbp-D0h]
  char v80; // [rsp+43h] [rbp-C5h] BYREF
  int v81; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v82; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v83; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v84; // [rsp+58h] [rbp-B0h]
  __int64 v85; // [rsp+70h] [rbp-98h] BYREF
  __int128 v86; // [rsp+78h] [rbp-90h]
  _BYTE v87[24]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v88; // [rsp+A8h] [rbp-60h]
  __int64 v89; // [rsp+B8h] [rbp-50h]
  int v90; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+C8h] [rbp-40h]

  v91 = __readfsqword(0x28u);
  v82 = 0;
  v76 = &v82;
  sub_31860((__int64)&v82, &v80, a4);
  if ( !v80 )
    goto LABEL_6;
  if ( (a4[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || a4[14].m128i_i64[0] == -1 )
  {
    if ( under_debugger )
      BUG();
    interr(30478);
LABEL_6:
    v11 = (_QWORD *)sub_59FF0(a3 + 24, a4, 1);
    if ( (unsigned __int16)sub_97BF0(a4) != 36
      || (v14 = a4->m128i_i64[0],
          *(_QWORD *)v87 = 0,
          v87[8] = 0,
          v85 = 0,
          LODWORD(v83) = 0,
          v15 = *(_QWORD *)(v14 + 24),
          v16 = a4[16].m128i_i64[0],
          v79 = &v85,
          v77 = &v83,
          (*(unsigned int (__fastcall **)(__int64, __int64))(v16 + 112))(v15, 62))
      || !(_DWORD)v83
      || !(unsigned __int8)sub_96EC0(a4, v87, 62)
      || *(_QWORD *)v87 != 3 )
    {
      if ( (unsigned __int16)sub_97BF0(a4) != 36
        || (v44 = a4->m128i_i64[0],
            *(_QWORD *)v87 = 0,
            v87[8] = 0,
            v85 = 0,
            LODWORD(v83) = 0,
            v45 = *(_QWORD *)(v44 + 24),
            v46 = a4[16].m128i_i64[0],
            v79 = &v85,
            v77 = &v83,
            (*(unsigned int (__fastcall **)(__int64, __int64))(v46 + 112))(v45, 62))
        || !(_DWORD)v83
        || !(unsigned __int8)sub_96EC0(a4, v87, 62)
        || *(_QWORD *)v87 != 15 )
      {
        v12 = v82;
        v82 = v11[48];
        v11[48] = v12;
LABEL_9:
        *(_DWORD *)(a1 + 20) = 0;
        *(_OWORD *)(a1 + 4) = 0;
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v11;
        goto LABEL_10;
      }
    }
    if ( *(_QWORD *)(a6 + 8) > 1u )
      sub_57430(v11, a6);
    v17 = *(_QWORD *)(a5 + 8);
    if ( v17 )
    {
      n = 16 * v17;
      v18 = (void *)qalloc_or_throw(16 * v17);
      v19 = *(const void **)a5;
      v20 = v18;
      v75 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
      memcpy(v18, v19, 16 * v17);
      v21 = v11[36];
      if ( v21 )
      {
        v11[37] = 0;
        qfree(v21);
      }
      v22 = _mm_load_si128(&v75);
      v11[36] = v20;
      *(__m128i *)(v11 + 37) = v22;
    }
    memset(v87, 0, sizeof(v87));
    v89 = 0;
    v90 = 1;
    v88 = 0;
    if ( (unsigned __int16)sub_97BF0(a4) == 36 )
    {
      v47 = a4->m128i_i64[0];
      LOBYTE(v86) = 0;
      v85 = 0;
      v83 = 0;
      v48 = *(_QWORD *)(v47 + 24);
      v49 = a4[16].m128i_i64[0];
      v81 = 0;
      if ( !(*(unsigned int (__fastcall **)(__int64, __int64, int *, __int64 *))(v49 + 112))(v48, 62, &v81, v77)
        && v81
        && (unsigned __int8)sub_96EC0(a4, v79, 62)
        && v85 == 3 )
      {
        if ( (unsigned __int64)sub_97A10(a4) > 0x20 )
          v23 = 32;
        else
          v23 = sub_97A10(a4);
        *(_QWORD *)&v88 = v23;
        sub_33330(v87, 2u);
        v50 = *(_QWORD **)v87;
        **(_QWORD **)v87 = 0;
        v50[1] = (4 * v88) & 0xFFFFFFFFFFFFFFF8LL;
        v51 = getinf(66);
        v52 = (8 * v51) & 0x7F8;
        if ( v52 < v50[1] && (_BYTE)v51 )
          v50[1] = v52;
        v53 = (_DWORD *)v50[2];
        if ( v50[4] <= 4u )
        {
          v70 = qvector_reserve(v50 + 2, v53, 5, 1);
          v50[2] = v70;
          v53 = (_DWORD *)v70;
        }
        v50[3] = 5;
        *v53 = 1818322290;
        *(_BYTE *)(v50[2] + 4LL) = 0;
        v54 = sub_28090((unsigned __int64)v88 >> 1);
        if ( v54 != 0xFF )
        {
          create_tinfo(v50 + 8, v54 | 9u, 7, 0);
          v55 = *(_QWORD **)v87;
          v56 = *(_DWORD **)(*(_QWORD *)v87 + 160LL);
          v57 = *(_QWORD *)(*(_QWORD *)v87 + 176LL) <= 4u;
          *(_QWORD *)(*(_QWORD *)v87 + 144LL) = (4 * v88) & 0xFFFFFFFFFFFFFFF8LL;
          v55[19] = v50[1];
          if ( v57 )
          {
            v75.m128i_i64[0] = (__int64)v55;
            v72 = qvector_reserve(v55 + 20, v56, 5, 1);
            v55 = (_QWORD *)v75.m128i_i64[0];
            v56 = (_DWORD *)v72;
            *(_QWORD *)(v75.m128i_i64[0] + 160) = v72;
          }
          v55[21] = 5;
          *v56 = 1734438249;
          *(_BYTE *)(v55[20] + 4LL) = 0;
          copy_tinfo_t(v55 + 26, v50 + 8);
          goto LABEL_61;
        }
LABEL_66:
        if ( (debug & 0x400000) != 0 )
        {
          v59 = sub_81C40(a4);
          sub_88B80(
            (unsigned int)"Couldn't build complex/decimal float @ %s. Turning into dummy.\n",
            v59,
            v60,
            v61,
            v62,
            v63);
        }
        sub_59200(v11 + 48, 13, "data", v23);
LABEL_69:
        v64 = *(_QWORD *)v87;
        if ( *(_QWORD *)v87 )
        {
          v65 = *(_QWORD *)&v87[8];
          if ( *(_QWORD *)&v87[8] )
          {
            v66 = 0;
            do
            {
              v67 = (_QWORD *)(v64 + 144 * v66);
              clear_tinfo_t(v67 + 8);
              v68 = v67[5];
              if ( v68 )
              {
                v67[6] = 0;
                qfree(v68);
              }
              v69 = v67[2];
              if ( v69 )
              {
                v67[3] = 0;
                qfree(v69);
              }
              ++v66;
              v64 = *(_QWORD *)v87;
            }
            while ( v65 != v66 );
          }
          *(_QWORD *)&v87[8] = 0;
          qfree(v64);
        }
        goto LABEL_9;
      }
    }
    if ( (unsigned __int64)sub_97A10(a4) <= 0x10 )
    {
      v71 = sub_97A10(a4);
      *(_QWORD *)&v88 = v71;
      v23 = v71;
      if ( !v71 || (v71 & 3) != 0 )
        goto LABEL_66;
      v75.m128i_i64[0] = v71 >> 2;
    }
    else
    {
      v75.m128i_i64[0] = 4;
      v23 = 16;
      *(_QWORD *)&v88 = 16;
    }
    v24 = 0;
    do
    {
      v26 = *(_OWORD *)v87;
      if ( *(_QWORD *)&v87[16] < (unsigned __int64)(*(_QWORD *)&v87[8] + 1LL) )
      {
        *(_QWORD *)v87 = qvector_reserve(v87, *(_QWORD *)v87, *(_QWORD *)&v87[8] + 1LL, 144);
        v26 = *(_OWORD *)v87;
      }
      v25 = v26 + 144LL * *((_QWORD *)&v26 + 1);
      *(_OWORD *)v25 = 0;
      *(_QWORD *)(v25 + 112) = 1;
      *(_QWORD *)(v25 + 16) = 0;
      *(_QWORD *)(v25 + 40) = 0;
      *(_DWORD *)(v25 + 120) = -1;
      *(_QWORD *)(v25 + 128) = 0;
      *(_BYTE *)(v25 + 136) = 0;
      *(_OWORD *)(v25 + 24) = 0;
      *(_OWORD *)(v25 + 48) = 0;
      *(_OWORD *)(v25 + 64) = 0;
      ++*(_QWORD *)&v87[8];
      *(_QWORD *)v25 = 32LL * v24;
      *(_QWORD *)(v25 + 8) = 32;
      sub_20160((__int64 *)(v25 + 16), (__int64)"data_%d", v24);
      create_tinfo(v25 + 64, 36, 7, 0);
      ++v24;
    }
    while ( (unsigned __int64)v24 < v75.m128i_i64[0] );
LABEL_61:
    create_tinfo(v11 + 48, 13, 13, v87);
    v83 = 0;
    v85 = 0;
    v84 = 0;
    v86 = 0;
    v58 = serialize_tinfo(v77, v79, 0, v11 + 48, 262);
    if ( v85 )
    {
      *(_QWORD *)&v86 = 0;
      qfree(v85);
    }
    if ( v83 )
    {
      *(_QWORD *)&v84 = 0;
      qfree(v83);
    }
    if ( v58 )
      goto LABEL_69;
    goto LABEL_66;
  }
  v27 = _mm_loadu_si128(a4 + 14);
  v28 = (_QWORD *)a2[3];
  v29 = a2 + 2;
  v30 = a2 + 2;
  *(__m128i *)v87 = v27;
  if ( !v28 )
    goto LABEL_36;
  do
  {
    while ( 1 )
    {
      v31 = sub_849A0(v28 + 4, v87);
      v32 = v28[2];
      v33 = v28[3];
      if ( v31 < 0 )
        break;
      v30 = v28;
      v28 = (_QWORD *)v28[2];
      if ( !v32 )
        goto LABEL_33;
    }
    v28 = (_QWORD *)v28[3];
  }
  while ( v33 );
LABEL_33:
  if ( v29 == v30 || (int)sub_849A0(v87, v30 + 4) < 0 )
  {
LABEL_36:
    v35 = (__m128i *)operator new(0x38u);
    v36 = v35 + 2;
    v37 = (__int64 *)v35;
    si128 = _mm_load_si128((const __m128i *)v87);
    v35[3].m128i_i64[0] = 0;
    v35[2] = si128;
    v41 = sub_432E0(a2 + 1, v30, (__int64)v35[2].m128i_i64, v39, v40);
    v30 = (_QWORD *)v41;
    if ( v42 )
    {
      if ( v41 || v29 == v42 )
      {
        v43 = 1;
      }
      else
      {
        v74 = v42;
        v73 = sub_849A0(v36, v42 + 4);
        v42 = v74;
        v43 = v73 >> 31;
      }
      v30 = v37;
      std::_Rb_tree_insert_and_rebalance(v43, v37, v42, a2 + 2);
      ++a2[6];
    }
    else if ( v37 )
    {
      clear_tinfo_t(v37 + 6);
      operator delete(v37, 0x38u);
    }
  }
  copy_tinfo_t(v30 + 6, v76);
  v34 = _mm_load_si128((const __m128i *)v87);
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 3;
  *(__m128i *)(a1 + 8) = v34;
LABEL_10:
  clear_tinfo_t(v76);
  return a1;
}

