bool __fastcall sub_14DF40(__int64 a1, _BYTE *a2)
{
  unsigned __int8 v2; // al
  char v3; // dl
  bool result; // al

  v2 = *(_BYTE *)a1;
  if ( *a2 == 2 )
  {
    if ( v2 != 2 )
      return 0;
  }
  else if ( v2 == 2 )
  {
    return 0;
  }
  v3 = sub_1255A0((unsigned __int8 *)a1, (__int64)a2, 0);
  result = 1;
  if ( !v3 )
    return result;
  if ( *(_BYTE *)a1 != 4 )
    return 0;
  return sub_30D580(*(_QWORD *)(a1 + 8)) != 0;
}

