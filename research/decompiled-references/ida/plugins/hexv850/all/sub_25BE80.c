__int64 __fastcall sub_25BE80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // ecx

  if ( (*(_BYTE *)(a2 + 605) & 2) != 0 )
  {
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v2 = *(_QWORD *)(a1 + 16);
      if ( !v2 )
        return 0;
      if ( v2 != 1 )
        return 1;
      v3 = *(_QWORD *)(a1 + 8);
      v4 = *(_DWORD *)(v3 + 24);
      if ( v4 > 0x54 )
        goto LABEL_15;
      if ( v4 > 0x47 )
        break;
      if ( v4 == 70 )
        return 0;
      if ( v4 != 71 )
      {
LABEL_15:
        if ( !under_debugger )
          sub_37CFE0(50121);
        BUG();
      }
      a1 = *(_QWORD *)(v3 + 40);
    }
    v5 = 1LL << ((unsigned __int8)v4 - 72);
    if ( (v5 & 0x13C1) != 0 )
      return 0;
    v6 = 1;
    if ( (v5 & 0x83E) == 0 )
      LOBYTE(v6) = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL) != 1;
  }
  return v6;
}

