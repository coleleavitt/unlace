__int64 __fastcall sub_16850(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &off_2D5D8;
  result = reg_finder_dtr();
  v3 = a1[26];
  if ( v3 )
  {
    a1[27] = 0;
    result = qfree(v3);
  }
  v4 = a1[10];
  if ( v4 )
  {
    a1[11] = 0;
    return qfree(v4);
  }
  return result;
}

