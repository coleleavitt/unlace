bool __fastcall sub_14E500(__int64 a1, _BYTE *a2, double a3)
{
  unsigned __int8 v3; // al
  char v4; // dl
  bool result; // al

  v3 = *(_BYTE *)a1;
  if ( *a2 == 2 )
  {
    if ( v3 != 2 )
      return 0;
  }
  else if ( v3 == 2 )
  {
    return 0;
  }
  v4 = sub_125B60((unsigned __int8 *)a1, (__int64)a2, 0, a3);
  result = 1;
  if ( !v4 )
    return result;
  if ( *(_BYTE *)a1 != 4 )
    return 0;
  return sub_30D1C0(*(_QWORD *)(a1 + 8)) != nullptr;
}

