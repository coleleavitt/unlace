unsigned __int64 __fastcall sub_2CD130(_QWORD *a1, __int64 *m128i_i64, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v4; // r15
  bool v5; // zf
  unsigned __int64 v6; // rbx
  __int64 *v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __m128i *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64 *); // rax
  __int64 v22; // rbx
  __int64 j; // r14
  _QWORD *v24; // r15
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 *v29; // rbp
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rbx
  __int64 v32; // rbp
  unsigned __int64 v33; // rdi
  bool (__fastcall *v34)(__int64); // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rsi
  __int64 (__fastcall *v39)(__int64, _QWORD *); // rcx
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 (__fastcall *v48)(__int64, _QWORD *); // rcx
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // rcx
  __m128i v52; // xmm0
  __int64 v53; // r9
  unsigned __int64 v54; // rdi
  void (__fastcall *v55)(unsigned __int64, __int64 *, __int64, unsigned __int64, bool (__fastcall *)(__int64)); // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rax
  unsigned __int64 v61; // r13
  unsigned __int64 v62; // rdi
  bool (__fastcall *v63)(__int64); // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __m128i v71; // xmm0
  unsigned __int64 v72; // r13
  __int64 *v73; // r12
  unsigned __int64 v74; // rcx
  __m128i *v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 (__fastcall *v83)(__int64, __m128i *); // rcx
  __int64 v84; // rsi
  __int64 i; // rbx
  _QWORD *v86; // r13
  __int64 v87; // rdi
  __int64 v88; // r9
  __int64 v89; // rdx
  unsigned __int64 v90; // rdi
  __int64 (__fastcall *v91)(__int64, __int64 *); // rax
  __int64 v92; // rax
  __int64 v93; // r10
  __int64 v94; // rax
  __int64 v95; // r10
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 v98; // r12
  __int64 v99; // rbp
  __int64 v100; // rax
  _QWORD *v101; // rdi
  __int64 *v103; // [rsp+0h] [rbp-88h]
  __int64 v104; // [rsp+0h] [rbp-88h]
  unsigned __int64 v105; // [rsp+0h] [rbp-88h]
  __int64 v106; // [rsp+0h] [rbp-88h]
  __int64 v107; // [rsp+0h] [rbp-88h]
  __int64 *v108; // [rsp+8h] [rbp-80h]
  __int64 *v109; // [rsp+10h] [rbp-78h]
  __int64 *v110; // [rsp+10h] [rbp-78h]
  unsigned __int64 v111; // [rsp+10h] [rbp-78h]
  unsigned __int64 v112; // [rsp+10h] [rbp-78h]
  __int64 *v113; // [rsp+18h] [rbp-70h]
  __int64 v114; // [rsp+18h] [rbp-70h]
  char v115; // [rsp+20h] [rbp-68h]
  unsigned __int64 v116; // [rsp+20h] [rbp-68h]
  __int64 v117; // [rsp+30h] [rbp-58h] BYREF
  __int128 v118; // [rsp+38h] [rbp-50h]
  unsigned __int64 v119; // [rsp+48h] [rbp-40h]

  v4 = a1;
  v5 = a1[14] == 0;
  v108 = m128i_i64;
  v115 = a3;
  v119 = __readfsqword(0x28u);
  v6 = a1[12];
  if ( !v5 )
  {
    v71.m128i_i64[0] = 0;
    m128i_i64 = (__int64 *)a1[12];
    v117 = 0;
    v118 = 0;
    sub_2CCCB0(&v117, v6, a3, a4);
    v72 = 0;
    v73 = a1 + 2;
    if ( a1[1] )
    {
      do
      {
        switch_dbctx();
        v75 = (__m128i *)*v73;
        v76 = *v73 + 72 * v73[1];
        if ( *v73 != v76 )
        {
          do
          {
            while ( 1 )
            {
              v82 = v117 + (v75[4].m128i_i64[0] << 6);
              v83 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v82 + 8LL);
              if ( (char *)v83 != (char *)sub_2AD070 )
                break;
              v77 = v75->m128i_i64[1];
              v78 = *(_QWORD *)(v82 + 8);
              v75 = (__m128i *)((char *)v75 + 72);
              *(_QWORD *)(v82 + 8) = v77;
              v79 = v75[-4].m128i_i64[1];
              v75[-4].m128i_i64[0] = v78;
              v80 = *(_QWORD *)(v82 + 16);
              *(_QWORD *)(v82 + 16) = v79;
              v71 = _mm_loadu_si128((const __m128i *)(v82 + 24));
              *(_QWORD *)(v82 + 24) = v75[-3].m128i_i64[0];
              *(_QWORD *)(v82 + 32) = v75[-3].m128i_i64[1];
              v81 = v75[-2].m128i_i64[0];
              v75[-4].m128i_i64[1] = v80;
              v75[-3] = v71;
              v74 = *(_QWORD *)(v82 + 40);
              *(_QWORD *)(v82 + 40) = v81;
              v75[-2].m128i_i64[0] = v74;
              if ( (__m128i *)v76 == v75 )
                goto LABEL_52;
            }
            v104 = v76;
            v83(v82, v75);
            v76 = v104;
            v75 = (__m128i *)((char *)v75 + 72);
          }
          while ( (__m128i *)v104 != v75 );
LABEL_52:
          v76 = *v73;
        }
        if ( v76 )
        {
          v84 = v73[1];
          if ( v84 )
          {
            v105 = v72;
            v111 = v6;
            for ( i = 0; i != v84; ++i )
            {
              v86 = (_QWORD *)(v76 + 72 * i);
              *v86 = off_4E14B0;
              clear_tinfo_t();
              v87 = v86[2];
              if ( v87 )
              {
                v86[3] = 0;
                qfree(v87);
              }
              v76 = *v73;
            }
            v72 = v105;
            v6 = v111;
          }
          v73[1] = 0;
          qfree(v76);
          *v73 = 0;
          v73[2] = 0;
        }
        m128i_i64 = (__int64 *)(v6 - v4[14]);
        v106 = v108[v72];
        sub_2CCCB0((__int64 *)(v106 + 40), (unsigned __int64)m128i_i64, v76, v74);
        v88 = v106;
        if ( v6 )
        {
          v89 = 0;
          a4 = 0;
          do
          {
            if ( *(_DWORD *)(v4[11] + 4 * v89) )
            {
              v90 = *(_QWORD *)(v88 + 40) + (a4 << 6);
              m128i_i64 = (__int64 *)(v117 + (v89 << 6));
              v91 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v90 + 8LL);
              if ( v91 == sub_2AD070 )
              {
                v92 = *(_QWORD *)(v90 + 8);
                *(_QWORD *)(v90 + 8) = m128i_i64[1];
                v93 = m128i_i64[2];
                m128i_i64[1] = v92;
                v94 = *(_QWORD *)(v90 + 16);
                *(_QWORD *)(v90 + 16) = v93;
                v71 = _mm_loadu_si128((const __m128i *)(v90 + 24));
                *(_QWORD *)(v90 + 24) = m128i_i64[3];
                *(_QWORD *)(v90 + 32) = m128i_i64[4];
                v95 = m128i_i64[5];
                m128i_i64[2] = v94;
                *(__m128i *)(m128i_i64 + 3) = v71;
                v96 = *(_QWORD *)(v90 + 40);
                *(_QWORD *)(v90 + 40) = v95;
                m128i_i64[5] = v96;
              }
              else
              {
                v114 = v89;
                v112 = a4;
                v107 = v88;
                v91(v90, m128i_i64);
                v88 = v107;
                a4 = v112;
                v89 = v114;
              }
              ++a4;
            }
            ++v89;
          }
          while ( v89 != v6 );
        }
        else
        {
          a4 = 0;
        }
        if ( a4 != *(_QWORD *)(v88 + 48) )
        {
          if ( !under_debugger )
            sub_383060(0x7AAu, *(double *)v71.m128i_i64);
          BUG();
        }
        ++v72;
        v73 += 3;
      }
      while ( v72 < v4[1] );
    }
    v97 = v117;
    if ( v117 )
    {
      v98 = v118;
      if ( (_QWORD)v118 )
      {
        v99 = 0;
        do
        {
          v100 = v99++;
          v101 = (_QWORD *)((v100 << 6) + v97);
          *v101 = off_4E14B0;
          sub_2B5160(v101 + 2);
          v97 = v117;
        }
        while ( v98 != v99 );
      }
      *(_QWORD *)&v118 = 0;
      qfree(v97);
    }
