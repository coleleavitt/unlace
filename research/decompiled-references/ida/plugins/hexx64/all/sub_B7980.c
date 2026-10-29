__int64 __fastcall sub_B7980(__int64 a1)
{
  unsigned int *v2; // rdx
  __int64 v3; // rdi
  __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rdi
  int *v8; // rax
  int v9; // edx
  _DWORD *v10; // rdi
  unsigned int *v11; // rdx

  v2 = *(unsigned int **)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 40);
  if ( (signed int)v2[17] > *(_DWORD *)(v3 + 68) )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
  v6 = sub_125B90((unsigned __int8 *)v3, v5, v2, 9u);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    v8 = *(int **)(a1 + 32);
    v9 = 10;
    if ( v8[17] == *(_DWORD *)(v7 + 68) )
      v9 = 4;
    *v8 = v9;
    sub_125180(*(_QWORD *)(a1 + 32) + 32LL, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 64LL));
    sub_11CDA0(*(_QWORD *)(a1 + 32) + 48LL);
    v10 = *(_DWORD **)(a1 + 32);
    if ( *v10 == 10 )
      sub_12D880((__int64)v10, v5, 0, 0, nullptr);
  }
  else
  {
    if ( *(_DWORD *)v7 != 13 )
      return 0;
    v11 = *(unsigned int **)(a1 + 32);
    if ( *v11 - 43 > 1 || !sub_125B90((unsigned __int8 *)v7, v5, v11, 2u) )
      return 0;
    sub_125180(*(_QWORD *)(a1 + 32) + 32LL, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 64LL));
    sub_11CDA0(*(_QWORD *)(a1 + 32) + 48LL);
    sub_120A10(*(_QWORD *)(a1 + 32) + 48LL, v5, 0, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL), -1, 0);
  }
  ++*(_DWORD *)(a1 + 48);
  return 0;
}

