void __fastcall sub_2058C0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = off_4B19A0;
  *((_QWORD *)v2 - 17) = off_4B1978;
  *((_QWORD *)v2 - 6) = &unk_4BDF98;
  cleanup_argloc();
  *(_QWORD *)a1 = off_4AE598;
  qfree();
  operator delete(a1, 0xF0u);
}

