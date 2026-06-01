__int64 __fastcall sub_70B0(_QWORD *a1)
{
  clear_tinfo_t();
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  return cleanup_argloc();
}
