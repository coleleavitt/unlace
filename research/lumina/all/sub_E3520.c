__int64 __fastcall sub_E3520(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rsi

  if ( !a3 )
  {
    v11 = 0;
    v14 = sub_D1F90(a1 + 536, a2, 0);
    if ( !v14 )
      return 0;
LABEL_7:
    v15 = *(_QWORD *)(v14 + 40);
    if ( v15 )
    {
      *(_DWORD *)(v15 + 48) |= 0x4000u;
      sub_D8230(a1, (_QWORD *)v15);
      *(_QWORD *)(v14 + 40) = 0;
    }
    if ( (*(_DWORD *)(v14 + 16))-- == 1 )
      sub_D0090(a1, (_QWORD *)v14);
    return v11;
  }
  if ( a2 )
  {
    v8 = strlen((const char *)a2) & 0x3FFFFFFF;
    v9 = v8 + 49LL;
  }
  else
  {
    v9 = 49;
    v8 = 0;
  }
  v10 = sub_D1E10(v9, (__int64)a2);
  v11 = v10;
  if ( !v10 )
  {
    if ( *(_BYTE *)(a1 + 103) || *(_BYTE *)(a1 + 104) )
      return 0;
    sub_DBE60(a1);
    return v11;
  }
  v12 = (unsigned __int8 *)memcpy((void *)(v10 + 48), a2, v8 + 1);
  *(_QWORD *)(v11 + 8) = v12;
  *(_QWORD *)v11 = a3;
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 40) = 0;
  *(_DWORD *)(v11 + 16) = 1;
  *(_QWORD *)(v11 + 32) = a5;
  v13 = sub_D1F90(a1 + 536, v12, v11);
  v14 = v13;
  if ( !v13 )
    return v11;
  if ( v11 != v13 )
    goto LABEL_7;
  if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
    sub_DBE60(a1);
  v11 = 0;
  sub_C9250(a1, (_QWORD *)v14);
  return v11;
}
