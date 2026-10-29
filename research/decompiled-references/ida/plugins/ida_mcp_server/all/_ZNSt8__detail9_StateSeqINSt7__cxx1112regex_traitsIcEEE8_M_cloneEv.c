__int64 *__fastcall std::__detail::_StateSeq<std::regex_traits<char>>::_M_clone(__int64 *a1, __int64 *a2)
{
  void **v3; // r13
  _QWORD *v4; // rbp
  _QWORD *v5; // r14
  __int64 *v6; // rdx
  _QWORD *v7; // rax
  const __m128i *v8; // rcx
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // r15
  int *v16; // rax
  int *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int32 v20; // eax
  unsigned __int32 v21; // edx
  int *v22; // rax
  int *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rsi
  int *v26; // r15
  int *v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int *v31; // rax
  int *v32; // rsi
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rax
  int *v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rsi
  int *v40; // rax
  int *v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  int *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rdi
  int *v50; // rax
  __int64 v51; // rdx
  void *v52; // rdi
  _QWORD **v53; // rbx
  void *v54; // rdi
  __int64 v56; // rcx
  __int64 v57; // rcx
  __m128i v58; // xmm0
  int *v59; // rax
  int *v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rsi
  void (__fastcall *v63)(__m128i *, const __m128i *, __int64); // r8
  __int64 v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // [rsp+0h] [rbp-198h]
  __int64 v67; // [rsp+0h] [rbp-198h]
  __int64 v68; // [rsp+8h] [rbp-190h]
  __int64 v69; // [rsp+10h] [rbp-188h]
  _QWORD *v70; // [rsp+18h] [rbp-180h]
  const __m128i *v71; // [rsp+18h] [rbp-180h]
  void *v72; // [rsp+20h] [rbp-178h]
  __int64 v74; // [rsp+30h] [rbp-168h]
  __int64 *v75; // [rsp+38h] [rbp-160h]
  __int64 v76; // [rsp+40h] [rbp-158h]
  __int64 **v77; // [rsp+58h] [rbp-140h] BYREF
  __int64 *v78; // [rsp+60h] [rbp-138h] BYREF
  __int64 *v79; // [rsp+68h] [rbp-130h] BYREF
  __int64 v80; // [rsp+70h] [rbp-128h] BYREF
  int v81; // [rsp+78h] [rbp-120h] BYREF
  void *v82[2]; // [rsp+80h] [rbp-118h]
  int *v83; // [rsp+90h] [rbp-108h]
  __int64 v84; // [rsp+98h] [rbp-100h]
  void *v85; // [rsp+A0h] [rbp-F8h]
  __int64 v86; // [rsp+A8h] [rbp-F0h]
  __int128 v87; // [rsp+B0h] [rbp-E8h]
  __int128 v88; // [rsp+C0h] [rbp-D8h]
  __int128 v89; // [rsp+D0h] [rbp-C8h]
  __int128 v90; // [rsp+E0h] [rbp-B8h]
  __m128i v91; // [rsp+F0h] [rbp-A8h] BYREF
  __m128i v92; // [rsp+100h] [rbp-98h] BYREF
  __m128i v93; // [rsp+110h] [rbp-88h] BYREF
  __m128i v94; // [rsp+120h] [rbp-78h] BYREF
  __m128i v95; // [rsp+130h] [rbp-68h] BYREF
  __m128i v96; // [rsp+140h] [rbp-58h] BYREF
  unsigned __int64 v97; // [rsp+158h] [rbp-40h]

  v97 = __readfsqword(0x28u);
  v81 = 0;
  v83 = &v81;
  v84 = 0;
  v85 = nullptr;
  v86 = 0;
  *(__m128i *)v82 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)&v81);
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  std::_Deque_base<long>::_M_initialize_map();
  v75 = a2 + 1;
  v69 = v90;
  if ( (_QWORD)v89 == (_QWORD)v90 - 8LL )
  {
    std::deque<long>::_M_push_back_aux<long const&>();
    v3 = *((void ***)&v88 + 1);
    v5 = *((_QWORD **)&v89 + 1);
    v4 = (_QWORD *)v89;
    v72 = v85;
    v74 = v86;
    v66 = (_QWORD *)v87;
    v76 = v88;
    v68 = *((_QWORD *)&v90 + 1);
    v69 = v90;
  }
  else
  {
    v3 = *((void ***)&v88 + 1);
    v4 = (_QWORD *)(v89 + 8);
    v5 = *((_QWORD **)&v89 + 1);
    v72 = v85;
    v74 = v86;
    v66 = (_QWORD *)v87;
    v76 = v88;
    v68 = *((_QWORD *)&v90 + 1);
    *(_QWORD *)v89 = a2[1];
  }
