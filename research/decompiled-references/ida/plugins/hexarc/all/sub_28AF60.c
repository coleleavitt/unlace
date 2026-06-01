__int64 __fastcall sub_28AF60(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  char v5; // bp
  int tinfo_size; // eax
  char tinfo_property; // al
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx

  if ( !(unsigned __int8)compare_tinfo() )
  {
    if ( (get_tinfo_property() & 0xF) != 0xA || (get_tinfo_property() & 0xF) != 0xA )
      return 0;
    get_tinfo_property();
    get_tinfo_property();
    if ( (get_tinfo_property() & 0x40) == 0
      || (v12 = *(_QWORD *)(a1 + 16),
          v13 = *(_QWORD *)(a1 + 24),
          v14 = *(_QWORD *)(v12 + 8 * v13 - 8),
          *(_DWORD *)(v14 + 8) != 51)
      || (v15 = *(_QWORD *)(v12 + 8 * v13 - 16), (unsigned int)(*(_DWORD *)(v15 + 8) - 2) <= 0xD)
      && *(_QWORD *)(v15 + 24) == v14
      || (set_tinfo_property(), !(unsigned __int8)compare_tinfo()) )
    {
      clear_tinfo_t();
      clear_tinfo_t();
      return 0;
    }
    clear_tinfo_t();
    clear_tinfo_t();
  }
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  if ( *(_DWORD *)(v3 + 8) == 51 )
  {
    tinfo_property = get_tinfo_property();
    if ( !(unsigned __int8)sub_239D10((int)a2 + 48, *(_DWORD *)(v3 + 40), (tinfo_property & 0xF) == 9, v9, v10, v11) )
      return 0;
    v4 = a2[6];
    if ( !(_BYTE)v4 )
      goto LABEL_9;
  }
  else
  {
    v4 = a2[6];
    if ( !(_BYTE)v4 )
      goto LABEL_9;
  }
  if ( (v4 & 0xE) != 0 || (v4 & 0x30) == 0 )
  {
    get_tinfo_property();
    v5 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v5 & 0x3F) != 0x30 )
      goto LABEL_6;
  }
LABEL_9:
  tinfo_size = get_tinfo_size();
  if ( (unsigned int)sub_27EF40(a1, (__int64)a2, tinfo_size, 1u, 0) )
    return 0;
LABEL_6:
  sub_24E4D0(a2, a2[3]);
  if ( (unsigned __int8)sub_27C780(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

