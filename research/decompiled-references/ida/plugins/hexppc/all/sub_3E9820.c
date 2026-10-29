void __fastcall sub_3E9820(_QWORD *a1)
{
  void (*v2)(void); // rax
  void *v3; // rdi
  void (*v4)(void); // rax
  __int64 v5; // rdi
  __int64 v6; // rdi

  if ( a1 )
  {
    v2 = *(void (**)(void))(*a1 + 416LL);
    if ( (char *)v2 == (char *)sub_3E7A10 )
    {
      *a1 = off_4D9AE8;
      v3 = (void *)a1[564];
      if ( v3 )
      {
        v4 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
        if ( (char *)v4 == (char *)sub_3E6020 )
          operator delete(v3, 0x10u);
        else
          v4();
      }
      v5 = a1[557];
      a1[564] = 0;
      if ( v5 )
      {
        a1[558] = 0;
        qfree();
      }
      v6 = a1[41];
      *a1 = off_4D9030;
      if ( v6 )
      {
        a1[42] = 0;
        qfree();
      }
      if ( a1[38] )
      {
        a1[39] = 0;
        qfree();
      }
      if ( a1[35] )
      {
        a1[36] = 0;
        qfree();
      }
      qfree();
      if ( a1[30] )
      {
        a1[31] = 0;
        qfree();
      }
      qfree();
      if ( a1[25] )
      {
        a1[26] = 0;
        qfree();
      }
      qfree();
      if ( a1[20] )
      {
        a1[21] = 0;
        qfree();
      }
      qfree();
      if ( a1[15] )
      {
        a1[16] = 0;
        qfree();
      }
      qfree();
      operator delete(a1, 0x11A8u);
    }
    else
    {
      v2();
    }
  }
}

