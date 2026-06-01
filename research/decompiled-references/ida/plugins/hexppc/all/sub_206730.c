__int64 __fastcall sub_206730(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 21;
  *(v2 - 21) = off_4CC080;
  *(v2 - 17) = off_4CC058;
  *(v2 - 6) = &unk_4D8FE0;
  cleanup_argloc();
  *a1 = off_4C8C78;
  return qfree();
}

