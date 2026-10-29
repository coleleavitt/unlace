__int64 __fastcall sub_35C4E0(__int64 *a1, __int64 a2, char a3, char a4, double a5, double a6)
{
  _QWORD *exception; // r15
  int v7; // eax
  const char *v8; // rax
  size_t v9; // rbx
  void *v10; // rax
  void *v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  _QWORD *func; // rax
  _QWORD *v17; // r13
  unsigned int v18; // r13d
  __int64 *v20; // r14
  int v21; // eax
  int v22; // eax
  char v23; // r12
  int v24; // r12d
  __int64 v25; // rsi
  __int64 *v26; // r12
  const __m128i *v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rdx
  int v31; // r15d
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // r15
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rbx
  __int64 v39; // r15
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // r13
  _QWORD *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // r13
  _QWORD *v48; // rax
  __int64 *v49; // rdx
  __int64 *v50; // rcx
  __int64 *v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 *v54; // r14
  __int64 v55; // r12
  __int64 i; // rbx
  _QWORD *v57; // rdx
  __int64 v58; // rsi
  __int64 *v59; // r14
  __int64 v60; // r12
  __int64 v61; // rbx
  _QWORD *v62; // rax
  _BYTE *v63; // rax
  const char *v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // r13
  _QWORD *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rbx
  __int64 v72; // r13
  _QWORD *v73; // rax
  __int64 *v74; // rax
  int v75; // esi
  size_t v76; // rdx
  _BYTE *v77; // rsi
  __int64 v78; // r9
  size_t v79; // r8
  void *v80; // rax
  __int64 v81; // [rsp+8h] [rbp-188h]
  __int64 v82; // [rsp+8h] [rbp-188h]
  size_t v83; // [rsp+8h] [rbp-188h]
  __int64 *v84; // [rsp+10h] [rbp-180h]
  __int64 *v85; // [rsp+10h] [rbp-180h]
  __int64 v86; // [rsp+10h] [rbp-180h]
  __int64 v87; // [rsp+18h] [rbp-178h]
  __int64 v88; // [rsp+18h] [rbp-178h]
  __int64 *v89; // [rsp+18h] [rbp-178h]
  __int64 *v90; // [rsp+18h] [rbp-178h]
  __int64 *v91; // [rsp+18h] [rbp-178h]
  __int64 *v92; // [rsp+18h] [rbp-178h]
  __int64 *v93; // [rsp+18h] [rbp-178h]
  __int64 *v94; // [rsp+18h] [rbp-178h]
  __int64 v95; // [rsp+18h] [rbp-178h]
  __int64 v96; // [rsp+18h] [rbp-178h]
  __int64 nsec_stamp; // [rsp+30h] [rbp-160h]
  __int64 v98; // [rsp+38h] [rbp-158h]
  __int64 *v99; // [rsp+40h] [rbp-150h] BYREF
  __int64 v100; // [rsp+48h] [rbp-148h]
  _QWORD *v101; // [rsp+60h] [rbp-130h] BYREF
  __int64 v102; // [rsp+68h] [rbp-128h]
  __int128 v103; // [rsp+70h] [rbp-120h]
  __int64 v104; // [rsp+80h] [rbp-110h] BYREF
  __int64 v105; // [rsp+88h] [rbp-108h]
  void *src; // [rsp+90h] [rbp-100h]
  size_t n[3]; // [rsp+98h] [rbp-F8h]
  void *v108; // [rsp+B0h] [rbp-E0h] BYREF
  _BYTE v109[24]; // [rsp+B8h] [rbp-D8h]
  int v110; // [rsp+D0h] [rbp-C0h]
  __int64 v111; // [rsp+D8h] [rbp-B8h]
  char v112; // [rsp+E0h] [rbp-B0h]
  char v113; // [rsp+E1h] [rbp-AFh]
  __int64 v114; // [rsp+E8h] [rbp-A8h]
  char v115[96]; // [rsp+F0h] [rbp-A0h] BYREF
  unsigned __int64 v116; // [rsp+158h] [rbp-38h]

  v116 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 100) == 3 )
    return 1;
  v12 = *(_QWORD *)(a2 + 32);
  v13 = a2;
  *(_QWORD *)(*a1 + 408) = v12;
  func = (_QWORD *)get_func();
  v17 = func;
  if ( !func || *func != v12 )
  {
    *(_DWORD *)(a2 + 100) = 4;
    return 2;
  }
  show_auto();
  if ( (*(_DWORD *)(*a1 + 1336) & 4) == 0 && !sub_1390E0(*(_QWORD *)(*a1 + 112), v12) )
  {
    qtime64();
    qstrftime64();
    *(_OWORD *)v109 = 0;
    v63 = (_BYTE *)qvector_reserve();
    v108 = v63;
    *(_QWORD *)v109 = 4;
    *(_WORD *)v63 = 11822;
    v63[2] = 46;
    v115[32] = 0;
    *((_BYTE *)v108 + 3) = 0;
    v64 = (const char *)*(unsigned int *)(a2 + 112);
    if ( (int)v64 <= 0 )
      goto LABEL_91;
    v104 = 0;
    if ( !(unsigned __int8)sub_37B020(*a1, v12, &v104, 2) )
    {
LABEL_137:
      qstpncpy();
      qsnprintf();
      clear_tinfo_t();
      v64 = (const char *)*(unsigned int *)(v13 + 112);
LABEL_91:
      sub_68620(
        (__int64)"%s decompiling %a size=%08a times=%d%s%s\n",
        v115,
        0.0,
        a6,
        v12,
        *(const char **)(v13 + 40),
        v64);
      if ( v108 )
      {
        *(_QWORD *)v109 = 0;
        qfree();
      }
      goto LABEL_7;
    }
    sub_325D80((__int64 *)&v108, (__int64)&v104, nullptr);
    v76 = *(_QWORD *)v109;
    v77 = v108;
    if ( *(_QWORD *)v109 )
    {
      v78 = *(_QWORD *)v109 + 1LL;
      v79 = *(_QWORD *)v109 - 1LL;
      if ( *(_QWORD *)&v109[8] >= (unsigned __int64)(*(_QWORD *)v109 + 1LL) )
        goto LABEL_134;
    }
    else
    {
      if ( *(_QWORD *)&v109[8] > 1u )
      {
        *(_QWORD *)v109 = 2;
        *((_BYTE *)v108 + 1) = 0;
LABEL_136:
        *(_BYTE *)v108 = 32;
        goto LABEL_137;
      }
      v79 = 0;
      v78 = 2;
    }
    v83 = v79;
    v86 = v78;
    v80 = (void *)qvector_reserve();
    v79 = v83;
    v108 = v80;
    v77 = v80;
    v78 = v86;
    v76 = v83 + 1;
LABEL_134:
    *(_QWORD *)v109 = v78;
    v77[v76] = 0;
    if ( v79 )
      memmove((char *)v108 + 1, v108, v79);
    goto LABEL_136;
  }
