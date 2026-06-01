__int64 __fastcall sub_2CF600(__m128i *a1, char **a2, __m128i *a3, __m128 a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  int v8; // edx
  unsigned __int64 v9; // r12
  const char *v10; // rax
  const char *v11; // rbp
  size_t v12; // rax
  char *v13; // rax
  unsigned __int64 v14; // r15
  char *v15; // rdx
  unsigned int v16; // eax
  char *v17; // rbp
  bool v18; // cf
  char *v19; // rax
  size_t v20; // rbp
  size_t v21; // rax
  __int64 v22; // r9
  _BYTE *v23; // r15
  size_t v24; // r10
  size_t v25; // r11
  size_t v26; // rdx
  size_t v27; // rbp
  size_t v28; // rdx
  void *v29; // r15
  void *v30; // rdi
  unsigned __int64 *v31; // rsi
  unsigned __int64 *v32; // rsi
  unsigned __int64 v33; // rdi
  unsigned __int64 *v34; // rdx
  unsigned __int64 v35; // rdi
  unsigned __int64 *v36; // r8
  unsigned __int64 v37; // rcx
  char v38; // di
  __int64 v39; // rax
  __m128i v40; // xmm1
  __int64 v41; // rax
  unsigned int v43; // eax
  bool v44; // cl
  size_t v45; // rax
  void *v46; // rax
  void *v47; // rax
  unsigned __int64 v48; // rcx
  char v49; // dl
  char v50; // cl
  unsigned __int64 v51; // rax
  char v52; // dl
  unsigned __int64 v53; // rdx
  _BYTE *v54; // rdx
  unsigned __int64 v55; // rsi
  char v56; // al
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdi
  unsigned __int64 *v60; // rdx
  unsigned __int64 v61; // rdi
  unsigned __int64 *v62; // r8
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  __m128i v65; // xmm1
  unsigned __int64 *v66; // rax
  int v68; // [rsp+10h] [rbp-168h]
  int v69; // [rsp+14h] [rbp-164h]
  unsigned __int64 *v70; // [rsp+18h] [rbp-160h]
  size_t v71; // [rsp+20h] [rbp-158h]
  size_t v72; // [rsp+20h] [rbp-158h]
  __int64 module_data; // [rsp+30h] [rbp-148h]
  size_t v74; // [rsp+38h] [rbp-140h]
  __int64 v75; // [rsp+40h] [rbp-138h]
  size_t v76; // [rsp+48h] [rbp-130h]
  char *s; // [rsp+58h] [rbp-120h]
  char *v78; // [rsp+60h] [rbp-118h]
  unsigned __int64 *v79; // [rsp+68h] [rbp-110h] BYREF
  const char *v80; // [rsp+70h] [rbp-108h] BYREF
  __m128 v81; // [rsp+78h] [rbp-100h]
  __int64 v82; // [rsp+88h] [rbp-F0h] BYREF
  void *dest; // [rsp+90h] [rbp-E8h]
  size_t n[2]; // [rsp+98h] [rbp-E0h]
  void *src; // [rsp+A8h] [rbp-D0h]
  __int128 v86; // [rsp+B0h] [rbp-C8h]
  _QWORD *v87; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v88; // [rsp+100h] [rbp-78h] BYREF
  void *v89; // [rsp+108h] [rbp-70h] BYREF
  __m128i v90; // [rsp+110h] [rbp-68h]
  void *v91; // [rsp+120h] [rbp-58h]
  __m128 v92; // [rsp+128h] [rbp-50h]
  unsigned __int64 v93; // [rsp+138h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  module_data = get_module_data();
  if ( (unsigned int)unpack_dd() != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(51492);
    BUG();
  }
  v8 = unpack_dd();
  v69 = v8;
  if ( a2[1] - *a2 < (unsigned __int64)v8 )
    return 0;
  if ( v8 > 0 )
  {
    v68 = 0;
    v70 = (unsigned __int64 *)a1->m128i_i64[0];
    while ( 1 )
    {
      v80 = nullptr;
      v82 = 0;
      v81 = 0;
      if ( (unsigned __int8)is_cvt64() )
      {
        v9 = (unsigned int)unpack_dd();
        if ( v9 == 0xFFFFFFFF )
          v9 = -1;
      }
      else
      {
        v9 = unpack_dq();
      }
      v10 = (const char *)unpack_ds();
      v11 = v10;
      if ( v10 )
      {
        v12 = strlen(v10);
        v80 = v11;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)(v12 + 1), (__m128i)(v12 + 1));
        v81 = a4;
      }
      v13 = *a2;
      v14 = (unsigned __int64)a2[1];
      v15 = nullptr;
      if ( (unsigned __int64)*a2 < v14 )
      {
        v43 = unpack_dd();
        v15 = *a2;
        v18 = __CFADD__(*a2, v43);
        v13 = &(*a2)[v43];
        v44 = v18;
        v18 = v14 < (unsigned __int64)v13;
        v14 = (unsigned __int64)a2[1];
        if ( v18 || v44 )
        {
          v13 = *a2;
          v15 = nullptr;
        }
        else
        {
          *a2 = v13;
        }
      }
      if ( v15 == v13 )
        v15 = nullptr;
      s = v15;
      v16 = unpack_dd();
      v17 = *a2;
      v18 = __CFADD__(*a2, v16);
      v19 = &(*a2)[v16];
      if ( v18 || v14 < (unsigned __int64)v19 )
      {
        v19 = *a2;
        v17 = nullptr;
      }
      else
      {
        *a2 = v19;
      }
      if ( v17 == v19 )
        v17 = nullptr;
      v78 = v17;
      if ( !a3 )
      {
        if ( s && (unsigned __int8)deserialize_tinfo() && (unsigned __int8)sub_327100(&v82, module_data, -1) )
          goto LABEL_38;
        sub_68620((__int64)"%a: cannot restore user defined call prototype\n", *(double *)a4.m128_u64);
        goto LABEL_57;
      }
      dest = nullptr;
      src = nullptr;
      *(_OWORD *)n = 0;
      v86 = 0;
      if ( !s )
        break;
      v20 = strlen(s);
      dest = (void *)qvector_reserve();
      n[0] = v20 + 1;
      *((_BYTE *)dest + v20) = 0;
      memmove(dest, s, v20);
      v17 = v78;
      if ( !v78 )
        goto LABEL_24;
      v21 = strlen(v78);
      v22 = v86;
      v23 = src;
      v24 = v21;
      if ( (_QWORD)v86 )
      {
        v22 = v86 - 1;
        v25 = v21 + v86 - 1;
      }
      else
      {
        v25 = v21;
      }
      v26 = v25 + 1;
      if ( *((_QWORD *)&v86 + 1) < v25 + 1 )
        goto LABEL_68;
LABEL_23:
      *(_QWORD *)&v86 = v26;
      v23[v25] = 0;
      memmove((char *)src + v22, v17, v24);
LABEL_24:
      v27 = n[0];
      v87 = (_QWORD *)v9;
      if ( !n[0] )
        goto LABEL_25;
      v29 = (void *)qalloc_or_throw();
      memcpy(v29, dest, v27);
      v28 = v86;
      v30 = nullptr;
      if ( (_QWORD)v86 )
      {
LABEL_73:
        v72 = v28;
        v46 = (void *)qalloc_or_throw();
        v47 = memcpy(v46, src, v72);
        v28 = v72;
        v30 = v47;
      }
LABEL_26:
      v31 = (unsigned __int64 *)a3->m128i_i64[0];
      v88 = v9;
      v89 = v29;
      v90 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      a4 = (__m128)_mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
      v91 = v30;
      v79 = &v88;
      v92 = a4;
      if ( !v31 )
      {
        v64 = qalloc();
        v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v64, (__m128i)(unsigned __int64)v64);
        if ( !v64 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v64 + 16) = 0;
        *(_OWORD *)(v64 + 32) = 0;
        *(_OWORD *)(v64 + 48) = 0;
        *(_QWORD *)v64 = v64 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_OWORD *)(v64 + 64) = 0;
        *(__m128i *)(v64 + 8) = v65;
        a3->m128i_i64[0] = v64;
        *(_QWORD *)v64 = v64 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v64 & 3LL;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)a3->m128i_u64[0], (__m128i)a3->m128i_u64[0]);
        *(__m128 *)(a3->m128i_i64[0] + 8) = a4;
        *(_QWORD *)a3->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a3->m128i_i64[0] |= 2uLL;
        v31 = (unsigned __int64 *)a3->m128i_i64[0];
