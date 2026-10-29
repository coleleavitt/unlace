void __fastcall sub_1CAE00(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 208;
  *((_QWORD *)v2 - 26) = &off_4B7E90;
  sub_1166E0((__int64)v2);
  *((_QWORD *)a1 + 25) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_4B6430;
  sub_3EA810(a1);
  operator delete(a1, 0xE0u);
}

