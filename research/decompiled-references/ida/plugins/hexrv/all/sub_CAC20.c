__int64 __fastcall sub_CAC20(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4AF660;
  result = qfree();
  if ( a1[2] )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

