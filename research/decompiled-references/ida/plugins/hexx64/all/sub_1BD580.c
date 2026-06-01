unsigned __int64 __fastcall sub_1BD580(__int64 a1, __int64 **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  __m128i si128; // xmm0
  __m128i v8; // xmm1
  __int64 *v10; // rsi
  unsigned __int64 *v11; // r13
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rdx
  __int64 v21; // rdi
  _QWORD *v22; // r8
  unsigned __int64 v23; // rcx
  char v24; // di
  __m128i v25; // xmm0
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  char v38; // si
  unsigned __int64 v39; // rax
  char v40; // dl
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 *v44; // rcx
  __int64 v45; // rax
  __m128i v46; // xmm1
  __int64 v47; // rax
  unsigned __int64 v48; // rdi
  _QWORD *v49; // rdx
  __int64 v50; // rdi
  _QWORD *v51; // r8
  unsigned __int64 v52; // rcx
  _QWORD *v53; // [rsp+18h] [rbp-1F0h]
  const __m128i *v54; // [rsp+28h] [rbp-1E0h] BYREF
  __int128 v55; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-1C8h]
  __int64 v57; // [rsp+48h] [rbp-1C0h]
  int v58; // [rsp+50h] [rbp-1B8h]
  __int128 v59; // [rsp+58h] [rbp-1B0h]
  __int64 v60; // [rsp+68h] [rbp-1A0h]
  char v61; // [rsp+70h] [rbp-198h]
  int v62; // [rsp+80h] [rbp-188h]
  __m128i v63; // [rsp+88h] [rbp-180h] BYREF
  int v64; // [rsp+98h] [rbp-170h]
  __int64 v65; // [rsp+A0h] [rbp-168h]
  __m128i v66; // [rsp+A8h] [rbp-160h]
  __m128i v67; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v68; // [rsp+C8h] [rbp-140h]
  __int64 v69; // [rsp+D0h] [rbp-138h]
  __int64 v70; // [rsp+D8h] [rbp-130h]
  __int64 v71; // [rsp+E0h] [rbp-128h]
  __int64 v72; // [rsp+E8h] [rbp-120h]
  __int64 v73; // [rsp+F0h] [rbp-118h]
  __int64 v74; // [rsp+F8h] [rbp-110h]
  void *src; // [rsp+100h] [rbp-108h]
  __int128 v76; // [rsp+108h] [rbp-100h]
  unsigned __int64 v77; // [rsp+120h] [rbp-E8h] BYREF
  int v78; // [rsp+128h] [rbp-E0h]
  __m128i v79; // [rsp+130h] [rbp-D8h]
  int v80; // [rsp+140h] [rbp-C8h]
  int v81; // [rsp+148h] [rbp-C0h]
  __int16 v82; // [rsp+14Ch] [rbp-BCh]
  __m128i v83; // [rsp+150h] [rbp-B8h]
  __m128i v84; // [rsp+160h] [rbp-A8h]
  int v85; // [rsp+170h] [rbp-98h]
  __int64 v86; // [rsp+178h] [rbp-90h]
  __int64 v87; // [rsp+180h] [rbp-88h]
  int v88; // [rsp+188h] [rbp-80h]
  char v89; // [rsp+18Ch] [rbp-7Ch]
  __int64 v90; // [rsp+190h] [rbp-78h]
  int v91; // [rsp+198h] [rbp-70h]
  __int64 v92; // [rsp+1A0h] [rbp-68h]
  void *v93; // [rsp+1A8h] [rbp-60h]
  __int128 v94; // [rsp+1B0h] [rbp-58h]
  unsigned __int64 v95; // [rsp+1C8h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v8 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v95 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(__m128i *)(a1 + 8) = si128;
  v66 = v8;
  *(_QWORD *)(a1 + 40) = 0;
  v62 = -1;
  v64 = 0;
  v65 = 0x800000;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0xFFFFFFFFLL;
  *(_OWORD *)(a1 + 24) = 0;
  v63 = 0;
  v67 = (__m128i)-1LL;
  v72 = 0;
  v10 = *a2;
  v73 = 2;
  v74 = -1;
  src = nullptr;
  v56 = -1;
  v57 = 0;
  v58 = -1;
  v60 = -1;
  v61 = 1;
  v76 = 0;
  v55 = 0;
  v59 = 0;
  if ( v10 )
  {
    v60 = *v10;
    if ( (unsigned __int8)func_tail_iterator_set() )
    {
      v61 = 0;
      sub_332560(&v55, (__int64)(a2 + 1));
      goto LABEL_4;
    }
  }
  if ( (unsigned __int8)sub_332560(&v55, (__int64)(a2 + 1)) )
  {
LABEL_4:
    v11 = nullptr;
    while ( 1 )
    {
      v12 = v61 ? v56 : v60;
      if ( get_switch_info() > 0 )
        break;
LABEL_41:
      if ( v61 )
      {
LABEL_44:
        if ( !(unsigned __int8)sub_332580(&v55) )
          goto LABEL_45;
      }
      else if ( !(unsigned __int8)func_item_iterator_next() )
      {
        v61 = 1;
        goto LABEL_44;
      }
    }
    v77 = v12;
    v15 = _mm_loadu_si128(&v63);
    v78 = v62;
    v79 = v15;
    v16 = _mm_loadu_si128(&v67);
    v80 = v64;
    v84 = v16;
    v81 = v65;
    v82 = WORD2(v65);
    v83 = v66;
    v85 = v68;
    v86 = v69;
    v87 = v70;
    v88 = v71;
    v89 = BYTE4(v71);
    v90 = v72;
    v91 = v73;
    v92 = v74;
    v17 = v76;
    v93 = nullptr;
    v94 = 0;
    if ( (_QWORD)v76 )
    {
      v93 = (void *)qalloc_or_throw(8 * v76, v12, v13, v14);
      *((_QWORD *)&v94 + 1) = v17;
      memcpy(v93, src, 8 * v17);
      *(_QWORD *)&v94 = v17;
    }
    v18 = *(_QWORD *)a1;
    v54 = (const __m128i *)&v77;
    if ( !v18 )
    {
      v18 = qalloc();
      v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
      if ( !v18 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)a1 = v18;
      memset((void *)v18, 0, 0xB8u);
      *(__m128i *)(v18 + 8) = v25;
      *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_26:
      v26 = sub_1BCFA0((__m128i *)a1, (unsigned __int64 *)v18, 1, &v54);
      goto LABEL_27;
    }
    if ( !*(_QWORD *)(a1 + 8) )
      goto LABEL_26;
    if ( !v11 )
      goto LABEL_61;
    if ( (unsigned __int64 *)v18 != v11 )
    {
      if ( v11[3] < v77 )
      {
        if ( (*v11 & 2) != 0 )
        {
          v23 = (unsigned __int64)v11;
          goto LABEL_96;
        }
        v19 = v11[2];
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          v20 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
          v21 = *v20;
          if ( (*v20 & 2) != 0 )
          {
            v24 = 0;
            if ( (_QWORD *)v18 == v20 || v77 < v20[3] )
              goto LABEL_89;
          }
          else
          {
            if ( (unsigned __int64 *)v20[2] == v11 )
            {
              while ( 1 )
              {
                v22 = v20;
                v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
                v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v21 & 2) != 0 )
                  break;
                v20 = (_QWORD *)v23;
                if ( *(_QWORD **)(v23 + 16) != v22 )
                  goto LABEL_21;
              }
            }
            else
            {
LABEL_21:
              v23 = (unsigned __int64)v20;
            }
            if ( v18 == v23 )
              goto LABEL_23;
LABEL_96:
            if ( v77 < *(_QWORD *)(v23 + 24) )
            {
              if ( (*(_BYTE *)v11[2] & 2) != 0 )
              {
LABEL_23:
                v24 = 0;
                goto LABEL_89;
              }
              if ( (**(_BYTE **)(v23 + 8) & 2) != 0 )
              {
                v11 = (unsigned __int64 *)v23;
LABEL_88:
                v24 = 1;
LABEL_89:
                v26 = sub_1BCFA0((__m128i *)a1, v11, v24, &v54);
                goto LABEL_27;
              }
            }
          }
        }
        else
        {
          do
          {
            v23 = v19;
            v19 = *(_QWORD *)(v19 + 8);
          }
          while ( (*(_BYTE *)v19 & 2) == 0 );
          if ( v18 != v23 )
            goto LABEL_96;
        }
