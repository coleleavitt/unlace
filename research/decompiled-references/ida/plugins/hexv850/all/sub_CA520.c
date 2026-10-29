__int64 __fastcall sub_CA520(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4B05C0;
  result = qfree();
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

