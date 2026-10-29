__int64 __fastcall sub_60180(_QWORD *a1)
{
  unsigned __int64 v1; // r10
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdx

  v1 = a1[1];
  v2 = v1 - 1;
  v3 = v1 - 1;
  if ( (__int64)(v1 - 1) >= 0 )
  {
    while ( 1 )
    {
      while ( (v3 & 0x80000000) != 0LL )
        --v3;
      v2 = v3;
      if ( (int)v3 < v1 && (*(_QWORD *)(*a1 + 8LL * ((int)v3 >> 6)) & (1LL << v3)) != 0 )
        break;
      if ( v3-- == 0 )
        return (unsigned int)-1;
    }
  }
  return v2;
}

