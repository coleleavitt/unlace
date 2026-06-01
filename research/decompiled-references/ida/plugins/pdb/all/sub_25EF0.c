__int64 __fastcall sub_25EF0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = a1 + 10;
  *(v2 - 10) = off_A9E18;
  clear_tinfo_t(v2);
  v3 = a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3);
  }
  v4 = a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4);
  }
  return cleanup_argloc(a1 + 2);
}