LABEL_3:
  while ( v66 != v4 )
  {
    while ( 1 )
    {
      if ( v4 == v5 )
      {
        v79 = *(__int64 **)(*(_QWORD *)(v68 - 8) + 504LL);
        operator delete(v4, 0x200u);
        v5 = *(_QWORD **)(v68 - 8);
        v6 = v79;
        v68 -= 8;
        v4 = v5 + 63;
        v69 = (__int64)(v5 + 64);
      }
      else
      {
        v6 = (__int64 *)*--v4;
        v79 = v6;
      }
      v7 = (_QWORD *)*a2;
      v8 = (const __m128i *)(*(_QWORD *)(*a2 + 56) + 48LL * (_QWORD)v6);
      v91 = _mm_loadu_si128(v8);
      v92 = _mm_loadu_si128(v8 + 1);
      v93 = _mm_loadu_si128(v8 + 2);
      if ( v8->m128i_i32[0] == 11 )
      {
        v63 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))v8[2].m128i_i64[0];
        v93 = 0u;
        v92 = 0;
        if ( v63 )
        {
          v71 = v8;
          v63(&v92, v8 + 1, 2);
          v7 = (_QWORD *)*a2;
          v93 = _mm_loadu_si128(v71 + 2);
        }
      }
      v9 = _mm_load_si128(&v91);
      v10 = _mm_load_si128(&v92);
      v11 = _mm_load_si128(&v93);
      v94 = v9;
      v96 = v11;
      v12 = v7[8];
      v13 = v7[9];
      v95 = v10;
      if ( v91.m128i_i32[0] == 11 )
      {
        v96.m128i_i64[0] = 0;
        v95 = 0;
        v96.m128i_i64[1] = v93.m128i_i64[1];
        if ( v93.m128i_i64[0] )
        {
          v96.m128i_i64[0] = v93.m128i_i64[0];
          v95 = v10;
          v93 = 0;
        }
        if ( v12 != v13 )
        {
          *(__m128i *)v12 = _mm_load_si128(&v94);
          *(__m128i *)(v12 + 32) = _mm_load_si128(&v96);
          v56 = v96.m128i_i64[1];
          *(_QWORD *)(v12 + 32) = 0;
          *(_QWORD *)(v12 + 40) = v56;
          v57 = v96.m128i_i64[0];
          *(_OWORD *)(v12 + 16) = 0;
          if ( v57 )
          {
            v58 = _mm_load_si128(&v95);
            *(_QWORD *)(v12 + 32) = v57;
            *(__m128i *)(v12 + 16) = v58;
            v96 = 0;
          }
          goto LABEL_10;
        }
      }
      else if ( v12 != v13 )
      {
        *(__m128i *)v12 = v9;
        *(__m128i *)(v12 + 16) = _mm_load_si128(&v95);
        *(__m128i *)(v12 + 32) = _mm_load_si128(&v96);
LABEL_10:
        v14 = v7[8] + 48LL;
        v7[8] = v14;
        goto LABEL_11;
      }
      v70 = v7;
      std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
      v7 = v70;
      v14 = v70[8];
