void __fastcall sub_203140(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = off_4AB760;
  *((_QWORD *)v2 - 17) = off_4AB738;
  *((_QWORD *)v2 - 6) = &unk_4B7F40;
  cleanup_argloc();
  *(_QWORD *)a1 = off_4A8358;
  qfree();
  operator delete(a1, 0xF0u);
}

