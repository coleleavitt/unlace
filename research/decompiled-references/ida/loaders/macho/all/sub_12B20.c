__int64 __fastcall sub_12B20(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_62AC0;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

