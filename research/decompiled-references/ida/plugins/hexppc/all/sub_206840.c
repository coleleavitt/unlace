void __fastcall sub_206840(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = off_4CC080;
  *((_QWORD *)v2 - 17) = off_4CC058;
  *((_QWORD *)v2 - 6) = &unk_4D8FE0;
  cleanup_argloc();
  *(_QWORD *)a1 = off_4C8C78;
  qfree();
  operator delete(a1, 0xF0u);
}

