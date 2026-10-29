__int64 __fastcall sub_20A370(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 136;
  *(_QWORD *)(v2 - 136) = off_4DEF38;
  *(_QWORD *)(v2 - 48) = &unk_4EC100;
  cleanup_argloc();
  return j__qfree(a1);
}

