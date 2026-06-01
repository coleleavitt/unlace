unsigned __int64 __fastcall sub_2C5DB0(_QWORD *a1, _QWORD *m128i_i64, char a3, __int64 a4)
{
  _QWORD *v4; // r15
  bool v5; // zf
  unsigned __int64 v6; // rbx
  __int64 *v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __m128i *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD *); // rax
  __int64 v20; // rbx
  __int64 j; // r14
  _QWORD *v22; // r15
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 *v26; // rbp
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rbx
  __int64 v29; // rbp
  unsigned __int64 v30; // rdi
  bool (__fastcall *v31)(__int64); // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  _QWORD *v35; // rsi
  __int64 (__fastcall *v36)(__int64, _QWORD *); // rcx
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rcx
  __m128i v40; // xmm0
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 (__fastcall *v45)(__int64, _QWORD *); // rcx
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rcx
  __m128i v49; // xmm0
  __int64 v50; // r9
  unsigned __int64 v51; // rdi
  __int64 (__fastcall *v52)(__int64, _QWORD *); // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rax
  unsigned __int64 v58; // r13
  unsigned __int64 v59; // rdi
  bool (__fastcall *v60)(__int64); // rax
  unsigned __int64 v62; // r13
  __int64 *v63; // r12
  __m128i *v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rcx
  __m128i v70; // xmm0
  __int64 v71; // rsi
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 (__fastcall *v74)(__int64, __m128i *); // rcx
  __int64 v75; // rsi
  __int64 i; // rbx
  _QWORD *v77; // r13
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rdi
  __int64 (__fastcall *v81)(__int64, _QWORD *); // rax
  __int64 v82; // rax
  __int64 v83; // r10
  __int64 v84; // rax
  __m128i v85; // xmm0
  __int64 v86; // r10
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // r12
  __int64 v90; // rbp
  __int64 v91; // rax
  _QWORD *v92; // rdi
  __int64 *v94; // [rsp+0h] [rbp-88h]
  __int64 v95; // [rsp+0h] [rbp-88h]
  unsigned __int64 v96; // [rsp+0h] [rbp-88h]
  __int64 v97; // [rsp+0h] [rbp-88h]
  __int64 v98; // [rsp+0h] [rbp-88h]
  __int64 *v99; // [rsp+8h] [rbp-80h]
  unsigned __int64 v100; // [rsp+10h] [rbp-78h]
  __int64 *v101; // [rsp+10h] [rbp-78h]
  unsigned __int64 v102; // [rsp+10h] [rbp-78h]
  __int64 v103; // [rsp+10h] [rbp-78h]
  __int64 *v104; // [rsp+18h] [rbp-70h]
  __int64 v105; // [rsp+18h] [rbp-70h]
  unsigned __int64 v107; // [rsp+20h] [rbp-68h]
  __int64 v108; // [rsp+30h] [rbp-58h] BYREF
  __int128 v109; // [rsp+38h] [rbp-50h]
  unsigned __int64 v110; // [rsp+48h] [rbp-40h]

  v4 = a1;
  v5 = a1[14] == 0;
  v99 = m128i_i64;
  v110 = __readfsqword(0x28u);
  v6 = a1[12];
  if ( !v5 )
  {
    m128i_i64 = (_QWORD *)a1[12];
    v108 = 0;
    v109 = 0;
    sub_2C5930(&v108, v6);
    v62 = 0;
    v63 = a1 + 2;
    if ( a1[1] )
    {
      do
      {
        switch_dbctx();
        v64 = (__m128i *)*v63;
        v65 = *v63 + 72 * v63[1];
        if ( *v63 != v65 )
        {
          do
          {
            while ( 1 )
            {
              v73 = v108 + (v64[4].m128i_i64[0] << 6);
              v74 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v73 + 8LL);
              if ( (char *)v74 != (char *)sub_2A5CF0 )
                break;
              v66 = v64->m128i_i64[1];
              v67 = *(_QWORD *)(v73 + 8);
              v64 = (__m128i *)((char *)v64 + 72);
              *(_QWORD *)(v73 + 8) = v66;
              v68 = v64[-4].m128i_i64[1];
              v64[-4].m128i_i64[0] = v67;
              v69 = *(_QWORD *)(v73 + 16);
              *(_QWORD *)(v73 + 16) = v68;
              v70 = _mm_loadu_si128((const __m128i *)(v73 + 24));
              *(_QWORD *)(v73 + 24) = v64[-3].m128i_i64[0];
              *(_QWORD *)(v73 + 32) = v64[-3].m128i_i64[1];
              v71 = v64[-2].m128i_i64[0];
              v64[-4].m128i_i64[1] = v69;
              v64[-3] = v70;
              v72 = *(_QWORD *)(v73 + 40);
              *(_QWORD *)(v73 + 40) = v71;
              v64[-2].m128i_i64[0] = v72;
              if ( (__m128i *)v65 == v64 )
                goto LABEL_52;
            }
            v95 = v65;
            v74(v73, v64);
            v65 = v95;
            v64 = (__m128i *)((char *)v64 + 72);
          }
          while ( (__m128i *)v95 != v64 );
LABEL_52:
          v65 = *v63;
        }
        if ( v65 )
        {
          v75 = v63[1];
          if ( v75 )
          {
            v96 = v62;
            v102 = v6;
            for ( i = 0; i != v75; ++i )
            {
              v77 = (_QWORD *)(v65 + 72 * i);
              *v77 = off_4ADCB0;
              clear_tinfo_t();
              if ( v77[2] )
              {
                v77[3] = 0;
                qfree();
              }
              v65 = *v63;
            }
            v62 = v96;
            v6 = v102;
          }
          v63[1] = 0;
          qfree();
          *v63 = 0;
          v63[2] = 0;
        }
        m128i_i64 = (_QWORD *)(v6 - v4[14]);
        v97 = v99[v62];
        sub_2C5930((__int64 *)(v97 + 40), (unsigned __int64)m128i_i64);
        v78 = v97;
        if ( v6 )
        {
          v79 = 0;
          a4 = 0;
          do
          {
            if ( *(_DWORD *)(v4[11] + 4 * v79) )
            {
              v80 = *(_QWORD *)(v78 + 40) + (a4 << 6);
              m128i_i64 = (_QWORD *)(v108 + (v79 << 6));
              v81 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v80 + 8LL);
              if ( v81 == sub_2A5CF0 )
              {
                v82 = *(_QWORD *)(v80 + 8);
                *(_QWORD *)(v80 + 8) = m128i_i64[1];
                v83 = m128i_i64[2];
                m128i_i64[1] = v82;
                v84 = *(_QWORD *)(v80 + 16);
                *(_QWORD *)(v80 + 16) = v83;
                v85 = _mm_loadu_si128((const __m128i *)(v80 + 24));
                *(_QWORD *)(v80 + 24) = m128i_i64[3];
                *(_QWORD *)(v80 + 32) = m128i_i64[4];
                v86 = m128i_i64[5];
                m128i_i64[2] = v84;
                *(__m128i *)(m128i_i64 + 3) = v85;
                v87 = *(_QWORD *)(v80 + 40);
                *(_QWORD *)(v80 + 40) = v86;
                m128i_i64[5] = v87;
              }
              else
              {
                v105 = v79;
                v103 = a4;
                v98 = v78;
                v81(v80, m128i_i64);
                v78 = v98;
                a4 = v103;
                v79 = v105;
              }
              ++a4;
            }
            ++v79;
          }
          while ( v79 != v6 );
        }
        else
        {
          a4 = 0;
        }
        if ( a4 != *(_QWORD *)(v78 + 48) )
        {
          if ( !under_debugger )
            sub_37B760(1962);
          BUG();
        }
        ++v62;
        v63 += 3;
      }
      while ( v62 < v4[1] );
    }
    v88 = v108;
    if ( v108 )
    {
      v89 = v109;
      if ( (_QWORD)v109 )
      {
        v90 = 0;
        do
        {
          v91 = v90++;
          v92 = (_QWORD *)((v91 << 6) + v88);
          *v92 = off_4ADCB0;
          sub_2ADDE0(v92 + 2);
          v88 = v108;
        }
        while ( v89 != v90 );
      }
      *(_QWORD *)&v109 = 0;
      qfree();
    }
