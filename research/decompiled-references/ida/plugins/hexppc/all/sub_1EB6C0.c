char __fastcall sub_1EB6C0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, char a5)
{
  char tinfo_property; // al
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax

  if ( !(unsigned __int8)*(_QWORD *)a3 )
  {
    if ( !under_debugger )
      sub_37EEE0(52029);
    BUG();
  }
  if ( (unsigned int)verify_tinfo()
    || *(_DWORD *)(a1 + 88)
    && (*(_BYTE *)(a1 + 25) & 1) != 0
    && !(unsigned __int8)sub_1EB370(a1, a2, a3, 0xFFFFFFFF, a4, a5) )
  {
    goto LABEL_13;
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xF) == 0xB )
  {
    v11 = *(_DWORD *)(a1 + 24);
    if ( (v11 & 0x80u) != 0 )
    {
      if ( (unsigned int)lexcompare_tinfo() )
        goto LABEL_13;
      v11 = *(_DWORD *)(a1 + 24);
    }
    if ( (v11 & 0x100) == 0 )
    {
      LOBYTE(v10) = get_tinfo_size() != 0;
      return v10;
    }
    if ( (unsigned __int8)*(_QWORD *)(a1 + 80) && (get_tinfo_property() & 0xF) != 0xB )
    {
      LOBYTE(v10) = (unsigned int)lexcompare_tinfo() == 0;
      return v10;
    }
    goto LABEL_17;
  }
  if ( (tinfo_property & 0xF) == 0xC || (tinfo_property & 0x3F) == 1 )
    goto LABEL_13;
  v9 = *(_DWORD *)(a1 + 24);
  if ( (v9 & 0x80u) != 0 )
  {
    if ( (*a3 & 0xF) != 0xD || (*(_QWORD *)a3 & 0x100LL) != 0 )
    {
      if ( !(unsigned __int8)sub_1C2620(a2, (__int64)a3, (_DWORD *)a1, a4) )
      {
        LODWORD(v10) = sub_1C2620(a2, a1 + 80, (_DWORD *)a1, a4) ^ 1;
        return v10;
      }
LABEL_17:
      LOBYTE(v10) = 1;
      return v10;
    }
LABEL_13:
    LOBYTE(v10) = 0;
    return v10;
  }
  if ( (v9 & 0x100000) != 0 )
    goto LABEL_17;
  v10 = (*(_QWORD *)a3 >> 8) & 1LL;
  if ( (*a3 & 0xF) != 0xD )
    goto LABEL_17;
  return v10;
}

