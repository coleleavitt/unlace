__int64 __fastcall sub_2B2600(_QWORD *a1)
{
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( a1[3] )
  {
    a1[4] = 0;
    qfree();
  }
  return cleanup_argloc();
}

