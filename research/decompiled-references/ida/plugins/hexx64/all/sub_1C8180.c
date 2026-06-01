__int64 __fastcall sub_1C8180(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_4DE8B8;
  v2 = a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
  }
  return qfree(a1[2]);
}