LABEL_61:
        v40 = 1;
        v11 = (unsigned __int64 *)(*(_QWORD *)v18 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*(_BYTE *)v11 & 2) != 0 )
          goto LABEL_62;
        while ( 1 )
        {
          v43 = v11[3];
          if ( v77 < v43 )
          {
            v44 = (unsigned __int64 *)v11[1];
            v40 = 1;
            if ( (*(_BYTE *)v44 & 2) != 0 )
              goto LABEL_72;
          }
          else
          {
            if ( v43 >= v77 )
            {
              if ( !v11 )
              {
LABEL_72:
                v18 = (__int64)v11;
LABEL_62:
                v26 = sub_1BCFA0((__m128i *)a1, (unsigned __int64 *)v18, v40, &v54);
                goto LABEL_27;
              }
              goto LABEL_28;
            }
            v44 = (unsigned __int64 *)v11[2];
            v40 = 0;
            if ( (*(_BYTE *)v44 & 2) != 0 )
              goto LABEL_72;
          }
          v11 = v44;
        }
      }
      if ( v11[3] == v77 )
      {
        v26 = (unsigned __int64)v11;
        goto LABEL_27;
      }
      if ( (*v11 & 2) != 0 )
      {
        v52 = (unsigned __int64)v11;
      }
      else
      {
        v48 = v11[1];
        if ( (*(_BYTE *)v48 & 2) != 0 )
        {
          v49 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
          v50 = *v49;
          if ( (*v49 & 2) != 0 )
          {
            v24 = 1;
            if ( (_QWORD *)v18 == v49 )
              goto LABEL_89;
            v24 = 1;
            if ( v49[3] < v77 )
              goto LABEL_89;
            goto LABEL_61;
          }
          if ( (unsigned __int64 *)v49[1] == v11 )
          {
            while ( 1 )
            {
              v51 = v49;
              v52 = v50 & 0xFFFFFFFFFFFFFFFCLL;
              v50 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v50 & 2) != 0 )
                break;
              v49 = (_QWORD *)v52;
              if ( *(_QWORD **)(v52 + 8) != v51 )
                goto LABEL_86;
            }
          }
          else
          {
LABEL_86:
            v52 = (unsigned __int64)v49;
          }
          if ( v18 == v52 )
            goto LABEL_88;
        }
        else
        {
          do
          {
            v52 = v48;
            v48 = *(_QWORD *)(v48 + 16);
          }
          while ( (*(_BYTE *)v48 & 2) == 0 );
          if ( v18 == v52 )
            goto LABEL_61;
        }
      }
      if ( *(_QWORD *)(v52 + 24) < v77 )
      {
        if ( (*(_BYTE *)v11[1] & 2) != 0 )
          goto LABEL_88;
        if ( (**(_BYTE **)(v52 + 16) & 2) != 0 )
        {
          v11 = (unsigned __int64 *)v52;
          v24 = 0;
          goto LABEL_89;
        }
      }
      goto LABEL_61;
    }
    v26 = v11[2];
    if ( (*(_BYTE *)v26 & 2) != 0 )
      goto LABEL_88;
    if ( *(_QWORD *)(v26 + 24) < v77 )
    {
      v11 = (unsigned __int64 *)v11[2];
      v24 = 0;
      goto LABEL_89;
    }
    if ( *(_QWORD *)(v26 + 24) != v77 )
      goto LABEL_61;
    if ( !v26 )
      goto LABEL_88;
