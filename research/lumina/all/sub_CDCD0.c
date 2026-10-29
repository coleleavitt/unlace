__int64 __fastcall sub_CDCD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r12d
  __int64 v4; // rax
  int v6; // eax
  _QWORD *v7; // rsi

  v2 = a2;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 8))(a1, a2);
  if ( v3 )
  {
    return v3 & 2;
  }
  else
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 4) & 0x804000) != 0 )
        return v3;
      if ( *(_QWORD *)(v2 + 16) && (unsigned int)sub_CDCD0(a1) )
        return 2;
      v4 = *(_QWORD *)(v2 + 24);
      if ( !v4 )
        break;
      v2 = *(_QWORD *)(v2 + 24);
      v3 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 8))(a1, v4);
      if ( v3 )
        return v3 & 2;
    }
    v6 = *(_DWORD *)(v2 + 4);
    v7 = *(_QWORD **)(v2 + 32);
    if ( (v6 & 0x800) != 0 )
    {
      if ( v7 && *(_QWORD *)(a1 + 16) && (unsigned int)sub_CDAF0(a1, v7) )
        return 2;
    }
    else
    {
      if ( v7 )
      {
        if ( (unsigned int)sub_CDDC0(a1, v7) )
          return 2;
        v6 = *(_DWORD *)(v2 + 4);
      }
      if ( (v6 & 0x1000000) != 0 && (unsigned int)sub_CDED0(a1, *(_QWORD *)(v2 + 64), 1) )
        return 2;
    }
  }
  return v3;
}
