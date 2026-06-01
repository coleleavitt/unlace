__int64 __fastcall boost::beast::http::basic_fields<std::allocator<char>>::operator[](_QWORD *a1, unsigned __int16 a2)
{
  _QWORD *v2; // r8
  __int64 v4; // r11
  _QWORD *v5; // rbp
  _BYTE *v6; // r10
  char *v7; // rbx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rax
  char *v10; // rcx
  char *v11; // rdi
  char *v12; // r9
  char v13; // dl
  int v14; // eax
  __int64 v15; // r11
  unsigned __int64 v16; // r9
  char *v17; // rax
  char *v18; // rsi
  char *i; // r10
  char v20; // dl
  int v21; // eax
  int v23; // eax
  __int64 v24; // rsi
  _BYTE *v25; // rdi
  unsigned __int64 v26; // rbx
  _BYTE *v27; // rbp
  int *v28; // rdx
  __int64 v29; // r12
  unsigned int v30; // eax
  int v31; // ecx
  int v32; // eax
  _QWORD *v33; // [rsp+8h] [rbp-30h]

  v2 = a1;
  if ( !LOBYTE(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab[0]) )
  {
    v23 = __cxa_guard_acquire(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
    v2 = a1;
    if ( v23 )
    {
      qmemcpy(boost::beast::http::detail::get_field_table(void)::tab, &off_448080, 0x810u);
      v24 = 1;
      memset(&boost::beast::http::detail::get_field_table(void)::tab[2064], 0, 0x550u);
      *(_DWORD *)&boost::beast::http::detail::get_field_table(void)::tab[3424] = 0;
      *(_WORD *)&boost::beast::http::detail::get_field_table(void)::tab[3428] = 0;
      boost::beast::http::detail::get_field_table(void)::tab[3430] = 0;
      v25 = &boost::beast::http::detail::get_field_table(void)::tab[16];
      do
      {
        v26 = *((_QWORD *)v25 + 1);
        v27 = *(_BYTE **)v25;
        if ( v26 <= 3 )
        {
          v30 = 0;
        }
        else
        {
          v28 = *(int **)v25;
          v29 = (v26 >> 2) - 1;
          v30 = 0;
          do
          {
            v31 = 5 * v30;
            v32 = *v28++;
            v30 = v31 + (v32 | 0x20202020);
          }
          while ( v28 != (int *)&v27[4 * (v26 >> 2)] );
          v26 = *((_QWORD *)v25 + 1) & 3LL;
          v27 += 4 * v29 + 4;
        }
        if ( v26 )
        {
          v30 = 5 * v30 + (*v27 | 0x20);
          if ( v26 != 1 )
          {
            v30 = 5 * v30 + (v27[1] | 0x20);
            if ( v26 != 2 )
              v30 = 5 * v30 + (v27[2] | 0x20);
          }
        }
        v25 += 16;
        boost::beast::http::detail::get_field_table(void)::tab[v30 % 0x557 + 2064] = v24++;
      }
      while ( v24 != 129 );
      v33 = v2;
      __cxa_guard_release(`guard variable for'boost::beast::http::detail::get_field_table(void)::tab);
      v2 = v33;
    }
  }
  v4 = *v2;
  if ( !*v2 )
    return 0;
  v5 = v2;
  v6 = &boost::beast::http::detail::get_field_table(void)::tab[16 * a2];
  v7 = *(char **)v6;
  v8 = *((_QWORD *)v6 + 1);
  do
  {
    v9 = *(unsigned __int16 *)(v4 + 32) - 2;
    if ( v9 < v8 )
      goto LABEL_17;
    if ( v8 >= v9 )
    {
      v10 = (char *)(v4 + 40);
      v11 = v7;
      v12 = (char *)(v4 + 40 + v8);
      if ( (__int64)v8 >= (__int64)v9 )
        v12 = (char *)(v4 + 40 + v9);
      if ( v10 != v12 )
      {
        while ( 1 )
        {
          v13 = *v11;
          v14 = *v10;
          if ( (unsigned int)(v14 - 65) < 0x1A )
            LOBYTE(v14) = v14 + 32;
          if ( (unsigned int)(v13 - 65) < 0x1A )
            v13 += 32;
          if ( v13 > (char)v14 )
            break;
          if ( v13 < (char)v14 )
            goto LABEL_36;
          ++v10;
          ++v11;
          if ( v10 == v12 )
            goto LABEL_35;
        }
LABEL_17:
        v4 = *(_QWORD *)(v4 + 16);
        continue;
      }
LABEL_35:
      if ( v11 != &v7[v8] )
        goto LABEL_17;
    }
LABEL_36:
    v5 = (_QWORD *)v4;
    v4 = *(_QWORD *)(v4 + 8);
  }
  while ( v4 );
  if ( v2 == v5 )
    return 0;
  if ( !v5 )
    BUG();
  v15 = *((unsigned __int16 *)v5 + 16);
  v16 = (int)v15 - 2;
  if ( v8 < v16 )
    return 0;
  if ( v16 < v8 )
    goto LABEL_38;
  v17 = &v7[v8];
  if ( (__int64)v16 < (__int64)v8 )
    v17 = &v7[v16];
  v18 = (char *)(v5 + 5);
  for ( i = v17; v7 != i; ++v18 )
  {
    v20 = *v18;
    v21 = *v7;
    if ( (unsigned int)(v21 - 65) < 0x1A )
      LOBYTE(v21) = v21 + 32;
    if ( (unsigned int)(v20 - 65) < 0x1A )
      v20 += 32;
    if ( v20 > (char)v21 )
      return 0;
    if ( v20 < (char)v21 )
      goto LABEL_38;
    ++v7;
  }
  if ( v18 != (char *)v5 + v16 + 40 )
    return 0;
LABEL_38:
  if ( v2 + 4 == v5 - 2 )
    return 0;
  return (__int64)v5 + v15 + 40;
}

