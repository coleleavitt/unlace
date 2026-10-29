__int64 __fastcall sub_2803E0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4DB038;
  clear_tinfo_t();
  v2 = a1[5];
  *a1 = off_4D63B8;
  if ( v2 )
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

