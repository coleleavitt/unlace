void __fastcall sub_3EC410(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4E9CC0;
  v2 = a1[107];
  if ( v2 )
  {
    a1[108] = 0;
    qfree(v2);
  }
  *a1 = &unk_4EC0A8;
  sub_1D8010((__int64)a1);
  operator delete(a1, 0x388u);
}

