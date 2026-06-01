__int64 __fastcall sub_3A35E0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4E1390;
  result = a1[3];
  if ( result )
  {
    a1[4] = 0;
    return qfree();
  }
  return result;
}