LABEL_11:
      v15 = v14 - v7[7];
      if ( v15 > 4800000 )
        std::__throw_regex_error();
      if ( v94.m128i_i32[0] == 11 && v96.m128i_i64[0] )
      {
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v96.m128i_i64[0])(&v95, &v95, 3);
        v16 = (int *)v82[0];
        if ( !v82[0] )
        {
LABEL_89:
          v17 = &v81;
LABEL_20:
          v77 = &v79;
          v17 = (int *)std::_Rb_tree<long,std::pair<long const,long>,std::_Select1st<std::pair<long const,long>>,std::less<long>,std::allocator<std::pair<long const,long>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<long const&>,std::tuple<>>(
                         &v80,
                         v17,
                         (__int64 **)&v77);
          goto LABEL_21;
        }
      }
      else
      {
        v16 = (int *)v82[0];
        if ( !v82[0] )
          goto LABEL_89;
      }
      v17 = &v81;
      do
      {
        while ( 1 )
        {
          v18 = *((_QWORD *)v16 + 2);
          v19 = *((_QWORD *)v16 + 3);
          if ( (__int64)v79 <= *((_QWORD *)v16 + 4) )
            break;
          v16 = *((int **)v16 + 3);
          if ( !v19 )
            goto LABEL_18;
        }
        v17 = v16;
        v16 = *((int **)v16 + 2);
      }
      while ( v18 );
LABEL_18:
      if ( v17 == &v81 || (__int64)v79 < *((_QWORD *)v17 + 4) )
        goto LABEL_20;
LABEL_21:
      v20 = v91.m128i_i32[0];
      v21 = v91.m128i_i32[0] - 1;
      *((_QWORD *)v17 + 5) = 0xAAAAAAAAAAAAAAABLL * (v15 >> 4) - 1;
      if ( v21 > 1 && v20 != 7 )
        goto LABEL_23;
      if ( v92.m128i_i64[0] != -1 )
      {
        v59 = (int *)v82[0];
        if ( !v82[0] )
          break;
        v60 = &v81;
        do
        {
          while ( 1 )
          {
            v61 = *((_QWORD *)v59 + 2);
            v62 = *((_QWORD *)v59 + 3);
            if ( v92.m128i_i64[0] <= *((_QWORD *)v59 + 4) )
              break;
            v59 = *((int **)v59 + 3);
            if ( !v62 )
              goto LABEL_102;
          }
          v60 = v59;
          v59 = *((int **)v59 + 2);
        }
        while ( v61 );
LABEL_102:
        if ( v60 == &v81 || v92.m128i_i64[0] < *((_QWORD *)v60 + 4) )
          break;
      }
LABEL_85:
      if ( v79 == (__int64 *)a2[2] )
        goto LABEL_3;
LABEL_24:
      if ( v91.m128i_i64[1] != -1 )
      {
        v22 = (int *)v82[0];
        if ( !v82[0] )
          goto LABEL_32;
        v23 = &v81;
        do
        {
          while ( 1 )
          {
            v24 = *((_QWORD *)v22 + 2);
            v25 = *((_QWORD *)v22 + 3);
            if ( v91.m128i_i64[1] <= *((_QWORD *)v22 + 4) )
              break;
            v22 = *((int **)v22 + 3);
            if ( !v25 )
              goto LABEL_30;
          }
          v23 = v22;
          v22 = *((int **)v22 + 2);
        }
        while ( v24 );
LABEL_30:
        if ( v23 == &v81 || v91.m128i_i64[1] < *((_QWORD *)v23 + 4) )
        {
LABEL_32:
          if ( v4 == (_QWORD *)(v69 - 8) )
          {
            if ( ((v76 - (__int64)v66) >> 3) + v4 - v5 + (((v68 == 0) + ((v68 - (__int64)v3) >> 3) - 1) << 6) == 0xFFFFFFFFFFFFFFFLL )
              std::__throw_length_error("cannot create std::deque larger than max_size()");
            if ( (unsigned __int64)(v74 - ((v68 - (__int64)v72) >> 3)) <= 1 )
            {
              v85 = v72;
              *((_QWORD *)&v88 + 1) = v3;
              v86 = v74;
              *(_QWORD *)&v89 = v4;
              *(_QWORD *)&v87 = v66;
              *((_QWORD *)&v89 + 1) = v5;
              *(_QWORD *)&v88 = v76;
              *(_QWORD *)&v90 = v69;
              *((_QWORD *)&v90 + 1) = v68;
              std::deque<long>::_M_reallocate_map();
              v3 = *((void ***)&v88 + 1);
              v4 = (_QWORD *)v89;
              v72 = v85;
              v74 = v86;
              v66 = (_QWORD *)v87;
              v76 = v88;
              v68 = *((_QWORD *)&v90 + 1);
            }
            v64 = operator new(0x200u);
            v65 = v91.m128i_i64[1];
            v5 = (_QWORD *)v64;
            v69 = v64 + 512;
            *(_QWORD *)(v68 + 8) = v64;
            *v4 = v65;
            v4 = (_QWORD *)v64;
            v68 += 8;
            if ( v91.m128i_i32[0] != 11 )
              goto LABEL_3;
            goto LABEL_35;
          }
          *v4++ = v91.m128i_i64[1];
        }
      }
      if ( v91.m128i_i32[0] != 11 )
        goto LABEL_3;