LABEL_19:
    if ( v115 )
    {
      v103 = nullptr;
      v26 = *v108;
      v27 = v108[1];
      v28 = *v108 + 40;
      v29 = (__int64 *)(v27 + 40);
      v110 = (__int64 *)v28;
      if ( v4[1] > 2u )
        v103 = (__int64 *)(v108[2] + 40);
      goto LABEL_22;
    }
    return v119 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v109 = (__int64 *)a1[12];
    v7 = a1 + 2;
    v8 = 0;
    do
    {
      switch_dbctx();
      v9 = v108[v8];
      m128i_i64 = v109;
      sub_2CCCB0((__int64 *)(v9 + 40), (unsigned __int64)v109, v10, v11);
      v12 = (__m128i *)*v7;
      v13 = *v7 + 72 * v7[1];
      if ( *v7 != v13 )
      {
        do
        {
          while ( 1 )
          {
            v20 = *(_QWORD *)(v9 + 40) + (v12[4].m128i_i64[0] << 6);
            v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 8LL);
            if ( v21 != sub_2AD070 )
              break;
            v14 = v12->m128i_i64[1];
            v15 = *(_QWORD *)(v20 + 8);
            v12 = (__m128i *)((char *)v12 + 72);
            *(_QWORD *)(v20 + 8) = v14;
            v16 = v12[-4].m128i_i64[1];
            v12[-4].m128i_i64[0] = v15;
            v17 = *(_QWORD *)(v20 + 16);
            *(_QWORD *)(v20 + 16) = v16;
            v18 = _mm_loadu_si128((const __m128i *)(v20 + 24));
            *(_QWORD *)(v20 + 24) = v12[-3].m128i_i64[0];
            *(_QWORD *)(v20 + 32) = v12[-3].m128i_i64[1];
            m128i_i64 = (__int64 *)v12[-2].m128i_i64[0];
            v12[-4].m128i_i64[1] = v17;
            v12[-3] = v18;
            v19 = *(_QWORD *)(v20 + 40);
            *(_QWORD *)(v20 + 40) = m128i_i64;
            v12[-2].m128i_i64[0] = v19;
            if ( v12 == (__m128i *)v13 )
              goto LABEL_9;
          }
          m128i_i64 = (__int64 *)v12;
          v12 = (__m128i *)((char *)v12 + 72);
          v21(v20, m128i_i64);
        }
        while ( v12 != (__m128i *)v13 );
LABEL_9:
        v13 = *v7;
      }
      if ( v13 )
      {
        v22 = v7[1];
        if ( v22 )
        {
          for ( j = 0; j != v22; ++j )
          {
            v24 = (_QWORD *)(v13 + 72 * j);
            *v24 = off_4E14B0;
            clear_tinfo_t();
            v25 = v24[2];
            if ( v25 )
            {
              v24[3] = 0;
              qfree(v25);
            }
            v13 = *v7;
          }
        }
        v7[1] = 0;
        qfree(v13);
        *v7 = 0;
        v7[2] = 0;
      }
      ++v8;
      v7 += 3;
    }
    while ( v8 < a1[1] );
    v4 = a1;
    goto LABEL_19;
  }
  if ( !(_BYTE)a3 )
    return v119 - __readfsqword(0x28u);
  v103 = nullptr;
  v26 = *m128i_i64;
  v27 = m128i_i64[1];
  v28 = *m128i_i64 + 40;
  v29 = (__int64 *)(v27 + 40);
  v110 = (__int64 *)v28;
