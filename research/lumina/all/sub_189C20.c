void __fastcall sub_189C20(__int64 a1)
{
  void **v2; // rbp
  void *v3; // rdi
  char **v4; // r13
  char *v5; // rdi
  char *v6; // r14
  char *i; // rbp
  char *v8; // r12
  void *v9; // rdi
  char **v10; // r12
  char *v11; // rdi
  char *v12; // r13
  char *j; // rbp
  char *v14; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 1:
    case 5:
    case 6:
    case 7:
      goto LABEL_6;
    case 2:
      v2 = *(void ***)(a1 + 8);
      if ( v2 )
      {
        v3 = *v2;
        if ( *v2 )
        {
          v2[1] = nullptr;
          j__free(v3);
        }
        operator delete(v2, 0x18u);
      }
      goto LABEL_6;
    case 3:
      v4 = *(char ***)(a1 + 8);
      if ( !v4 )
        goto LABEL_6;
      v5 = *v4;
      if ( *v4 )
      {
        v6 = v4[1];
        if ( v6 )
        {
          for ( i = nullptr; i != v6; ++i )
          {
            v8 = &v5[40 * (_QWORD)i];
            sub_189C20(v8 + 24);
            v9 = *(void **)v8;
            if ( *(_QWORD *)v8 )
            {
              *((_QWORD *)v8 + 1) = 0;
              j__free(v9);
            }
            v5 = *v4;
          }
        }
        v4[1] = nullptr;
        j__free(v5);
      }
      j__free(v4);
      *(_OWORD *)a1 = 0;
      break;
    case 4:
      v10 = *(char ***)(a1 + 8);
      if ( v10 )
      {
        v11 = *v10;
        if ( *v10 )
        {
          v12 = v10[1];
          if ( v12 )
          {
            for ( j = nullptr; j != v12; ++j )
            {
              v14 = j;
              sub_189C20(&v11[16 * (_QWORD)v14]);
              v11 = *v10;
            }
          }
          v10[1] = nullptr;
          j__free(v11);
        }
        operator delete(v10, 0x18u);
        *(_OWORD *)a1 = 0;
      }
      else
      {
LABEL_6:
        *(_OWORD *)a1 = 0;
      }
      break;
    default:
      if ( !unk_2439A0 )
        sub_198E10(1315);
      BUG();
  }
}