LABEL_35:
      if ( !v93.m128i_i64[0] )
        goto LABEL_3;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v93.m128i_i64[0])(&v92, &v92, 3);
      if ( v66 == v4 )
        goto LABEL_37;
    }
    if ( v4 != (_QWORD *)(v69 - 8) )
    {
      *v4++ = v92.m128i_i64[0];
      goto LABEL_85;
    }
    *((_QWORD *)&v88 + 1) = v3;
    *(_QWORD *)&v89 = v4;
    v85 = v72;
    *((_QWORD *)&v89 + 1) = v5;
    v86 = v74;
    *(_QWORD *)&v87 = v66;
    *(_QWORD *)&v88 = v76;
    *(_QWORD *)&v90 = v69;
    *((_QWORD *)&v90 + 1) = v68;
    std::deque<long>::_M_push_back_aux<long const&>();
    v3 = *((void ***)&v88 + 1);
    v5 = *((_QWORD **)&v89 + 1);
    v4 = (_QWORD *)v89;
    v72 = v85;
    v74 = v86;
    v66 = (_QWORD *)v87;
    v76 = v88;
    v68 = *((_QWORD *)&v90 + 1);
    v69 = v90;
LABEL_23:
    if ( (__int64 *)a2[2] != v79 )
      goto LABEL_24;
    if ( v91.m128i_i32[0] == 11 && v93.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v93.m128i_i64[0])(&v92, &v92, 3);
  }
LABEL_37:
  v26 = (int *)v82[0];
  if ( v82[1] != &v81 )
  {
    v27 = (int *)v82[1];
    do
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)(*a2 + 56) + 48LL * *((_QWORD *)v27 + 5);
        v30 = *(_QWORD *)(v29 + 8);
        if ( v30 != -1 )
          break;
        v28 = *(_DWORD *)v29;
        if ( (unsigned int)(*(_DWORD *)v29 - 1) <= 1 )
          goto LABEL_52;
LABEL_40:
        if ( v28 == 7 )
          goto LABEL_52;
LABEL_41:
        v27 = (int *)std::_Rb_tree_increment();
        if ( v27 == &v81 )
          goto LABEL_62;
      }
      if ( v26 )
      {
        v31 = v26;
        v32 = &v81;
        do
        {
          while ( 1 )
          {
            v33 = *((_QWORD *)v31 + 2);
            v34 = *((_QWORD *)v31 + 3);
            if ( v30 <= *((_QWORD *)v31 + 4) )
              break;
            v31 = *((int **)v31 + 3);
            if ( !v34 )
              goto LABEL_48;
          }
          v32 = v31;
          v31 = *((int **)v31 + 2);
        }
        while ( v33 );
LABEL_48:
        if ( v32 != &v81 && v30 < *((_QWORD *)v32 + 4) )
          v32 = &v81;
      }
      else
      {
        v32 = &v81;
      }
      *(_QWORD *)(v29 + 8) = *((_QWORD *)v32 + 5);
      v28 = *(_DWORD *)v29;
      if ( (unsigned int)(*(_DWORD *)v29 - 1) > 1 )
        goto LABEL_40;
