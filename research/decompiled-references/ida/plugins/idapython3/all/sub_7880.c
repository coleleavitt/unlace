void __fastcall sub_7880(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 **v7; // rbp
  __int64 *v8; // rdi
  char v9; // [rsp+0h] [rbp-18h]

  v7 = (__int64 **)a1[5];
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      if ( *v8 <= 0 )
      {
        sub_6C20((__int64)v8, a2, a3, a4, a5, a6, v9);
        sub_78E0();
        return;
      }
      (*(void (**)(void))(qword_24798 + 984))();
    }
    operator delete(v7, 8u);
  }
  if ( *a1 )
  {
    a1[1] = 0;
    qfree();
  }
}

