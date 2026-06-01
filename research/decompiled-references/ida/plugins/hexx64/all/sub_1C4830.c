__int64 __fastcall sub_1C4830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int64 *v10; // r13
  __int64 v11; // r12
  __int64 v12; // r14
  __int16 v13; // dx
  __int16 v14; // cx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-48h]
  __int16 v27; // [rsp+8h] [rbp-40h]

  v5 = a4;
  v26 = a3;
  v27 = a5;
  if ( *(_DWORD *)a2 == 1 && *(_DWORD *)a4 == 1 )
  {
    a3 = *(_QWORD *)(a4 + 8);
    result = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(a1 + 145) )
    {
      a4 = a3 + a5;
      if ( a3 + a5 == result )
      {
        *(_QWORD *)(a2 + 8) = a3;
        return result;
      }
    }
    else
    {
      a4 = v26;
      result += v26;
      if ( result == a3 )
        return result;
    }
  }
  v7 = qalloc_or_throw(24, a2, a3, a4);
  *(_QWORD *)v7 = 0;
  v8 = (__int64 *)v7;
  *(_OWORD *)(v7 + 8) = 0;
  if ( *(_DWORD *)a2 == 2 )
  {
    v9 = *(_QWORD **)(a2 + 8);
    *v8 = *v9;
    v8[1] = v9[1];
    v8[2] = v9[2];
    *v9 = 0;
    *(_OWORD *)(v9 + 1) = 0;
    if ( *(_DWORD *)v5 == 2 )
      goto LABEL_5;
LABEL_11:
    v21 = v8[1];
    v22 = *v8;
    if ( v8[2] < (unsigned __int64)(v21 + 1) )
    {
      v25 = qvector_reserve((__int64)v8, v22, v21 + 1, 24);
      v21 = v8[1];
      *v8 = v25;
      v22 = v25;
    }
    v23 = v22 + 24 * v21;
    *(_DWORD *)(v23 + 16) = 0xFFFF;
    *(_QWORD *)v23 = 0;
    *(_QWORD *)(v23 + 8) = 0;
    ++v8[1];
    *(_WORD *)(v23 + 16) = v26;
    *(_WORD *)(v23 + 18) = v27;
    copy_argloc();
    goto LABEL_14;
  }
  v18 = qvector_reserve(v7, 0, 1, 24);
  v19 = v8[1];
  *v8 = v18;
  v20 = v18 + 24 * v19;
  *(_DWORD *)(v20 + 16) = 0xFFFF;
  *(_QWORD *)v20 = 0;
  *(_QWORD *)(v20 + 8) = 0;
  ++v8[1];
  *(_WORD *)(v20 + 16) = 0;
  *(_WORD *)(v20 + 18) = v26;
  copy_argloc();
  if ( *(_DWORD *)v5 != 2 )
    goto LABEL_11;
LABEL_5:
  v10 = *(__int64 **)(v5 + 8);
  v11 = *v10;
  if ( 24 * v10[1] )
  {
    do
    {
      v15 = v8[1];
      v16 = *v8;
      if ( v8[2] < (unsigned __int64)(v15 + 1) )
      {
        v17 = qvector_reserve((__int64)v8, v16, v15 + 1, 24);
        v15 = v8[1];
        *v8 = v17;
        v16 = v17;
      }
      v12 = v16 + 24 * v15;
      v11 += 24;
      *(_QWORD *)v12 = 0;
      *(_DWORD *)(v12 + 16) = 0xFFFF;
      *(_QWORD *)(v12 + 8) = 0;
      ++v8[1];
      copy_argloc();
      v13 = *(_WORD *)(v11 - 8);
      *(_WORD *)(v12 + 16) = v13;
      v14 = *(_WORD *)(v11 - 6);
      *(_WORD *)(v12 + 16) = v26 + v13;
      *(_WORD *)(v12 + 18) = v14;
    }
    while ( v11 != *v10 + 24 * v10[1] );
  }
LABEL_14:
  cleanup_argloc();
  if ( v8 )
  {
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v8;
  }
  result = optimize_argloc();
  if ( !(_BYTE)result )
  {
    if ( !under_debugger )
      sub_383060(0xC929u, 0.0);
    BUG();
  }
  return result;
}

