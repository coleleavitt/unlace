int __fastcall sub_C7D20(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  unsigned __int16 v3; // ax
  size_t v4; // rbx
  int v5; // ebp
  _BYTE *v6; // rdx
  int result; // eax
  _BYTE *v8; // rax
  __int64 v9; // rdx
  const void *v10; // rsi
  const void *v11; // rdi
  size_t v12; // rdx
  int v13; // ebx
  _BYTE *v14; // rax
  _BYTE *v15; // rax
  _BYTE *v16; // rdx

  v2 = *(_WORD *)(a1 + 20);
  v3 = *(_WORD *)(a2 + 20);
  v4 = *(int *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 16);
  if ( ((v3 | v2) & 0x400) != 0 )
  {
    if ( (v2 & v3 & 0x400) != 0 )
      return *(_DWORD *)a1 - *(_DWORD *)a2;
    if ( (v2 & 0x400) == 0 )
    {
      v14 = *(_BYTE **)(a1 + 8);
      if ( (int)v4 > 0 )
      {
        if ( *v14 )
          return 1;
        v15 = v14 + 1;
        v16 = &v15[(unsigned int)(v4 - 1)];
        while ( v15 != v16 )
        {
          if ( *v15++ )
            return 1;
        }
      }
      return v4 - *(_DWORD *)a2;
    }
    v6 = *(_BYTE **)(a2 + 8);
    if ( v5 <= 0 )
      return *(_DWORD *)a1 - v5;
    result = -1;
    if ( !*v6 )
    {
      v8 = v6 + 1;
      v9 = (__int64)&v6[v5 - 1 + 1];
      while ( (_BYTE *)v9 != v8 )
      {
        if ( *v8++ )
          return -1;
      }
      return *(_DWORD *)a1 - v5;
    }
  }
  else
  {
    v10 = *(const void **)(a2 + 8);
    v11 = *(const void **)(a1 + 8);
    v12 = v5;
    if ( (int)v4 <= v5 )
      v12 = v4;
    v13 = v4 - v5;
    result = memcmp(v11, v10, v12);
    if ( !result )
      return v13;
  }
  return result;
}
