__int64 __fastcall boost::beast::http::basic_fields<std::allocator<char>>::set(
        __int64 a1,
        __int16 a2,
        _BYTE *a3,
        unsigned __int64 a4)
{
  unsigned __int16 v4; // r10
  unsigned __int64 v5; // r8
  __int16 v6; // r11
  int v8; // eax
  __int64 v9; // rbp
  _BYTE *v10; // r12
  unsigned __int64 v11; // rdi
  _BYTE *v12; // rdx
  int *v13; // rcx
  __int64 v14; // r13
  unsigned int v15; // eax
  int v16; // r15d
  int v17; // eax
  _BYTE *v18; // [rsp+18h] [rbp-50h]

  v4 = a2;
  v5 = a4;
  v6 = a2;
  if ( !LOBYTE(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab[0]) )
  {
    v18 = a3;
    v8 = __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
    v6 = a2;
    v4 = a2;
    a3 = v18;
    v5 = a4;
    if ( v8 )
    {
      v9 = 1;
      v10 = &boost::beast::http::detail::get_field_table(void)::tab[16];
      qmemcpy(boost::beast::http::detail::get_field_table(void)::tab, &off_448080, 0x810u);
      memset(&boost::beast::http::detail::get_field_table(void)::tab[2064], 0, 0x550u);
      *(_DWORD *)&boost::beast::http::detail::get_field_table(void)::tab[3424] = 0;
      *(_WORD *)&boost::beast::http::detail::get_field_table(void)::tab[3428] = 0;
      boost::beast::http::detail::get_field_table(void)::tab[3430] = 0;
      do
      {
        v11 = *((_QWORD *)v10 + 1);
        v12 = *(_BYTE **)v10;
        if ( v11 <= 3 )
        {
          v15 = 0;
        }
        else
        {
          v13 = *(int **)v10;
          v14 = (v11 >> 2) - 1;
          v15 = 0;
          do
          {
            v16 = 5 * v15;
            v17 = *v13++;
            v15 = v16 + (v17 | 0x20202020);
          }
          while ( v13 != (int *)&v12[4 * (v11 >> 2)] );
          v11 = *((_QWORD *)v10 + 1) & 3LL;
          v12 += 4 * v14 + 4;
        }
        if ( v11 )
        {
          v15 = 5 * v15 + (*v12 | 0x20);
          if ( v11 != 1 )
          {
            v15 = 5 * v15 + (v12[1] | 0x20);
            if ( v11 != 2 )
              v15 = 5 * v15 + (v12[2] | 0x20);
          }
        }
        v10 += 16;
        boost::beast::http::detail::get_field_table(void)::tab[v15 % 0x557 + 2064] = v9++;
      }
      while ( v9 != 129 );
      __cxa_guard_release(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
      v6 = a2;
      v4 = a2;
      a3 = v18;
      v5 = a4;
    }
  }
  boost::beast::http::basic_fields<std::allocator<char>>::new_element(
    v6,
    *(const void **)&boost::beast::http::detail::get_field_table(void)::tab[16 * v4],
    *(_QWORD *)&boost::beast::http::detail::get_field_table(void)::tab[16 * v4 + 8],
    a3,
    v5);
  return boost::beast::http::basic_fields<std::allocator<char>>::set_element();
}

