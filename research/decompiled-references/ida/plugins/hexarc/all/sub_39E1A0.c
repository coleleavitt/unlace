void __fastcall sub_39E1A0(void *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 104LL);
    if ( (char *)v1 == (char *)sub_39B840 )
      operator delete(a1, 0x30u);
    else
      v1();
  }
}