LABEL_27:
    v11 = (unsigned __int64 *)v26;
LABEL_28:
    if ( v93 )
    {
      *(_QWORD *)&v94 = 0;
      qfree((__int64)v93);
    }
    v27 = *(_QWORD *)(a1 + 32);
    if ( v27 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v29 = *(_QWORD *)v27 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
          v38 = 1;
        }
        else
        {
          v37 = *(_QWORD *)(v29 + 24);
          v38 = 1;
          v32 = (_QWORD *)(v29 + 24);
          if ( v67.m128i_i64[0] >= v37 )
            goto LABEL_55;
LABEL_53:
          v39 = *(_QWORD *)(v29 + 8);
          v38 = 1;
          if ( (*(_BYTE *)v39 & 2) != 0 )
          {
LABEL_57:
            v27 = v29;
          }
          else
          {
            while ( 1 )
            {
              v29 = v39;
              v37 = *(_QWORD *)(v39 + 24);
              v32 = (_QWORD *)(v29 + 24);
              if ( v67.m128i_i64[0] < v37 )
                goto LABEL_53;
LABEL_55:
              if ( v37 >= v67.m128i_i64[0] )
                break;
              v39 = *(_QWORD *)(v29 + 16);
              v38 = 0;
              if ( (*(_BYTE *)v39 & 2) != 0 )
                goto LABEL_57;
            }
            if ( v29 )
            {
LABEL_38:
              v33 = v32[2];
              v34 = v32[1];
              if ( v32[3] < (unsigned __int64)(v33 + 1) )
              {
                v53 = v32;
                v36 = qvector_reserve(v29 + 32, v34, v33 + 1, 8);
                v32 = v53;
                v34 = v36;
                v53[1] = v36;
                v33 = v53[2];
              }
              *(_QWORD *)(v34 + 8 * v33) = v12;
              ++v32[2];
              goto LABEL_41;
            }
            v27 = 0;
          }
        }
        v41 = qalloc();
        v29 = v41;
        if ( !v41 )
        {
          v5 = __cxa_allocate_exception(8u);
          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v5,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v41 + 48) = 0;
        *(_OWORD *)v41 = 0;
        *(_OWORD *)(v41 + 16) = 0;
        *(_OWORD *)(v41 + 32) = 0;
        v42 = v67.m128i_i64[0];
        *(_OWORD *)(v29 + 40) = 0;
        *(_QWORD *)(v29 + 24) = v42;
        *(_QWORD *)(v29 + 32) = 0;
        v31 = *(_QWORD **)(a1 + 32);
        *(_QWORD *)v29 = v27 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
        if ( v31 != (_QWORD *)v27 )
        {
          if ( !v38 )
          {
            *(_QWORD *)(v27 + 16) = v29;
            if ( v31[2] == v27 )
              v31[2] = v29;
            goto LABEL_36;
          }
LABEL_34:
          *(_QWORD *)(v27 + 8) = v29;
          if ( v31[1] == v27 )
            v31[1] = v29;
LABEL_36:
          sub_1BD1A0((_QWORD *)(a1 + 32), (__int64 *)v29);
LABEL_37:
          ++*(_QWORD *)(a1 + 40);
          v32 = (_QWORD *)(v29 + 24);
          goto LABEL_38;
        }
