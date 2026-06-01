unsigned __int64 __fastcall sub_33030(__int64 a1, __int64 a2, char a3)
{
  int v4; // ecx
  __int64 *v5; // rbp
  unsigned __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r13
  unsigned __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rdx
  int v19; // ebx
  int v20; // r13d
  int v21; // ebx
  int v22; // r13d
  unsigned __int64 v23; // rcx
  int v24; // r13d
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 i; // rbx
  __int64 v29; // rax
  int v30; // ebx
  __int64 v31; // rax
  int v32; // ebx
  struct _Unwind_Exception *v33; // rbx

  if ( *(_BYTE *)(a1 + 20) && a3 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    v5 = (__int64 *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 44) != v4 )
    {
LABEL_4:
      result = (unsigned int)(*(_DWORD *)v5 + 2);
      if ( v4 < (int)result )
      {
        if ( *(_DWORD *)a1 != 4 )
        {
          if ( !under_debugger )
          {
            v33 = (struct _Unwind_Exception *)interr(10496);
            if ( v5 )
              sub_19E42(v5);
            _Unwind_Resume(v33);
          }
          BUG();
        }
        v7 = qalloc_or_throw(24);
        *(_OWORD *)(v7 + 8) = 0;
        v8 = (__int64 *)v7;
        *(_QWORD *)v7 = 0;
        v9 = qvector_reserve(v7, 0, 1, 24);
        v10 = v8[1];
        *v8 = v9;
        v11 = v9 + 24 * v10;
        *(_QWORD *)v11 = 0;
        *(_QWORD *)(v11 + 8) = 0;
        *(_DWORD *)(v11 + 16) = 0xFFFF;
        ++v8[1];
        sub_32EE0(a1, (_DWORD *)v11, 0);
        *(_WORD *)(v11 + 16) = 0;
        *(_WORD *)(v11 + 18) = *(_QWORD *)(a1 + 8);
        v12 = v8[1];
        v13 = *v8;
        if ( v8[2] < (unsigned __int64)(v12 + 1) )
        {
          v31 = qvector_reserve(v8, v13, v12 + 1, 24);
          *v8 = v31;
          v12 = v8[1];
          v13 = v31;
        }
        v14 = v13 + 24 * v12;
        *(_QWORD *)v14 = 0;
        *(_QWORD *)(v14 + 8) = 0;
        *(_DWORD *)(v14 + 16) = 0xFFFF;
        ++v8[1];
        v15 = *(_QWORD *)(a1 + 8);
        v16 = (int)v15;
        if ( v14 )
        {
          v17 = *(_QWORD *)(a1 + 48) * v15;
          cleanup_argloc(v13 + 24 * v12);
          *(_DWORD *)v14 = 1;
          *(_QWORD *)(v14 + 8) = v17;
          v15 = *(_QWORD *)(a1 + 8);
        }
        *(_QWORD *)(a1 + 48) += (v15 + v16 - 1) / v15;
        *(_WORD *)(v14 + 16) = v15;
        result = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v14 + 18) = result;
        if ( a2 )
        {
          result = cleanup_argloc(a2);
          if ( v8 )
          {
            *(_DWORD *)a2 = 2;
            *(_QWORD *)(a2 + 8) = v8;
          }
        }
        else if ( v8 )
        {
          v26 = *v8;
          if ( *v8 )
          {
            v27 = v8[1];
            if ( v27 )
            {
              for ( i = 0; i != v27; ++i )
              {
                v29 = 3 * i;
                cleanup_argloc(v26 + 8 * v29);
                v26 = *v8;
              }
            }
            v8[1] = 0;
            qfree(v26);
          }
          return qfree(v8);
        }
        return result;
      }
      if ( !a2 )
      {
LABEL_21:
        *(_DWORD *)v5 = result;
        return result;
      }
      if ( a3 )
      {
        v18 = *(_QWORD *)(a1 + 8);
        if ( *(_DWORD *)a1 == 3 )
        {
          v32 = *(_DWORD *)(a1 + 44);
          v20 = v32 + 44;
          v21 = v32 + 45;
          if ( v18 == 4 )
            goto LABEL_19;
        }
        else if ( *(_DWORD *)a1 )
        {
          v19 = *(_DWORD *)(a1 + 40);
          v20 = v19 + 44;
          v21 = v19 + 45;
          if ( v18 == 4 )
          {
LABEL_19:
            v22 = (v21 << 16) | v20;
LABEL_20:
            *(_DWORD *)a2 = 4;
            *(_DWORD *)(a2 + 8) = v22;
            result = (unsigned int)(*(_DWORD *)v5 + 2);
            goto LABEL_21;
          }
        }
        else if ( *(_DWORD *)(a1 + 40) )
        {
          v22 = 3080238;
          if ( v18 == 4 )
            goto LABEL_20;
          v21 = 47;
          v20 = 46;
        }
        else
        {
          v22 = 2949164;
          if ( v18 == 4 )
            goto LABEL_20;
          v21 = 45;
          v20 = 44;
        }
      }
      else
      {
        v30 = *(_DWORD *)(a1 + 40);
        v20 = v30 + 4;
        v21 = v30 + 5;
      }
      if ( (unsigned __int8)getinf_flag(3, 32) )
      {
        *(_DWORD *)a2 = 4;
        *(_DWORD *)(a2 + 8) = v21 | (v20 << 16);
        result = (unsigned int)(*(_DWORD *)v5 + 2);
        *(_DWORD *)v5 = result;
        return result;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 16);
    v5 = (__int64 *)(a1 + 40);
    if ( *(_DWORD *)(a1 + 40) != v4 )
      goto LABEL_4;
  }
  v23 = *(_QWORD *)(a1 + 8);
  v24 = 2 * v23;
  if ( a2 )
  {
    v25 = *(_QWORD *)(a1 + 48) * v23;
    cleanup_argloc(a2);
    *(_DWORD *)a2 = 1;
    *(_QWORD *)(a2 + 8) = v25;
    v23 = *(_QWORD *)(a1 + 8);
  }
  result = (v23 + v24 - 1) / v23;
  *(_QWORD *)(a1 + 48) += result;
  return result;
}
