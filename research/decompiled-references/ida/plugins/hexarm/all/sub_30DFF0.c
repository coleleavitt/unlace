void __fastcall sub_30DFF0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 152;
  *((_QWORD *)v2 - 19) = off_4DD498;
  *((_QWORD *)v2 - 17) = &off_4DD510;
  clear_tinfo_t();
  operator delete(a1, 0xA0u);
}

