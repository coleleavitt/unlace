__int64 __fastcall sub_45970(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    result = qfree(v2);
  }
  v4 = a1[6];
  if ( v4 )
  {
    a1[7] = 0;
    return qfree(v4);
  }
  return result;
}
