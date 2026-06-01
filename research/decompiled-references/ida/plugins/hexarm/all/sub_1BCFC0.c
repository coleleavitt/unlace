unsigned __int64 __fastcall sub_1BCFC0(__int64 a1, __int64 **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  __m128i si128; // xmm0
  __m128i v8; // xmm1
  __int64 *v10; // rsi
  unsigned __int64 *v11; // r13
  bool (__fastcall *v12)(__int16); // r12
  bool (__fastcall *v13)(__int16); // rsi
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // r14
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  _QWORD *v19; // rdx
  __int64 v20; // rdi
  _QWORD *v21; // r8
  unsigned __int64 v22; // rcx
  char v23; // di
  __m128i v24; // xmm0
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // r8
  __int64 v32; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rax
  char v37; // si
  unsigned __int64 v38; // rax
  char v39; // dl
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 *v43; // rcx
  __int64 v44; // rax
  __m128i v45; // xmm1
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  _QWORD *v48; // rdx
  __int64 v49; // rdi
  _QWORD *v50; // r8
  unsigned __int64 v51; // rcx
  _QWORD *v52; // [rsp+18h] [rbp-1F0h]
  const __m128i *v53; // [rsp+28h] [rbp-1E0h] BYREF
  __int128 v54; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v55; // [rsp+40h] [rbp-1C8h]
  __int64 v56; // [rsp+48h] [rbp-1C0h]
  int v57; // [rsp+50h] [rbp-1B8h]
  __int128 v58; // [rsp+58h] [rbp-1B0h]
  __int64 v59; // [rsp+68h] [rbp-1A0h]
  char v60; // [rsp+70h] [rbp-198h]
  int v61; // [rsp+80h] [rbp-188h]
  __m128i v62; // [rsp+88h] [rbp-180h] BYREF
  int v63; // [rsp+98h] [rbp-170h]
  __int64 v64; // [rsp+A0h] [rbp-168h]
  __m128i v65; // [rsp+A8h] [rbp-160h]
  __m128i v66; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v67; // [rsp+C8h] [rbp-140h]
  __int64 v68; // [rsp+D0h] [rbp-138h]
  __int64 v69; // [rsp+D8h] [rbp-130h]
  __int64 v70; // [rsp+E0h] [rbp-128h]
  __int64 v71; // [rsp+E8h] [rbp-120h]
  __int64 v72; // [rsp+F0h] [rbp-118h]
  __int64 v73; // [rsp+F8h] [rbp-110h]
  void *src; // [rsp+100h] [rbp-108h]
  __int128 v75; // [rsp+108h] [rbp-100h]
  unsigned __int64 v76; // [rsp+120h] [rbp-E8h] BYREF
  int v77; // [rsp+128h] [rbp-E0h]
  __m128i v78; // [rsp+130h] [rbp-D8h]
  int v79; // [rsp+140h] [rbp-C8h]
  int v80; // [rsp+148h] [rbp-C0h]
  __int16 v81; // [rsp+14Ch] [rbp-BCh]
  __m128i v82; // [rsp+150h] [rbp-B8h]
  __m128i v83; // [rsp+160h] [rbp-A8h]
  int v84; // [rsp+170h] [rbp-98h]
  __int64 v85; // [rsp+178h] [rbp-90h]
  __int64 v86; // [rsp+180h] [rbp-88h]
  int v87; // [rsp+188h] [rbp-80h]
  char v88; // [rsp+18Ch] [rbp-7Ch]
  __int64 v89; // [rsp+190h] [rbp-78h]
  int v90; // [rsp+198h] [rbp-70h]
  __int64 v91; // [rsp+1A0h] [rbp-68h]
  void *v92; // [rsp+1A8h] [rbp-60h]
  __int128 v93; // [rsp+1B0h] [rbp-58h]
  unsigned __int64 v94; // [rsp+1C8h] [rbp-40h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  v8 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v94 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(__m128i *)(a1 + 8) = si128;
  v65 = v8;
  *(_QWORD *)(a1 + 40) = 0;
  v61 = -1;
  v63 = 0;
  v64 = 0x800000;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0xFFFFFFFFLL;
  *(_OWORD *)(a1 + 24) = 0;
  v62 = 0;
  v66 = (__m128i)-1LL;
  v71 = 0;
  v10 = *a2;
  v72 = 2;
  v73 = -1;
  src = nullptr;
  v55 = -1;
  v56 = 0;
  v57 = -1;
  v59 = -1;
  v60 = 1;
  v75 = 0;
  v54 = 0;
  v58 = 0;
  if ( v10 )
  {
    v59 = *v10;
    if ( (unsigned __int8)func_tail_iterator_set() )
    {
      v60 = 0;
      sub_3328A0(&v54, a2 + 1);
      goto LABEL_4;
    }
  }
  if ( (unsigned __int8)sub_3328A0(&v54, a2 + 1) )
  {
LABEL_4:
    v11 = nullptr;
    while ( 1 )
    {
      v12 = (bool (__fastcall *)(__int16))(v60 ? v55 : v59);
      v13 = v12;
      if ( get_switch_info() > 0 )
        break;
LABEL_41:
      if ( v60 )
      {
LABEL_44:
        if ( !(unsigned __int8)sub_3328C0(&v54, v13) )
          goto LABEL_45;
      }
      else
      {
        v13 = sub_1B7C10;
        if ( !(unsigned __int8)func_item_iterator_next() )
        {
          v60 = 1;
          goto LABEL_44;
        }
      }
    }
    v76 = (unsigned __int64)v12;
    v14 = _mm_loadu_si128(&v62);
    v77 = v61;
    v78 = v14;
    v15 = _mm_loadu_si128(&v66);
    v79 = v63;
    v83 = v15;
    v80 = v64;
    v81 = WORD2(v64);
    v82 = v65;
    v84 = v67;
    v85 = v68;
    v86 = v69;
    v87 = v70;
    v88 = BYTE4(v70);
    v89 = v71;
    v90 = v72;
    v91 = v73;
    v16 = v75;
    v92 = nullptr;
    v93 = 0;
    if ( (_QWORD)v75 )
    {
      v92 = (void *)qalloc_or_throw();
      *((_QWORD *)&v93 + 1) = v16;
      memcpy(v92, src, 8 * v16);
      *(_QWORD *)&v93 = v16;
    }
    v17 = *(_QWORD *)a1;
    v53 = (const __m128i *)&v76;
    if ( !v17 )
    {
      v17 = qalloc();
      v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
      if ( !v17 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)a1 = v17;
      memset((void *)v17, 0, 0xB8u);
      *(__m128i *)(v17 + 8) = v24;
      *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_26:
      v25 = sub_1BC9E0((__m128i *)a1, (unsigned __int64 *)v17, 1, &v53);
      goto LABEL_27;
    }
    if ( !*(_QWORD *)(a1 + 8) )
      goto LABEL_26;
    if ( !v11 )
      goto LABEL_61;
    if ( (unsigned __int64 *)v17 != v11 )
    {
      if ( v11[3] < v76 )
      {
        if ( (*v11 & 2) != 0 )
        {
          v22 = (unsigned __int64)v11;
          goto LABEL_96;
        }
        v18 = v11[2];
        if ( (*(_BYTE *)v18 & 2) != 0 )
        {
          v19 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
          v20 = *v19;
          if ( (*v19 & 2) != 0 )
          {
            v23 = 0;
            if ( (_QWORD *)v17 == v19 || v76 < v19[3] )
              goto LABEL_89;
          }
          else
          {
            if ( (unsigned __int64 *)v19[2] == v11 )
            {
              while ( 1 )
              {
                v21 = v19;
                v22 = v20 & 0xFFFFFFFFFFFFFFFCLL;
                v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v20 & 2) != 0 )
                  break;
                v19 = (_QWORD *)v22;
                if ( *(_QWORD **)(v22 + 16) != v21 )
                  goto LABEL_21;
              }
            }
            else
            {
LABEL_21:
              v22 = (unsigned __int64)v19;
            }
            if ( v17 == v22 )
              goto LABEL_23;
LABEL_96:
            if ( v76 < *(_QWORD *)(v22 + 24) )
            {
              if ( (*(_BYTE *)v11[2] & 2) != 0 )
              {
LABEL_23:
                v23 = 0;
                goto LABEL_89;
              }
              if ( (**(_BYTE **)(v22 + 8) & 2) != 0 )
              {
                v11 = (unsigned __int64 *)v22;
LABEL_88:
                v23 = 1;
LABEL_89:
                v25 = sub_1BC9E0((__m128i *)a1, v11, v23, &v53);
                goto LABEL_27;
              }
            }
          }
        }
        else
        {
          do
          {
            v22 = v18;
            v18 = *(_QWORD *)(v18 + 8);
          }
          while ( (*(_BYTE *)v18 & 2) == 0 );
          if ( v17 != v22 )
            goto LABEL_96;
        }
LABEL_61:
        v39 = 1;
        v11 = (unsigned __int64 *)(*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*(_BYTE *)v11 & 2) != 0 )
          goto LABEL_62;
        while ( 1 )
        {
          v42 = v11[3];
          if ( v76 < v42 )
          {
            v43 = (unsigned __int64 *)v11[1];
            v39 = 1;
            if ( (*(_BYTE *)v43 & 2) != 0 )
              goto LABEL_72;
          }
          else
          {
            if ( v42 >= v76 )
            {
              if ( !v11 )
              {
LABEL_72:
                v17 = (__int64)v11;
LABEL_62:
                v25 = sub_1BC9E0((__m128i *)a1, (unsigned __int64 *)v17, v39, &v53);
                goto LABEL_27;
              }
              goto LABEL_28;
            }
            v43 = (unsigned __int64 *)v11[2];
            v39 = 0;
            if ( (*(_BYTE *)v43 & 2) != 0 )
              goto LABEL_72;
          }
          v11 = v43;
        }
      }
      if ( v11[3] == v76 )
      {
        v25 = (unsigned __int64)v11;
        goto LABEL_27;
      }
      if ( (*v11 & 2) != 0 )
      {
        v51 = (unsigned __int64)v11;
      }
      else
      {
        v47 = v11[1];
        if ( (*(_BYTE *)v47 & 2) != 0 )
        {
          v48 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
          v49 = *v48;
          if ( (*v48 & 2) != 0 )
          {
            v23 = 1;
            if ( (_QWORD *)v17 == v48 )
              goto LABEL_89;
            v23 = 1;
            if ( v48[3] < v76 )
              goto LABEL_89;
            goto LABEL_61;
          }
          if ( (unsigned __int64 *)v48[1] == v11 )
          {
            while ( 1 )
            {
              v50 = v48;
              v51 = v49 & 0xFFFFFFFFFFFFFFFCLL;
              v49 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v49 & 2) != 0 )
                break;
              v48 = (_QWORD *)v51;
              if ( *(_QWORD **)(v51 + 8) != v50 )
                goto LABEL_86;
            }
          }
          else
          {
LABEL_86:
            v51 = (unsigned __int64)v48;
          }
          if ( v17 == v51 )
            goto LABEL_88;
        }
        else
        {
          do
          {
            v51 = v47;
            v47 = *(_QWORD *)(v47 + 16);
          }
          while ( (*(_BYTE *)v47 & 2) == 0 );
          if ( v17 == v51 )
            goto LABEL_61;
        }
      }
      if ( *(_QWORD *)(v51 + 24) < v76 )
      {
        if ( (*(_BYTE *)v11[1] & 2) != 0 )
          goto LABEL_88;
        if ( (**(_BYTE **)(v51 + 16) & 2) != 0 )
        {
          v11 = (unsigned __int64 *)v51;
          v23 = 0;
          goto LABEL_89;
        }
      }
      goto LABEL_61;
    }
    v25 = v11[2];
    if ( (*(_BYTE *)v25 & 2) != 0 )
      goto LABEL_88;
    if ( *(_QWORD *)(v25 + 24) < v76 )
    {
      v11 = (unsigned __int64 *)v11[2];
      v23 = 0;
      goto LABEL_89;
    }
    if ( *(_QWORD *)(v25 + 24) != v76 )
      goto LABEL_61;
    if ( !v25 )
      goto LABEL_88;
