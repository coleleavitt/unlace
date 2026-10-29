__int64 __fastcall sub_C8320(__int64 a1, const char *a2, int a3)
{
  __int64 result; // rax
  size_t v4; // r13
  int v5; // ebx
  __int64 v6; // rbp
  int v7; // [rsp+Ch] [rbp-3Ch]

  result = 0;
  if ( a1 )
  {
    v4 = a3;
    v5 = 2;
    v7 = *(_DWORD *)(a1 + 4);
    while ( 1 )
    {
      v6 = 4LL * v5 + 8;
      if ( !strncmp((const char *)(a1 + v6), a2, v4) && !*(_BYTE *)(a1 + v6 + v4) )
        break;
      v5 += *(_DWORD *)(a1 + v6 - 4);
      if ( v7 <= v5 )
        return 0;
    }
    return *(unsigned int *)(a1 + 4LL * v5);
  }
  return result;
}
