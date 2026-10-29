__int64 __fastcall sub_64300(__int64 *a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  v1 = a1[1];
  LODWORD(v2) = 0;
  if ( v1 )
  {
    v3 = *a1;
    v4 = (v1 >> 6) - 1;
    if ( v1 >> 6 )
    {
      v2 = a1[1];
      do
      {
        if ( *(_QWORD *)(v3 + 8 * v4) )
          break;
        v2 -= 64;
        a1[1] = v2;
      }
      while ( v4-- != 0 );
      LOBYTE(v2) = v2 != v1;
    }
  }
  return (unsigned int)v2;
}