LABEL_7:
  v20 = (__int64 *)(v13 + 8);
  v102 = 0;
  v101 = v17;
  *(_QWORD *)(v13 + 16) = 0;
  v108 = &off_4B3958;
  v21 = *(_DWORD *)(v13 + 112);
  *(_QWORD *)v109 = 0;
  ++v21;
  v112 = 0;
  v110 = 0;
  v111 = 0;
  v113 = 0;
  v114 = v13 + 8;
  *(_DWORD *)(v13 + 112) = v21;
  v103 = 0;
  *(_OWORD *)&v109[8] = 0;
  if ( v21 > 49 )
  {
    if ( !under_debugger )
      sub_37CFE0(50016);
    goto LABEL_146;
  }
  v22 = a4 == 0 ? 98 : 96;
  v23 = *(_BYTE *)(*a1 + 1336);
  *(_OWORD *)n = 0;
  v104 = 0;
  v105 = -1;
  src = nullptr;
  v24 = v22 | ((v23 & 0x10) == 0);
  nsec_stamp = get_nsec_stamp();
  v25 = *a1;
  if ( a3 )
  {
    sub_148170((__int64 *)&v99, v25, &v101, (__int64)&v108, &v104, v24);
    v26 = v99;
    if ( v99 && !*((_DWORD *)v99 + 26) )
    {
      sub_2535B0(v99);
      v66 = v26[23];
      if ( v66 )
      {
        if ( v26[24] )
        {
          v95 = v13;
          v67 = 0;
          v68 = v26[24];
          do
          {
            v69 = (_QWORD *)(v66 + 24 * v67);
            if ( *v69 )
            {
              v69[1] = 0;
              qfree();
              v66 = v26[23];
            }
            ++v67;
          }
          while ( v68 != v67 );
          v13 = v95;
        }
        v26[24] = 0;
        qfree();
      }
      if ( v26[20] )
      {
        v26[21] = 0;
        qfree();
      }
      v70 = v26[16];
      if ( v70 )
      {
        if ( v26[17] )
        {
          v96 = v13;
          v71 = 0;
          v72 = v26[17];
          do
          {
            v73 = (_QWORD *)(v70 + 32 * v71);
            if ( *v73 )
            {
              v73[1] = 0;
              qfree();
              v70 = v26[16];
            }
            ++v71;
          }
          while ( v72 != v71 );
          v13 = v96;
        }
        v26[17] = 0;
        qfree();
      }
      sub_24FC90((__int64)(v26 + 2));
      j__qfree();
    }
    v18 = 1;
    goto LABEL_12;
  }
  sub_148200(&v99, *(_QWORD *)(v25 + 112), &v101, &v104, v24);
  v26 = v99;
  if ( !v99 )
  {
    v74 = *(__int64 **)v13;
    if ( *(_QWORD *)v13 )
    {
      v75 = *((_DWORD *)v74 + 26);
      v18 = v75 - 1;
      *((_DWORD *)v74 + 26) = v75 - 1;
      if ( v75 == 1 )
      {
        v50 = *(__int64 **)v13;
        if ( *(_QWORD *)v13 )
          goto LABEL_69;
      }
      else
      {
        *(_QWORD *)v13 = 0;
      }
    }
    v18 = 0;
    goto LABEL_12;
  }
  if ( !*((_DWORD *)v99 + 26) )
  {
    sub_2535B0(v99);
    v41 = v26[23];
    if ( v41 )
    {
      if ( v26[24] )
      {
        v87 = v13;
        v42 = 0;
        v43 = v26[24];
        do
        {
          v44 = (_QWORD *)(v41 + 24 * v42);
          if ( *v44 )
          {
            v44[1] = 0;
            qfree();
            v41 = v26[23];
          }
          ++v42;
        }
        while ( v43 != v42 );
        v13 = v87;
      }
      v26[24] = 0;
      qfree();
    }
    if ( v26[20] )
    {
      v26[21] = 0;
      qfree();
    }
    v45 = v26[16];
    if ( v45 )
    {
      if ( v26[17] )
      {
        v88 = v13;
        v46 = 0;
        v47 = v26[17];
        do
        {
          v48 = (_QWORD *)(v45 + 32 * v46);
          if ( *v48 )
          {
            v48[1] = 0;
            qfree();
            v45 = v26[16];
          }
          ++v46;
        }
        while ( v47 != v46 );
        v13 = v88;
      }
      v26[17] = 0;
      qfree();
    }
    sub_24FC90((__int64)(v26 + 2));
    j__qfree();
  }
  v49 = *(__int64 **)v13;
  if ( !*(_QWORD *)v13
    || (v32 = *((_DWORD *)v49 + 26) == 1, --*((_DWORD *)v49 + 26), !v32)
    || (v50 = *(__int64 **)v13, v18 = 1, !*(_QWORD *)v13) )
  {
    *(_QWORD *)v13 = v26;
    v18 = 1;
LABEL_122:
    ++*((_DWORD *)v26 + 26);
    goto LABEL_12;
  }
