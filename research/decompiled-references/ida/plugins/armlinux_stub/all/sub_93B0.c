__int64 __fastcall sub_93B0(_QWORD *a1)
{
  *a1 = off_36EF8;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  *a1 = &off_375E8;
  return qsem_free();
}

