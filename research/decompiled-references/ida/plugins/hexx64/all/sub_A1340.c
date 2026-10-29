__int64 __fastcall sub_A1340(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4DBFC8;
  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
  }
  qfree(a1[6]);
  return j__qfree((__int64)a1);
}

