__int64 __fastcall sub_20A770(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 21;
  *(v2 - 21) = off_4D9620;
  *(v2 - 17) = off_4D95F8;
  *(v2 - 6) = &unk_4E7FE0;
  cleanup_argloc();
  *a1 = off_4D61D8;
  return qfree();
}