LABEL_69:
  v89 = v50;
  sub_2535B0(v50);
  v51 = v89;
  v52 = v89[23];
  if ( v52 )
  {
    v53 = v89[24];
    if ( v53 )
    {
      v90 = v20;
      v54 = v51;
      v84 = v26;
      v55 = v53;
      v81 = v13;
      for ( i = 0; i != v55; ++i )
      {
        v57 = (_QWORD *)(v52 + 24 * i);
        if ( *v57 )
        {
          v57[1] = 0;
          qfree();
          v52 = v54[23];
        }
      }
      v51 = v54;
      v26 = v84;
      v20 = v90;
      v13 = v81;
    }
    v51[24] = 0;
    v91 = v51;
    qfree();
    v51 = v91;
  }
  if ( v51[20] )
  {
    v51[21] = 0;
    v92 = v51;
    qfree();
    v51 = v92;
  }
  v58 = v51[16];
  if ( v58 )
  {
    if ( v51[17] )
    {
      v93 = v20;
      v59 = v51;
      v85 = v26;
      v60 = v51[17];
      v82 = v13;
      v61 = 0;
      do
      {
        v62 = (_QWORD *)(v58 + 32 * v61);
        if ( *v62 )
        {
          v62[1] = 0;
          qfree();
          v58 = v59[16];
        }
        ++v61;
      }
      while ( v60 != v61 );
      v51 = v59;
      v26 = v85;
      v20 = v93;
      v13 = v82;
    }
    v51[17] = 0;
    v94 = v51;
    qfree();
    v51 = v94;
  }
  sub_24FC90((__int64)(v51 + 2));
  j__qfree();
  *(_QWORD *)v13 = v26;
  if ( v26 )
    goto LABEL_122;
