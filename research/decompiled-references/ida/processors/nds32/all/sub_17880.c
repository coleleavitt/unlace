__int64 __fastcall sub_17880(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // r13d
  int *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx

  if ( (unsigned int)a3 <= 0x10 )
    getinf(99);
  v5 = *((_QWORD *)a2 + 1);
  *a2 = 1;
  if ( v5 )
  {
    *((_QWORD *)a2 + 2) = 0;
    qfree(v5, a2, a3, a4);
    *((_QWORD *)a2 + 1) = 0;
    v6 = 0;
    *((_QWORD *)a2 + 3) = 0;
  }
  else
  {
    v6 = *((_QWORD *)a2 + 3);
  }
  v7 = *((_QWORD *)a2 + 2);
  v8 = 0;
  v9 = 0;
  v10 = dword_231E0;
  while ( 1 )
  {
    ++v10;
    if ( v6 < v7 + 1 )
    {
      v11 = qvector_reserve(a2 + 2, v8, v7 + 1, 4);
      v7 = *((_QWORD *)a2 + 2);
      *((_QWORD *)a2 + 1) = v11;
      v8 = v11;
    }
    *(_DWORD *)(v8 + 4 * v7) = v9;
    v7 = *((_QWORD *)a2 + 2) + 1LL;
    *((_QWORD *)a2 + 2) = v7;
    v9 = *v10;
    if ( *v10 == -1 )
      break;
    v6 = *((_QWORD *)a2 + 3);
    v8 = *((_QWORD *)a2 + 1);
  }
  v12 = *((_QWORD *)a2 + 4);
  if ( v12 )
  {
    *((_QWORD *)a2 + 5) = 0;
    qfree(v12, v8, v7, v6);
    *((_QWORD *)a2 + 4) = 0;
    v7 = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 6) = 0;
  }
  v13 = *a2;
  a2[1] = v7;
  if ( (unsigned int)v13 <= 6 )
  {
    v14 = 84;
    if ( _bittest64(&v14, v13) )
      a2[1] = a2[10] + v7;
  }
  return 1;
}

