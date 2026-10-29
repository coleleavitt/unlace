__int64 *__fastcall sub_3A8440(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  unsigned __int64 *func; // rax
  unsigned __int64 *v16; // rbx
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __int64 *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 i; // rax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 j; // rdx
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // rsi
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *v36; // rdx
  _QWORD *v37; // rbp
  __int64 *v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // r14
  unsigned __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  bool v48; // zf
  __int64 v49; // rdi
  __int64 v50; // r13
  __int64 n; // rbp
  __int64 *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // r13
  __int64 ii; // rbp
  __int64 *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rbp
  __int64 v63; // rdi
  __int64 v64; // r14
  __int64 v65; // r13
  __int64 *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // r13
  __int64 v71; // r14
  __int64 *v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // r8
  __int64 v76; // rcx
  __int64 v77; // rsi
  const __m128i *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  __m128i v81; // xmm0
  bool v82; // cf
  __m128i *v83; // rax
  __m128i v84; // xmm0
  const __m128i *v85; // rax
  __int64 v86; // r14
  __int64 v87; // rdi
  __int64 k; // r13
  __int64 *v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // r14
  __int64 v93; // rdi
  __int64 m; // r13
  __int64 *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rdi
  __int64 v101; // r9
  __int64 v102; // rax
  const __m128i *v103; // rsi
  __m128i v104; // xmm0
  _QWORD *v105; // rax
  __int64 v106; // rdx
  _QWORD *v107; // rdi
  __int64 v109; // [rsp+8h] [rbp-C0h]
  __int64 v110; // [rsp+8h] [rbp-C0h]
  __int64 v111; // [rsp+20h] [rbp-A8h]
  __int64 v112; // [rsp+20h] [rbp-A8h]
  __int64 v113; // [rsp+20h] [rbp-A8h]
  __int64 v114; // [rsp+28h] [rbp-A0h]
  __int64 *v115; // [rsp+38h] [rbp-90h] BYREF
  __m128i v116; // [rsp+40h] [rbp-88h] BYREF
  __int128 v117; // [rsp+50h] [rbp-78h]
  const __m128i *v118; // [rsp+60h] [rbp-68h] BYREF
  __m128i v119; // [rsp+68h] [rbp-60h] BYREF
  __int128 v120; // [rsp+78h] [rbp-50h]
  unsigned __int64 v121; // [rsp+88h] [rbp-40h]

  v121 = __readfsqword(0x28u);
  if ( a5 == 5 )
    goto LABEL_51;
  func = (unsigned __int64 *)get_func();
  v16 = func;
  if ( !func )
  {
LABEL_58:
    *a1 = 0;
    return a1;
  }
  if ( a5 == 2 )
  {
LABEL_51:
    v45 = operator new(0x38u);
    v46 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(v45 + 24) = a3;
    *(_DWORD *)(v45 + 8) = 1;
    *(_QWORD *)v45 = &off_4E6F50;
    *(_QWORD *)(v45 + 16) = v46;
    *(_QWORD *)(v45 + 32) = a3 + a4;
    *(_QWORD *)(v45 + 40) = -1;
    *(_DWORD *)(v45 + 48) = a5;
    *(_BYTE *)(v45 + 52) = 1;
    *a1 = v45;
    return a1;
  }
  if ( !a6 && !sub_13DCA0(*(_QWORD *)(a2 + 40), *func) )
    goto LABEL_58;
  v17 = *(_QWORD *)(a2 + 40);
  v18.m128i_i64[0] = 0;
  v118 = nullptr;
  v119 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v116 = (__m128i)(unsigned __int64)v16;
  v120 = 0;
  v117 = 0;
  sub_14CDC0((__int64 *)&v115, v17, (__int64 **)&v116, &v118, 0, 0.0, a8, a9, a10);
  v19 = v115;
  if ( !v115 )
  {
    if ( v116.m128i_i64[1] )
    {
      *(_QWORD *)&v117 = 0;
      qfree(v116.m128i_i64[1]);
    }
    if ( a6 )
    {
      sub_3310F0((__int64)&v116, &v118, 0.0);
      sub_6D0A0((__int64)"%a: %s\n", 0.0, (const char *)v119.m128i_i64[0]);
      if ( v116.m128i_i64[0] )
      {
        v116.m128i_i64[1] = 0;
        qfree(v116.m128i_i64[0]);
      }
    }
    if ( v119.m128i_i64[1] )
    {
      *(_QWORD *)&v120 = 0;
      qfree(v119.m128i_i64[1]);
    }
    goto LABEL_58;
  }
  if ( *((_DWORD *)v115 + 26) )
  {
    v31 = v116.m128i_i64[1];
    if ( v116.m128i_i64[1] )
    {
LABEL_25:
      *(_QWORD *)&v117 = 0;
      qfree(v31);
    }
  }
  else
  {
    sub_258970(v115);
    v20 = v19[23];
    if ( v20 )
    {
      v21 = v19[24];
      if ( v21 )
      {
        for ( i = 0; i != v21; ++i )
        {
          v23 = (__int64 *)(v20 + 24 * i);
          v24 = *v23;
          if ( *v23 )
          {
            v23[1] = 0;
            v111 = i;
            qfree(v24);
            i = v111;
            v20 = v19[23];
          }
        }
      }
      v19[24] = 0;
      qfree(v20);
    }
    v25 = v19[20];
    if ( v25 )
    {
      v19[21] = 0;
      qfree(v25);
    }
    v26 = v19[16];
    if ( v26 )
    {
      v27 = v19[17];
      if ( v27 )
      {
        for ( j = 0; j != v27; ++j )
        {
          v29 = (__int64 *)(v26 + 32 * j);
          v30 = *v29;
          if ( *v29 )
          {
            v29[1] = 0;
            v112 = j;
            qfree(v30);
            j = v112;
            v26 = v19[16];
          }
        }
      }
      v19[17] = 0;
      qfree(v26);
    }
    sub_255050((__int64)(v19 + 2), 0.0);
    j__qfree((__int64)v19);
    v31 = v116.m128i_i64[1];
    if ( v116.m128i_i64[1] )
      goto LABEL_25;
  }
  if ( v119.m128i_i64[1] )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119.m128i_i64[1]);
  }
  if ( a5 <= 5 )
  {
    if ( a5 - 3 <= 1 )
    {
      v32 = sub_258010((__int64)v19);
      v33 = *(_QWORD **)v32;
      if ( !*(_QWORD *)v32 )
        goto LABEL_61;
      v34 = *v33 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v34 )
      {
        v35 = *(_QWORD **)v32;
        if ( (*(_BYTE *)v34 & 2) != 0 )
          goto LABEL_33;
        v74 = *(_QWORD *)(v34 + 8);
        v75 = *(_QWORD *)(v34 + 16);
        if ( *(_QWORD *)(v34 + 24) < a3 )
          goto LABEL_102;
LABEL_99:
        v35 = (_QWORD *)v34;
        while ( (*(_BYTE *)v74 & 2) == 0 )
        {
          v34 = v74;
          v74 = *(_QWORD *)(v74 + 8);
          v75 = *(_QWORD *)(v34 + 16);
          if ( *(_QWORD *)(v34 + 24) >= a3 )
            goto LABEL_99;
LABEL_102:
          v74 = v75;
        }
        if ( v33 == v35 )
        {
LABEL_33:
          v35 = *(_QWORD **)v32;
          if ( !*(_QWORD *)(v32 + 8) )
            goto LABEL_61;
          goto LABEL_34;
        }
        if ( a3 < v35[3] )
        {
          if ( !*(_QWORD *)(v32 + 8) )
          {
LABEL_35:
            if ( (*v35 & 2) != 0 )
            {
              v35 = (_QWORD *)v35[2];
            }
            else
            {
              v36 = (_QWORD *)v35[1];
              if ( (*(_BYTE *)v36 & 2) != 0 )
              {
                v105 = (_QWORD *)(*v35 & 0xFFFFFFFFFFFFFFFCLL);
                v106 = *v105;
                if ( (*v105 & 2) != 0 || (_QWORD *)v105[1] != v35 )
                {
LABEL_140:
                  v35 = v105;
                }
                else
                {
                  while ( 1 )
                  {
                    v35 = (_QWORD *)(v106 & 0xFFFFFFFFFFFFFFFCLL);
                    v106 = *(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v106 & 2) != 0 )
                      break;
                    v107 = v105;
                    v105 = v35;
                    if ( (_QWORD *)v35[1] != v107 )
                      goto LABEL_140;
                  }
                }
              }
              else
              {
                do
                {
                  v35 = v36;
                  v36 = (_QWORD *)v36[2];
                }
                while ( (*(_BYTE *)v36 & 2) == 0 );
              }
            }
            if ( v35 == v33 )
              goto LABEL_61;
            goto LABEL_39;
          }
LABEL_34:
          if ( (_QWORD *)v33[1] == v35 )
            goto LABEL_61;
          goto LABEL_35;
        }
      }
      else
      {
        v35 = nullptr;
      }
