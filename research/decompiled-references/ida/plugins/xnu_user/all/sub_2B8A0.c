void __fastcall sub_2B8A0(_QWORD *a1)
{
  void *v2; // rdi
  void **v3; // rax
  void **v4; // rbx
  void **v5; // r12
  void *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r12
  void *v11; // rdi
  __int64 v12; // rsi
  void *v13; // rdi
  void *v14; // rdi

  *a1 = &off_97E60;
  v2 = (void *)a1[1];
  if ( v2 )
    operator delete[](v2);
  if ( *((_BYTE *)a1 + 128) )
  {
    v3 = (void **)a1[14];
    if ( v3 )
    {
      v4 = &v3[4 * (_QWORD)*(v3 - 1)];
      if ( v3 == v4 )
      {
        v7 = 0;
      }
      else
      {
        do
        {
          v5 = v4;
          v6 = *(v4 - 2);
          v4 -= 4;
          if ( v6 )
            operator delete[](v6);
          if ( *v4 )
            operator delete[](*v4);
        }
        while ( (void **)a1[14] != v4 );
        v7 = 32LL * (_QWORD)*(v5 - 5);
      }
      operator delete[](v4 - 1, v7 + 8);
    }
  }
  if ( *((_BYTE *)a1 + 104) )
  {
    v8 = a1[11];
    if ( v8 )
    {
      v9 = v8 + 16LL * *(_QWORD *)(v8 - 8);
      if ( v8 == v9 )
      {
        v12 = 0;
      }
      else
      {
        do
        {
          v10 = v9;
          v11 = *(void **)(v9 - 16);
          v9 -= 16;
          if ( v11 )
            operator delete[](v11);
        }
        while ( a1[11] != v9 );
        v12 = 16LL * *(_QWORD *)(v10 - 24);
      }
      operator delete[]((void *)(v9 - 8), v12 + 8);
    }
  }
  v13 = (void *)a1[8];
  if ( v13 )
    operator delete[](v13);
  v14 = (void *)a1[6];
  if ( v14 )
    operator delete[](v14);
  operator delete(a1, 0x88u);
}

