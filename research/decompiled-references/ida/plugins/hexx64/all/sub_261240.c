__int64 __fastcall sub_261240(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // ecx

  if ( (*(_BYTE *)(a2 + 605) & 2) != 0 )
  {
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 16);
      if ( !v3 )
        return 0;
      if ( v3 != 1 )
        return 1;
      v4 = *(_QWORD *)(a1 + 8);
      v5 = *(_DWORD *)(v4 + 24);
      if ( v5 > 0x54 )
        goto LABEL_15;
      if ( v5 > 0x47 )
        break;
      if ( v5 == 70 )
        return 0;
      if ( v5 != 71 )
      {
LABEL_15:
        if ( !under_debugger )
          sub_383060(0xC3C9u, a3);
        BUG();
      }
      a1 = *(_QWORD *)(v4 + 40);
    }
    v6 = 1LL << ((unsigned __int8)v5 - 72);
    if ( (v6 & 0x13C1) != 0 )
      return 0;
    v7 = 1;
    if ( (v6 & 0x83E) == 0 )
      LOBYTE(v7) = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL) != 1;
  }
  return v7;
}