LABEL_39:
      v37 = v35 + 3;
      if ( v35[3] >= a3 && v35[3] < a4 + a3 )
      {
        v118 = nullptr;
        v119 = 0;
        v38 = (__int64 *)v35[4];
        if ( 8LL * v35[5] )
        {
          v39 = 0;
          v40 = 0;
          v41 = 0;
          while ( 1 )
          {
            v43 = *v38;
            v116.m128i_i64[1] = 0xFFFFFFFEFFFFFFFELL;
            v44 = v39 + 1;
            v116.m128i_i64[0] = v43;
            if ( (unsigned __int64)&v116 < v41 || (unsigned __int64)&v116 >= v41 + 16 * v40 )
            {
              if ( v40 < v44 )
              {
                v76 = qvector_reserve((__int64)&v118, 0, v44, 16);
                v77 = v119.m128i_i64[1];
                v119.m128i_i64[1] = v40;
                v78 = v118;
                v79 = v119.m128i_i64[0] - 1;
                if ( v119.m128i_i64[0] - 1 >= 0 )
                {
                  v80 = v76;
                  do
                  {
                    v81 = _mm_loadu_si128(v78);
                    v80 += 16;
                    ++v78;
                    *(__m128i *)(v80 - 16) = v81;
                    v82 = v79-- == 0;
                  }
                  while ( !v82 );
                  v78 = v118;
                }
                v109 = v76;
                qfree((__int64)v78);
                v41 = v109;
                v39 = v119.m128i_i64[0];
                v118 = (const __m128i *)v109;
                v119.m128i_i64[1] = v77;
              }
              *(__m128i *)(v41 + 16 * v39) = _mm_load_si128(&v116);
            }
            else
            {
              if ( v40 < v44 )
              {
                v110 = v43;
                v98 = qvector_reserve((__int64)&v118, 0, v44, 16);
                v99 = v98;
                v100 = (__int64)v118;
                v101 = v119.m128i_i64[1];
                v119.m128i_i64[1] = v40;
                v102 = v119.m128i_i64[0] - 1;
                v103 = v118;
                if ( v119.m128i_i64[0] - 1 >= 0 )
                {
                  do
                  {
                    v104 = _mm_loadu_si128(v103);
                    v99 += 16;
                    ++v103;
                    *(__m128i *)(v99 - 16) = v104;
                    v82 = v102-- == 0;
                  }
                  while ( !v82 );
                  v100 = (__int64)v118;
                }
                v114 = v101;
                v113 = v98;
                qfree(v100);
                v41 = v113;
                v43 = v110;
                v118 = (const __m128i *)v113;
                v39 = v119.m128i_i64[0];
                v119.m128i_i64[1] = v114;
              }
              v42 = (__int64 *)(v41 + 16 * v39);
              *v42 = v43;
              v42[1] = 0xFFFFFFFEFFFFFFFELL;
            }
            ++v38;
            v39 = ++v119.m128i_i64[0];
            if ( v38 == (__int64 *)(v37[1] + 8LL * v37[2]) )
              break;
            v41 = (unsigned __int64)v118;
            v40 = v119.m128i_u64[1];
          }
        }
        v83 = (__m128i *)operator new(0x40u);
        ++*((_DWORD *)v19 + 26);
        v62 = (__int64)v83;
        v84 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
        v83->m128i_i32[2] = 1;
        v83->m128i_i64[0] = (__int64)&off_4E7050;
        v83[1] = _mm_unpacklo_epi64(v84, (__m128i)(unsigned __int64)v19);
        ++*((_DWORD *)v19 + 26);
        v85 = v118;
        v18 = _mm_loadu_si128(&v119);
        *(_DWORD *)(v62 + 56) = 0;
        v118 = nullptr;
        *(_QWORD *)(v62 + 32) = v85;
        v119 = 0;
        *(__m128i *)(v62 + 40) = v18;
        v48 = (*((_DWORD *)v19 + 26))-- == 1;
        if ( v48 )
        {
          sub_258970(v19);
          if ( v19[23] )
          {
            v86 = v19[24];
            if ( v86 )
            {
              v87 = v19[23];
              for ( k = 0; k != v86; ++k )
              {
                v89 = (__int64 *)(v87 + 24 * k);
                v90 = *v89;
                if ( *v89 )
                {
                  v89[1] = 0;
                  qfree(v90);
                  v87 = v19[23];
                }
              }
            }
            else
            {
              v87 = v19[23];
            }
            v19[24] = 0;
            qfree(v87);
          }
          v91 = v19[20];
          if ( v91 )
          {
            v19[21] = 0;
            qfree(v91);
          }
          if ( v19[16] )
          {
            v92 = v19[17];
            if ( v92 )
            {
              v93 = v19[16];
              for ( m = 0; m != v92; ++m )
              {
                v95 = (__int64 *)(v93 + 32 * m);
                v96 = *v95;
                if ( *v95 )
                {
                  v95[1] = 0;
                  qfree(v96);
                  v93 = v19[16];
                }
              }
            }
            else
            {
              v93 = v19[16];
            }
            v19[17] = 0;
            qfree(v93);
          }
          sub_255050((__int64)(v19 + 2), *(double *)v18.m128i_i64);
          j__qfree((__int64)v19);
          v97 = (__int64)v118;
          *a1 = v62;
          if ( v97 )
          {
            v119.m128i_i64[0] = 0;
            qfree(v97);
          }
          goto LABEL_62;
        }
        goto LABEL_97;
      }