LABEL_27:
    v11 = (unsigned __int64 *)v25;
LABEL_28:
    if ( v92 )
    {
      *(_QWORD *)&v93 = 0;
      qfree();
    }
    v26 = *(_QWORD *)(a1 + 32);
    if ( v26 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v35 = *(_QWORD *)v26 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v35 & 2) != 0 )
        {
          v37 = 1;
        }
        else
        {
          v36 = *(_QWORD *)(v35 + 24);
          v37 = 1;
          v31 = (_QWORD *)(v35 + 24);
          if ( v66.m128i_i64[0] >= v36 )
            goto LABEL_55;
LABEL_53:
          v38 = *(_QWORD *)(v35 + 8);
          v37 = 1;
          if ( (*(_BYTE *)v38 & 2) != 0 )
          {
LABEL_57:
            v26 = v35;
          }
          else
          {
            while ( 1 )
            {
              v35 = v38;
              v36 = *(_QWORD *)(v38 + 24);
              v31 = (_QWORD *)(v35 + 24);
              if ( v66.m128i_i64[0] < v36 )
                goto LABEL_53;
LABEL_55:
              if ( v36 >= v66.m128i_i64[0] )
                break;
              v38 = *(_QWORD *)(v35 + 16);
              v37 = 0;
              if ( (*(_BYTE *)v38 & 2) != 0 )
                goto LABEL_57;
            }
            if ( v35 )
            {
LABEL_38:
              v32 = v31[2];
              v13 = (bool (__fastcall *)(__int16))v31[1];
              if ( v31[3] < (unsigned __int64)(v32 + 1) )
              {
                v52 = v31;
                v34 = qvector_reserve();
                v31 = v52;
                v13 = (bool (__fastcall *)(__int16))v34;
                v52[1] = v34;
                v32 = v52[2];
              }
              *((_QWORD *)v13 + v32) = v12;
              ++v31[2];
              goto LABEL_41;
            }
            v26 = 0;
          }
        }
        v40 = qalloc();
        v28 = v40;
        if ( !v40 )
        {
          v5 = __cxa_allocate_exception(8u);
          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v5,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v40 + 48) = 0;
        *(_OWORD *)v40 = 0;
        *(_OWORD *)(v40 + 16) = 0;
        *(_OWORD *)(v40 + 32) = 0;
        v41 = v66.m128i_i64[0];
        *(_OWORD *)(v28 + 40) = 0;
        *(_QWORD *)(v28 + 24) = v41;
        *(_QWORD *)(v28 + 32) = 0;
        v30 = *(_QWORD **)(a1 + 32);
        *(_QWORD *)v28 = v26 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
        if ( v30 != (_QWORD *)v26 )
        {
          if ( !v37 )
          {
            *(_QWORD *)(v26 + 16) = v28;
            if ( v30[2] == v26 )
              v30[2] = v28;
            goto LABEL_36;
          }
LABEL_34:
          *(_QWORD *)(v26 + 8) = v28;
          if ( v30[1] == v26 )
            v30[1] = v28;
LABEL_36:
          sub_1BCBE0((_QWORD *)(a1 + 32), (__int64 *)v28);
LABEL_37:
          ++*(_QWORD *)(a1 + 40);
          v31 = (_QWORD *)(v28 + 24);
          goto LABEL_38;
        }
