void *__fastcall sub_C6C60(__int64 a1, unsigned __int16 *a2, int a3, __int64 *a4, int *a5, _WORD *a6)
{
  __int64 v6; // rax
  int v7; // r11d
  int v8; // r14d
  int v9; // r10d
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // r13d
  __int64 v14; // rbp

  v6 = 0;
  v7 = 0;
  v8 = *a5;
  v9 = 0;
  v11 = *a4;
  while ( v7 < v8 || v9 < a3 )
  {
    if ( v9 >= a3 )
    {
      v12 = *(unsigned __int16 *)(v11 + 2LL * v7);
      v13 = *(_DWORD *)(a1 + 4 * v12);
      goto LABEL_5;
    }
    v12 = a2[v9];
    v13 = *(_DWORD *)(a1 + 4 * v12);
    if ( v7 < v8 )
    {
      v14 = *(unsigned __int16 *)(v11 + 2LL * v7);
      if ( *(_DWORD *)(a1 + 4 * v14) <= v13 )
      {
        v13 = *(_DWORD *)(a1 + 4 * v14);
        LOWORD(v12) = *(_WORD *)(v11 + 2LL * v7);
LABEL_5:
        ++v7;
        goto LABEL_6;
      }
    }
    ++v9;
LABEL_6:
    a6[v6] = v12;
    if ( v9 < a3 && *(_DWORD *)(a1 + 4LL * a2[v9]) == v13 )
      ++v9;
    v6 = (int)v6 + 1;
  }
  *a4 = (__int64)a2;
  *a5 = v6;
  return memcpy(a2, a6, 2LL * (int)v6);
}
