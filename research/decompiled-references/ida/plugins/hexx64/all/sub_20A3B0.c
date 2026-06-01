__int64 __fastcall sub_20A3B0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 21;
  *(v2 - 21) = off_4DEF60;
  *(v2 - 17) = off_4DEF38;
  *(v2 - 6) = &unk_4EC100;
  cleanup_argloc();
  v3 = a1[1];
  *a1 = off_4DBB18;
  return qfree(v3);
}

