__int64 __fastcall sub_DADF0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_4DCDB8;
  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  qfree(a1[7]);
  return j__qfree((__int64)a1);
}

