void __fastcall sub_1D1760(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 208;
  *((_QWORD *)v2 - 26) = &off_4E7F30;
  sub_11C7E0((__int64)v2);
  *((_QWORD *)a1 + 25) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = &off_4E64D8;
  sub_40D800(a1);
  operator delete(a1, 0xE0u);
}

