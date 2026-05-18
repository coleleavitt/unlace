void __fastcall sub_BD9B0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  char *v4; // rdi
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v11; // rbx
  void (__fastcall *v12)(_QWORD *); // rdx
  void (__fastcall *v13)(_QWORD *); // rax

  *a1 = &off_239DB0;
  if ( a1[3] )
  {
    mysql_free_result();
    a1[3] = 0;
  }
  v2 = (void *)a1[13];
  if ( v2 )
  {
    a1[14] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[10];
  if ( v3 )
  {
    a1[11] = 0;
    j__free(v3);
  }
  v4 = (char *)a1[7];
  if ( v4 )
  {
    v5 = a1[8];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = i;
        sub_176520(&v4[32 * v7]);
        v4 = (char *)a1[7];
      }
    }
    a1[8] = 0;
    j__free(v4);
  }
  v8 = (void *)a1[4];
  if ( v8 )
  {
    a1[5] = 0;
    j__free(v8);
  }
  v9 = a1[2];
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 8))-- == 1 )
    {
      v11 = (_QWORD *)a1[2];
      v12 = *(void (__fastcall **)(_QWORD *))*v11;
      if ( v12 == sub_BCB00 )
      {
        if ( v11 )
        {
          v13 = *(void (__fastcall **)(_QWORD *))(*v11 + 16LL);
          if ( v13 == sub_BCAE0 )
          {
            sub_BC950(v11);
            operator delete(v11, 0x458u);
          }
          else
          {
            v13(v11);
          }
        }
      }
      else
      {
        v12(v11);
      }
    }
  }
}
