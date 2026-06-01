__int64 __fastcall sub_CB6A0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4C9D40;
  result = qfree();
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

