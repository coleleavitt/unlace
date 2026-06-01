__int64 __fastcall sub_1A6C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  size_t v14; // r13
  int v15; // eax
  __int64 v16; // rdi
  void *v18; // rax
  void *v19; // rax
  const void *v20; // rsi

  v4 = operator new(0x48u);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 32) = v7;
  *(_OWORD *)(v6 + 48) = 0;
  if ( v5 )
  {
    v19 = (void *)qalloc_or_throw();
    *(_QWORD *)(v6 + 40) = v19;
    v20 = *(const void **)(a1 + 40);
    *(_QWORD *)(v6 + 56) = v5;
    memcpy(v19, v20, v5);
    *(_QWORD *)(v6 + 48) = v5;
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 64) = v8;
  LODWORD(v8) = *(_DWORD *)a1;
  *(_QWORD *)(v6 + 8) = a2;
  *(_DWORD *)v6 = v8;
  if ( v9 )
    *(_QWORD *)(v6 + 24) = sub_1A6C0(v9, v6);
  v10 = *(int **)(a1 + 16);
  if ( v10 )
  {
    v11 = v6;
    do
    {
      v12 = v11;
      v11 = operator new(0x48u);
      v13 = *((_QWORD *)v10 + 4);
      *(_QWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 32) = v13;
      *(_OWORD *)(v11 + 48) = 0;
      v14 = *((_QWORD *)v10 + 6);
      if ( v14 )
      {
        v18 = (void *)qalloc_or_throw();
        *(_QWORD *)(v11 + 40) = v18;
        *(_QWORD *)(v11 + 56) = v14;
        memcpy(v18, *((const void **)v10 + 5), v14);
        *(_QWORD *)(v11 + 48) = v14;
      }
      *(_QWORD *)(v11 + 64) = *((_QWORD *)v10 + 8);
      v15 = *v10;
      *(_QWORD *)(v11 + 16) = 0;
      *(_DWORD *)v11 = v15;
      *(_QWORD *)(v11 + 24) = 0;
      *(_QWORD *)(v12 + 16) = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v16 = *((_QWORD *)v10 + 3);
      if ( v16 )
        *(_QWORD *)(v11 + 24) = sub_1A6C0(v16, v11);
      v10 = *((int **)v10 + 2);
    }
    while ( v10 );
  }
  return v6;
}

