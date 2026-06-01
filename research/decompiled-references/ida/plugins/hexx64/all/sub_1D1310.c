unsigned __int64 __fastcall sub_1D1310(
        __int64 a1,
        __int64 a2,
        unsigned __int64 **a3,
        __int64 *a4,
        __int64 *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  _QWORD *exception; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  __m128i v16; // xmm7
  __int64 v17; // rax
  __m128i v18; // xmm1
  unsigned __int64 v19; // rsi
  __m128i v20; // xmm6
  __m128i v21; // xmm0
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rax
  unsigned __int64 **v27; // rsi
  __int64 v28; // rcx
  __m128i v29; // xmm5
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  bool v32; // r15
  unsigned __int64 *v33; // rax
  unsigned __int64 **v34; // rsi
  bool v35; // di
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int64 **v38; // rsi
  unsigned __int64 v39; // r8
  __m128i v40; // xmm4
  _BYTE *v41; // rax
  __int64 v42; // rsi
  unsigned __int64 **v43; // rax
  int v44; // ebx
  __int64 v45; // r12
  unsigned __int64 v46; // rdx
  char *v47; // rdi
  unsigned __int64 *v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 *v50; // r15
  unsigned __int64 *v51; // r10
  __int64 v52; // r13
  int v53; // ebx
  unsigned __int64 v54; // rdi
  _DWORD *v55; // rax
  _DWORD *v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r15
  int v60; // ebx
  __int64 v61; // r13
  __int64 v62; // rax
  unsigned __int64 **v63; // rcx
  __m128i v64; // xmm2
  __int64 v65; // rdx
  unsigned __int64 v66; // rdx
  char v67; // si
  _BYTE *v68; // rax
  __int64 v69; // rax
  unsigned __int64 **v70; // rcx
  unsigned __int64 v71; // rdx
  __m128i v72; // xmm5
  char v73; // si
  unsigned __int64 v74; // rcx
  __int64 v76; // rax
  __m128i v77; // xmm7
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned __int64 v80; // rsi
  __m128i v81; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 **v82; // [rsp+10h] [rbp-A8h]
  __int64 *v83; // [rsp+18h] [rbp-A0h]
  __int64 v84; // [rsp+20h] [rbp-98h]
  unsigned __int64 v85; // [rsp+28h] [rbp-90h]
  unsigned __int64 **v86; // [rsp+30h] [rbp-88h]
  __int64 v87; // [rsp+38h] [rbp-80h]
  unsigned __int64 **v88; // [rsp+40h] [rbp-78h]
  __int64 v89; // [rsp+48h] [rbp-70h]
  __int64 *v90; // [rsp+50h] [rbp-68h]
  unsigned __int64 v91; // [rsp+58h] [rbp-60h]
  __int64 v92; // [rsp+60h] [rbp-58h] BYREF
  __int64 v93; // [rsp+68h] [rbp-50h]
  unsigned __int64 v94; // [rsp+78h] [rbp-40h]

  v89 = a1;
  v84 = a2;
  v88 = a3;
  v90 = a4;
  v83 = a5;
  v94 = __readfsqword(0x28u);
  v14 = qalloc();
  v15 = v14;
  v81 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
  if ( !v14 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v16 = _mm_load_si128(&v81);
  *(_QWORD *)(v14 + 32) = 0;
  *(_OWORD *)(v14 + 16) = 0;
  v85 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(__m128i *)(v14 + 8) = v16;
  v17 = qalloc();
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
  if ( !v17 )
  {
    v7 = __cxa_allocate_exception(8u);
    *v7 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v19 = v85;
  v20 = _mm_load_si128(&v81);
  v21.m128i_i64[0] = 0;
  *(_QWORD *)(v17 + 32) = 0;
  *(_OWORD *)(v17 + 16) = 0;
  v22 = 1;
  *(__m128i *)(v17 + 8) = v20;
  *(_QWORD *)v17 = v19 | 1;
  v23 = *(_QWORD *)v15;
  v87 = v19 | 1;
  *(__m128i *)(v15 + 8) = v18;
  *(_QWORD *)v15 = v17 & 0xFFFFFFFFFFFFFFFCLL | v23 & 3;
  v24 = *(_QWORD *)v17;
  *(_QWORD *)(v17 + 32) = 0;
  *(_QWORD *)v17 = v19 | v24 & 2;
  if ( !a6 )
    goto LABEL_29;
  v25 = 0;
  v82 = (unsigned __int64 **)&v92;
  if ( !*(_DWORD *)(v84 + 96) )
    goto LABEL_29;
  while ( 2 )
  {
    v86 = v82;
    v32 = sub_64930(a6, v25);
    if ( !v32 )
      goto LABEL_8;
    v33 = sub_1CFB40(v89, *(_QWORD *)(*(_QWORD *)(v84 + 72) + (v25 << 6)));
    v34 = nullptr;
    if ( v33 )
      v34 = (unsigned __int64 **)v33[1];
    if ( !v22 )
    {
      v86 = v34;
      v26 = qalloc();
      v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
      if ( !v26 )
      {
        v11 = __cxa_allocate_exception(8u);
        *v11 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v11,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v27 = v86;
      v28 = v87;
      v22 = 1;
      v29 = _mm_load_si128(&v81);
      *(_OWORD *)(v26 + 16) = 0;
      v30 = v85;
      *(_QWORD *)v26 = v28;
      *(_QWORD *)(v26 + 32) = v27;
      *(_DWORD *)(v26 + 24) = v25;
      *(__m128i *)(v26 + 8) = v29;
      v31 = *(_QWORD *)v15;
      *(__m128i *)(v15 + 8) = v21;
      *(_QWORD *)v15 = v26 & 0xFFFFFFFFFFFFFFFCLL | v31 & 3;
      *(_QWORD *)v26 = v30 | *(_QWORD *)v26 & 2LL;
      goto LABEL_8;
    }
    v35 = v32;
    v36 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v36 = v15;
LABEL_15:
      v91 = v36;
      v86 = v34;
      v37 = qalloc();
      if ( !v37 )
      {
        v12 = __cxa_allocate_exception(8u);
        *v12 = (char *)&`vtable for'std::bad_alloc + 16;
        v86 = (unsigned __int64 **)&v92;
        __cxa_throw(
          v12,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v38 = v86;
      v39 = v91;
      v21.m128i_i64[0] = 0;
      v40 = _mm_load_si128(&v81);
      *(_OWORD *)(v37 + 16) = 0;
      *(_QWORD *)(v37 + 32) = v38;
      *(_DWORD *)(v37 + 24) = v25;
      *(__m128i *)(v37 + 8) = v40;
      *(_QWORD *)v37 = v39 & 0xFFFFFFFFFFFFFFFCLL | 1;
      if ( v39 == v15 )
      {
        v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v37);
        v79 = *(_QWORD *)v15 & 3LL;
        *(__m128i *)(v15 + 8) = v21;
        v80 = v85;
        *(_QWORD *)v15 = v37 & 0xFFFFFFFFFFFFFFFCLL | v79;
        *(_QWORD *)v37 = v80 | *(_QWORD *)v37 & 2LL;
      }
      else
      {
        if ( v32 )
        {
          *(_QWORD *)(v39 + 8) = v37;
          if ( v39 == *(_QWORD *)(v15 + 8) )
            *(_QWORD *)(v15 + 8) = v37;
        }
        else
        {
          *(_QWORD *)(v39 + 16) = v37;
          if ( v39 == *(_QWORD *)(v15 + 16) )
            *(_QWORD *)(v15 + 16) = v37;
        }
        v92 = v15;
        v93 = v22;
        sub_1D0F30(&v92, (__int64 *)v37);
      }
      ++v22;
      goto LABEL_8;
    }
    while ( *(_DWORD *)(v36 + 24) > (int)v25 )
    {
      v41 = *(_BYTE **)(v36 + 8);
      v35 = v32;
      if ( (*v41 & 2) != 0 )
        goto LABEL_27;
LABEL_24:
      v36 = (unsigned __int64)v41;
    }
    if ( *(_DWORD *)(v36 + 24) < (int)v25 )
    {
      v41 = *(_BYTE **)(v36 + 16);
      v35 = 0;
      if ( (*v41 & 2) != 0 )
        goto LABEL_27;
      goto LABEL_24;
    }
    if ( !v36 )
    {
LABEL_27:
      v32 = v35;
      goto LABEL_15;
    }
LABEL_8:
    if ( ++v25 < (unsigned __int64)*(int *)(v84 + 96) )
      continue;
    break;
  }
  if ( !v22 )
  {
LABEL_99:
    qfree(v15);
    return v94 - __readfsqword(0x28u);
  }
LABEL_29:
  v86 = (unsigned __int64 **)&v92;
LABEL_30:
  v42 = 0;
  if ( !v15 )
    goto LABEL_32;
  do
  {
    v42 = *(_QWORD *)(v15 + 8);
LABEL_32:
    v43 = *(unsigned __int64 ***)(v42 + 32);
    v92 = v15;
    v93 = v22;
    v44 = *(_DWORD *)(v42 + 24);
    v82 = v43;
    sub_1D0B90(v86, (__int64 *)v42);
    v15 = v92;
    v22 = v93;
    LOBYTE(v87) = sub_64190(v90, v44, *(double *)v21.m128i_i64);
    if ( !(_BYTE)v87 )
      goto LABEL_75;
    v45 = *(_QWORD *)(v84 + 72) + ((__int64)v44 << 6);
    v46 = *(_QWORD *)v45;
    if ( *(_QWORD *)v45 >= *(_QWORD *)(v45 + 8) )
      goto LABEL_75;
    v47 = *(char **)(v89 + 1192);
    v81.m128i_i64[0] = (__int64)&v47[16 * *(_QWORD *)(v89 + 1200)];
    v48 = sub_1CCFD0(v47, v81.m128i_i64[0], v46);
    v50 = v48;
    if ( v48 == v51 )
    {
      sub_317040(v88, v49);
LABEL_56:
      v58 = *(_QWORD *)(v45 + 24);
      if ( (int)v58 <= 0 )
        goto LABEL_75;
LABEL_57:
      v59 = 4LL * (unsigned int)(v58 - 1) + 4;
      v60 = **(_DWORD **)(v45 + 16);
      if ( v15 )
      {
        v61 = 0;
        v81 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
        goto LABEL_63;
      }
      v76 = qalloc();
      v15 = v76;
      v81 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v76, (__m128i)(unsigned __int64)v76);
      if ( !v76 )
      {
        v6 = __cxa_allocate_exception(8u);
        *v6 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v6,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v77 = _mm_load_si128(&v81);
      *(_QWORD *)(v76 + 32) = 0;
      v61 = 0;
      *(_OWORD *)(v76 + 16) = 0;
      *(__m128i *)(v76 + 8) = v77;
      *(_QWORD *)v76 = v76 & 0xFFFFFFFFFFFFFFFCLL | 2;
      while ( 2 )
      {
        v62 = qalloc();
        v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v62, (__m128i)(unsigned __int64)v62);
        if ( !v62 )
        {
          v9 = __cxa_allocate_exception(8u);
          *v9 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v9,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v63 = v82;
        ++v22;
        v64 = _mm_load_si128(&v81);
        *(_OWORD *)(v62 + 16) = 0;
        *(_QWORD *)(v62 + 32) = v63;
        *(_DWORD *)(v62 + 24) = v60;
        *(__m128i *)(v62 + 8) = v64;
        *(_QWORD *)v62 = v15 & 0xFFFFFFFFFFFFFFFCLL | 1;
        v65 = *(_QWORD *)v15;
        *(__m128i *)(v15 + 8) = v21;
        *(_QWORD *)v15 = v62 & 0xFFFFFFFFFFFFFFFCLL | v65 & 3;
        *(_QWORD *)v62 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v62 & 2LL;
LABEL_61:
        v61 += 4;
        if ( v61 == v59 )
          goto LABEL_75;
LABEL_62:
        v60 = *(_DWORD *)(*(_QWORD *)(v45 + 16) + v61);
LABEL_63:
        if ( !v22 )
          continue;
        break;
      }
      v66 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v66 & 2) != 0 )
      {
        v67 = v87;
        v66 = v15;
        goto LABEL_68;
      }
      v67 = v87;
      while ( 1 )
      {
        if ( *(_DWORD *)(v66 + 24) <= v60 )
        {
          if ( *(_DWORD *)(v66 + 24) >= v60 )
          {
            if ( v66 )
              goto LABEL_61;
LABEL_68:
            v91 = v66;
            LOBYTE(v85) = v67;
            v69 = qalloc();
            if ( !v69 )
            {
              v8 = __cxa_allocate_exception(8u);
              *v8 = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                v8,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            v70 = v82;
            v71 = v91;
            v21.m128i_i64[0] = 0;
            v72 = _mm_load_si128(&v81);
            *(_OWORD *)(v69 + 16) = 0;
            v73 = v85;
            *(_QWORD *)(v69 + 32) = v70;
            v74 = v71 & 0xFFFFFFFFFFFFFFFCLL;
            *(_DWORD *)(v69 + 24) = v60;
            *(__m128i *)(v69 + 8) = v72;
            *(_QWORD *)v69 = v71 & 0xFFFFFFFFFFFFFFFCLL | 1;
            if ( v71 == v15 )
            {
              v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v69, (__m128i)(unsigned __int64)v69);
              v78 = *(_QWORD *)v15 & 3LL;
              *(__m128i *)(v15 + 8) = v21;
              *(_QWORD *)v15 = v69 & 0xFFFFFFFFFFFFFFFCLL | v78;
              *(_QWORD *)v69 = v74 | *(_QWORD *)v69 & 2LL;
            }
            else
            {
              if ( v73 )
              {
                *(_QWORD *)(v71 + 8) = v69;
                if ( v71 == *(_QWORD *)(v15 + 8) )
                  *(_QWORD *)(v15 + 8) = v69;
              }
              else
              {
                *(_QWORD *)(v71 + 16) = v69;
                if ( v71 == *(_QWORD *)(v15 + 16) )
                  *(_QWORD *)(v15 + 16) = v69;
              }
              v92 = v15;
              v93 = v22;
              sub_1D0F30(v86, (__int64 *)v69);
            }
            v61 += 4;
            ++v22;
            if ( v61 == v59 )
            {
LABEL_75:
              if ( !v22 )
                goto LABEL_76;
              goto LABEL_30;
            }
            goto LABEL_62;
          }
          v68 = *(_BYTE **)(v66 + 16);
          v67 = 0;
          if ( (*v68 & 2) != 0 )
            goto LABEL_68;
        }
        else
        {
          v68 = *(_BYTE **)(v66 + 8);
          v67 = v87;
          if ( (*v68 & 2) != 0 )
            goto LABEL_68;
        }
        v66 = (unsigned __int64)v68;
      }
    }
    v52 = ((char *)v48 - v47) >> 4;
    if ( sub_64930(v83, v52) )
    {
      LODWORD(v52) = v52 + 1;
      v50 += 2;
    }
    LOBYTE(v85) = sub_317040(v88, *(_QWORD *)v45);
    if ( v50 == (unsigned __int64 *)v81.m128i_i64[0] )
      goto LABEL_56;
    v53 = v44 + 1;
    while ( 1 )
    {
      v54 = *(_QWORD *)(v45 + 8);
      if ( v54 < *v50 )
        goto LABEL_56;
      if ( *v50 == v54 )
      {
        v55 = *(_DWORD **)(v45 + 16);
        v56 = &v55[*(_QWORD *)(v45 + 24)];
        if ( v55 == v56 )
          goto LABEL_78;
        while ( v53 != *v55 )
        {
          if ( v56 == ++v55 )
            goto LABEL_78;
        }
        if ( v56 == v55 )
        {
LABEL_78:
          if ( (get_flags_ex() & 0x10000) == 0 )
            goto LABEL_56;
          goto LABEL_52;
        }
        if ( v15 )
        {
          v57 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !v57 )
            break;
          if ( (*(_BYTE *)(*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
          {
            while ( v53 < *(_DWORD *)(v57 + 24) )
            {
              v57 = *(_QWORD *)(v57 + 8);
LABEL_51:
              if ( (*(_BYTE *)v57 & 2) != 0 )
                goto LABEL_52;
            }
            if ( v53 > *(_DWORD *)(v57 + 24) )
            {
              v57 = *(_QWORD *)(v57 + 16);
              goto LABEL_51;
            }
            if ( v15 != v57 )
              break;
          }
        }
      }
LABEL_52:
      if ( (unsigned __int8)sub_64190(v83, v52, *(double *)v21.m128i_i64) )
      {
        if ( (_BYTE)v85 )
        {
          v82 = (unsigned __int64 **)((char *)v82 + v50[1]);
          v50[1] = (unsigned __int64)v82;
        }
        else
        {
          v82 = (unsigned __int64 **)v50[1];
        }
      }
      v50 += 2;
      LODWORD(v52) = v52 + 1;
      if ( v50 == (unsigned __int64 *)v81.m128i_i64[0] )
        goto LABEL_56;
    }
    if ( !sub_317040(v88, *(_QWORD *)(v45 + 8)) )
      goto LABEL_52;
    v50[1] = 0;
    v58 = *(_QWORD *)(v45 + 24);
    if ( (int)v58 > 0 )
      goto LABEL_57;
  }
  while ( v22 );
LABEL_76:
  if ( v15 )
    goto LABEL_99;
  return v94 - __readfsqword(0x28u);
}