LABEL_52:
      v35 = *(_QWORD *)(v29 + 16);
      if ( v35 == -1 )
        goto LABEL_41;
      v36 = &v81;
      if ( v26 )
      {
        do
        {
          while ( 1 )
          {
            v37 = *((_QWORD *)v26 + 2);
            v38 = *((_QWORD *)v26 + 3);
            if ( v35 <= *((_QWORD *)v26 + 4) )
              break;
            v26 = *((int **)v26 + 3);
            if ( !v38 )
              goto LABEL_58;
          }
          v36 = v26;
          v26 = *((int **)v26 + 2);
        }
        while ( v37 );
LABEL_58:
        if ( v36 != &v81 && v35 < *((_QWORD *)v36 + 4) )
          v36 = &v81;
      }
      *(_QWORD *)(v29 + 16) = *((_QWORD *)v36 + 5);
      v26 = (int *)v82[0];
      v27 = (int *)std::_Rb_tree_increment();
    }
    while ( v27 != &v81 );
  }
LABEL_62:
  if ( v26 )
  {
    v39 = a2[2];
    v40 = v26;
    v41 = &v81;
    do
    {
      while ( 1 )
      {
        v42 = *((_QWORD *)v40 + 2);
        v43 = *((_QWORD *)v40 + 3);
        if ( v39 <= *((_QWORD *)v40 + 4) )
          break;
        v40 = *((int **)v40 + 3);
        if ( !v43 )
          goto LABEL_67;
      }
      v41 = v40;
      v40 = *((int **)v40 + 2);
    }
    while ( v42 );
LABEL_67:
    if ( v41 != &v81 && v39 >= *((_QWORD *)v41 + 4) )
    {
      v45 = *((_QWORD *)v41 + 5);
      goto LABEL_70;
    }
  }
  else
  {
    v41 = &v81;
  }
  v78 = a2 + 2;
  v44 = std::_Rb_tree<long,std::pair<long const,long>,std::_Select1st<std::pair<long const,long>>,std::less<long>,std::allocator<std::pair<long const,long>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<long const&>,std::tuple<>>(
          &v80,
          v41,
          &v78);
  v26 = (int *)v82[0];
  v45 = v44[5];
  if ( !v82[0] )
  {
    v47 = &v81;
LABEL_76:
    v67 = v45;
    v79 = v75;
    v50 = (int *)std::_Rb_tree<long,std::pair<long const,long>,std::_Select1st<std::pair<long const,long>>,std::less<long>,std::allocator<std::pair<long const,long>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<long const&>,std::tuple<>>(
                   &v80,
                   v47,
                   &v79);
    v45 = v67;
    v47 = v50;
    goto LABEL_77;
  }
LABEL_70:
  v46 = a2[1];
  v47 = &v81;
  do
  {
    while ( 1 )
    {
      v48 = *((_QWORD *)v26 + 2);
      v49 = *((_QWORD *)v26 + 3);
      if ( v46 <= *((_QWORD *)v26 + 4) )
        break;
      v26 = *((int **)v26 + 3);
      if ( !v49 )
        goto LABEL_74;
    }
    v47 = v26;
    v26 = *((int **)v26 + 2);
  }
  while ( v48 );
LABEL_74:
  if ( v47 == &v81 || v46 < *((_QWORD *)v47 + 4) )
    goto LABEL_76;
LABEL_77:
  v51 = *a2;
  a1[1] = *((_QWORD *)v47 + 5);
  *a1 = v51;
  a1[2] = v45;
  if ( v72 )
  {
    while ( (unsigned __int64)v3 < v68 + 8 )
    {
      v52 = *v3++;
      operator delete(v52, 0x200u);
    }
    operator delete(v72, 8 * v74);
  }
  v53 = (_QWORD **)v82[0];
  if ( v82[0] )
  {
    do
    {
      std::_Rb_tree<long,std::pair<long const,long>,std::_Select1st<std::pair<long const,long>>,std::less<long>,std::allocator<std::pair<long const,long>>>::_M_erase(v53[3]);
      v54 = v53;
      v53 = (_QWORD **)v53[2];
      operator delete(v54, 0x30u);
    }
    while ( v53 );
  }
  return a1;
}

