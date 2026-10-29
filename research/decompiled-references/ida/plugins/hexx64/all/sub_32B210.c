unsigned __int64 __fastcall sub_32B210(__int64 a1, double a2)
{
  const char *v2; // r12
  __m128i *v3; // r12
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  char tinfo; // al
  char v8; // r13
  int tinfo_size; // eax
  const char *v11; // r15
  __int64 v12; // [rsp+0h] [rbp-68h]
  __int64 v13; // [rsp+8h] [rbp-60h]
  __int64 idati; // [rsp+10h] [rbp-58h] BYREF
  const char *v15; // [rsp+18h] [rbp-50h]
  __int16 v16; // [rsp+20h] [rbp-48h]
  char v17; // [rsp+22h] [rbp-46h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  get_stock_tinfo();
  get_stock_tinfo();
  get_stock_tinfo();
  get_stock_tinfo();
  get_stock_tinfo();
  get_stock_tinfo();
  sub_32ACB0(&idati, (__int64)"va_list", a2);
  copy_tinfo_t();
  clear_tinfo_t();
  v16 = 0;
  idati = 0;
  v15 = nullptr;
  v17 = 48;
  v2 = "__m64";
  if ( (unsigned __int8)sub_32A590((__int64)&idati) )
    v2 = (const char *)idati;
  clear_tinfo_t();
  sub_32ACB0(&idati, (__int64)v2, a2);
  copy_tinfo_t();
  v3 = (__m128i *)&unk_4E3B00;
  clear_tinfo_t();
  do
  {
    v16 = 0;
    v4 = v3->m128i_i64[1];
    v17 = 48;
    idati = 0;
    v15 = nullptr;
    if ( (unsigned __int8)sub_32A590((__int64)&idati) )
      v4 = idati;
    clear_tinfo_t();
    v5 = v3[1].m128i_i64[0];
    v16 = 0;
    v12 = v5;
    idati = 0;
    v15 = nullptr;
    v17 = 48;
    if ( (unsigned __int8)sub_32A590((__int64)&idati) )
      v12 = idati;
    clear_tinfo_t();
    v6 = v3[1].m128i_i64[1];
    v17 = 48;
    v13 = v6;
    idati = 0;
    v15 = nullptr;
    v16 = 0;
    if ( (unsigned __int8)sub_32A590((__int64)&idati) )
      v13 = idati;
    clear_tinfo_t();
    sub_32ACB0(&idati, v4, a2);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32ACB0(&idati, v12, a2);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32ACB0(&idati, v13, a2);
    copy_tinfo_t();
    v3 += 2;
    clear_tinfo_t();
  }
  while ( &off_4E3B60 != v3 );
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL) == 8 )
  {
    idati = 21;
    copy_tinfo_t();
    clear_tinfo_t();
    idati = 37;
  }
  else
  {
    idati = 7;
    copy_tinfo_t();
    clear_tinfo_t();
    idati = 39;
  }
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 112) + 84LL) == 8 )
  {
    idati = 21;
    copy_tinfo_t();
    clear_tinfo_t();
    idati = 37;
  }
  else
  {
    idati = 7;
    copy_tinfo_t();
    clear_tinfo_t();
    idati = 39;
  }
  copy_tinfo_t();
  clear_tinfo_t();
  v15 = "wchar_t";
  v16 = 256;
  idati = get_idati();
  tinfo = create_tinfo();
  v16 = 256;
  v8 = tinfo;
  v15 = "WCHAR";
  idati = get_idati();
  if ( (unsigned __int8)create_tinfo() || v8 )
  {
    tinfo_size = get_tinfo_size();
    if ( ((tinfo_size - 2) & 0xFFFFFFFD) == 0 )
    {
      v16 = 256;
      v11 = "wchar16_t";
      if ( tinfo_size != 2 )
        v11 = "wchar32_t";
      v15 = v11;
      idati = get_idati();
      create_tinfo();
      v16 = 256;
      v15 = v11 + 1;
      idati = get_idati();
      create_tinfo();
    }
  }
  return v18 - __readfsqword(0x28u);
}

