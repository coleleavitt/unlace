__int64 __fastcall sub_17730(int *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 *v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // r13d
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // r14d
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 result; // rax

  v4 = qalloc_or_throw(24);
  *(_QWORD *)v4 = 0;
  v5 = (__int64 *)v4;
  *(_OWORD *)(v4 + 8) = 0;
  if ( a3 > 0 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v7 < v8 + 1 )
      {
        v14 = qvector_reserve(v5, v6, v8 + 1, 24);
        v8 = v5[1];
        *v5 = v14;
        v6 = v14;
      }
      v10 = v6 + 24 * v8;
      *(_QWORD *)v10 = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_DWORD *)(v10 + 16) = 0xFFFF;
      ++v5[1];
      v11 = *a1;
      v12 = dword_231E0[v11];
      *a1 = v11 + 1;
      cleanup_argloc(v10);
      v13 = 4 * v9++;
      *(_DWORD *)v10 = 3;
      *(_WORD *)(v10 + 16) = v13;
      *(_DWORD *)(v10 + 8) = v12;
      *(_WORD *)(v10 + 18) = 4;
      if ( v9 == a3 )
        break;
      v8 = v5[1];
      v7 = v5[2];
      v6 = *v5;
    }
  }
  result = cleanup_argloc(a2);
  if ( v5 )
  {
    *(_DWORD *)a2 = 2;
    *(_QWORD *)(a2 + 8) = v5;
  }
  return result;
}
