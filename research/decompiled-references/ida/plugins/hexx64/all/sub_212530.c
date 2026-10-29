__int64 __fastcall sub_212530(__int64 *a1, double a2)
{
  _DWORD *v2; // r12
  unsigned __int8 *v3; // r12
  __int64 *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp

  v2 = (_DWORD *)a1[4];
  if ( *v2 == 56 )
  {
    v3 = (unsigned __int8 *)(v2 + 8);
  }
  else
  {
    if ( *v2 != 57 )
      return 0;
    v3 = (unsigned __int8 *)(v2 + 12);
  }
  v4 = (__int64 *)a1[5];
  v5 = *v4;
  v6 = *v4 + 16 * v4[1];
  if ( *v4 != v6 )
  {
    do
    {
      if ( sub_125B60(v3, v5, 0, a2) )
        break;
      v5 += 16;
    }
    while ( v6 != v5 );
    if ( v5 != *v4 + 16 * v4[1] )
      sub_FECE0(a1[2], a1[3], a1[4], a2);
  }
  return 0;
}