LABEL_61:
      *a1 = 0;
      goto LABEL_62;
    }
LABEL_145:
    if ( !under_debugger )
      sub_383060(0xC725u, 0.0);
    BUG();
  }
  if ( a5 != 6 )
    goto LABEL_145;
  v60 = operator new(0x28u);
  ++*((_DWORD *)v19 + 26);
  v61 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  v62 = v60;
  *(_DWORD *)(v60 + 8) = 1;
  v18 = _mm_unpacklo_epi64(v61, (__m128i)(unsigned __int64)v19);
  *(_QWORD *)v60 = &off_4E6E50;
  *(__m128i *)(v60 + 16) = v18;
  ++*((_DWORD *)v19 + 26);
  *(_DWORD *)(v60 + 32) = -1;
  v48 = (*((_DWORD *)v19 + 26))-- == 1;
  if ( v48 )
  {
    sub_258970(v19);
    v63 = v19[23];
    if ( v63 )
    {
      v64 = v19[24];
      v65 = 0;
      if ( v64 )
      {
        do
        {
          v66 = (__int64 *)(v63 + 24 * v65);
          v67 = *v66;
          if ( *v66 )
          {
            v66[1] = 0;
            qfree(v67);
            v63 = v19[23];
          }
          ++v65;
        }
        while ( v64 != v65 );
      }
      v19[24] = 0;
      qfree(v63);
    }
    v68 = v19[20];
    if ( v68 )
    {
      v19[21] = 0;
      qfree(v68);
    }
    v69 = v19[16];
    if ( v69 )
    {
      v70 = v19[17];
      v71 = 0;
      if ( v70 )
      {
        do
        {
          v72 = (__int64 *)(v69 + 32 * v71);
          v73 = *v72;
          if ( *v72 )
          {
            v72[1] = 0;
            qfree(v73);
            v69 = v19[16];
          }
          ++v71;
        }
        while ( v70 != v71 );
      }
      v19[17] = 0;
      qfree(v69);
    }
    sub_255050((__int64)(v19 + 2), *(double *)v18.m128i_i64);
    j__qfree((__int64)v19);
  }
