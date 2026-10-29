__int64 __fastcall sub_26CC70(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // r8d
  _DWORD *v25; // rcx
  _DWORD *v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // [rsp+4h] [rbp-3Ch]
  __int64 v31; // [rsp+8h] [rbp-38h]

  v31 = a5;
  if ( a5 <= 0 || (v6 = a4) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCD04u, a6);
    BUG();
  }
  v9 = a4 / a5;
  if ( !(a4 % a5) )
  {
    v12 = a4 / a5;
    v13 = 1 % v9;
    if ( 1 % v9 )
      return sub_26A690(a2, *(_QWORD *)(a1[1] + 64), (__int64)a3, v12, a6);
LABEL_9:
    if ( (unsigned __int64)(v12 + 1) > 2 )
      v12 = v13;
    return sub_26A690(a2, *(_QWORD *)(a1[1] + 64), (__int64)a3, v12, a6);
  }
  v10 = a5 / a4;
  v11 = a5 % a4;
  v12 = a5 / a4;
  if ( !v11 )
  {
    v31 = v10;
    v13 = 1 % v12;
    v6 = 1 % v12;
    if ( !(1 % v12) )
      goto LABEL_9;
  }
  v14 = (_QWORD *)a1[1];
  if ( *(_DWORD *)(a2 + 8) == 65 )
  {
    v22 = v14[10];
    v23 = v14[11];
    v24 = *(_DWORD *)(a2 + 32);
    v25 = (_DWORD *)(v22 + 4 * v23);
    if ( (_DWORD *)v22 == v25 )
      goto LABEL_17;
    v26 = (_DWORD *)v14[10];
    while ( v24 != *v26 )
    {
      if ( v25 == ++v26 )
        goto LABEL_17;
    }
    if ( v25 == v26 )
    {
LABEL_17:
      v27 = v23 + 1;
      if ( v14[12] < v27 )
      {
        v30 = *(_DWORD *)(a2 + 32);
        v28 = qvector_reserve((__int64)(v14 + 10), v22, v27, 4);
        v29 = v14[11];
        v24 = v30;
        v14[10] = v28;
        v25 = (_DWORD *)(v28 + 4 * v29);
      }
      *v25 = v24;
      ++v14[11];
      v14 = (_QWORD *)a1[1];
    }
  }
  v15 = v14[8];
  v16 = sub_26A690(a2, v15, (__int64)a3, v6, a6);
  v19 = j__qalloc_or_throw(64, v15, v17, v18);
  v20 = sub_240F50(*a1, v31, 0, -1, 0, 2, 0);
  *(_QWORD *)v19 = -1;
  *(_QWORD *)(v19 + 24) = v16;
  *(_DWORD *)(v19 + 8) = 39;
  *(_QWORD *)(v19 + 12) = -1;
  *(_QWORD *)(v19 + 32) = v20;
  *(_QWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 48) = 0;
  *(_DWORD *)(v19 + 56) = 0;
  *(_QWORD *)v19 = *a3;
  sub_2441C0(v19, *(_QWORD *)(*a1 + 112), 0, a6);
  *(_DWORD *)(v19 + 56) |= 1u;
  return v19;
}

