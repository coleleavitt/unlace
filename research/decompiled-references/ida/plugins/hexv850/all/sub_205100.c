void __fastcall sub_205100(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = off_4B2900;
  *((_QWORD *)v2 - 17) = off_4B28D8;
  *((_QWORD *)v2 - 6) = &unk_4BEF98;
  cleanup_argloc();
  *(_QWORD *)a1 = off_4AF4F8;
  qfree();
  operator delete(a1, 0xF0u);
}

