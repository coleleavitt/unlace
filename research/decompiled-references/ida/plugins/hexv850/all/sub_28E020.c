__int64 __fastcall sub_28E020(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // eax
  unsigned int v4; // ebp
  int v5; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  char tinfo_property; // al
  int v11; // r12d
  __int64 tinfo_size; // r12
  char v13; // al
  unsigned int v14; // eax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  LOBYTE(v3) = sub_251090(a2, v2);
  if ( !(_BYTE)v3 )
  {
    if ( !under_debugger )
      sub_37CFE0(51251);
LABEL_32:
    BUG();
  }
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_37CFE0(51252);
    goto LABEL_32;
  }
  v4 = v3;
  if ( (get_tinfo_property() & 0xF) != 0xA )
    return 0;
  v5 = *(_DWORD *)(v2 + 8);
  if ( v5 != 35 )
  {
    if ( v5 == 36 && *(_QWORD *)(v2 + 24) == a2 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      if ( v7 > 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v7 - 16);
        goto LABEL_13;
      }
    }
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 <= 1 )
    return 0;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v9 - 16);
LABEL_13:
  if ( *(_DWORD *)(v8 + 8) != 48 )
    return 0;
  if ( !(unsigned int)lexcompare_tinfo() )
    return 0;
  if ( (unsigned int)lexcompare_tinfo() )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
    return 0;
  if ( (get_tinfo_property() & 0xF) != 0xA || (v11 = get_tinfo_property(), (unsigned int)get_tinfo_property() != v11) )
  {
    tinfo_size = get_tinfo_size();
    if ( get_tinfo_size() != tinfo_size )
      return 0;
    v13 = get_tinfo_property();
    if ( (v13 & 0x3E) == 0 || (v13 & 0xFu) > 8 || (unsigned int)get_tinfo_property() != 1 )
      return 0;
  }
  sub_23FAB0(a2);
  v14 = *(_DWORD *)(a2 + 56) | 0x20;
  if ( (*(_BYTE *)(v8 + 56) & 0x20) == 0 )
    v14 = *(_DWORD *)(a2 + 56) & 0xFFFFFFDF;
  *(_DWORD *)(a2 + 56) = v14;
  if ( (unsigned __int8)sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v4;
}

