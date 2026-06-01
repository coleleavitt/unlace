void __fastcall sub_1D1D20(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 208;
  *((_QWORD *)v2 - 26) = &off_4EC050;
  sub_11CDA0((__int64)v2);
  *((_QWORD *)a1 + 25) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_4EA5E8;
  sub_4139F0(a1);
  operator delete(a1, 0xE0u);
}

