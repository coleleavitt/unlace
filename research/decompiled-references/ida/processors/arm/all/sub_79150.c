__int64 __fastcall sub_79150(int *a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v7; // rax
  __int64 *v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 i; // rbx
  _DWORD *v19; // rcx
  __int64 v20; // rax
  int v21; // r13d
  _DWORD *v24; // [rsp+18h] [rbp-40h]

  v7 = qalloc_or_throw();
  *(_QWORD *)v7 = 0;
  v8 = (__int64 *)v7;
  *(_OWORD *)(v7 + 8) = 0;
  if ( a3 > 0 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v10 < v11 + 1 )
      {
        v20 = qvector_reserve((__int64)v8, v9, v11 + 1, 24);
        v11 = v8[1];
        *v8 = v20;
        v9 = v20;
      }
      v13 = v9 + 24 * v11;
      *(_QWORD *)v13 = 0;
      *(_DWORD *)(v13 + 16) = 0xFFFF;
      *(_QWORD *)(v13 + 8) = 0;
      ++v8[1];
      if ( a4 > a3 - v12 )
        a4 = a3 - v12;
      *(_WORD *)(v13 + 16) = v12;
      *(_WORD *)(v13 + 18) = a4;
      if ( a5 )
      {
        v14 = a1[1];
        if ( (unsigned __int64)((int)v14 + 1) > 8 )
          goto LABEL_9;
        a1[1] = v14 + 1;
        v19 = &unk_8FDE0;
      }
      else
      {
        v14 = *a1;
        if ( (unsigned __int64)((int)v14 + 1) > 8 )
        {
LABEL_9:
          if ( v8 )
          {
            v15 = *v8;
            if ( *v8 )
            {
              v16 = v8[1];
              if ( v16 )
              {
                for ( i = 0; i != v16; ++i )
                {
                  cleanup_argloc();
                  v15 = *v8;
                }
              }
              v8[1] = 0;
              qfree(v15);
            }
            qfree((__int64)v8);
          }
          return 0;
        }
        *a1 = v14 + 1;
        v19 = &unk_8FE20;
      }
      v24 = (_DWORD *)v13;
      v21 = v19[v14];
      v12 += a4;
      cleanup_argloc();
      *v24 = 3;
      v24[2] = v21;
      if ( a3 <= v12 )
        break;
      v11 = v8[1];
      v10 = v8[2];
      v9 = *v8;
    }
  }
  cleanup_argloc();
  if ( v8 )
  {
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v8;
  }
  return 1;
}
