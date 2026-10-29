__int64 __fastcall sub_112690(__int64 a1, _BYTE *a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rbx
  int v7; // eax
  size_t v9; // r13
  const void *v10; // rsi
  unsigned int v11; // r12d
  _BYTE *v13; // rax
  int v14; // ebx

  v5 = a4;
  v7 = *(_DWORD *)(a3 + 36) - a4;
  if ( v7 <= 0 )
  {
    if ( a5 > 0 )
    {
      if ( *a2 )
      {
        v14 = 0;
LABEL_16:
        v11 = sub_10D290(*(_QWORD *)(a1 + 112), (__int64)a2);
        if ( !v11 )
          memset(&a2[v14], 0, a5 - v14);
        return v11;
      }
      v13 = a2 + 1;
      v14 = 0;
      while ( a5 != ++v14 )
      {
        if ( *v13++ )
          goto LABEL_16;
      }
    }
    return 0;
  }
  if ( v7 < a5 )
  {
    v9 = v7;
    v11 = sub_112690(a1, &a2[v7], a3, *(unsigned int *)(a3 + 36), (unsigned int)(a5 - v7));
    if ( v11 )
      return v11;
  }
  else
  {
    v9 = a5;
  }
  v10 = (const void *)(v5 + *(_QWORD *)(a3 + 16));
  if ( !memcmp(a2, v10, v9) )
    return 0;
  v11 = sub_10D290(*(_QWORD *)(a1 + 112), (__int64)v10);
  if ( !v11 )
    memmove(a2, (const void *)(v5 + *(_QWORD *)(a3 + 16)), v9);
  return v11;
}
