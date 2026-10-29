unsigned __int64 __fastcall sub_3AD780(_QWORD **a1, __m128i *a2, __int64 *a3)
{
  _QWORD *v3; // rbp
  unsigned __int64 v7; // r14
  int v9; // eax
  char v10; // al
  __int64 v11; // rax
  __int64 *v12; // r14
  _QWORD *v13; // rsi
  const __m128i *v14; // r8
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  _BYTE *v18; // r9
  _QWORD *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int64 v22; // r9
  __int64 v23; // rdi
  size_t v24; // r8
  char *v25; // rsi
  const __m128i *v26; // r8
  __int64 v27; // r10
  unsigned __int64 i; // r9
  __m128i v29; // xmm0
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  void *v32; // rdi
  __m128i v33; // xmm0
  __int64 v34; // rax
  unsigned __int64 *v35; // rsi
  __int64 *v36; // rdi
  __int64 *v38; // rdx
  void *v39; // rax
  void *v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  char v45; // cl
  unsigned __int64 v46; // rdx
  _BYTE *v47; // rdx
  char v48; // dl
  int v49; // r14d
  int v50; // r15d
  __int64 *v51; // r14
  __int64 v52; // rdi
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // rax
  __m128i v56; // xmm1
  __int64 v57; // rax
  _QWORD *exception; // rdi
  __int64 *v59; // [rsp+0h] [rbp-118h]
  int v60; // [rsp+0h] [rbp-118h]
  char v61; // [rsp+17h] [rbp-101h]
  __int64 v62; // [rsp+18h] [rbp-100h]
  _QWORD *v63; // [rsp+20h] [rbp-F8h]
  _QWORD *v64; // [rsp+20h] [rbp-F8h]
  size_t n; // [rsp+28h] [rbp-F0h]
  __int64 nb; // [rsp+28h] [rbp-F0h]
  size_t na; // [rsp+28h] [rbp-F0h]
  __m128i v68; // [rsp+30h] [rbp-E8h] BYREF
  const __m128i *v69; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v70; // [rsp+48h] [rbp-D0h]
  const __m128i *v71[3]; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v72; // [rsp+70h] [rbp-A8h]
  __int64 v73; // [rsp+80h] [rbp-98h] BYREF
  const __m128i *v74; // [rsp+90h] [rbp-88h] BYREF
  void *v75; // [rsp+98h] [rbp-80h]
  __m128i v76; // [rsp+A0h] [rbp-78h]
  __int64 v77; // [rsp+B0h] [rbp-68h]
  _QWORD v79[3]; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v80; // [rsp+D8h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  v3 = *a1;
  if ( !*a1 )
    return v80 - __readfsqword(0x28u);
  v7 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
  {
    v3 = nullptr;
    goto LABEL_11;
  }
  if ( (*(_BYTE *)v7 & 2) != 0 )
    return v80 - __readfsqword(0x28u);
  do
  {
    v9 = lexcompare_tinfo();
    if ( v9 )
    {
      if ( v9 >= 0 )
        goto LABEL_8;
    }
    else
    {
      v10 = *(_BYTE *)(v7 + 40);
      if ( v10 == *((_BYTE *)a3 + 16) )
      {
        if ( *(_QWORD *)(v7 + 24) >= *a3 )
        {
LABEL_8:
          v3 = (_QWORD *)v7;
          v7 = *(_QWORD *)(v7 + 8);
          continue;
        }
      }
      else if ( !v10 )
      {
        goto LABEL_8;
      }
    }
    v7 = *(_QWORD *)(v7 + 16);
  }
  while ( (*(_BYTE *)v7 & 2) == 0 );
  if ( *a1 == v3 )
    return v80 - __readfsqword(0x28u);
LABEL_11:
  v79[0] = *a3;
  if ( (get_tinfo_property() & 0x3F) == 0x2D
    && !*((_BYTE *)a3 + 16)
    && (v49 = *((_DWORD *)a3 + 5) & 0xF) != 0
    && v49 < (unsigned __int64)get_tinfo_size() )
  {
    v50 = v49;
    v51 = a3;
    v52 = *a3;
    v53 = 0;
    v60 = 2;
    v54 = sub_325910(v52, v50, 0);
LABEL_86:
    v79[v53++] = v54;
    while ( v60 != 1 )
    {
      v60 = 1;
      v54 = sub_325910(*v51, v50, 1);
      if ( !v53 || v79[v53 - 1] != v54 )
        goto LABEL_86;
    }
    v62 = v53;
    a3 = v51;
  }
  else
  {
    v62 = 1;
  }
  if ( v3 == *a1 )
    return v80 - __readfsqword(0x28u);
  while ( 2 )
  {
    v61 = compare_tinfo();
    if ( !v61 )
      return v80 - __readfsqword(0x28u);
    if ( !*((_BYTE *)a3 + 16) )
    {
      v11 = v3[3];
      if ( v79[0] != v11 && (v62 == 1 || v11 != v79[1]) )
      {
        if ( *((_BYTE *)v3 + 40) )
          goto LABEL_21;
        return v80 - __readfsqword(0x28u);
      }
    }
    v59 = (__int64 *)v3[6];
    if ( !v59 )
      goto LABEL_21;
    if ( !v3[7] )
      goto LABEL_21;
    v12 = (__int64 *)v59[1];
    if ( v59 == v12 )
      goto LABEL_21;
    v13 = (_QWORD *)a2->m128i_i64[0];
    v14 = (const __m128i *)v12[3];
    v15 = v12 + 3;
    if ( !a2->m128i_i64[0] )
      goto LABEL_45;
    while ( 2 )
    {
      v16 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v16 )
      {
        if ( (*(_BYTE *)(*v13 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_45;
        v17 = (_QWORD *)v16[1];
        v18 = (_BYTE *)v16[2];
        v19 = v13;
        if ( v16[3] < (unsigned __int64)v14 )
          goto LABEL_34;
        while ( 1 )
        {
          v19 = v16;
          if ( (*(_BYTE *)v17 & 2) != 0 )
            break;
          while ( 1 )
          {
            v16 = v17;
            v17 = (_QWORD *)v17[1];
            v18 = (_BYTE *)v16[2];
            if ( v16[3] >= (unsigned __int64)v14 )
              break;
LABEL_34:
            v17 = v18;
            if ( (*v18 & 2) != 0 )
              goto LABEL_35;
          }
        }
LABEL_35:
        if ( v13 == v19 )
          goto LABEL_45;
      }
      else
      {
        v19 = nullptr;
      }
      v20 = (__int64)(v19 + 3);
      if ( v14 == (const __m128i *)v19[3] )
      {
        v21 = 40LL * v15[2];
        v22 = 0xCCCCCCCCCCCCCCCDLL * (v21 >> 3);
        if ( !v22 )
          goto LABEL_58;
        v23 = v19[5];
        v24 = v15[1];
        v25 = (char *)v19[4];
        if ( v19[6] < v22 + v23 )
        {
          v68.m128i_i64[0] = 0xCCCCCCCCCCCCCCCDLL * ((40LL * v15[2]) >> 3);
          v69 = (const __m128i *)v21;
          na = v24;
          v64 = v19 + 3;
          v57 = qvector_reserve();
          v20 = (__int64)v64;
          v22 = v68.m128i_i64[0];
          v21 = (__int64)v69;
          v24 = na;
          v25 = (char *)v57;
          v64[1] = v57;
          v23 = v64[2];
        }
        v70 = v22;
        v68.m128i_i64[0] = v20;
        v69 = (const __m128i *)v24;
        n = v24 + v21;
        memmove(&v25[v21], v25, 40 * v23);
        v26 = v69;
        v27 = v68.m128i_i64[0];
        for ( i = v70; (const __m128i *)n != v26; *((_QWORD *)v25 - 1) = v26[-1].m128i_i64[1] )
        {
          v29 = _mm_loadu_si128(v26);
          v26 = (const __m128i *)((char *)v26 + 40);
          v25 += 40;
          *(__m128i *)(v25 - 40) = v29;
          *(__m128i *)(v25 - 24) = _mm_loadu_si128((const __m128i *)((char *)v26 - 24));
        }
        *(_QWORD *)(v27 + 16) += i;
        v30 = *v12;
        if ( (*v12 & 2) != 0 )
          goto LABEL_43;
LABEL_59:
        v38 = (__int64 *)v12[2];
        if ( (*(_BYTE *)v38 & 2) != 0 )
        {
          v41 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
          v42 = *v41;
          if ( (*v41 & 2) == 0 )
          {
            while ( v12 == (__int64 *)v41[2] )
            {
              v12 = v41;
              v43 = v42 & 0xFFFFFFFFFFFFFFFCLL;
              v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v42 & 2) != 0 )
              {
                v12 = (__int64 *)v43;
                if ( v59 != (__int64 *)v43 )
                  goto LABEL_44;
                goto LABEL_21;
              }
              v41 = (__int64 *)v43;
            }
          }
          v12 = v41;
          if ( v59 != v41 )
            goto LABEL_44;
        }
        else
        {
          do
          {
            v12 = v38;
            v38 = (__int64 *)v38[1];
          }
          while ( (*(_BYTE *)v38 & 2) == 0 );
          if ( v59 != v12 )
            goto LABEL_44;
        }
        break;
      }
LABEL_45:
      v31 = v15[2];
      v71[1] = v14;
      v32 = nullptr;
      v33 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      if ( v31 )
      {
        v69 = v14;
        v68 = v33;
        v63 = v15;
        nb = 40 * v31;
        v39 = (void *)qalloc_or_throw();
        v40 = memcpy(v39, (const void *)v63[1], nb);
        v33 = _mm_load_si128(&v68);
        v14 = v69;
        v15 = v63;
        v32 = v40;
      }
      v34 = v15[4];
      v74 = v14;
      v75 = v32;
      v73 = v34;
      v76 = v33;
      if ( v34 )
      {
        *(_DWORD *)(v34 + 104) += 2;
        v77 = v34;
      }
      else
      {
        v77 = 0;
      }
      v35 = (unsigned __int64 *)a2->m128i_i64[0];
      v71[0] = (const __m128i *)&v74;
      if ( !v35 )
      {
        v55 = qalloc();
        v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v55, (__m128i)(unsigned __int64)v55);
        if ( !v55 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v55 + 16) = 0;
        *(_OWORD *)(v55 + 32) = 0;
        *(_OWORD *)(v55 + 48) = 0;
        *(_QWORD *)v55 = v55 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(__m128i *)(v55 + 8) = v56;
        a2->m128i_i64[0] = v55;
        *(_QWORD *)v55 = v55 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v55 & 3LL;
        *(__m128i *)(a2->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a2->m128i_u64[0], (__m128i)a2->m128i_u64[0]);
        *(_QWORD *)a2->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a2->m128i_i64[0] |= 2uLL;
        v35 = (unsigned __int64 *)a2->m128i_i64[0];
LABEL_51:
        sub_3AD5E0(a2, v35, 1, v71);
        goto LABEL_52;
      }
      if ( !a2->m128i_i64[1] )
        goto LABEL_51;
      v44 = *v35 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v44 & 2) != 0 )
      {
        v48 = 1;
LABEL_81:
        sub_3AD5E0(a2, v35, v48, v71);
        goto LABEL_52;
      }
      v45 = v61;
      while ( 2 )
      {
        v46 = *(_QWORD *)(v44 + 24);
        if ( (unsigned __int64)v14 < v46 )
        {
          v47 = *(_BYTE **)(v44 + 8);
          v45 = v61;
          if ( (*v47 & 2) != 0 )
            goto LABEL_76;
LABEL_92:
          v44 = (unsigned __int64)v47;
          continue;
        }
        break;
      }
      if ( v46 < (unsigned __int64)v14 )
      {
        v47 = *(_BYTE **)(v44 + 16);
        v45 = 0;
        if ( (*v47 & 2) != 0 )
          goto LABEL_76;
        goto LABEL_92;
      }
      if ( !v44 )
      {
LABEL_76:
        v48 = v45;
        v35 = (unsigned __int64 *)v44;
        goto LABEL_81;
      }
LABEL_52:
      v36 = (__int64 *)v77;
      if ( v77 )
      {
        if ( (*(_DWORD *)(v77 + 104))-- == 1 )
          sub_3A3F30(v36);
      }
      if ( v75 )
      {
        v76.m128i_i64[0] = 0;
        qfree();
      }
      v71[2] = nullptr;
      v72 = 0;
      sub_13BC80(&v73, (__int64)v35);
LABEL_58:
      v30 = *v12;
      if ( (*v12 & 2) == 0 )
        goto LABEL_59;
LABEL_43:
      if ( v59 != v12 )
      {
LABEL_44:
        v13 = (_QWORD *)a2->m128i_i64[0];
        v14 = (const __m128i *)v12[3];
        v15 = v12 + 3;
        if ( a2->m128i_i64[0] )
          continue;
        goto LABEL_45;
      }
      break;
    }
LABEL_21:
    v3 = sub_3AC3D0(v3);
    if ( *a1 != v3 )
      continue;
    return v80 - __readfsqword(0x28u);
  }
}