LABEL_28:
        sub_2CEFC0(a3, v31, 1, &v79);
        goto LABEL_29;
      }
      if ( !a3->m128i_i64[1] )
        goto LABEL_28;
      v50 = 1;
      v51 = *v31 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v51 & 2) != 0 )
      {
        v52 = 1;
        goto LABEL_81;
      }
      while ( 1 )
      {
        v53 = *(_QWORD *)(v51 + 24);
        if ( v9 < v53 )
        {
          v54 = *(_BYTE **)(v51 + 8);
          v50 = 1;
          goto LABEL_85;
        }
        if ( v53 >= v9 )
          break;
        v54 = *(_BYTE **)(v51 + 16);
        v50 = 0;
LABEL_85:
        if ( (*v54 & 2) != 0 )
          goto LABEL_86;
        v51 = (unsigned __int64)v54;
      }
      if ( !v51 )
      {
LABEL_86:
        v52 = v50;
        v31 = (unsigned __int64 *)v51;
LABEL_81:
        sub_2CEFC0(a3, v31, v52, &v79);
LABEL_29:
        v30 = v91;
      }
      if ( v30 )
      {
        v92.m128_u64[0] = 0;
        qfree();
      }
      if ( v89 )
      {
        v90.m128i_i64[0] = 0;
        qfree();
      }
      if ( src )
      {
        *(_QWORD *)&v86 = 0;
        qfree();
      }
      if ( dest )
      {
        n[0] = 0;
        qfree();
      }