LABEL_22:
  v30 = *(_QWORD *)(v26 + 48);
  if ( !v30 )
    goto LABEL_42;
  v113 = v29;
  v31 = 0;
  v30 = 0;
  v32 = v27;
  do
  {
    v61 = v31 << 6;
    v62 = (v31 << 6) + *(_QWORD *)(v26 + 40);
    v63 = **(bool (__fastcall ***)(__int64))v62;
    if ( v63 == sub_2AD1C0 )
    {
      if ( *(_QWORD *)(v62 + 8) != *(_QWORD *)(v62 + 48) )
        goto LABEL_27;
    }
    else if ( ((unsigned __int8 (__fastcall *)(unsigned __int64, __int64 *, __int64, unsigned __int64, bool (__fastcall *)(__int64)))v63)(
                v62,
                m128i_i64,
                v28,
                a4,
                sub_2AD1C0) )
    {
      goto LABEL_27;
    }
    v33 = v61 + *(_QWORD *)(v32 + 40);
    v34 = **(bool (__fastcall ***)(__int64))v33;
    if ( v34 == sub_2AD1C0 )
    {
      if ( *(_QWORD *)(v33 + 8) == *(_QWORD *)(v33 + 48) )
        goto LABEL_36;
    }
    else if ( !((unsigned __int8 (__fastcall *)(unsigned __int64, __int64 *, __int64, unsigned __int64, bool (__fastcall *)(__int64)))v34)(
                 v33,
                 m128i_i64,
                 v28,
                 a4,
                 sub_2AD1C0) )
    {
      goto LABEL_36;
    }
LABEL_27:
    if ( v30 < v31 )
    {
      v35 = *(_QWORD *)(v26 + 40);
      v36 = v30 << 6;
      v37 = v35 + (v30 << 6);
      v38 = (_QWORD *)(v61 + v35);
      v39 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v37 + 8LL);
      if ( v39 == sub_2AD070 )
      {
        v40 = *(_QWORD *)(v37 + 8);
        *(_QWORD *)(v37 + 8) = v38[1];
        v41 = v38[2];
        v38[1] = v40;
        v42 = *(_QWORD *)(v37 + 16);
        *(_QWORD *)(v37 + 16) = v41;
        v43 = _mm_loadu_si128((const __m128i *)(v37 + 24));
        *(_QWORD *)(v37 + 24) = v38[3];
        *(_QWORD *)(v37 + 32) = v38[4];
        v44 = v38[5];
        v38[2] = v42;
        *(__m128i *)(v38 + 3) = v43;
        v45 = *(_QWORD *)(v37 + 40);
        *(_QWORD *)(v37 + 40) = v44;
        v38[5] = v45;
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64 (__fastcall *)(__int64, _QWORD *), bool (__fastcall *)(__int64)))v39)(
          v37,
          v38,
          v28,
          v39,
          sub_2AD1C0);
        v36 = v30 << 6;
      }
      v46 = *(_QWORD *)(v32 + 40);
      v47 = v46 + v36;
      m128i_i64 = (__int64 *)(v61 + v46);
      v48 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v47 + 8LL);
      if ( v48 == sub_2AD070 )
      {
        v49 = *(_QWORD *)(v47 + 8);
        *(_QWORD *)(v47 + 8) = m128i_i64[1];
        v50 = m128i_i64[2];
        m128i_i64[1] = v49;
        v51 = *(_QWORD *)(v47 + 16);
        *(_QWORD *)(v47 + 16) = v50;
        v52 = _mm_loadu_si128((const __m128i *)(v47 + 24));
        *(_QWORD *)(v47 + 24) = m128i_i64[3];
        *(_QWORD *)(v47 + 32) = m128i_i64[4];
        v53 = m128i_i64[5];
        m128i_i64[2] = v51;
        *(__m128i *)(m128i_i64 + 3) = v52;
        a4 = *(_QWORD *)(v47 + 40);
        *(_QWORD *)(v47 + 40) = v53;
        m128i_i64[5] = a4;
      }
      else
      {
        v116 = v36;
        ((void (__fastcall *)(__int64, __int64 *, __int64, __int64 (__fastcall *)(__int64, _QWORD *), bool (__fastcall *)(__int64)))v48)(
          v47,
          m128i_i64,
          v28,
          v48,
          sub_2AD1C0);
        v36 = v116;
      }
      if ( v103 )
      {
        v54 = *v103 + v36;
        m128i_i64 = (__int64 *)(v61 + *v103);
        v55 = *(void (__fastcall **)(unsigned __int64, __int64 *, __int64, unsigned __int64, bool (__fastcall *)(__int64)))(*(_QWORD *)v54 + 8LL);
        if ( (char *)v55 == (char *)sub_2AD070 )
        {
          v56 = *(_QWORD *)(v54 + 8);
          *(_QWORD *)(v54 + 8) = m128i_i64[1];
          v57 = m128i_i64[2];
          m128i_i64[1] = v56;
          v58 = *(_QWORD *)(v54 + 16);
          *(_QWORD *)(v54 + 16) = v57;
          v59 = _mm_loadu_si128((const __m128i *)(v54 + 24));
          *(_QWORD *)(v54 + 24) = m128i_i64[3];
          *(_QWORD *)(v54 + 32) = m128i_i64[4];
          a4 = m128i_i64[5];
          m128i_i64[2] = v58;
          *(__m128i *)(m128i_i64 + 3) = v59;
          v60 = *(_QWORD *)(v54 + 40);
          *(_QWORD *)(v54 + 40) = a4;
          m128i_i64[5] = v60;
        }
        else
        {
          v55(v54, m128i_i64, v28, a4, sub_2AD1C0);
        }
      }
    }
    ++v30;
LABEL_36:
    ++v31;
  }
  while ( v31 < *(_QWORD *)(v26 + 48) );
  v29 = v113;
LABEL_42:
  switch_dbctx();
  sub_2CCCB0(v110, v30, v65, v66);
  switch_dbctx();
  sub_2CCCB0(v29, v30, v67, v68);
  if ( !v103 )
    return v119 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2CCCB0(v103, v30, v69, v70);
}

