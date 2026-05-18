__int64 __fastcall sub_C5D60(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // esi
  bool v5; // cc
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v9; // al
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax

  if ( *(_BYTE *)(a1 + 25) )
  {
    v1 = *(_QWORD *)(a1 + 56);
    v2 = *(unsigned int *)(a1 + 16);
    v3 = (unsigned int)(v2 + 1);
    if ( (*(_BYTE *)(v1 + 16 * v2 + 1) & 0x40) != 0 )
    {
      v4 = v2 + 2;
      LODWORD(v2) = v2 + 1;
      v3 = v4;
    }
    ++*(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 20) <= (unsigned int)v3;
    *(_DWORD *)(a1 + 16) = v3;
    if ( !v5 )
    {
      v6 = *(unsigned int *)(*(_QWORD *)(a1 + 72) + 4 * v3);
      v7 = 16 * v6 + v1;
      *(_BYTE *)(a1 + 24) = *(_BYTE *)v7;
      if ( *(_BYTE *)v7 == 6 )
      {
        if ( (_DWORD)v6 == (_DWORD)v2 )
          *(_DWORD *)(v7 + 8) = 0;
        else
          ++*(_DWORD *)(v7 + 8);
      }
    }
    return 0;
  }
  else
  {
    v9 = *(_BYTE *)(a1 + 24);
    if ( v9 == 6 )
    {
      v13 = 1;
      v14 = *(unsigned int *)(a1 + 16);
      v15 = *(_QWORD *)(a1 + 56) + 16 * v14;
      if ( *(_BYTE *)v15 > 5u )
        v13 = *(_DWORD *)(v15 + 4) + 1;
      ++*(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 16) = v13 + v14;
      return 0;
    }
    else if ( v9 == 7 )
    {
      v10 = 1;
      v11 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
      v12 = *(_QWORD *)(a1 + 56) + 16 * v11;
      if ( *(_BYTE *)v12 > 5u )
        v10 = *(_DWORD *)(v12 + 4) + 1;
      ++*(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 16) = v10 + v11;
      return 0;
    }
    else
    {
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 20);
      return 0;
    }
  }
}
