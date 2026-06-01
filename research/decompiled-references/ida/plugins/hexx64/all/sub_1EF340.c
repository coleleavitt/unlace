char __fastcall sub_1EF340(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, char a5, double a6)
{
  char tinfo_property; // al
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax

  if ( !(unsigned __int8)*(_QWORD *)a3 )
  {
    if ( !under_debugger )
      sub_383060(0xCB3Du, a6);
    BUG();
  }
  if ( (unsigned int)verify_tinfo()
    || *(_DWORD *)(a1 + 88)
    && (*(_BYTE *)(a1 + 25) & 1) != 0
    && !(unsigned __int8)sub_1EEFF0(a1, a2, a3, 0xFFFFFFFF, a4, a5, a6) )
  {
    goto LABEL_13;
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xF) == 0xB )
  {
    v12 = *(_DWORD *)(a1 + 24);
    if ( (v12 & 0x80u) != 0 )
    {
      if ( (unsigned int)lexcompare_tinfo() )
        goto LABEL_13;
      v12 = *(_DWORD *)(a1 + 24);
    }
    if ( (v12 & 0x100) == 0 )
    {
      LOBYTE(v11) = get_tinfo_size() != 0;
      return v11;
    }
    if ( (unsigned __int8)*(_QWORD *)(a1 + 80) && (get_tinfo_property() & 0xF) != 0xB )
    {
      LOBYTE(v11) = (unsigned int)lexcompare_tinfo() == 0;
      return v11;
    }
    goto LABEL_17;
  }
  if ( (tinfo_property & 0xF) == 0xC || (tinfo_property & 0x3F) == 1 )
    goto LABEL_13;
  v10 = *(_DWORD *)(a1 + 24);
  if ( (v10 & 0x80u) != 0 )
  {
    if ( (*a3 & 0xF) != 0xD || (*(_QWORD *)a3 & 0x100LL) != 0 )
    {
      if ( !(unsigned __int8)sub_1C6060(a2, (__int64)a3, (_DWORD *)a1, a4, a6) )
      {
        LODWORD(v11) = sub_1C6060(a2, a1 + 80, (_DWORD *)a1, a4, a6) ^ 1;
        return v11;
      }
LABEL_17:
      LOBYTE(v11) = 1;
      return v11;
    }
LABEL_13:
    LOBYTE(v11) = 0;
    return v11;
  }
  if ( (v10 & 0x100000) != 0 )
    goto LABEL_17;
  v11 = (*(_QWORD *)a3 >> 8) & 1LL;
  if ( (*a3 & 0xF) != 0xD )
    goto LABEL_17;
  return v11;
}

