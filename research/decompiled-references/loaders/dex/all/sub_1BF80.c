unsigned __int64 __fastcall sub_1BF80(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int *v9; // rsi
  unsigned __int64 v10; // rax

  v8 = a1[5];
  if ( a2 >= *(_DWORD *)(v8 + 56) )
    return 0;
  v9 = (unsigned int *)(a1[6] + 4LL * a2);
  v10 = a1[4];
  if ( (unsigned __int64)v9 < v10 || (unsigned __int64)(v9 + 1) > *(unsigned int *)(v8 + 32) + v10 || !v9 )
    return 0;
  v2 = *v9;
  v3 = a1[4];
  v4 = 0;
  v5 = v3 + v2;
  if ( !__CFADD__(v3, v2) )
  {
    v6 = v5 + 1;
    v7 = v3 + *(unsigned int *)(a1[5] + 32LL);
    if ( v7 >= v5 + 1 )
    {
      while ( *(char *)(v6 - 1) < 0 && v6 < v7 )
        v5 = v6++;
      v4 = 0;
      if ( v6 >= v3 && v7 >= v5 + 2 )
        return v6;
    }
  }
  return v4;
}
