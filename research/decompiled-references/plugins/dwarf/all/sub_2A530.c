__int64 __fastcall sub_2A530(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v1 = a1 + 1;
  *a1 = &off_C7980;
  clear_tinfo_t(a1 + 1);
  v3 = a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
  v4 = a1[5];
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
  return clear_tinfo_t(v1);
}
