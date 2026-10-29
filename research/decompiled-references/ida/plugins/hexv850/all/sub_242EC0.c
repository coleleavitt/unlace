__int64 __fastcall sub_242EC0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // r15
  bool v6; // r15
  int v7; // eax
  __int64 tinfo_size; // r15
  char tinfo_property; // al
  unsigned __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rsi

  copy_tinfo_t();
  if ( !*(_BYTE *)a3 || (get_tinfo_property() & 0x3F) == 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(50399);
    BUG();
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    if ( v7 != 48 )
    {
      if ( v7 == 57 )
        goto LABEL_15;
LABEL_9:
      if ( (unsigned int)(v7 - 64) <= 1 )
        goto LABEL_16;
LABEL_10:
      tinfo_size = get_tinfo_size();
      if ( tinfo_size != get_tinfo_size() )
        sub_23F9C0((__int64 *)a2);
      sub_241280(a1, (__int64 *)a2, (__int64)a3);
      goto LABEL_13;
    }
    v5 = get_tinfo_size();
    if ( v5 < get_tinfo_size() )
      break;
    v6 = (get_tinfo_property() & 0xF) == 9;
    if ( v6 != ((get_tinfo_property() & 0xF) == 9) )
      break;
    sub_250490(a2, *(_QWORD *)(a2 + 24));
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 != 57 )
    goto LABEL_9;
LABEL_15:
  if ( !get_tinfo_property() )
  {
    v7 = *(_DWORD *)(a2 + 8);
    goto LABEL_9;
  }
LABEL_16:
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D && !get_tinfo_property() )
    goto LABEL_10;
  v11 = get_tinfo_size();
  if ( get_tinfo_size() < v11 )
    goto LABEL_10;
  v12 = get_tinfo_size();
  v13 = sub_2422E0(a1, -1, a2, 0, a3, v12, 0);
  if ( a2 != v13 )
    sub_2397C0((_QWORD *)a2, v13);
LABEL_13:
  clear_tinfo_t();
  return 1;
}

