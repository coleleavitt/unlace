void __fastcall sub_BC370(_QWORD *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*a1 + 16LL);
    if ( (char *)v1 == (char *)sub_BC2F0 )
    {
      *a1 = &off_239D88;
      if ( a1[2] )
        mysql_close();
      operator delete(a1, 0x20u);
    }
    else
    {
      v1();
    }
  }
}