LABEL_38:
      v88 = v9;
      v90 = 0;
      v89 = nullptr;
      sub_2A8F60(&v89, (__int64)&v80);
      v91 = nullptr;
      copy_tinfo_t();
      v87 = &v88;
      v32 = (unsigned __int64 *)a1->m128i_i64[0];
      if ( !a1->m128i_i64[0] )
      {
        v39 = qalloc();
        v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
        if ( !v39 )
        {
          v5 = __cxa_allocate_exception(8u);
          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v5,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v39 + 16) = 0;
        *(_OWORD *)(v39 + 32) = 0;
        *(_OWORD *)(v39 + 48) = 0;
        *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(__m128i *)(v39 + 8) = v40;
        a1->m128i_i64[0] = v39;
        *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v39 & 3LL;
        a4 = (__m128)_mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
        *(__m128 *)(a1->m128i_i64[0] + 8) = a4;
        *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
        v32 = (unsigned __int64 *)a1->m128i_i64[0];
LABEL_54:
        v41 = sub_2CF430(a1, v32, 1, &v87);
        goto LABEL_55;
      }
      if ( !a1->m128i_i64[1] )
        goto LABEL_54;
      if ( !v70 )
        goto LABEL_76;
      if ( v70 == v32 )
      {
        v66 = (unsigned __int64 *)v70[2];
        v70 = v66;
        if ( (*(_BYTE *)v66 & 2) != 0 )
          goto LABEL_120;
        if ( v66[3] < v88 )
          goto LABEL_51;
        if ( v66[3] == v88 )
        {
          if ( v66 )
            goto LABEL_56;
LABEL_120:
          v70 = (unsigned __int64 *)a1->m128i_i64[0];
          v38 = 1;
LABEL_121:
          v41 = sub_2CF430(a1, v70, v38, &v87);
          goto LABEL_55;
        }
LABEL_76:
        v48 = *v32 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v48 & 2) != 0 )
        {
          v49 = 1;
LABEL_78:
          v41 = sub_2CF430(a1, v32, v49, &v87);
          goto LABEL_55;
        }
        v55 = *v32 & 0xFFFFFFFFFFFFFFFCLL;
        v56 = 1;
        v57 = *(_QWORD *)(v48 + 24);
        if ( v88 < v57 )
        {
          while ( 1 )
          {
            v58 = *(_QWORD *)(v55 + 8);
            v56 = 1;
            if ( (*(_BYTE *)v58 & 2) != 0 )
              break;
LABEL_92:
            v55 = v58;
            v57 = *(_QWORD *)(v58 + 24);
            if ( v88 >= v57 )
              goto LABEL_90;
          }
LABEL_94:
          v70 = (unsigned __int64 *)v55;
        }
        else
        {
LABEL_90:
          if ( v57 < v88 )
          {
            v58 = *(_QWORD *)(v55 + 16);
            v56 = 0;
            if ( (*(_BYTE *)v58 & 2) == 0 )
              goto LABEL_92;
            goto LABEL_94;
          }
          v70 = (unsigned __int64 *)v55;
          if ( v55 )
            goto LABEL_56;
        }
        v32 = v70;
        v49 = v56;
        goto LABEL_78;
      }
      if ( v70[3] >= v88 )
      {
        if ( v70[3] == v88 )
          goto LABEL_56;
        if ( (*v70 & 2) != 0 )
        {
          v63 = (unsigned __int64)v70;
        }
        else
        {
          v59 = v70[1];
          if ( (*(_BYTE *)v59 & 2) != 0 )
          {
            v60 = (unsigned __int64 *)(*v70 & 0xFFFFFFFFFFFFFFFCLL);
            v61 = *v60;
            if ( (*v60 & 2) != 0 )
            {
              v38 = 1;
              if ( v32 == v60 )
                goto LABEL_121;
              v38 = 1;
              if ( v60[3] < v88 )
                goto LABEL_121;
              goto LABEL_76;
            }
            if ( (unsigned __int64 *)v60[1] == v70 )
            {
              while ( 1 )
              {
                v62 = v60;
                v63 = v61 & 0xFFFFFFFFFFFFFFFCLL;
                v61 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v61 & 2) != 0 )
                  break;
                v60 = (unsigned __int64 *)v63;
                if ( *(unsigned __int64 **)(v63 + 8) != v62 )
                  goto LABEL_105;
              }
            }
            else
            {
LABEL_105:
              v63 = (unsigned __int64)v60;
            }
            if ( v32 == (unsigned __int64 *)v63 )
            {
LABEL_107:
              v38 = 1;
              goto LABEL_121;
            }
          }
          else
          {
            do
            {
              v63 = v59;
              v59 = *(_QWORD *)(v59 + 16);
            }
            while ( (*(_BYTE *)v59 & 2) == 0 );
            if ( v32 == (unsigned __int64 *)v63 )
              goto LABEL_76;
          }
        }
        if ( *(_QWORD *)(v63 + 24) >= v88 )
          goto LABEL_76;
        if ( (*(_BYTE *)v70[1] & 2) == 0 )
        {
          if ( (**(_BYTE **)(v63 + 16) & 2) != 0 )
          {
            v41 = sub_2CF430(a1, (unsigned __int64 *)v63, 0, &v87);
            goto LABEL_55;
          }
          goto LABEL_76;
        }
        goto LABEL_107;
      }
      if ( (*v70 & 2) != 0 )
      {
        v37 = (unsigned __int64)v70;
        goto LABEL_75;
      }
      v33 = v70[2];
      if ( (*(_BYTE *)v33 & 2) == 0 )
      {
        do
        {
          v37 = v33;
          v33 = *(_QWORD *)(v33 + 8);
        }
        while ( (*(_BYTE *)v33 & 2) == 0 );
        if ( v32 != (unsigned __int64 *)v37 )
          goto LABEL_75;
        goto LABEL_76;
      }
      v34 = (unsigned __int64 *)(*v70 & 0xFFFFFFFFFFFFFFFCLL);
      v35 = *v34;
      if ( (*v34 & 2) != 0 )
      {
        v38 = 0;
        if ( v32 == v34 )
          goto LABEL_121;
        if ( v88 < v34[3] )
        {
          v38 = 0;
          goto LABEL_121;
        }
        goto LABEL_76;
      }
      if ( (unsigned __int64 *)v34[2] == v70 )
      {
        while ( 1 )
        {
          v36 = v34;
          v37 = v35 & 0xFFFFFFFFFFFFFFFCLL;
          v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v35 & 2) != 0 )
            break;
          v34 = (unsigned __int64 *)v37;
          if ( *(unsigned __int64 **)(v37 + 16) != v36 )
            goto LABEL_49;
        }
      }
      else
      {
LABEL_49:
        v37 = (unsigned __int64)v34;
      }
      if ( v32 == (unsigned __int64 *)v37 )
      {
LABEL_51:
        v38 = 0;
        goto LABEL_121;
      }
