__int64 __fastcall sub_803E0(_QWORD *a1)
{
  clear_tinfo_t();
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  if ( a1[4] )
  {
    a1[5] = 0;
    qfree();
  }
  return cleanup_argloc();
}

