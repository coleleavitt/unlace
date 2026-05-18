__int64 __fastcall sub_F89E0(unsigned int a1, unsigned int a2, __int64 a3, _BYTE *a4, double a5)
{
  __int64 v7; // r12
  char *v8; // rbx
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rsi
  __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  v7 = (__int64)a4;
  v13 = **(_QWORD **)a3;
  if ( *a4 != 44 )
  {
LABEL_4:
    v8 = *(char **)(a3 + 32);
    v9 = 0;
    if ( *(char *)(*(_QWORD *)v13 + 50LL) >= 0 )
      v9 = v13;
    v14 = v9;
    if ( *(int *)(a3 + 20) <= 0 )
      return 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)v8;
      if ( (*(_BYTE *)(*(_QWORD *)v8 + 4LL) & 1) != 0 )
      {
        if ( *(_DWORD *)(v11 + 52) != a1 )
          goto LABEL_9;
      }
      else if ( a2 )
      {
        goto LABEL_9;
      }
      if ( sub_F8920(v14, (char *)v11, v7, a1, a5) && v8[18] >= 0 )
        return 1;
LABEL_9:
      ++v10;
      v8 += 56;
      if ( *(_DWORD *)(a3 + 20) <= v10 )
        return 0;
    }
  }
  while ( (unsigned int)sub_F89E0(a1, a2, a3, *(_QWORD *)(v7 + 16)) )
  {
    v7 = *(_QWORD *)(v7 + 24);
    if ( *(_BYTE *)v7 != 44 )
      goto LABEL_4;
  }
  return 0;
}
