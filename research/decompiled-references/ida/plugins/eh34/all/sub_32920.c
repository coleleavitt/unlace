__int64 __fastcall sub_32920(_QWORD *a1)
{
  __int64 v2; // rdi

  v2 = a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  return qfree(a1[3]);
}

