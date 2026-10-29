__int64 __fastcall sub_2057B0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 21;
  *(v2 - 21) = off_4B19A0;
  *(v2 - 17) = off_4B1978;
  *(v2 - 6) = &unk_4BDF98;
  cleanup_argloc();
  *a1 = off_4AE598;
  return qfree();
}

