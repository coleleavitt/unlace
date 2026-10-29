void __fastcall sub_BA500(_QWORD *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*a1 + 16LL);
    if ( (char *)v1 == (char *)sub_BA4D0 )
    {
      *a1 = &off_239C40;
      if ( a1[2] )
        sub_11D2D0();
      operator delete(a1, 0x18u);
    }
    else
    {
      v1();
    }
  }
}
