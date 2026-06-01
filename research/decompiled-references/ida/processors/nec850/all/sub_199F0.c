unsigned __int64 __fastcall sub_199F0(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v11; // rax
  __int16 v12; // r14
  unsigned __int64 result; // rax
  __int64 v14; // rax
  __int16 v15; // dx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r15
  unsigned __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 j; // rbp
  __int64 v31; // rax
  struct _Unwind_Exception *v32; // r12

  if ( *a1 + 1 > 4 )
    goto LABEL_34;
  v11 = qalloc_or_throw(24);
  v12 = 0;
  *(_QWORD *)v11 = 0;
  v7 = (__int64 *)v11;
  *(_OWORD *)(v11 + 8) = 0;
  result = *a1 + 1;
  if ( result > 4 )
  {
    if ( a3 )
    {
      v23 = 0;
      v24 = 1;
LABEL_31:
      v23 = qvector_reserve(v7, v23, v24, 24);
      v22 = v7[1];
      *v7 = v23;
LABEL_15:
      v25 = 3 * v22;
      v26 = v23 + 8 * v25;
      *(_DWORD *)(v26 + 16) = 0xFFFF;
      *(_QWORD *)v26 = 0;
      *(_QWORD *)(v26 + 8) = 0;
      ++v7[1];
      *(_WORD *)(v26 + 16) = v12;
      *(_WORD *)(v26 + 18) = a3;
      if ( v26 )
      {
        v27 = a1[1];
        cleanup_argloc(v23 + 8 * v25);
        *(_DWORD *)v26 = 1;
        *(_QWORD *)(v26 + 8) = v27;
      }
      result = (a1[1] + (int)a3 + 3) & 0xFFFFFFFFFFFFFFFCLL;
      a1[1] = result;
    }
    goto LABEL_18;
  }
  do
  {
    if ( !a3 )
      goto LABEL_18;
    v19 = v7[1];
    v20 = *v7;
    if ( v7[2] < (unsigned __int64)(v19 + 1) )
    {
      v21 = qvector_reserve(v7, v20, v19 + 1, 24);
      *v7 = v21;
      v19 = v7[1];
      v20 = v21;
    }
    v14 = 3 * v19;
    v15 = 4;
    v16 = v20 + 8 * v14;
    *(_DWORD *)(v16 + 16) = 0xFFFF;
    *(_QWORD *)v16 = 0;
    *(_QWORD *)(v16 + 8) = 0;
    ++v7[1];
    if ( a3 <= 4 )
      v15 = a3;
    *(_WORD *)(v16 + 16) = v12;
    *(_WORD *)(v16 + 18) = v15;
    v17 = *a1;
    v18 = *a1 + 1;
    if ( v18 > 4 )
    {
      if ( under_debugger )
        goto LABEL_36;
      interr(10518);
LABEL_34:
      if ( !under_debugger )
      {
        v32 = (struct _Unwind_Exception *)interr(10519);
        if ( v7 )
        {
          if ( *v7 )
          {
            v3 = v7[1];
            for ( i = 0; ; ++i )
            {
              v5 = *v7;
              if ( v3 == i )
                break;
              v6 = 24 * i;
              cleanup_argloc(v6 + v5);
            }
            v7[1] = 0;
            qfree(v5);
          }
          qfree(v7);
        }
        _Unwind_Resume(v32);
      }
LABEL_36:
      BUG();
    }
    *a1 = v18;
    if ( v16 )
    {
      *(_DWORD *)v16 = 3;
      *(_DWORD *)(v16 + 8) = v17 + 6;
      v18 = *a1;
    }
    result = *(unsigned __int16 *)(v16 + 18);
    a3 -= result;
    v12 += result;
  }
  while ( v18 + 1 <= 4 );
  if ( a3 )
  {
    v22 = v7[1];
    v23 = *v7;
    v24 = v22 + 1;
    if ( v7[2] >= (unsigned __int64)(v22 + 1) )
      goto LABEL_15;
    goto LABEL_31;
  }
LABEL_18:
  if ( a2 )
  {
    result = cleanup_argloc(a2);
    if ( v7 )
    {
      *(_DWORD *)a2 = 2;
      *(_QWORD *)(a2 + 8) = v7;
    }
  }
  else if ( v7 )
  {
    v28 = *v7;
    if ( *v7 )
    {
      v29 = v7[1];
      if ( v29 )
      {
        for ( j = 0; j != v29; ++j )
        {
          v31 = 3 * j;
          cleanup_argloc(v28 + 8 * v31);
          v28 = *v7;
        }
      }
      v7[1] = 0;
      qfree(v28);
    }
    return qfree(v7);
  }
  return result;
}

