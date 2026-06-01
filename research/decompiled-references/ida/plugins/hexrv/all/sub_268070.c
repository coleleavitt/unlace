__int64 __fastcall sub_268070(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  _DWORD *v18; // rsi
  __int64 v19; // rdx
  int v20; // r8d
  _DWORD *v21; // rcx
  _DWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // [rsp+4h] [rbp-3Ch]
  __int64 v26; // [rsp+8h] [rbp-38h]

  v26 = a5;
  if ( a5 <= 0 || (v5 = a4) == 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(52484);
    BUG();
  }
  v8 = a4 / a5;
  if ( !(a4 % a5) )
  {
    v11 = a4 / a5;
    v12 = 1 % v8;
    if ( 1 % v8 )
      return sub_265A90(a2, *(_QWORD *)(a1[1] + 64), (__int64)a3, v11);
LABEL_9:
    if ( (unsigned __int64)(v11 + 1) > 2 )
      v11 = v12;
    return sub_265A90(a2, *(_QWORD *)(a1[1] + 64), (__int64)a3, v11);
  }
  v9 = a5 / a4;
  v10 = a5 % a4;
  v11 = a5 / a4;
  if ( !v10 )
  {
    v26 = v9;
    v12 = 1 % v11;
    v5 = 1 % v11;
    if ( !(1 % v11) )
      goto LABEL_9;
  }
  v13 = (__int64 *)a1[1];
  if ( *(_DWORD *)(a2 + 8) == 65 )
  {
    v18 = (_DWORD *)v13[10];
    v19 = v13[11];
    v20 = *(_DWORD *)(a2 + 32);
    v21 = &v18[v19];
    if ( v18 == v21 )
      goto LABEL_17;
    v22 = (_DWORD *)v13[10];
    while ( v20 != *v22 )
    {
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
    if ( v21 == v22 )
    {
LABEL_17:
      if ( v13[12] < (unsigned __int64)(v19 + 1) )
      {
        v25 = *(_DWORD *)(a2 + 32);
        v23 = qvector_reserve();
        v24 = v13[11];
        v20 = v25;
        v13[10] = v23;
        v21 = (_DWORD *)(v23 + 4 * v24);
      }
      *v21 = v20;
      ++v13[11];
      v13 = (__int64 *)a1[1];
    }
  }
  v14 = sub_265A90(a2, v13[8], (__int64)a3, v5);
  v15 = j__qalloc_or_throw();
  v16 = sub_23C350(*a1, v26, 0, -1, 0, 2u, 0);
  *(_QWORD *)v15 = -1;
  *(_QWORD *)(v15 + 24) = v14;
  *(_DWORD *)(v15 + 8) = 39;
  *(_QWORD *)(v15 + 12) = -1;
  *(_QWORD *)(v15 + 32) = v16;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  *(_QWORD *)v15 = *a3;
  sub_23F5C0(v15, *(_QWORD *)(*a1 + 112), 0);
  *(_DWORD *)(v15 + 56) |= 1u;
  return v15;
}

