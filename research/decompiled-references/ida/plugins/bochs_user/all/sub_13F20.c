__int64 __fastcall sub_13F20(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // r9d
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // r10d
  int v12; // eax
  __int64 v13; // rdx

  v3 = *(_QWORD *)(a1 + 1072);
  if ( !v3 )
    return (unsigned int)-1;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 104LL))(v3);
  v5 = getinf() & 6;
  if ( !v5 )
  {
    v6 = *a2;
    v7 = *a2 + 80 * a2[1];
    if ( v7 != *a2 )
    {
      v8 = 16;
      goto LABEL_5;
    }
    return v4;
  }
  if ( v5 != 2 )
    return v4;
  v6 = *a2;
  v8 = 32;
  v7 = *a2 + 80 * a2[1];
  if ( *a2 == v7 )
    return v4;
LABEL_5:
  v9 = (unsigned int)v8;
  do
  {
    v10 = *(unsigned __int8 *)(v6 + 72);
    v11 = 1 << (v10 + 4);
    if ( v11 > (int)v9 )
    {
      if ( (_BYTE)v10 == 2 )
        goto LABEL_20;
      v9 = (unsigned int)v11;
    }
    v6 += 80;
  }
  while ( v6 != v7 );
  if ( (int)v9 <= v8 )
    return v4;
  if ( (_DWORD)v9 == 32 )
  {
    setinf_flag();
    setinf_flag();
    v12 = 4;
    if ( !*(_BYTE *)(a1 + 36) )
    {
LABEL_15:
      *(_DWORD *)(a1 + 276) = v12;
      return v4;
    }
    v13 = *(_QWORD *)(a1 + 8);
    v12 = 4;
LABEL_14:
    *(_QWORD *)(a1 + 24) = v13;
    *(_DWORD *)(a1 + 32) = v12;
    goto LABEL_15;
  }
  if ( (_DWORD)v9 == 64 )
  {
LABEL_20:
    setinf_flag();
    v12 = 8;
    if ( !*(_BYTE *)(a1 + 36) )
      goto LABEL_15;
    v13 = *(_QWORD *)(a1 + 16);
    v12 = 8;
    goto LABEL_14;
  }
  sub_12C80(v7, v9, v10, (unsigned int)(v10 + 4), 1);
  return sub_14090();
}