LABEL_12:
  v27 = (const __m128i *)*a1;
  v28 = *(_QWORD *)(*a1 + 112);
  if ( !*(_DWORD *)(v28 + 16) && *(_DWORD *)(v28 + 84) == 8 )
  {
    sub_35BDD0(v13 + 80, (__int64)v26);
    v27 = (const __m128i *)*a1;
  }
  *(__m128i *)(v13 + 48) = _mm_loadu_si128(v27 + 61);
  v29 = _mm_loadu_si128(v27 + 62);
  *(__m128i *)(v13 + 64) = v29;
  v30 = get_nsec_stamp();
  *(_QWORD *)(v13 + 104) = v30 + *(_QWORD *)(v13 + 104) - nsec_stamp;
  if ( a3 )
  {
    if ( v26 )
    {
      v31 = 0;
      v98 = v26[1];
      if ( *(_QWORD *)(v98 + 736) )
      {
        do
        {
          sub_F5F10(v20);
          ++v31;
        }
        while ( (unsigned __int64)v31 < *(_QWORD *)(v98 + 736) );
      }
      *(_DWORD *)(v13 + 100) = 1;
      goto LABEL_20;
    }
    if ( (unsigned int)~(_DWORD)v104 <= 0x22 )
    {
      ++*((_DWORD *)a1 + ~(_DWORD)v104 + 84);
      sub_32B550((__int64)&v99, (__int64)&v104, v30);
      sub_66DF0(v20);
      if ( v99 )
      {
        v100 = 0;
        qfree();
      }
      if ( (_DWORD)v104 == -18 )
      {
        v18 = -1;
      }
      else
      {
        if ( (_DWORD)v104 == -1 )
        {
          exception = __cxa_allocate_exception(0x30u);
          *exception = off_4AF6B0;
          v7 = v104;
          exception[3] = 0;
          *((_DWORD *)exception + 2) = v7;
          v8 = (const char *)v105;
          *((_OWORD *)exception + 2) = 0;
          exception[2] = v8;
          v9 = n[0];
          if ( n[0] )
          {
            v10 = (void *)qalloc_or_throw();
            exception[3] = v10;
            v11 = src;
            exception[5] = v9;
            memcpy(v10, v11, v9);
            exception[4] = v9;
          }
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_75A40);
        }
        if ( (*(_BYTE *)(*a1 + 1336) & 4) == 0 )
        {
          sub_32B550((__int64)&v99, (__int64)&v104, v65);
          sub_68620((__int64)"%a: %s\n", *(double *)v29.m128i_i64, (const char *)v105);
          if ( v99 )
          {
            v100 = 0;
            qfree();
          }
        }
        *(_DWORD *)(v13 + 100) = 2;
        v18 = 0;
      }
      goto LABEL_38;
    }
    if ( !under_debugger )
      sub_37CFE0(50017);
LABEL_146:
    BUG();
  }
  if ( v26 )
  {
LABEL_20:
    v32 = (*((_DWORD *)v26 + 26))-- == 1;
    if ( v32 )
    {
      sub_2535B0(v26);
      v33 = v26[23];
      if ( v33 )
      {
        if ( v26[24] )
        {
          v34 = 0;
          v35 = v26[24];
          do
          {
            v36 = (_QWORD *)(v33 + 24 * v34);
            if ( *v36 )
            {
              v36[1] = 0;
              qfree();
              v33 = v26[23];
            }
            ++v34;
          }
          while ( v35 != v34 );
        }
        v26[24] = 0;
        qfree();
      }
      if ( v26[20] )
      {
        v26[21] = 0;
        qfree();
      }
      v37 = v26[16];
      if ( v37 )
      {
        if ( v26[17] )
        {
          v38 = 0;
          v39 = v26[17];
          do
          {
            v40 = (_QWORD *)(v37 + 32 * v38);
            if ( *v40 )
            {
              v40[1] = 0;
              qfree();
              v37 = v26[16];
            }
            ++v38;
          }
          while ( v39 != v38 );
        }
        v26[17] = 0;
        qfree();
      }
      sub_24FC90((__int64)(v26 + 2));
      j__qfree();
    }
  }
LABEL_38:
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v108 = &off_4B6FB8;
  if ( *(_QWORD *)v109 )
  {
    *(_QWORD *)&v109[8] = 0;
    qfree();
  }
  if ( v102 )
  {
    *(_QWORD *)&v103 = 0;
    qfree();
  }
  return v18;
}

