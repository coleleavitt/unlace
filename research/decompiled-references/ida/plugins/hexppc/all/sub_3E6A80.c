__int64 __fastcall sub_3E6A80(__int64 a1, int a2, int a3)
{
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  int v8; // esi
  int v9; // edx
  int v10; // edi

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    v5 = a1 + 536;
    v6 = a1 + 4408;
    v7 = a1 + 536;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 28);
      if ( a2 < v8 )
        break;
      v7 += 32;
      if ( v6 == v7 )
        goto LABEL_6;
    }
    v8 = *(_DWORD *)(v7 - 4);
LABEL_6:
    v9 = *(_DWORD *)(a1 + 412);
    if ( v8 >= v9 && v8 <= *(_DWORD *)(a1 + 352) )
    {
      v10 = *(_DWORD *)(a1 + 4408);
      if ( (((v8 - v9) / v10) & 1) == 0 )
      {
        if ( (*(_BYTE *)(v7 - 8) & 4) == 0 )
          v10 = *(char *)(v7 - 12);
        if ( a2 + a3 - v8 > v10 )
        {
          a2 = (a2 + a3 - v8 - 1) % v10 - (a3 - v8 - 1);
          do
          {
            if ( a2 < *(_DWORD *)(v5 + 28) )
              break;
            v5 += 32;
          }
          while ( v6 != v5 );
          if ( a3 > *(char *)(v5 - 11) )
            return (unsigned int)-1;
        }
      }
    }
  }
  return (unsigned int)a2;
}

