void __fastcall sub_6C590(char *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 16;
  *(v2 - 2) = &off_2373C8;
  sub_6C280(v2);
  operator delete(a1, 0x110u);
}
