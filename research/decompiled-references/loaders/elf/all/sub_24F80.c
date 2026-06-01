__int64 __fastcall sub_24F80(__int64 *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // r8
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  int v7; // edi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rsi

  v4 = a3;
  v5 = 0;
  if ( a3 < (unsigned __int64)a1[3] && a3 < *((_DWORD *)a1 + 12) )
  {
    v6 = a1[4] - a1[2];
    if ( v6 > (unsigned int)*a2 )
      LODWORD(v6) = *a2;
    v7 = v6;
    *a2 -= v6;
    v8 = a1[2];
    v9 = v8 - 1 - v4;
    if ( v4 >= v8 )
      v9 += a1[5];
    do
    {
      v10 = *a1;
      v11 = v9 + 1;
      a1[2] = v8 + 1;
      *(_BYTE *)(v10 + v8) = *(_BYTE *)(v10 + v9);
      v9 = 0;
      if ( v11 != a1[5] )
        v9 = v11;
      v8 = a1[2];
      --v7;
    }
    while ( v7 );
    if ( a1[3] < v8 )
      a1[3] = v8;
    return 1;
  }
  return v5;
}
