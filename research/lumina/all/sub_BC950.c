void __fastcall sub_BC950(_QWORD *a1)
{
  void **v2; // rbx
  void **i; // r13
  void **v4; // rbp
  void *v5; // rdi
  void **v6; // rbx
  void **j; // r13
  void **v8; // rbp
  void *v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v15; // rbx
  void (__fastcall *v16)(_QWORD *); // rdx
  void (__fastcall *v17)(_QWORD *); // rax
  __int64 v18; // rdi

  *a1 = &off_239DD8;
  v2 = (void **)a1[133];
  for ( i = &v2[a1[134]]; i != v2; ++v2 )
  {
    v4 = (void **)*v2;
    if ( *v2 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v4[1] = nullptr;
        j__free(v5);
      }
      operator delete(v4, 0x18u);
    }
  }
  v6 = (void **)a1[136];
  for ( j = &v6[a1[137]]; j != v6; ++v6 )
  {
    v8 = (void **)*v6;
    if ( *v6 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        v8[1] = nullptr;
        j__free(v9);
      }
      j__free(v8);
    }
  }
  v10 = a1[3];
  if ( v10 )
  {
    mysql_stmt_close(v10);
    a1[3] = 0;
  }
  v11 = (void *)a1[136];
  if ( v11 )
  {
    a1[137] = 0;
    j__free(v11);
  }
  v12 = (void *)a1[133];
  if ( v12 )
  {
    a1[134] = 0;
    j__free(v12);
  }
  v13 = a1[2];
  if ( v13 )
  {
    if ( (*(_DWORD *)(v13 + 8))-- == 1 )
    {
      v15 = (_QWORD *)a1[2];
      v16 = *(void (__fastcall **)(_QWORD *))*v15;
      if ( v16 == sub_BC370 )
      {
        if ( v15 )
        {
          v17 = *(void (__fastcall **)(_QWORD *))(*v15 + 16LL);
          if ( v17 == sub_BC2F0 )
          {
            v18 = v15[2];
            *v15 = &off_239D88;
            if ( v18 )
              mysql_close();
            operator delete(v15, 0x20u);
          }
          else
          {
            v17((_QWORD *)a1[2]);
          }
        }
      }
      else
      {
        v16((_QWORD *)a1[2]);
      }
    }
  }
}
