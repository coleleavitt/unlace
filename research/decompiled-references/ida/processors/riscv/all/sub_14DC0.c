__int64 __fastcall sub_14DC0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v4; // ecx

  v3 = *(_BYTE *)(a2 + 1);
  v4 = 0;
  if ( v3 != *(_BYTE *)(a3 + 1) )
    return v4;
  v4 = 1;
  if ( v3 == 99 )
    return v4;
  if ( v3 == 100 )
  {
    LOBYTE(v4) = *(_QWORD *)(a2 + 8) == *(_QWORD *)(a3 + 8);
    return v4;
  }
  else
  {
    v4 = 0;
    if ( v3 != 1 )
      return v4;
    LOBYTE(v4) = *(_WORD *)(a2 + 6) == *(_WORD *)(a3 + 6);
    return v4;
  }
}