LABEL_77:
        v47 = *(_QWORD *)v27 & 3LL;
        *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
        *(_QWORD *)v27 = v29 & 0xFFFFFFFFFFFFFFFCLL | v47;
        *(_QWORD *)v29 = v27 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 2LL;
        goto LABEL_37;
      }
    }
    else
    {
      v45 = qalloc();
      v27 = v45;
      v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
      if ( !v45 )
      {
        v3 = __cxa_allocate_exception(8u);
        *v3 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v3,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v45 + 48) = 0;
      *(_OWORD *)(v45 + 16) = 0;
      *(_OWORD *)(v45 + 32) = 0;
      *(__m128i *)(v45 + 8) = v46;
      *(_QWORD *)(a1 + 32) = v45;
      *(_QWORD *)v45 = v45 & 0xFFFFFFFFFFFFFFFCLL | 2;
    }
    v28 = qalloc();
    v29 = v28;
    if ( !v28 )
    {
      v2 = __cxa_allocate_exception(8u);
      *v2 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v28 + 48) = 0;
    *(_OWORD *)v28 = 0;
    *(_OWORD *)(v28 + 16) = 0;
    *(_OWORD *)(v28 + 32) = 0;
    v30 = v67.m128i_i64[0];
    *(_OWORD *)(v29 + 40) = 0;
    *(_QWORD *)(v29 + 24) = v30;
    *(_QWORD *)(v29 + 32) = 0;
    v31 = *(_QWORD **)(a1 + 32);
    *(_QWORD *)v29 = v27 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
    if ( v31 != (_QWORD *)v27 )
      goto LABEL_34;
    goto LABEL_77;
  }
LABEL_45:
  if ( v57 )
    lock_func_range();
  if ( src )
  {
    *(_QWORD *)&v76 = 0;
    qfree((__int64)src);
  }
  return v95 - __readfsqword(0x28u);
}

