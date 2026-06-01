__int64 __fastcall sub_F3B0(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, __int64, __int64, __int64),
        __int64 a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  void (__fastcall *v8)(_QWORD *); // rax
  void *v9; // rdi
  void **v10; // rax
  void **v11; // rbp
  void **v12; // r12
  void *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r12
  void *v18; // rdi
  __int64 v19; // rsi
  void *v20; // rdi
  void *v21; // rdi

  v6 = sub_C7E0(a2);
  if ( !v6 )
    return 0;
  v7 = (_QWORD *)v6;
  while ( (unsigned __int8)sub_ECA0(a1, (__int64)v7, a3, a4) )
    ;
  v8 = *(void (__fastcall **)(_QWORD *))(*v7 + 8LL);
  if ( v8 == sub_B300 )
  {
    v9 = (void *)v7[1];
    *v7 = &off_12C90;
    if ( v9 )
      operator delete[](v9);
    if ( *((_BYTE *)v7 + 128) )
    {
      v10 = (void **)v7[14];
      if ( v10 )
      {
        v11 = &v10[4 * (_QWORD)*(v10 - 1)];
        if ( v10 == v11 )
        {
          v14 = 0;
        }
        else
        {
          do
          {
            v12 = v11;
            v13 = *(v11 - 2);
            v11 -= 4;
            if ( v13 )
              operator delete[](v13);
            if ( *v11 )
              operator delete[](*v11);
          }
          while ( (void **)v7[14] != v11 );
          v14 = 32LL * (_QWORD)*(v12 - 5);
        }
        operator delete[](v11 - 1, v14 + 8);
      }
    }
    if ( *((_BYTE *)v7 + 104) )
    {
      v15 = v7[11];
      if ( v15 )
      {
        v16 = v15 + 16LL * *(_QWORD *)(v15 - 8);
        if ( v15 == v16 )
        {
          v19 = 0;
        }
        else
        {
          do
          {
            v17 = v16;
            v18 = *(void **)(v16 - 16);
            v16 -= 16;
            if ( v18 )
              operator delete[](v18);
          }
          while ( v7[11] != v16 );
          v19 = 16LL * *(_QWORD *)(v17 - 24);
        }
        operator delete[]((void *)(v16 - 8), v19 + 8);
      }
    }
    v20 = (void *)v7[8];
    if ( v20 )
      operator delete[](v20);
    v21 = (void *)v7[6];
    if ( v21 )
      operator delete[](v21);
    operator delete(v7, 0x88u);
  }
  else
  {
    v8(v7);
  }
  return 1;
}
