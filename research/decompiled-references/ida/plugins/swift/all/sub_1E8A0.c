__int64 __fastcall sub_1E8A0(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v3; // rcx
  __int64 i; // rax
  unsigned __int64 v5; // rcx
  __int64 j; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = getinf(5);
  if ( v1 != 18 && v1 != 25 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)a1 = 2;
  if ( v3 <= 7 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 24) <= 7u )
    {
      v9 = qvector_reserve(a1 + 8, v7, 8, 4);
      v3 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v9;
      v7 = v9;
    }
    memset((void *)(v7 + 4 * v3), 0, 4 * (8 - v3));
    goto LABEL_6;
  }
  if ( v3 != 8 )
LABEL_6:
    *(_QWORD *)(a1 + 16) = 8;
  for ( i = 0; i != 8; ++i )
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + i * 4) = dword_28640[i];
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 <= 7 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 48) <= 7u )
    {
      v10 = qvector_reserve(a1 + 32, v8, 8, 4);
      v5 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 32) = v10;
      v8 = v10;
    }
    memset((void *)(v8 + 4 * v5), 0, 4 * (8 - v5));
  }
  else if ( v5 == 8 )
  {
    goto LABEL_12;
  }
  *(_QWORD *)(a1 + 40) = 8;
LABEL_12:
  for ( j = 0; j != 8; ++j )
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + j * 4) = dword_28620[j];
  *(_DWORD *)(a1 + 4) = 16;
  return 1;
}

