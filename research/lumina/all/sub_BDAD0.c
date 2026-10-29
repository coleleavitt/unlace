void __fastcall sub_BDAD0(_QWORD *a1)
{
  void (*v2)(void); // rax
  void *v3; // rdi
  void *v4; // rdi
  char *v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 v8; // rax
  void *v9; // rdi
  __int64 v10; // rdx
  _QWORD **v12; // rbp
  void (__fastcall *v13)(_QWORD *); // rdx
  void (__fastcall *v14)(_QWORD *); // rax
  _QWORD *v15; // rdi

  if ( a1 )
  {
    v2 = *(void (**)(void))(*a1 + 16LL);
    if ( (char *)v2 == (char *)sub_BD890 )
    {
      *a1 = &off_239DB0;
      if ( a1[3] )
      {
        mysql_free_result();
        a1[3] = 0;
      }
      v3 = (void *)a1[13];
      if ( v3 )
      {
        a1[14] = 0;
        j__free(v3);
      }
      v4 = (void *)a1[10];
      if ( v4 )
      {
        a1[11] = 0;
        j__free(v4);
      }
      v5 = (char *)a1[7];
      if ( v5 )
      {
        v6 = a1[8];
        if ( v6 )
        {
          for ( i = 0; i != v6; ++i )
          {
            v8 = i;
            sub_176520(&v5[32 * v8]);
            v5 = (char *)a1[7];
          }
        }
        a1[8] = 0;
        j__free(v5);
      }
      v9 = (void *)a1[4];
      if ( v9 )
      {
        a1[5] = 0;
        j__free(v9);
      }
      v10 = a1[2];
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        {
          v12 = (_QWORD **)a1[2];
          v13 = (void (__fastcall *)(_QWORD *))**v12;
          if ( v13 == sub_BCB00 )
          {
            if ( v12 )
            {
              v14 = (void (__fastcall *)(_QWORD *))(*v12)[2];
              v15 = (_QWORD *)a1[2];
              if ( v14 == sub_BCAE0 )
              {
                sub_BC950(v15);
                operator delete(v12, 0x458u);
              }
              else
              {
                v14(v15);
              }
            }
          }
          else
          {
            v13((_QWORD *)a1[2]);
          }
        }
      }
      operator delete(a1, 0x80u);
    }
    else
    {
      v2();
    }
  }
}
