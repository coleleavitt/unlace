unsigned __int64 __fastcall sub_32B540(__int64 a1)
{
  const char *v1; // r12
  _UNKNOWN **v2; // r12
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rax
  char tinfo; // al
  char v7; // r13
  int tinfo_size; // eax
  const char *v10; // r15
  __int64 v11; // [rsp+0h] [rbp-68h]
  __int64 v12; // [rsp+8h] [rbp-60h]
  __int64 idati; // [rsp+10h] [rbp-58h] BYREF
  const char *v14; // [rsp+18h] [rbp-50h]
  __int16 v15; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+22h] [rbp-46h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  get_stock_tinfo();
  get_stock_tinfo();
  get_stock_tinfo();
  get_stock_tinfo();
  get_stock_tinfo();
  get_stock_tinfo();
  sub_32AFE0(&idati, (__int64)"va_list");
  copy_tinfo_t();
  clear_tinfo_t();
  v15 = 0;
  idati = 0;
  v14 = nullptr;
  v16 = 48;
  v1 = "__m64";
  if ( (unsigned __int8)sub_32A8C0((__int64)&idati) )
    v1 = (const char *)idati;
  clear_tinfo_t();
  sub_32AFE0(&idati, (__int64)v1);
  copy_tinfo_t();
  v2 = (_UNKNOWN **)&unk_4DE1C0;
  clear_tinfo_t();
  do
  {
    v15 = 0;
    v3 = (__int64)v2[1];
    v16 = 48;
    idati = 0;
    v14 = nullptr;
    if ( (unsigned __int8)sub_32A8C0((__int64)&idati) )
      v3 = idati;
    clear_tinfo_t();
    v4 = (__int64)v2[2];
    v15 = 0;
    v11 = v4;
    idati = 0;
    v14 = nullptr;
    v16 = 48;
    if ( (unsigned __int8)sub_32A8C0((__int64)&idati) )
      v11 = idati;
    clear_tinfo_t();
    v5 = (__int64)v2[3];
    v16 = 48;
    v12 = v5;
    idati = 0;
    v14 = nullptr;
    v15 = 0;
    if ( (unsigned __int8)sub_32A8C0((__int64)&idati) )
      v12 = idati;
    clear_tinfo_t();
    sub_32AFE0(&idati, v3);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32AFE0(&idati, v11);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32AFE0(&idati, v12);
    copy_tinfo_t();
    v2 += 4;
    clear_tinfo_t();
  }
  while ( &off_4DE220 != v2 );
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
  v14 = "wchar_t";
  v15 = 256;
  idati = get_idati();
  tinfo = create_tinfo();
  v15 = 256;
  v7 = tinfo;
  v14 = "WCHAR";
  idati = get_idati();
  if ( (unsigned __int8)create_tinfo() || v7 )
  {
    tinfo_size = get_tinfo_size();
    if ( ((tinfo_size - 2) & 0xFFFFFFFD) == 0 )
    {
      v15 = 256;
      v10 = "wchar16_t";
      if ( tinfo_size != 2 )
        v10 = "wchar32_t";
      v14 = v10;
      idati = get_idati();
      create_tinfo();
      v15 = 256;
      v14 = v10 + 1;
      idati = get_idati();
      create_tinfo();
    }
  }
  return v17 - __readfsqword(0x28u);
}

