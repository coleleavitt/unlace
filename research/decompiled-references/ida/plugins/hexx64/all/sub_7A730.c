__int64 __fastcall sub_7A730(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = &off_4DBD38;
  v2 = a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
  }
  v3 = a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    qfree(v3);
  }
  return j__qfree((__int64)a1);
}

