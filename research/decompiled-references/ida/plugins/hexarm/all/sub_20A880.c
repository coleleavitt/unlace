void __fastcall sub_20A880(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = off_4D9620;
  *((_QWORD *)v2 - 17) = off_4D95F8;
  *((_QWORD *)v2 - 6) = &unk_4E7FE0;
  cleanup_argloc();
  *(_QWORD *)a1 = off_4D61D8;
  qfree();
  operator delete(a1, 0xF0u);
}

