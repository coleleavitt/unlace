void __fastcall sub_83B60(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 48;
  *((_QWORD *)v2 - 6) = &off_C94F0;
  sub_1B750((__int64)v2);
  operator delete(a1, 0x140u);
}
