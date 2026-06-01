void __fastcall sub_387B0(void *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)sub_38540 )
    {
      *(_QWORD *)a1 = &off_A0628;
      qregfree();
      operator delete(a1, 0x30u);
    }
    else
    {
      v1();
    }
  }
}
