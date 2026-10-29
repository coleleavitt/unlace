void __fastcall sub_AA5A0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_238E78;
  sub_AA460((__int64)v2);
  operator delete(a1, 0x98u);
}