LABEL_19:
    if ( a3 )
    {
      v94 = nullptr;
      v23 = *v99;
      v24 = v99[1];
      v25 = *v99 + 40;
      v26 = (__int64 *)(v24 + 40);
      v101 = (__int64 *)v25;
      if ( v4[1] > 2u )
        v94 = (__int64 *)(v99[2] + 40);
      goto LABEL_22;
    }
    return v110 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v100 = a1[12];
    v7 = a1 + 2;
    v8 = 0;
    do
    {
      switch_dbctx();
      v9 = v99[v8];
      m128i_i64 = (_QWORD *)v100;
      sub_2C5930((__int64 *)(v9 + 40), v100);
      v10 = (__m128i *)*v7;
      v11 = *v7 + 72 * v7[1];
      if ( *v7 != v11 )
      {
        do
        {
          while ( 1 )
          {
            v18 = *(_QWORD *)(v9 + 40) + (v10[4].m128i_i64[0] << 6);
            v19 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 8LL);
            if ( v19 != sub_2A5CF0 )
              break;
            v12 = v10->m128i_i64[1];
            v13 = *(_QWORD *)(v18 + 8);
            v10 = (__m128i *)((char *)v10 + 72);
            *(_QWORD *)(v18 + 8) = v12;
            v14 = v10[-4].m128i_i64[1];
            v10[-4].m128i_i64[0] = v13;
            v15 = *(_QWORD *)(v18 + 16);
            *(_QWORD *)(v18 + 16) = v14;
            v16 = _mm_loadu_si128((const __m128i *)(v18 + 24));
            *(_QWORD *)(v18 + 24) = v10[-3].m128i_i64[0];
            *(_QWORD *)(v18 + 32) = v10[-3].m128i_i64[1];
            m128i_i64 = (_QWORD *)v10[-2].m128i_i64[0];
            v10[-4].m128i_i64[1] = v15;
            v10[-3] = v16;
            v17 = *(_QWORD *)(v18 + 40);
            *(_QWORD *)(v18 + 40) = m128i_i64;
            v10[-2].m128i_i64[0] = v17;
            if ( v10 == (__m128i *)v11 )
              goto LABEL_9;
          }
          m128i_i64 = v10->m128i_i64;
          v10 = (__m128i *)((char *)v10 + 72);
          v19(v18, m128i_i64);
        }
        while ( v10 != (__m128i *)v11 );
LABEL_9:
        v11 = *v7;
      }
      if ( v11 )
      {
        v20 = v7[1];
        if ( v20 )
        {
          for ( j = 0; j != v20; ++j )
          {
            v22 = (_QWORD *)(v11 + 72 * j);
            *v22 = off_4ADCB0;
            clear_tinfo_t();
            if ( v22[2] )
            {
              v22[3] = 0;
              qfree();
            }
            v11 = *v7;
          }
        }
        v7[1] = 0;
        qfree();
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
  if ( !a3 )
    return v110 - __readfsqword(0x28u);
  v94 = nullptr;
  v23 = *m128i_i64;
  v24 = m128i_i64[1];
  v25 = *m128i_i64 + 40LL;
  v26 = (__int64 *)(v24 + 40);
  v101 = (__int64 *)v25;
LABEL_22:
  v27 = *(_QWORD *)(v23 + 48);
  if ( !v27 )
    goto LABEL_42;
  v104 = v26;
  v28 = 0;
  v27 = 0;
  v29 = v24;
  do
  {
    v58 = v28 << 6;
    v59 = (v28 << 6) + *(_QWORD *)(v23 + 40);
    v60 = **(bool (__fastcall ***)(__int64))v59;
    if ( v60 == sub_2A5E40 )
    {
      if ( *(_QWORD *)(v59 + 8) != *(_QWORD *)(v59 + 48) )
        goto LABEL_27;
    }
    else if ( ((unsigned __int8 (__fastcall *)(unsigned __int64, _QWORD *, __int64, __int64, bool (__fastcall *)(__int64)))v60)(
                v59,
                m128i_i64,
                v25,
                a4,
                sub_2A5E40) )
    {
      goto LABEL_27;
    }
    v30 = v58 + *(_QWORD *)(v29 + 40);
    v31 = **(bool (__fastcall ***)(__int64))v30;
    if ( v31 == sub_2A5E40 )
    {
      if ( *(_QWORD *)(v30 + 8) == *(_QWORD *)(v30 + 48) )
        goto LABEL_36;
    }
    else if ( !((unsigned __int8 (__fastcall *)(unsigned __int64, _QWORD *, __int64, __int64, bool (__fastcall *)(__int64)))v31)(
                 v30,
                 m128i_i64,
                 v25,
                 a4,
                 sub_2A5E40) )
    {
      goto LABEL_36;
    }
LABEL_27:
    if ( v27 < v28 )
    {
      v32 = *(_QWORD *)(v23 + 40);
      v33 = v27 << 6;
      v34 = v32 + (v27 << 6);
      v35 = (_QWORD *)(v58 + v32);
      v36 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v34 + 8LL);
      if ( v36 == sub_2A5CF0 )
      {
        v37 = *(_QWORD *)(v34 + 8);
        *(_QWORD *)(v34 + 8) = v35[1];
        v38 = v35[2];
        v35[1] = v37;
        v39 = *(_QWORD *)(v34 + 16);
        *(_QWORD *)(v34 + 16) = v38;
        v40 = _mm_loadu_si128((const __m128i *)(v34 + 24));
        *(_QWORD *)(v34 + 24) = v35[3];
        *(_QWORD *)(v34 + 32) = v35[4];
        v41 = v35[5];
        v35[2] = v39;
        *(__m128i *)(v35 + 3) = v40;
        v42 = *(_QWORD *)(v34 + 40);
        *(_QWORD *)(v34 + 40) = v41;
        v35[5] = v42;
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64 (__fastcall *)(__int64, _QWORD *), bool (__fastcall *)(__int64)))v36)(
          v34,
          v35,
          v25,
          v36,
          sub_2A5E40);
        v33 = v27 << 6;
      }
      v43 = *(_QWORD *)(v29 + 40);
      v44 = v43 + v33;
      m128i_i64 = (_QWORD *)(v58 + v43);
      v45 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v44 + 8LL);
      if ( v45 == sub_2A5CF0 )
      {
        v46 = *(_QWORD *)(v44 + 8);
        *(_QWORD *)(v44 + 8) = m128i_i64[1];
        v47 = m128i_i64[2];
        m128i_i64[1] = v46;
        v48 = *(_QWORD *)(v44 + 16);
        *(_QWORD *)(v44 + 16) = v47;
        v49 = _mm_loadu_si128((const __m128i *)(v44 + 24));
        *(_QWORD *)(v44 + 24) = m128i_i64[3];
        *(_QWORD *)(v44 + 32) = m128i_i64[4];
        v50 = m128i_i64[5];
        m128i_i64[2] = v48;
        *(__m128i *)(m128i_i64 + 3) = v49;
        a4 = *(_QWORD *)(v44 + 40);
        *(_QWORD *)(v44 + 40) = v50;
        m128i_i64[5] = a4;
      }
      else
      {
        v107 = v33;
        ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64 (__fastcall *)(__int64, _QWORD *), bool (__fastcall *)(__int64)))v45)(
          v44,
          m128i_i64,
          v25,
          v45,
          sub_2A5E40);
        v33 = v107;
      }
      if ( v94 )
      {
        v51 = *v94 + v33;
        m128i_i64 = (_QWORD *)(v58 + *v94);
        v52 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v51 + 8LL);
        if ( v52 == sub_2A5CF0 )
        {
          v53 = *(_QWORD *)(v51 + 8);
          *(_QWORD *)(v51 + 8) = m128i_i64[1];
          v54 = m128i_i64[2];
          m128i_i64[1] = v53;
          v55 = *(_QWORD *)(v51 + 16);
          *(_QWORD *)(v51 + 16) = v54;
          v56 = _mm_loadu_si128((const __m128i *)(v51 + 24));
          *(_QWORD *)(v51 + 24) = m128i_i64[3];
          *(_QWORD *)(v51 + 32) = m128i_i64[4];
          a4 = m128i_i64[5];
          m128i_i64[2] = v55;
          *(__m128i *)(m128i_i64 + 3) = v56;
          v57 = *(_QWORD *)(v51 + 40);
          *(_QWORD *)(v51 + 40) = a4;
          m128i_i64[5] = v57;
        }
        else
        {
          ((void (__fastcall *)(unsigned __int64, _QWORD *, __int64, __int64, bool (__fastcall *)(__int64)))v52)(
            v51,
            m128i_i64,
            v25,
            a4,
            sub_2A5E40);
        }
      }
    }
    ++v27;
LABEL_36:
    ++v28;
  }
  while ( v28 < *(_QWORD *)(v23 + 48) );
  v26 = v104;
LABEL_42:
  switch_dbctx();
  sub_2C5930(v101, v27);
  switch_dbctx();
  sub_2C5930(v26, v27);
  if ( !v94 )
    return v110 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2C5930(v94, v27);
}

