__int64 __fastcall sub_1EBC40(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  void *v12; // rax
  void *v13; // rax
  const void *v14; // rsi
  void *v15; // rax
  const void *v16; // rsi

  v4 = a2;
  v5 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v6 = a2[2];
  *(_QWORD *)a1 = v5;
  if ( v6 )
  {
    v12 = (void *)qalloc_or_throw(8 * v6, (__int64)a2, a3, a4);
    *(_QWORD *)(a1 + 24) = v6;
    a2 = (_QWORD *)a2[1];
    *(_QWORD *)(a1 + 8) = v12;
    memcpy(v12, a2, 8 * v6);
    *(_QWORD *)(a1 + 16) = v6;
  }
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v7 = v4[5];
  if ( v7 )
  {
    v15 = (void *)qalloc_or_throw(8 * v7, (__int64)a2, a3, a4);
    *(_QWORD *)(a1 + 32) = v15;
    v16 = (const void *)v4[4];
    *(_QWORD *)(a1 + 48) = v7;
    memcpy(v15, v16, 8 * v7);
    *(_QWORD *)(a1 + 40) = v7;
  }
  result = sub_64000((__int64 *)(a1 + 56), (__int64)(v4 + 7), 0.0);
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v11 = v4[10];
  if ( v11 )
  {
    v13 = (void *)qalloc_or_throw(16 * v11, (__int64)(v4 + 7), v9, v10);
    *(_QWORD *)(a1 + 88) = v11;
    v14 = (const void *)v4[9];
    *(_QWORD *)(a1 + 72) = v13;
    result = (__int64)memcpy(v13, v14, 16 * v11);
    *(_QWORD *)(a1 + 80) = v11;
  }
  return result;
}

