__int64 __fastcall sub_CA320(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r10
  int v3; // r8d
  _BYTE **v4; // r9

  if ( a2 )
  {
    v2 = a2;
    v3 = *(_DWORD *)(a1 + 40) - 1;
    v4 = (_BYTE **)(*(_QWORD *)(a1 + 32) + 32LL * v3);
    if ( v3 >= 0 )
    {
      while ( !*v4 || (unsigned int)sub_CA2B0(*v4, v2) )
      {
        if ( !v3 )
          return (unsigned int)-((unsigned int)sub_CA2B0("main", v2) != 0);
        --v3;
        v4 -= 4;
        if ( v3 == -1 )
          return (unsigned int)v3;
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return (unsigned int)v3;
}
