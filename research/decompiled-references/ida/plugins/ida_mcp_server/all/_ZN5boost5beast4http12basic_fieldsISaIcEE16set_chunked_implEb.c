unsigned __int64 __fastcall boost::beast::http::basic_fields<std::allocator<char>>::set_chunked_impl(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // r9
  char *v5; // rdi
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  unsigned __int64 v8; // rcx
  char *v9; // rdx
  char *v10; // r10
  char *v11; // r14
  char v12; // si
  int v13; // ecx
  unsigned __int64 v14; // rdx
  char *v15; // rcx
  char *v16; // r11
  char *v17; // r8
  char v18; // si
  int v19; // ecx
  void *v20; // rdi
  __int64 v22; // rsi
  _BYTE *v23; // rdi
  unsigned __int64 v24; // r10
  _BYTE *v25; // r9
  int *v26; // rdx
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // eax
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  size_t v33; // rbx
  char *v34; // r13
  char *v35; // r14
  const char *v36; // r9
  __int64 v37; // r8
  __int64 v38; // rcx
  char *v39; // r10
  char *v40; // rax
  bool v41; // di
  unsigned __int8 v42; // dl
  size_t v43; // r15
  char *v44; // r14
  void *v45; // rax
  char *v46; // rcx
  char *v47; // rax
  unsigned __int8 *v48; // rsi
  __int64 v49; // rdi
  unsigned __int8 *v50; // rdx
  unsigned __int64 v51; // [rsp+8h] [rbp-1090h]
  const char *v52; // [rsp+10h] [rbp-1088h] BYREF
  __int64 v53; // [rsp+18h] [rbp-1080h]
  __m128i v54; // [rsp+20h] [rbp-1078h]
  char *v55; // [rsp+30h] [rbp-1068h]
  _BYTE v56[40]; // [rsp+40h] [rbp-1058h] BYREF
  void *src; // [rsp+1040h] [rbp-58h]
  size_t n[2]; // [rsp+1048h] [rbp-50h]
  unsigned __int64 v59; // [rsp+1058h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  src = v56;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3E2040);
  if ( !LOBYTE(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab[0])
    && __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab) )
  {
    qmemcpy(boost::beast::http::detail::get_field_table(void)::tab, &off_448080, 0x810u);
    v22 = 1;
    memset(&boost::beast::http::detail::get_field_table(void)::tab[2064], 0, 0x550u);
    *(_DWORD *)&boost::beast::http::detail::get_field_table(void)::tab[3424] = 0;
    *(_WORD *)&boost::beast::http::detail::get_field_table(void)::tab[3428] = 0;
    boost::beast::http::detail::get_field_table(void)::tab[3430] = 0;
    v23 = &boost::beast::http::detail::get_field_table(void)::tab[16];
    do
    {
      v24 = *((_QWORD *)v23 + 1);
      v25 = *(_BYTE **)v23;
      if ( v24 <= 3 )
      {
        v27 = 0;
      }
      else
      {
        v26 = *(int **)v23;
        v27 = 0;
        do
        {
          v28 = 5 * v27;
          v29 = *v26++;
          v27 = v28 + (v29 | 0x20202020);
        }
        while ( v26 != (int *)&v25[4 * (v24 >> 2)] );
        v25 += 4 * (v24 >> 2);
        v24 = *((_QWORD *)v23 + 1) & 3LL;
      }
      if ( v24 )
      {
        v27 = 5 * v27 + (*v25 | 0x20);
        if ( v24 != 1 )
        {
          v27 = 5 * v27 + (v25[1] | 0x20);
          if ( v24 != 2 )
            v27 = 5 * v27 + (v25[2] | 0x20);
        }
      }
      v23 += 16;
      boost::beast::http::detail::get_field_table(void)::tab[v27 % 0x557 + 2064] = v22++;
    }
    while ( v22 != 129 );
    __cxa_guard_release(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
  }
  v4 = *a1;
  if ( !*a1 )
    goto LABEL_34;
  v5 = *(char **)&boost::beast::http::detail::get_field_table(void)::tab[1712];
  v6 = *(_QWORD *)&boost::beast::http::detail::get_field_table(void)::tab[1720];
  v7 = a1;
  do
  {
    v8 = *(unsigned __int16 *)(v4 + 32) - 2;
    if ( v8 < v6 )
      goto LABEL_17;
    if ( v6 >= v8 )
    {
      v9 = (char *)(v4 + 40);
      v10 = *(char **)&boost::beast::http::detail::get_field_table(void)::tab[1712];
      v11 = (char *)(v4 + 40 + v6);
      if ( (__int64)v8 <= (__int64)v6 )
        v11 = (char *)(v4 + 40 + v8);
      if ( v9 != v11 )
      {
        while ( 1 )
        {
          v12 = *v10;
          v13 = *v9;
          if ( (unsigned int)(v13 - 65) < 0x1A )
            LOBYTE(v13) = v13 + 32;
          if ( (unsigned int)(v12 - 65) < 0x1A )
            v12 += 32;
          if ( v12 > (char)v13 )
            break;
          if ( v12 < (char)v13 )
            goto LABEL_41;
          ++v9;
          ++v10;
          if ( v9 == v11 )
            goto LABEL_40;
        }
LABEL_17:
        v4 = *(_QWORD *)(v4 + 16);
        continue;
      }
LABEL_40:
      if ( v10 != &v5[v6] )
        goto LABEL_17;
    }
LABEL_41:
    v7 = (_QWORD *)v4;
    v4 = *(_QWORD *)(v4 + 8);
  }
  while ( v4 );
  if ( a1 == v7 )
    goto LABEL_34;
  if ( !v7 )
    BUG();
  v14 = *((unsigned __int16 *)v7 + 16) - 2;
  if ( v6 < v14 )
    goto LABEL_34;
  if ( v14 < v6 )
    goto LABEL_55;
  v15 = &v5[v6];
  if ( (__int64)v6 > (__int64)v14 )
    v15 = &v5[v14];
  v16 = (char *)(v7 + 5);
  v17 = v15;
  if ( v5 != v15 )
  {
    while ( 1 )
    {
      v18 = *v16;
      v19 = *v5;
      if ( (unsigned int)(v19 - 65) < 0x1A )
        LOBYTE(v19) = v19 + 32;
      if ( (unsigned int)(v18 - 65) < 0x1A )
        v18 += 32;
      if ( v18 > (char)v19 )
        break;
      if ( v18 < (char)v19 )
        goto LABEL_55;
      ++v5;
      ++v16;
      if ( v5 == v17 )
        goto LABEL_54;
    }
LABEL_34:
    if ( !a2 )
      goto LABEL_36;
    goto LABEL_35;
  }
LABEL_54:
  if ( v16 != (char *)v7 + v14 + 40 )
    goto LABEL_34;
LABEL_55:
  v30 = v7 - 2;
  v31 = a1 + 4;
  if ( !a2 )
  {
    if ( v30 != v31 )
    {
      v52 = "chunked";
      v53 = 7;
      v54 = 0u;
      boost::beast::http::detail::filter_token_list_last();
      if ( n[1] )
        boost::beast::http::basic_fields<std::allocator<char>>::set();
      else
        boost::beast::http::basic_fields<std::allocator<char>>::erase(a1, 0x6Bu);
      v20 = src;
      if ( !src || src == v56 )
        return v59 - __readfsqword(0x28u);
LABEL_38:
      operator delete[](v20);
      return v59 - __readfsqword(0x28u);
    }
LABEL_36:
    v20 = src;
    if ( src == v56 )
      return v59 - __readfsqword(0x28u);
LABEL_37:
    if ( !v20 )
      return v59 - __readfsqword(0x28u);
    goto LABEL_38;
  }
  if ( v30 == v31 )
  {
LABEL_35:
    boost::beast::http::basic_fields<std::allocator<char>>::set();
    goto LABEL_36;
  }
  v32 = *((unsigned __int16 *)v7 + 16);
  v33 = *((unsigned __int16 *)v7 + 17);
  v52 = nullptr;
  v53 = 0;
  v34 = (char *)v7 + v32 + 40;
  v35 = &v34[v33];
  v55 = &v34[v33];
  v54 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
  boost::beast::http::token_list::const_iterator::increment((boost::beast::http::token_list::const_iterator *)&v52);
  v36 = v52;
  v37 = v53;
  v38 = v54.m128i_i64[1];
  v39 = (char *)v54.m128i_i64[0];
LABEL_64:
  v40 = v39;
  v41 = v39 != (char *)v38;
  while ( v35 != v40 )
  {
    while ( 1 )
    {
      v42 = *v40;
      if ( *v40 != 32 && v42 != 9 )
        break;
      if ( v35 == ++v40 )
        goto LABEL_69;
    }
    if ( boost::beast::http::detail::is_token_char(char)::tab[v42] )
    {
      if ( v41 )
        break;
      v48 = (unsigned __int8 *)(v40 + 1);
      do
      {
        v50 = v48;
        if ( v48 == (unsigned __int8 *)v35 )
          break;
        v49 = *v48++;
      }
      while ( boost::beast::http::detail::is_token_char(char)::tab[v49] );
      v38 = (__int64)v39;
      if ( v35 != (char *)v50 )
      {
        v39 = (char *)v50;
        v37 = v50 - (unsigned __int8 *)v40;
        v36 = v40;
        goto LABEL_64;
      }
      if ( v35 != v39 )
      {
        v39 = &v34[v33];
        v37 = v50 - (unsigned __int8 *)v40;
        v36 = v40;
        goto LABEL_64;
      }
      break;
    }
    if ( v42 != 44 )
      break;
    ++v40;
    v41 = 0;
  }
LABEL_69:
  v52 = v36;
  v53 = v37;
  if ( (unsigned __int8)boost::beast::iequals() )
    goto LABEL_36;
  v43 = n[1];
  v44 = (char *)src;
  if ( n[0] - n[1] < v33 + 9 )
  {
    v51 = 2 * (n[1] + v33 + 9);
    v45 = (void *)operator new[](v51);
    src = memcpy(v45, v44, v43);
    v46 = (char *)src;
    if ( v44 && v44 != v56 )
    {
      operator delete[](v44);
      v46 = (char *)src;
      v43 = n[1];
    }
    v44 = v46;
    n[0] = v51;
  }
  memcpy(&v44[v43], v34, v33);
  n[1] += v33;
  v47 = (char *)src + n[1];
  *(_QWORD *)v47 = 0x656B6E756863202CLL;
  v47[8] = 100;
  n[1] += 9LL;
  boost::beast::http::basic_fields<std::allocator<char>>::set();
  v20 = src;
  if ( src != v56 )
    goto LABEL_37;
  return v59 - __readfsqword(0x28u);
}

