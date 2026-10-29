void __fastcall sub_BCB00(_QWORD *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*a1 + 16LL);
    if ( (char *)v1 == (char *)sub_BCAE0 )
    {
      sub_BC950(a1);
      operator delete(a1, 0x458u);
    }
    else
    {
      v1();
    }
  }
}
