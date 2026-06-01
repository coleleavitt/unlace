__int64 __fastcall sub_2933E0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // r12
  unsigned int v4; // eax
  unsigned int v5; // ebp
  int v6; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  char tinfo_property; // al
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 tinfo_size; // r12
  char v16; // al
  unsigned int v17; // eax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  LOBYTE(v4) = sub_256450(a2, v3, *(double *)a3.m128_u64);
  if ( !(_BYTE)v4 )
  {
    if ( !under_debugger )
      sub_383060(0xC833u, *(double *)a3.m128_u64);
LABEL_32:
    BUG();
  }
  if ( *(_DWORD *)(a2 + 8) != 48 )
  {
    if ( !under_debugger )
      sub_383060(0xC834u, *(double *)a3.m128_u64);
    goto LABEL_32;
  }
  v5 = v4;
  if ( (get_tinfo_property() & 0xF) != 0xA )
    return 0;
  v6 = *(_DWORD *)(v3 + 8);
  if ( v6 != 35 )
  {
    if ( v6 == 36 && *(_QWORD *)(v3 + 24) == a2 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( v8 > 1 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v8 - 16);
        goto LABEL_13;
      }
    }
    return 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 <= 1 )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v10 - 16);
LABEL_13:
  if ( *(_DWORD *)(v9 + 8) != 48 )
    return 0;
  if ( !(unsigned int)lexcompare_tinfo() )
    return 0;
  if ( (unsigned int)lexcompare_tinfo() )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) == 0 || (tinfo_property & 0xFu) > 8 )
    return 0;
  if ( (get_tinfo_property() & 0xF) != 0xA || (v12 = get_tinfo_property(), (unsigned int)get_tinfo_property() != v12) )
  {
    tinfo_size = get_tinfo_size();
    if ( get_tinfo_size() != tinfo_size )
      return 0;
    v16 = get_tinfo_property();
    if ( (v16 & 0x3E) == 0 || (v16 & 0xFu) > 8 || (unsigned int)get_tinfo_property() != 1 )
      return 0;
  }
  sub_244E70(a2, v9 + 48, v13, v14);
  v17 = *(_DWORD *)(a2 + 56) | 0x20;
  if ( (*(_BYTE *)(v9 + 56) & 0x20) == 0 )
    v17 = *(_DWORD *)(a2 + 56) & 0xFFFFFFDF;
  *(_DWORD *)(a2 + 56) = v17;
  if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return v5;
}

