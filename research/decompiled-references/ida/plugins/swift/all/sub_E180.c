unsigned __int64 __fastcall sub_E180(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  const char *v5; // rdi
  __int64 named_type_tid; // rax
  size_t v7; // r13
  __int64 v8; // r14
  const char *v9; // rsi
  const char *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  unsigned __int64 v20; // r14
  const char *v21; // rsi
  const char *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rbp
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 *v27; // r13
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int32 v30; // ecx
  int v31; // eax
  __int64 flags_by_size; // rax
  __int64 v33; // rdi
  void *v34; // r12
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  void *v37; // rdi
  __int64 v38; // r12
  unsigned __int64 v39; // rdx
  char *v40; // rsi
  unsigned __int64 v41; // r12
  __int64 v42; // rcx
  size_t v43; // rdx
  __int64 v44; // rdx
  const char *v45; // r9
  __int64 v46; // rsi
  size_t v47; // r8
  size_t v48; // rax
  char *v49; // rdi
  char *v50; // rax
  __int64 v51; // rdx
  void *v52; // rdi
  size_t v53; // rdx
  size_t v54; // r9
  size_t v55; // r8
  void *v56; // r10
  char *v57; // rsi
  const void *v58; // rsi
  const void **v59; // rdi
  void *v60; // rax
  const void **v61; // r8
  size_t v62; // r10
  void *v63; // rsi
  __int64 v64; // rdi
  const char *v65; // rsi
  __int64 v66; // rdi
  const char *v67; // r14
  char v68; // al
  __int64 v69; // rdi
  __int64 v70; // r15
  __int64 v71; // r12
  __int64 i; // rbx
  __int64 *v73; // r13
  __int64 v74; // rdi
  __int64 v75; // rdi
  const char *v76; // rsi
  char *v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // r13
  __int64 v80; // r12
  __int64 v81; // rbp
  __int64 *v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rdi
  __m128i v85; // [rsp+0h] [rbp-128h] BYREF
  __int64 v86; // [rsp+10h] [rbp-118h]
  unsigned __int64 v87; // [rsp+18h] [rbp-110h]
  size_t v88; // [rsp+20h] [rbp-108h]
  const void **v89; // [rsp+28h] [rbp-100h]
  void **v90; // [rsp+30h] [rbp-F8h]
  size_t n; // [rsp+38h] [rbp-F0h]
  void *v92; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v93; // [rsp+48h] [rbp-E0h]
  void *v94; // [rsp+50h] [rbp-D8h] BYREF
  size_t v95[2]; // [rsp+58h] [rbp-D0h] BYREF
  char *s; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v97; // [rsp+78h] [rbp-B0h]
  void *src; // [rsp+90h] [rbp-98h] BYREF
  __int128 v99; // [rsp+98h] [rbp-90h]
  __int64 v100; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-70h]
  __int64 v102; // [rsp+C8h] [rbp-60h]
  __int128 v103; // [rsp+D0h] [rbp-58h]
  int v104; // [rsp+E0h] [rbp-48h]
  char v105; // [rsp+E4h] [rbp-44h]
  unsigned __int64 v106; // [rsp+E8h] [rbp-40h]

  v106 = __readfsqword(0x28u);
  v4 = a3;
  v90 = &v94;
  sub_A400((__int64 *)&v94, a3, "::");
  v5 = s1;
  if ( v95[0] )
    v5 = (const char *)v94;
  named_type_tid = get_named_type_tid(v5);
  v7 = v95[0];
  v8 = named_type_tid;
  if ( named_type_tid != -1 )
  {
    s = nullptr;
    v100 = 0;
    v102 = 0;
    v104 = 0;
    v105 = 0x80;
    v101 = 0;
    v103 = 0;
    if ( v95[0] )
    {
      v9 = (const char *)v94;
      v10 = (const char *)v94;
      if ( !v94 )
      {
LABEL_10:
        sub_CB10((__int64)"ignoring an existing enum with the name %s(no width specified)\n", v9);
        v11 = v102;
        *(_DWORD *)(a2 + 68) = 8;
        if ( v11 )
        {
          *(_QWORD *)&v103 = 0;
          qfree(v11);
        }
        v12 = v100;
        if ( v100 )
        {
          v13 = v101;
          if ( (_QWORD)v101 )
          {
            v14 = 0;
            v15 = 0;
            do
            {
              v16 = (__int64 *)(v12 + v14);
              v17 = *(_QWORD *)(v12 + v14 + 24);
              if ( v17 )
              {
                v16[4] = 0;
                qfree(v17);
              }
              v18 = *v16;
              if ( *v16 )
              {
                v16[1] = 0;
                qfree(v18);
              }
              ++v15;
              v12 = v100;
              v14 += 56;
            }
            while ( v13 != v15 );
          }
          *(_QWORD *)&v101 = 0;
          qfree(v12);
        }
        clear_tinfo_t(&s);
        goto LABEL_22;
      }
    }
    else
    {
      v10 = s1;
      if ( !s1 )
      {
LABEL_9:
        v9 = s1;
        goto LABEL_10;
      }
    }
    *(_QWORD *)&v99 = v10;
    WORD4(v99) = 256;
    src = (void *)get_idati();
    if ( !(unsigned __int8)create_tinfo(&s, 61, 61, &src) || !(unsigned __int8)get_tinfo_details(s, 45, &v100) )
    {
LABEL_8:
      if ( v95[0] )
      {
        v9 = (const char *)v94;
        goto LABEL_10;
      }
      goto LABEL_9;
    }
    if ( (v105 & 7) != 0 )
    {
      v85.m128i_i32[0] = 1 << ((v105 & 7) - 1);
    }
    else
    {
      v85.m128i_i32[0] = (unsigned __int8)getinf(61);
      if ( !v85.m128i_i32[0] )
        goto LABEL_8;
    }
    v22 = s1;
    if ( v95[0] )
      v22 = (const char *)v94;
    sub_CB10((__int64)"do not import an existing enum with the name %s\n", v22);
    if ( v102 )
    {
      *(_QWORD *)&v103 = 0;
      qfree(v102);
    }
    v23 = v100;
    if ( v100 )
    {
      if ( (_QWORD)v101 )
      {
        v86 = a2;
        v87 = v4;
        v24 = 0;
        v25 = 0;
        v26 = v101;
        do
        {
          v27 = (__int64 *)(v23 + v24);
          v28 = *(_QWORD *)(v23 + v24 + 24);
          if ( v28 )
          {
            v27[4] = 0;
            qfree(v28);
          }
          v29 = *v27;
          if ( *v27 )
          {
            v27[1] = 0;
            qfree(v29);
          }
          ++v25;
          v23 = v100;
          v24 += 56;
        }
        while ( v26 != v25 );
        a2 = v86;
        v4 = v87;
      }
      *(_QWORD *)&v101 = 0;
      qfree(v23);
    }
    clear_tinfo_t(&s);
    goto LABEL_51;
  }
  v20 = *(_QWORD *)(v4 + 80);
  if ( !v20 )
  {
    v65 = s1;
    if ( v95[0] )
      v65 = (const char *)v94;
    sub_CB10((__int64)"could not create an empty enum with the name %s\n", v65);
    goto LABEL_32;
  }
  if ( v20 > 0xFFFFFFFE )
  {
    v21 = s1;
    if ( v95[0] )
      v21 = (const char *)v94;
    sub_CB10(
      (__int64)"could not create an enum with the name %s with too many cases (%zu)\n",
      v21,
      *(_QWORD *)(v4 + 80));
LABEL_32:
    *(_DWORD *)(a2 + 68) = 6;
LABEL_22:
    if ( v94 )
    {
      v95[0] = 0;
      qfree(v94);
    }
    return v106 - __readfsqword(0x28u);
  }
  v100 = 0;
  v102 = 0;
  v104 = 0;
  v105 = -32;
  s = nullptr;
  v101 = 0;
  v103 = 0;
  v97 = 0;
  if ( v95[0] )
  {
    s = (char *)qalloc_or_throw(v95[0]);
    *((_QWORD *)&v97 + 1) = v7;
    memcpy(s, v94, v7);
    *(_QWORD *)&v97 = v7;
  }
  sub_83B0((__int64)&s, "::", "_");
  v38 = v97;
  v39 = 2;
  if ( (_QWORD)v97 )
  {
    v39 = v97 + 1;
    v38 = v97 - 1;
  }
  v40 = s;
  if ( *((_QWORD *)&v97 + 1) < v39 )
  {
    v85.m128i_i64[0] = v39;
    s = (char *)qvector_reserve(&s, s, v39, 1);
    v39 = v85.m128i_i64[0];
    v40 = s;
  }
  *(_QWORD *)&v97 = v39;
  v40[v38] = 95;
  v93 = v20 + 1;
  s[v38 + 1] = 0;
  v85.m128i_i64[0] = 0;
  v41 = 0;
  v86 = ((_QWORD)v97 == 0) + (_QWORD)v97 - 1LL;
  v87 = ((_QWORD)v97 == 0) + (_QWORD)v97;
  while ( 1 )
  {
    v49 = s;
    v50 = s;
    if ( v86 )
    {
      v51 = v97;
      if ( (unsigned __int64)v97 < v87 )
      {
        if ( *((_QWORD *)&v97 + 1) < v87 )
        {
          v50 = (char *)qvector_reserve(&s, s, v87, 1);
          s = v50;
          v51 = v97;
        }
        memset(&v50[v51], 0, v87 - v51);
        v49 = s;
        *(_QWORD *)&v97 = v87;
      }
      else if ( v87 != (_QWORD)v97 )
      {
        *(_QWORD *)&v97 = v87;
      }
      v49[v86] = 0;
      if ( v41 < v20 )
        goto LABEL_67;
    }
    else
    {
      if ( s )
      {
        *(_QWORD *)&v97 = 0;
        qfree(s);
        s = nullptr;
        *((_QWORD *)&v97 + 1) = 0;
      }
      if ( v41 < v20 )
      {
LABEL_67:
        v42 = *(_QWORD *)(v4 + 72) + v85.m128i_i64[0];
        src = nullptr;
        v99 = 0;
        v43 = *(_QWORD *)(v42 + 8);
        if ( !v43 )
          goto LABEL_68;
        v64 = *(_QWORD *)(v42 + 8);
        v89 = (const void **)v42;
        v88 = v43;
        src = (void *)qalloc_or_throw(v64);
        *((_QWORD *)&v99 + 1) = v88;
        memcpy(src, *v89, v88);
        v53 = v88;
        *(_QWORD *)&v99 = v88;
LABEL_81:
        v54 = v53 - 1;
        if ( v53 != 1 )
        {
          v55 = v97;
          v56 = (void *)(v53 - 1);
          if ( (_QWORD)v97 )
          {
            v55 = v97 - 1;
            v56 = (void *)(v54 + v97 - 1);
            v53 += v97 - 1;
          }
          v57 = s;
          if ( *((_QWORD *)&v97 + 1) < v53 )
          {
            v92 = v56;
            n = v55;
            v89 = (const void **)v54;
            v88 = v53;
            s = (char *)qvector_reserve(&s, s, v53, 1);
            v56 = v92;
            v57 = s;
            v55 = n;
            v54 = (size_t)v89;
            v53 = v88;
          }
          *(_QWORD *)&v97 = v53;
          *((_BYTE *)v56 + (_QWORD)v57) = 0;
          memcpy(&s[v55], src, v54);
        }
        v52 = src;
        goto LABEL_88;
      }
    }
    v99 = 0;
    src = nullptr;
    src = (void *)qvector_reserve(&src, 0, 15, 1);
    *(_QWORD *)&v99 = 15;
    strcpy((char *)src, "unknownDefault");
    v52 = src;
    v53 = v99;
    if ( (_QWORD)v99 )
      goto LABEL_81;
LABEL_88:
    if ( v52 )
    {
      *(_QWORD *)&v99 = 0;
      qfree(v52);
    }
LABEL_68:
    v44 = v101;
    v45 = s;
    v46 = v100;
    if ( *((_QWORD *)&v101 + 1) < (unsigned __int64)(v101 + 1) )
    {
      v88 = (size_t)s;
      v100 = qvector_reserve(&v100, v100, v101 + 1, 56);
      v44 = v101;
      v46 = v100;
      v45 = (const char *)v88;
    }
    v47 = v46 + 56 * v44;
    *(_QWORD *)v47 = 0;
    *(_QWORD *)(v47 + 24) = 0;
    *(_OWORD *)(v47 + 8) = 0;
    *(_OWORD *)(v47 + 32) = 0;
    *(_QWORD *)&v101 = v101 + 1;
    if ( v45 && (v89 = (const void **)(v46 + 56 * v44), v88 = (size_t)v45, v48 = strlen(v45), v47 = (size_t)v89, v48) )
    {
      v58 = *v89;
      v59 = v89;
      v92 = (void *)v88;
      n = v48;
      v89 = (const void **)(v48 + 1);
      v88 = v47;
      v60 = (void *)qvector_reserve(v59, v58, v48 + 1, 1);
      v61 = (const void **)v88;
      v62 = n;
      v63 = v92;
      *(_QWORD *)(v88 + 8) = v89;
      *v61 = v60;
      v89 = v61;
      v88 = v62;
      memmove(v60, v63, v62);
      v47 = (size_t)v89;
      *((_BYTE *)*v89 + v88) = 0;
    }
    else
    {
      *(_QWORD *)(v47 + 8) = 0;
    }
    v85.m128i_i64[0] += 56;
    *(_QWORD *)(v47 + 48) = v41;
    *(_QWORD *)(v47 + 32) = 0;
    if ( v20 == v41 )
      break;
    ++v41;
  }
  if ( v93 > 0xFF )
  {
    if ( v93 > 0xFFFF )
    {
      v85.m128i_i32[0] = 4;
      if ( v95[0] )
      {
        v67 = (const char *)v94;
        v66 = 4;
      }
      else
      {
        v66 = 4;
        v67 = s1;
      }
    }
    else
    {
      v85.m128i_i32[0] = 2;
      if ( v95[0] )
      {
        v67 = (const char *)v94;
        v66 = 2;
      }
      else
      {
        v66 = 2;
        v67 = s1;
      }
    }
  }
  else
  {
    v85.m128i_i32[0] = 1;
    if ( v95[0] )
    {
      v67 = (const char *)v94;
      v66 = 1;
    }
    else
    {
      v66 = 1;
      v67 = s1;
    }
  }
  v68 = log2ceil(v66);
  src = nullptr;
  v105 = (v68 + 1) | v105 & 0xF8;
  if ( !(unsigned __int8)create_tinfo(&src, 45, 45, &v100)
    || (unsigned int)set_tinfo_property4(&src, 18, 0, 0, 0, 0)
    || (unsigned int)save_tinfo(&src, 0, 0, v67, 5) )
  {
    clear_tinfo_t(&src);
    goto LABEL_129;
  }
  v8 = get_named_type_tid(v67);
  clear_tinfo_t(&src);
  if ( v8 == -1 )
  {
LABEL_129:
    v76 = s1;
    if ( v95[0] )
      v76 = (const char *)v94;
    sub_CB10((__int64)"could not add an enum with the name %s\n", v76);
    v77 = s;
    *(_DWORD *)(a2 + 68) = 6;
    if ( v77 )
    {
      *(_QWORD *)&v97 = 0;
      qfree(v77);
    }
    if ( v102 )
    {
      *(_QWORD *)&v103 = 0;
      qfree(v102);
    }
    v78 = v100;
    if ( v100 )
    {
      v79 = v101;
      if ( (_QWORD)v101 )
      {
        v80 = 0;
        v81 = 0;
        do
        {
          v82 = (__int64 *)(v78 + v80);
          v83 = *(_QWORD *)(v78 + v80 + 24);
          if ( v83 )
          {
            v82[4] = 0;
            qfree(v83);
          }
          v84 = *v82;
          if ( *v82 )
          {
            v82[1] = 0;
            qfree(v84);
          }
          ++v81;
          v78 = v100;
          v80 += 56;
        }
        while ( v79 != v81 );
      }
      *(_QWORD *)&v101 = 0;
      qfree(v78);
    }
    goto LABEL_22;
  }
  if ( s )
  {
    *(_QWORD *)&v97 = 0;
    qfree(s);
  }
  if ( v102 )
  {
    *(_QWORD *)&v103 = 0;
    qfree(v102);
  }
  v69 = v100;
  if ( v100 )
  {
    if ( (_QWORD)v101 )
    {
      v70 = 0;
      v86 = v4;
      v71 = v101;
      for ( i = 0; i != v71; ++i )
      {
        v73 = (__int64 *)(v69 + v70);
        v74 = *(_QWORD *)(v69 + v70 + 24);
        if ( v74 )
        {
          v73[4] = 0;
          qfree(v74);
        }
        v75 = *v73;
        if ( *v73 )
        {
          v73[1] = 0;
          qfree(v75);
        }
        v69 = v100;
        v70 += 56;
      }
      v4 = v86;
    }
    *(_QWORD *)&v101 = 0;
    qfree(v69);
  }
