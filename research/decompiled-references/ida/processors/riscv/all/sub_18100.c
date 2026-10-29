__int64 __fastcall sub_18100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // r15
  __int64 v10; // r13
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 i; // rbx
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // rbx

  if ( (unsigned __int64)(*(_QWORD *)(a1 + 16) + 1LL) > 8 || !*(_QWORD *)(a3 + 8) || **(_DWORD **)a3 )
    goto LABEL_30;
  result = qalloc_or_throw(24);
  v6 = 0;
  v7 = 0;
  *(_OWORD *)(result + 8) = 0;
  v3 = (__int64 *)result;
  v8 = 0;
  *(_QWORD *)result = 0;
  v9 = *(_DWORD **)a3;
  v10 = *(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8);
  if ( v10 != *(_QWORD *)a3 )
  {
    while ( 1 )
    {
      if ( v7 < v8 + 1 )
      {
        v15 = qvector_reserve(v3, v6, v8 + 1, 24);
        *v3 = v15;
        v8 = v3[1];
        v6 = v15;
      }
      v14 = v6 + 24 * v8;
      *(_DWORD *)(v14 + 16) = 0xFFFF;
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = 0;
      ++v3[1];
      *(_WORD *)(v14 + 16) = *v9;
      *(_WORD *)(v14 + 18) = get_tinfo_size(0, *((_QWORD *)v9 + 1), 0);
      if ( (get_tinfo_property(*((_QWORD *)v9 + 1), 2) & 0xF) == 9 )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v12 = (_QWORD *)(a1 + 16);
        v13 = v11 + 1;
        if ( (unsigned __int64)(v11 + 1) > 8 )
          goto LABEL_28;
        result = 42;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = (_QWORD *)(a1 + 8);
        v13 = v11 + 1;
        if ( (unsigned __int64)(v11 + 1) > 8 )
        {
LABEL_28:
          if ( !under_debugger )
          {
            interr(10479);
LABEL_30:
            if ( !under_debugger )
            {
              v20 = (struct _Unwind_Exception *)interr(10485);
              if ( v3 )
                sub_AAC2(v3);
              _Unwind_Resume(v20);
            }
          }
          BUG();
        }
        result = 10;
      }
      *v12 = v13;
      if ( v14 )
      {
        result = (unsigned int)(v11 + result);
        *(_DWORD *)v14 = 3;
        *(_DWORD *)(v14 + 8) = result;
      }
      v9 += 4;
      if ( v9 == (_DWORD *)v10 )
        break;
      v8 = v3[1];
      v7 = v3[2];
      v6 = *v3;
    }
  }
  if ( a2 )
  {
    result = cleanup_argloc(a2);
    if ( v3 )
    {
      *(_DWORD *)a2 = 2;
      *(_QWORD *)(a2 + 8) = v3;
    }
  }
  else if ( v3 )
  {
    v16 = *v3;
    if ( *v3 )
    {
      v17 = v3[1];
      if ( v17 )
      {
        for ( i = 0; i != v17; ++i )
        {
          v19 = 3 * i;
          cleanup_argloc(v16 + 8 * v19);
          v16 = *v3;
        }
      }
      v3[1] = 0;
      qfree(v16);
    }
    return qfree(v3);
  }
  return result;
}

