void __fastcall sub_767C0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // r15
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rbp
  _QWORD *v14; // rsi
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rbp
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    if ( a3 )
      v3 = (unsigned int)(*(_DWORD *)(a1 + 136) + *(_DWORD *)a2) / *(_DWORD *)(a1 + 136);
    v5 = *(_DWORD **)(a2 + 8);
    v6 = *(_QWORD *)(a2 + 40);
    v7 = (unsigned int)*v5;
    v8 = *v5 + 1;
    if ( v3 > 1 )
    {
      v9 = 1;
      v10 = 1;
      do
      {
        while ( 1 )
        {
          v11 = v5[v10];
          if ( v11 != v8 )
            break;
          ++v8;
          v10 = ++v9;
          if ( v9 >= v3 )
            goto LABEL_11;
        }
        v12 = *(_QWORD *)(a2 + 32);
        v13 = v8;
        if ( *(_QWORD *)(a2 + 48) < (unsigned __int64)(v6 + 1) )
        {
          v19 = qvector_reserve(a2 + 32, v12, v6 + 1, 16);
          v6 = *(_QWORD *)(a2 + 40);
          *(_QWORD *)(a2 + 32) = v19;
          v12 = v19;
        }
        v8 = v11 + 1;
        v14 = (_QWORD *)(16 * v6 + v12);
        *v14 = v7;
        v7 = v11;
        v14[1] = v13;
        v5 = *(_DWORD **)(a2 + 8);
        v6 = *(_QWORD *)(a2 + 40) + 1LL;
        *(_QWORD *)(a2 + 40) = v6;
        v10 = ++v9;
      }
      while ( v9 < v3 );
    }
LABEL_11:
    v15 = v5[v3 - 1];
    v16 = *(_QWORD *)(a2 + 32);
    v17 = (unsigned int)(v15 + 1);
    if ( *(_QWORD *)(a2 + 48) < (unsigned __int64)(v6 + 1) )
    {
      v20 = qvector_reserve(a2 + 32, v16, v6 + 1, 16);
      v6 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 32) = v20;
      v16 = v20;
    }
    v18 = (_QWORD *)(16 * v6 + v16);
    *v18 = v7;
    v18[1] = v17;
    ++*(_QWORD *)(a2 + 40);
  }
}

