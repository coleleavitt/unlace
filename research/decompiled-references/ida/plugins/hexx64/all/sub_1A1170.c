__int64 __fastcall sub_1A1170(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  int v4; // r12d

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v4 = v3;
  if ( *(_QWORD *)(a1 + 24) )
    v4 = sub_1A1110(a1, a2, *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 60) * *(_DWORD *)(a1 + 48), a3);
  if ( (unsigned __int8)sub_64880((_QWORD *)a1) )
  {
    if ( v4 < (int)v3 )
      return (unsigned int)v3;
    return (unsigned int)v4;
  }
  else
  {
    do
    {
      LODWORD(v3) = v3 - 1;
      if ( v4 > (int)v3 )
        return (unsigned int)v4;
    }
    while ( (unsigned __int8)sub_64A10(
                               (_QWORD *)a1,
                               *(_DWORD *)(**(_QWORD **)(a1 + 40) + 4LL * (int)v3),
                               *(_DWORD *)(a1 + 60)) );
    return (unsigned int)(v3 + 1);
  }
}

