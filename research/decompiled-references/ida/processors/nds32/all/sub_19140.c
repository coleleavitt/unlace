void __fastcall sub_19140(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int16 v6; // r15
  int v7; // ebp
  int i; // r12d
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v5 = *(_QWORD *)(a2 + 168);
  v6 = *(_WORD *)(a2 + 46);
  v7 = *(unsigned __int16 *)(a2 + 126);
  if ( (v5 & 8) != 0 )
  {
    v25 = a1[3];
    v26 = *(_QWORD *)(a2 + 16);
    v4 = a3 - 4;
    v27 = a1[2];
    v28 = v25 + 1;
    if ( a1[4] < (unsigned __int64)(v25 + 1) )
    {
      v33 = v26;
      v31 = qvector_reserve(a1 + 2, v27, v28, 32);
      v26 = v33;
      a1[2] = v31;
      v27 = v31;
      v25 = a1[3];
      v28 = v25 + 1;
    }
    a1[3] = v28;
    v29 = 32 * v25 + v27;
    *(_QWORD *)v29 = v26;
    *(_QWORD *)(v29 + 8) = v4;
    *(_QWORD *)(v29 + 16) = 4;
    *(_DWORD *)(v29 + 24) = 28;
  }
  if ( (v5 & 4) != 0 )
  {
    v20 = a1[3];
    v21 = *(_QWORD *)(a2 + 16);
    v4 -= 4;
    v22 = a1[2];
    v23 = v20 + 1;
    if ( a1[4] < (unsigned __int64)(v20 + 1) )
    {
      v34 = *(_QWORD *)(a2 + 16);
      v32 = qvector_reserve(a1 + 2, v22, v23, 32);
      v21 = v34;
      a1[2] = v32;
      v22 = v32;
      v20 = a1[3];
      v23 = v20 + 1;
    }
    a1[3] = v23;
    v24 = 32 * v20 + v22;
    *(_QWORD *)v24 = v21;
    *(_QWORD *)(v24 + 8) = v4;
    *(_QWORD *)(v24 + 16) = 4;
    *(_DWORD *)(v24 + 24) = 29;
  }
  if ( (v5 & 2) != 0 )
  {
    v15 = a1[3];
    v16 = *(_QWORD *)(a2 + 16);
    v4 -= 4;
    v17 = a1[2];
    v18 = v15 + 1;
    if ( a1[4] < (unsigned __int64)(v15 + 1) )
    {
      v30 = qvector_reserve(a1 + 2, v17, v18, 32);
      a1[2] = v30;
      v17 = v30;
      v15 = a1[3];
      v18 = v15 + 1;
    }
    a1[3] = v18;
    v19 = 32 * v15 + v17;
    *(_QWORD *)v19 = v16;
    *(_QWORD *)(v19 + 8) = v4;
    *(_QWORD *)(v19 + 16) = 4;
    *(_DWORD *)(v19 + 24) = 30;
  }
  if ( v6 != 31 || (_WORD)v7 != 31 )
  {
    for ( i = v6; v7 >= i; *(_QWORD *)(v9 + 16) = 4 )
    {
      v10 = a1[3];
      v11 = *(_QWORD *)(a2 + 16);
      v4 -= 4;
      v12 = a1[2];
      v13 = v10 + 1;
      if ( a1[4] < (unsigned __int64)(v10 + 1) )
      {
        v14 = qvector_reserve(a1 + 2, v12, v13, 32);
        a1[2] = v14;
        v12 = v14;
        v10 = a1[3];
        v13 = v10 + 1;
      }
      a1[3] = v13;
      v9 = 32 * v10 + v12;
      *(_DWORD *)(v9 + 24) = v7--;
      *(_QWORD *)v9 = v11;
      *(_QWORD *)(v9 + 8) = v4;
    }
  }
}

