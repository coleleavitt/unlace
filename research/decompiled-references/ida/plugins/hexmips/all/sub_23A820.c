__int64 __fastcall sub_23A820(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 8;
  *(v2 - 8) = off_4C0198;
  sub_250DB0(v2);
  clear_tinfo_t();
  v3 = a1[5];
  *a1 = off_4BC478;
  if ( v3 )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  return j__qfree();
}