LABEL_51:
  v30 = v85.m128i_i32[0];
  v31 = 0;
  *(_DWORD *)a2 = v85.m128i_i32[0];
  if ( v30 != 1 )
    v31 = (v30 != 2) + 1;
  *(_DWORD *)(a2 + 4) = v31;
  if ( !(unsigned __int8)sub_DE40((_DWORD *)a2, *(_DWORD *)(v4 + 104), *(_DWORD *)(v4 + 108), (__int64)v90, 0, 1) )
    goto LABEL_22;
  flags_by_size = get_flags_by_size(v85.m128i_i32[0]);
  *(_QWORD *)(a2 + 16) = v8;
  *(_QWORD *)(a2 + 8) = flags_by_size | 0x88888808800000LL;
  get_type_by_tid(a2 + 24, v8);
  v33 = *(_QWORD *)(a2 + 32);
  v34 = v94;
  v94 = nullptr;
  v35 = _mm_loadu_si128((const __m128i *)v95);
  *(_OWORD *)v95 = 0;
  if ( v33 )
  {
    *(_QWORD *)(a2 + 40) = 0;
    v85 = v35;
    qfree(v33);
    v36 = _mm_load_si128(&v85);
    *(_QWORD *)(a2 + 32) = v34;
    *(_DWORD *)(a2 + 68) = 1;
    v37 = v94;
    *(__m128i *)(a2 + 40) = v36;
    *(_BYTE *)(a2 + 72) = *(_BYTE *)(v4 + 112);
    if ( v37 )
    {
      v95[0] = 0;
      qfree(v37);
    }
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v34;
    *(_DWORD *)(a2 + 68) = 1;
    *(__m128i *)(a2 + 40) = v35;
    *(_BYTE *)(a2 + 72) = *(_BYTE *)(v4 + 112);
  }
  return v106 - __readfsqword(0x28u);
}

