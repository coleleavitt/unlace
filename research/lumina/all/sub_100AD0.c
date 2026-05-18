__int64 __fastcall sub_100AD0(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_FEBD0(a1, (__int64)a2);
  v3 = 7;
  if ( !v2 )
  {
    v3 = sub_D6100(a2, (__int64)a2);
    if ( !v3 )
      *(_BYTE *)(*a2 + 25LL) = 1;
  }
  return v3;
}
