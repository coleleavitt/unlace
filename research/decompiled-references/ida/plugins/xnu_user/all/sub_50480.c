__int64 __fastcall sub_50480(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // rdi
  _QWORD *v6; // rdx
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // r10
  bool v12; // bl
  _QWORD *v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  _QWORD *v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rax
  int v22; // esi
  int v23; // eax

  v2 = -1;
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    return -1;
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(_QWORD **)(a1 + 1648);
  if ( v4 == -1 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120) )
    {
      if ( !v6 )
        return -1;
      v11 = (_QWORD *)(a1 + 1640);
      v12 = 0;
    }
    else
    {
      v11 = (_QWORD *)(a1 + 1640);
      v12 = *(_QWORD *)(a1 + 936) > 0LL;
      if ( !v6 )
        return -1;
    }
  }
  else
  {
    if ( !v6 )
      return v2;
    v7 = (_QWORD *)(a1 + 1640);
    v8 = *(_QWORD **)(a1 + 1648);
    do
    {
      while ( 1 )
      {
        v9 = v8[2];
        v10 = v8[3];
        if ( v8[4] < v4 )
          break;
        v7 = v8;
        v8 = (_QWORD *)v8[2];
        if ( !v9 )
          goto LABEL_8;
      }
      v8 = (_QWORD *)v8[3];
    }
    while ( v10 );
LABEL_8:
    if ( (_QWORD *)(a1 + 1640) != v7
      && v4 >= v7[4]
      && *(_DWORD *)(a2 + 24) == 5
      && (unsigned int)(*((_DWORD *)v7 + 16) - 1) <= 3 )
    {
      return *(_QWORD *)(a2 + 8);
    }
    v2 = *(_QWORD *)(a2 + 8);
    v11 = (_QWORD *)(a1 + 1640);
    if ( *(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120) )
      v12 = 0;
    else
      v12 = *(_QWORD *)(a1 + 936) > 0LL;
  }
  v13 = v11;
  v14 = v6;
  do
  {
    while ( 1 )
    {
      v15 = v14[2];
      v16 = v14[3];
      if ( v14[4] < v2 )
        break;
      v13 = v14;
      v14 = (_QWORD *)v14[2];
      if ( !v15 )
        goto LABEL_16;
    }
    v14 = (_QWORD *)v14[3];
  }
  while ( v16 );
LABEL_16:
  if ( v11 == v13 || v2 < v13[4] )
  {
    if ( v12 )
      goto LABEL_19;
    return -1;
  }
  v22 = *((_DWORD *)v13 + 16);
  v23 = *(_DWORD *)(a2 + 24);
  if ( v12 )
  {
    if ( v22 != 999 && v23 == 5 )
      return v2;
LABEL_19:
    v17 = v2 - 1;
    v18 = v11;
    do
    {
      while ( 1 )
      {
        v19 = v6[2];
        v20 = v6[3];
        if ( v6[4] < v17 )
          break;
        v18 = v6;
        v6 = (_QWORD *)v6[2];
        if ( !v19 )
          goto LABEL_23;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v20 );
LABEL_23:
    if ( v18 != v11 && v17 >= v18[4] && (unsigned int)(*(_DWORD *)(a2 + 24) - 4) <= 1 )
      return (v2 & -(__int64)((*((_DWORD *)v18 + 16) == 0) | (unsigned __int8)(*((_DWORD *)v18 + 16) == 999))) - 1;
    return -1;
  }
  if ( v23 == 5 )
    return v2;
  if ( v22 != 999 || v23 != 4 )
    return -1;
  return v2;
}

