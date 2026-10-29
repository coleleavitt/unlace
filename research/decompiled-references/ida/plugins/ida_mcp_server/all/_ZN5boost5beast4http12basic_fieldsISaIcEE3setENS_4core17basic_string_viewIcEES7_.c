__int64 __fastcall boost::beast::http::basic_fields<std::allocator<char>>::set(
        __int64 a1,
        _BYTE *a2,
        size_t a3,
        _BYTE *a4,
        unsigned __int64 a5)
{
  _BYTE *v5; // r11
  _BYTE *v8; // rdx
  unsigned __int64 v9; // r10
  int *v10; // rcx
  unsigned int v11; // eax
  int v12; // ebp
  int v13; // eax
  _BYTE *v14; // rsi
  size_t v15; // rcx
  __int16 v16; // di
  unsigned __int8 v17; // si
  __int64 *v18; // r9
  __int64 v19; // rcx
  int v21; // eax
  _BYTE *v22; // r12
  __int64 v23; // rbp
  unsigned __int64 v24; // rcx
  _BYTE *v25; // rdi
  int *v26; // rdx
  __int64 v27; // r10
  unsigned int v28; // eax
  int v29; // r15d
  int v30; // eax
  unsigned __int64 v31; // [rsp+20h] [rbp-48h]

  v5 = a2;
  v8 = a2;
  v9 = a3;
  if ( LOBYTE(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab[0])
    || (v31 = a5,
        v21 = __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab),
        v8 = a2,
        v9 = a3,
        v5 = a2,
        a5 = v31,
        !v21) )
  {
    if ( a3 <= 3 )
    {
LABEL_30:
      v15 = a3;
      v14 = v5;
      v11 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    qmemcpy(boost::beast::http::detail::get_field_table(void)::tab, &off_448080, 0x810u);
    v22 = &boost::beast::http::detail::get_field_table(void)::tab[16];
    v23 = 1;
    memset(&boost::beast::http::detail::get_field_table(void)::tab[2064], 0, 0x550u);
    *(_DWORD *)&boost::beast::http::detail::get_field_table(void)::tab[3424] = 0;
    *(_WORD *)&boost::beast::http::detail::get_field_table(void)::tab[3428] = 0;
    boost::beast::http::detail::get_field_table(void)::tab[3430] = 0;
    do
    {
      v24 = *((_QWORD *)v22 + 1);
      v25 = *(_BYTE **)v22;
      if ( v24 <= 3 )
      {
        v28 = 0;
      }
      else
      {
        v26 = *(int **)v22;
        v27 = (v24 >> 2) - 1;
        v28 = 0;
        do
        {
          v29 = 5 * v28;
          v30 = *v26++;
          v28 = v29 + (v30 | 0x20202020);
        }
        while ( v26 != (int *)&v25[4 * (v24 >> 2)] );
        v24 = *((_QWORD *)v22 + 1) & 3LL;
        v25 += 4 * v27 + 4;
      }
      if ( v24 )
      {
        v28 = 5 * v28 + (*v25 | 0x20);
        if ( v24 != 1 )
        {
          v28 = 5 * v28 + (v25[1] | 0x20);
          if ( v24 != 2 )
            v28 = 5 * v28 + (v25[2] | 0x20);
        }
      }
      v22 += 16;
      boost::beast::http::detail::get_field_table(void)::tab[v28 % 0x557 + 2064] = v23++;
    }
    while ( v23 != 129 );
    __cxa_guard_release(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
    v8 = a2;
    v9 = a3;
    v5 = a2;
    a5 = v31;
    if ( a3 <= 3 )
      goto LABEL_30;
  }
  v10 = (int *)v5;
  v11 = 0;
  do
  {
    v12 = 5 * v11;
    v13 = *v10++;
    v11 = v12 + (v13 | 0x20202020);
  }
  while ( v10 != (int *)&v5[4 * (a3 >> 2)] );
  v14 = &v5[4 * (a3 >> 2)];
  v15 = a3 & 3;
LABEL_6:
  if ( v15 )
  {
    v11 = 5 * v11 + (*v14 | 0x20);
    if ( v15 != 1 )
    {
      v11 = 5 * v11 + (v14[1] | 0x20);
      if ( v15 != 2 )
        v11 = 5 * v11 + (v14[2] | 0x20);
    }
  }
  v16 = 0;
  v17 = boost::beast::http::detail::get_field_table(void)::tab[v11 % 0x557 + 2064];
  if ( v17 )
  {
    v18 = (__int64 *)&boost::beast::http::detail::get_field_table(void)::tab[16 * v17];
    if ( a3 == v18[1] )
    {
      v19 = *v18;
      if ( a3 > 3 )
      {
        while ( ((*(_DWORD *)v8 ^ *(_DWORD *)v19) & 0xDFDFDFDF) == 0 )
        {
          v9 -= 4LL;
          v8 += 4;
          v19 += 4;
          if ( v9 <= 3 )
            goto LABEL_32;
        }
      }
      else
      {
LABEL_32:
        if ( !v9
          || ((*v8 ^ *(_BYTE *)v19) & 0xDF) == 0
          && (v9 == 1
           || ((*(_BYTE *)(v19 + 1) ^ v8[1]) & 0xDF) == 0 && (v9 == 2 || ((*(_BYTE *)(v19 + 2) ^ v8[2]) & 0xDF) == 0)) )
        {
          v16 = v17;
          goto LABEL_17;
        }
      }
      v16 = 0;
    }
  }
LABEL_17:
  boost::beast::http::basic_fields<std::allocator<char>>::new_element(v16, v5, a3, a4, a5);
  return boost::beast::http::basic_fields<std::allocator<char>>::set_element();
}

