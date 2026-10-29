void __fastcall sub_7DE70(_QWORD *a1)
{
  _QWORD *v1; // rbp
  void (__fastcall *v2)(_QWORD *); // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  _QWORD *v9; // rdi

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = *(void (__fastcall **)(_QWORD *))(*v1 + 8LL);
    if ( v2 == sub_7DD80 )
    {
      v3 = v1[62];
      v1[58] = 0;
      *v1 = &off_B23A8;
      if ( v3 )
      {
        v4 = v1[63];
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
          {
            v6 = (__int64 *)(v3 + 24 * i);
            v7 = *v6;
            if ( *v6 )
            {
              v6[1] = 0;
              qfree(v7);
              v3 = v1[62];
            }
          }
        }
        v1[63] = 0;
        qfree(v3);
      }
      v8 = v1[59];
      if ( v8 )
      {
        v1[60] = 0;
        qfree(v8);
      }
      sub_7E9F0(v1 + 9);
      v1[8] = 0;
      *v1 = &unk_B2CD0;
      sub_57B40((__int64)(v1 + 1));
      v9 = (_QWORD *)v1[1];
      if ( v9 != v1 + 7 )
        operator delete(v9, 8LL * v1[2]);
      operator delete(v1, 0x208u);
    }
    else
    {
      v2((_QWORD *)*a1);
    }
  }
}

