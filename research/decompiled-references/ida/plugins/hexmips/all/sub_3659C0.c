__int64 __fastcall sub_3659C0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rdi
  _DWORD *v9; // rax
  int v10; // esi
  __int64 v11; // rdx
  unsigned int *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx

  if ( *(_BYTE *)a2 != 9 )
    return 0;
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_DWORD **)v7;
  v10 = *(_DWORD *)(v8 + 16);
  v11 = *(_QWORD *)v7 + 4LL * *(_QWORD *)(v7 + 8);
  if ( v9 == (_DWORD *)v11 )
    return 0;
  while ( v10 != *v9 )
  {
    if ( (_DWORD *)v11 == ++v9 )
      return 0;
  }
  if ( (_DWORD *)v11 == v9 )
    return 0;
  if ( !v10 && (*(_QWORD *)(v8 + 8) || a4) )
    return 1;
  v12 = *(unsigned int **)(a1 + 32);
  if ( (v12[1] & 0x10) != 0 )
  {
    if ( (unsigned int *)a2 == v12 + 8 )
    {
      if ( sub_11E3C0((__int64)v12) )
        return 1;
      v12 = *(unsigned int **)(a1 + 32);
    }
    if ( (unsigned int *)a2 == v12 + 12 )
    {
      if ( sub_11E3E0((__int64)v12) )
        return 1;
      v12 = *(unsigned int **)(a1 + 32);
    }
    if ( (unsigned int *)a2 != v12 + 16 )
      goto LABEL_15;
    if ( !sub_11E400(v12) )
    {
      v12 = *(unsigned int **)(a1 + 32);
      goto LABEL_15;
    }
    return 1;
  }
LABEL_15:
  v13 = *v12;
  if ( (unsigned int)v13 <= 0x34 )
  {
    v14 = 0x1FE3FC5FFFC3A0LL;
    if ( _bittest64(&v14, v13) )
      return 1;
  }
  return 0;
}

