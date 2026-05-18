__int64 __fastcall sub_D3FB0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // r12
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 result; // rax
  int v15; // r14d
  __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // rax
  int v20; // ebp
  __int64 v21; // rsi
  int v22; // r15d
  size_t v23; // rdx
  const void *v24; // rsi
  __int64 v25; // rax
  int v26; // edi
  _QWORD v27[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = a2;
  v6 = *(_QWORD *)a1;
  v7 = *(int *)(a1 + 56);
  v27[1] = __readfsqword(0x28u);
  v8 = v7;
  v9 = v6 % v7;
  if ( !(v6 % v7) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(a1 + 24);
    v12 = v10;
    v13 = v10 - v6;
    if ( v7 >= v12 - v6 )
      v8 = v13;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 16LL))(v11, *(_QWORD *)(a1 + 48), v8);
    if ( (_DWORD)result )
      return result;
    v8 = *(_DWORD *)(a1 + 56);
  }
  v15 = v8 - v9;
  if ( v15 >= (int)v3 )
  {
    *a3 = *(_QWORD *)(a1 + 48) + v9;
    *(_QWORD *)a1 += v3;
    return 0;
  }
  v16 = *(int *)(a1 + 16);
  v17 = *(void **)(a1 + 32);
  if ( (int)v3 > (int)v16 )
  {
    v18 = 2 * v16;
    if ( v18 < 128 )
      v18 = 128;
    for ( ; v18 < (int)v3; v18 *= 2 )
      ;
    v19 = sub_D2640((__int64)v17, v18);
    v17 = (void *)v19;
    if ( !v19 )
      return 7;
    *(_DWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 32) = v19;
  }
  memcpy(v17, (const void *)(v9 + *(_QWORD *)(a1 + 48)), v15);
  *(_QWORD *)a1 += v15;
  v20 = v3 - v15;
  while ( v20 > 0 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    v22 = v20;
    if ( *(_DWORD *)(a1 + 56) <= v20 )
      v22 = *(_DWORD *)(a1 + 56);
    if ( v21 )
    {
      v23 = v22;
      v24 = (const void *)(*(_QWORD *)a1 + v21);
      v25 = v22 + *(_QWORD *)a1;
      v27[0] = v24;
      *(_QWORD *)a1 = v25;
    }
    else
    {
      result = sub_D3FB0(a1, (unsigned int)v22, v27);
      if ( (_DWORD)result )
        return result;
      v24 = (const void *)v27[0];
      v23 = v22;
    }
    v26 = v3 - v20;
    v20 -= v22;
    memcpy((void *)(*(_QWORD *)(a1 + 32) + v26), v24, v23);
  }
  *a3 = *(_QWORD *)(a1 + 32);
  return 0;
}