LABEL_77:
        v46 = *(_QWORD *)v26 & 3LL;
        *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
        *(_QWORD *)v26 = v28 & 0xFFFFFFFFFFFFFFFCLL | v46;
        *(_QWORD *)v28 = v26 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v28 & 2LL;
        goto LABEL_37;
      }
    }
    else
    {
      v44 = qalloc();
      v26 = v44;
      v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v44, (__m128i)(unsigned __int64)v44);
      if ( !v44 )
      {
        v3 = __cxa_allocate_exception(8u);
        *v3 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v3,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v44 + 48) = 0;
      *(_OWORD *)(v44 + 16) = 0;
      *(_OWORD *)(v44 + 32) = 0;
      *(__m128i *)(v44 + 8) = v45;
      *(_QWORD *)(a1 + 32) = v44;
      *(_QWORD *)v44 = v44 & 0xFFFFFFFFFFFFFFFCLL | 2;
    }
    v27 = qalloc();
    v28 = v27;
    if ( !v27 )
    {
      v2 = __cxa_allocate_exception(8u);
      *v2 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v27 + 48) = 0;
    *(_OWORD *)v27 = 0;
    *(_OWORD *)(v27 + 16) = 0;
    *(_OWORD *)(v27 + 32) = 0;
    v29 = v66.m128i_i64[0];
    *(_OWORD *)(v28 + 40) = 0;
    *(_QWORD *)(v28 + 24) = v29;
    *(_QWORD *)(v28 + 32) = 0;
    v30 = *(_QWORD **)(a1 + 32);
    *(_QWORD *)v28 = v26 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v30);
    if ( v30 != (_QWORD *)v26 )
      goto LABEL_34;
    goto LABEL_77;
  }
LABEL_45:
  if ( v56 )
    lock_func_range();
  if ( src )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  return v94 - __readfsqword(0x28u);
}