LABEL_75:
      if ( v88 >= *(_QWORD *)(v37 + 24) )
        goto LABEL_76;
      if ( (*(_BYTE *)v70[2] & 2) != 0 )
        goto LABEL_51;
      if ( (**(_BYTE **)(v37 + 8) & 2) == 0 )
        goto LABEL_76;
      v41 = sub_2CF430(a1, (unsigned __int64 *)v37, 1, &v87);
LABEL_55:
      v70 = (unsigned __int64 *)v41;
LABEL_56:
      sub_2AFDA0(&v89);
LABEL_57:
      clear_tinfo_t();
      if ( v80 )
      {
        v81.m128_u64[0] = 0;
        qfree();
      }
      if ( v69 == ++v68 )
        return 1;
    }
    if ( !v17 )
    {
      v87 = (_QWORD *)v9;
LABEL_25:
      v28 = v86;
      v27 = 0;
      v29 = nullptr;
      v30 = nullptr;
      if ( (_QWORD)v86 )
        goto LABEL_73;
      goto LABEL_26;
    }
    v45 = strlen(v17);
    v22 = 0;
    v24 = v45;
    v26 = v45 + 1;
    v25 = v45;
LABEL_68:
    v76 = v25;
    v75 = v22;
    v74 = v24;
    v71 = v26;
    src = (void *)qvector_reserve();
    v25 = v76;
    v23 = src;
    v22 = v75;
    v24 = v74;
    v26 = v71;
    goto LABEL_23;
  }
  return 1;
}