LABEL_97:
  *a1 = v62;
LABEL_62:
  v48 = (*((_DWORD *)v19 + 26))-- == 1;
  if ( v48 )
  {
    sub_258970(v19);
    v49 = v19[23];
    if ( v49 )
    {
      v50 = v19[24];
      if ( v50 )
      {
        for ( n = 0; n != v50; ++n )
        {
          v52 = (__int64 *)(v49 + 24 * n);
          v53 = *v52;
          if ( *v52 )
          {
            v52[1] = 0;
            qfree(v53);
            v49 = v19[23];
          }
        }
      }
      v19[24] = 0;
      qfree(v49);
    }
    v54 = v19[20];
    if ( v54 )
    {
      v19[21] = 0;
      qfree(v54);
    }
    v55 = v19[16];
    if ( v55 )
    {
      v56 = v19[17];
      if ( v56 )
      {
        for ( ii = 0; ii != v56; ++ii )
        {
          v58 = (__int64 *)(v55 + 32 * ii);
          v59 = *v58;
          if ( *v58 )
          {
            v58[1] = 0;
            qfree(v59);
            v55 = v19[16];
          }
        }
      }
      v19[17] = 0;
      qfree(v55);
    }
    sub_255050((__int64)(v19 + 2), *(double *)v18.m128i_i64);
    j__qfree((__int64)v19);
  }
  return a1;
}

