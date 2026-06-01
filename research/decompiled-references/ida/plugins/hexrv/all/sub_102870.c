__int64 __fastcall sub_102870(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 *v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 *v10; // rbp
  __int64 i; // rax
  unsigned __int64 *v12; // rsi
  char *v13; // r12
  __int64 (__fastcall **v14)(__int64, unsigned __int64); // rax
  __int64 result; // rax
  unsigned __int8 v16; // r12
  int *v17; // rbp
  unsigned __int64 *v18; // r13
  _QWORD *j; // r8
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-50h]
  _QWORD *v24; // [rsp+18h] [rbp-40h]

  v7 = *(unsigned __int64 **)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 8 * v8;
  v10 = v7;
  for ( i = (8 * v8) >> 3; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v12 = &v10[i >> 1];
      if ( *v12 >= a2 )
        break;
      v10 = v12 + 1;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  if ( &v7[v8] != v10 && a2 == *v10 )
    return 0;
  v13 = (char *)((char *)v10 - (char *)v7);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v8 + 1) )
  {
    v21 = qvector_reserve();
    *(_QWORD *)(a1 + 8) = v21;
    v10 = (unsigned __int64 *)&v13[v21];
    v9 = 8LL * *(_QWORD *)(a1 + 16);
  }
  memmove(v10 + 1, v10, v9 - (_QWORD)v13);
  *v10 = a2;
  v14 = *(__int64 (__fastcall ***)(__int64, unsigned __int64))a1;
  ++*(_QWORD *)(a1 + 16);
  result = (*v14)(a1, a2);
  if ( !(_DWORD)result )
  {
    v16 = *(_BYTE *)(a2 + 32);
    v17 = *(int **)a2;
    v22 = *(_QWORD *)(a2 + 24) + *(int *)(a2 + 40);
    if ( 4LL * *(_QWORD *)(a2 + 8) )
    {
      do
      {
        v18 = (unsigned __int64 *)(*a4 + 24LL * *v17);
        for ( j = sub_FFCE0(v18, a2); j != (_QWORD *)*v18; j = sub_102800(v24) )
        {
          v20 = *((_BYTE *)j + 56);
          if ( v20 >= v16 && (v16 < v20 || v22 <= j[6]) )
            break;
          v24 = j;
          result = sub_102870(a1, j + 3, a4, a3);
          if ( (_DWORD)result )
            return result;
        }
        ++v17;
      }
      while ( v17 != (int *)(*(_QWORD *)a2 + 4LL * *(_QWORD *)(a2 + 8)) );
    }
    return 0;
  }
  return result;
}

