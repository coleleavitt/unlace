__int64 __fastcall sub_48A0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = off_1FD00;
  v2 = a1[41];
  if ( v2 )
  {
    a1[42] = 0;
    qfree(v2);
  }
  return qfree(a1);
}

