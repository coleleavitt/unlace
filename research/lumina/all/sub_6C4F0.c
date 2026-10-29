void __fastcall sub_6C4F0(char *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 16;
  *(v2 - 2) = &off_237158;
  sub_6C280(v2);
  operator delete(a1, 0x110u);
}
