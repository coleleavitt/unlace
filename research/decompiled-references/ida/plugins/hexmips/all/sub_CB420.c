bool __fastcall sub_CB420(int *a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rcx
  __int64 v9; // rsi
  _DWORD *v10; // rdx

  if ( *(_DWORD *)a2 != 2 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 3) <= 1 )
    {
      v2 = *a1;
      if ( *a1 != 2 )
        return (unsigned int)(v2 - 3) < 2;
      goto LABEL_11;
    }
    return 1;
  }
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_DWORD **)v4;
  v6 = *(_QWORD *)v4 + 24LL * *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)v4 == v6 )
    return 1;
  while ( (unsigned int)(*v5 - 3) > 1 )
  {
    v5 += 6;
    if ( (_DWORD *)v6 == v5 )
      return 1;
  }
  v2 = *a1;
  if ( *a1 != 2 )
    return (unsigned int)(v2 - 3) < 2;
LABEL_11:
  v7 = *((_QWORD *)a1 + 1);
  v8 = *(_DWORD **)v7;
  v9 = *(_QWORD *)v7 + 24LL * *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)v7 != v9 )
  {
    v10 = *(_DWORD **)v7;
    while ( (unsigned int)(*v10 - 3) > 1 )
    {
      v10 += 6;
      if ( (_DWORD *)v9 == v10 )
        return 0;
    }
    while ( *v8 != 1 )
    {
      v8 += 6;
      if ( (_DWORD *)v9 == v8 )
        return 1;
    }
  }
  return 0;
}

