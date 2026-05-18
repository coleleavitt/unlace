__int64 __fastcall sub_1778F0(__int64 a1)
{
  char v1; // al
  bool v2; // zf
  _BOOL8 v4; // rbp

  v1 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 == 7 )
  {
    v4 = *(_QWORD *)(a1 + 16) > 1u;
    sub_176520(a1);
    *(_QWORD *)(a1 + 8) = v4;
    return 1;
  }
  if ( v1 > 7 )
  {
    if ( v1 == 9 )
    {
      v2 = *(_QWORD *)(a1 + 8) == 0;
      *(_BYTE *)a1 = 2;
      *(_QWORD *)(a1 + 8) = !v2;
      return 1;
    }
  }
  else
  {
    if ( v1 == 2 )
      return 1;
    if ( v1 == 5 )
    {
      sub_176520(a1);
      *(_QWORD *)(a1 + 8) = 1;
      return 1;
    }
  }
  sub_18FA40(61);
  return 0;
}
