void __fastcall sub_AA930(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_2382D8;
  sub_AA8D0((__int64)v2);
  operator delete(a1, 0x78u);
}
