__int64 __fastcall sub_5850(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = a1[1033];
  if ( v2 )
  {
    a1[1034] = 0;
    result = qfree(v2);
  }
  v4 = a1[1029];
  if ( v4 )
  {
    a1[1030] = 0;
    result = qfree(v4);
  }
  v5 = a1[1025];
  if ( v5 )
  {
    a1[1026] = 0;
    return qfree(v5);
  }
  return result;
}

