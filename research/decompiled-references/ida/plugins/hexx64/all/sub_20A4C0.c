void __fastcall sub_20A4C0(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = off_4DEF60;
  *((_QWORD *)v2 - 17) = off_4DEF38;
  *((_QWORD *)v2 - 6) = &unk_4EC100;
  cleanup_argloc();
  v3 = *((_QWORD *)a1 + 1);
  *(_QWORD *)a1 = off_4DBB18;
  qfree(v3);
  operator delete(a1, 0xF0u);
}

