__int64 __fastcall sub_17E30(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rbx
  int v4; // r12d
  unsigned __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r12d
  __int64 v16; // r15
  __int64 result; // rax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 i; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  struct _Unwind_Exception *v24; // rbp
  __int64 v25; // [rsp+8h] [rbp-40h]
  __int16 v26; // [rsp+8h] [rbp-40h]

  if ( (unsigned __int64)(*((_QWORD *)a1 + 1) + 1LL) > 8 )
    goto LABEL_28;
  v4 = a3;
  v5 = LOBYTE((&off_34160)[2 * *a1 + 1]);
  if ( v5 >= a3 || 2 * v5 < a3 )
  {
    if ( under_debugger )
      goto LABEL_31;
    interr(10484);
LABEL_28:
    if ( !under_debugger )
    {
      interr(10483);
      goto LABEL_30;
    }
LABEL_31:
    BUG();
  }
  v7 = qalloc_or_throw(24);
  *(_OWORD *)(v7 + 8) = 0;
  v3 = (__int64 *)v7;
  *(_QWORD *)v7 = 0;
  v8 = qvector_reserve(v7, 0, 1, 24);
  v9 = v3[1];
  *v3 = v8;
  v10 = v8 + 24 * v9;
  *(_DWORD *)(v10 + 16) = 0xFFFF;
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v10 + 8) = 0;
  ++v3[1];
  *(_WORD *)(v10 + 16) = 0;
  *(_WORD *)(v10 + 18) = LOBYTE((&off_34160)[2 * *a1 + 1]);
  v11 = *((_QWORD *)a1 + 1);
  if ( (unsigned __int64)(v11 + 1) > 8 )
  {
LABEL_30:
    v24 = (struct _Unwind_Exception *)sub_15370();
    if ( v3 )
      sub_AAC2(v3);
    _Unwind_Resume(v24);
  }
  *((_QWORD *)a1 + 1) = v11 + 1;
  if ( v10 )
  {
    *(_DWORD *)v10 = 3;
    *(_DWORD *)(v10 + 8) = v11 + 10;
  }
  v12 = v3[1];
  v13 = *v3;
  v14 = *(unsigned __int16 *)(v10 + 18);
  v15 = v4 - v14;
  if ( v3[2] < (unsigned __int64)(v12 + 1) )
  {
    v26 = *(_WORD *)(v10 + 18);
    v23 = qvector_reserve(v3, v13, v12 + 1, 24);
    v12 = v3[1];
    LOWORD(v14) = v26;
    *v3 = v23;
    v13 = v23;
  }
  v16 = v13 + 24 * v12;
  *(_DWORD *)(v16 + 16) = 0xFFFF;
  *(_QWORD *)v16 = 0;
  *(_QWORD *)(v16 + 8) = 0;
  ++v3[1];
  *(_DWORD *)(v16 + 16) = (unsigned __int16)v14 | (v15 << 16);
  result = *((_QWORD *)a1 + 1);
  if ( (unsigned __int64)(result + 1) > 8 )
  {
    if ( v16 )
    {
      v25 = *((_QWORD *)a1 + 3);
      cleanup_argloc(v16);
      *(_DWORD *)v16 = 1;
      *(_QWORD *)(v16 + 8) = v25;
    }
    v18 = LOBYTE((&off_34160)[2 * *a1 + 1]);
    result = (v15 + *((_QWORD *)a1 + 3) + v18 - 1) & -v18;
    *((_QWORD *)a1 + 3) = result;
LABEL_13:
    if ( a2 )
      goto LABEL_14;
    goto LABEL_19;
  }
  *((_QWORD *)a1 + 1) = result + 1;
  if ( !v16 )
    goto LABEL_13;
  result = (unsigned int)(result + 10);
  *(_DWORD *)v16 = 3;
  *(_DWORD *)(v16 + 8) = result;
  if ( a2 )
  {
LABEL_14:
    result = cleanup_argloc(a2);
    if ( v3 )
    {
      *(_DWORD *)a2 = 2;
      *(_QWORD *)(a2 + 8) = v3;
    }
    return result;
  }
LABEL_19:
  if ( v3 )
  {
    v19 = *v3;
    if ( *v3 )
    {
      v20 = v3[1];
      if ( v20 )
      {
        for ( i = 0; i != v20; ++i )
        {
          v22 = 3 * i;
          cleanup_argloc(v19 + 8 * v22);
          v19 = *v3;
        }
      }
      v3[1] = 0;
      qfree(v19);
    }
    return qfree(v3);
  }
  return result;
}

