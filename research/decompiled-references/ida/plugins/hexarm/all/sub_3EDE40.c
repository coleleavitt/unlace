void __fastcall sub_3EDE40(_QWORD *a1)
{
  void (*v2)(void); // rax
  __int64 v3; // rdi

  if ( a1 )
  {
    v2 = *(void (**)(void))(*a1 + 416LL);
    if ( (char *)v2 == (char *)sub_3ECCD0 )
    {
      *a1 = off_4E8AE8;
      qfree();
      a1[86] = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      a1[83] = &off_4E81E8;
      remove_event_listener();
      v3 = a1[41];
      *a1 = off_4E8030;
      if ( v3 )
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
      operator delete(a1, 0x2F0u);
    }
    else
    {
      v2();
    }
  }
}

