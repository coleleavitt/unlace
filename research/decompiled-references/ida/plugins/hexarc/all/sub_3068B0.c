void __fastcall sub_3068B0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 152;
  *((_QWORD *)v2 - 19) = off_4AF5D8;
  *((_QWORD *)v2 - 17) = &off_4AF650;
  clear_tinfo_t();
  operator delete(a1, 0xA0u);
}

