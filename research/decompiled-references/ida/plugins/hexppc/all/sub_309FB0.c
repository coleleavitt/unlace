void __fastcall sub_309FB0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 152;
  *((_QWORD *)v2 - 19) = off_4CFEF8;
  *((_QWORD *)v2 - 17) = &off_4CFF70;
  clear_tinfo_t();
  operator delete(a1, 0xA0u);
}

