void __fastcall sub_31820(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_84D48;
  clear_tinfo_t(v2);
  operator delete(a1, 0x20u);
}

