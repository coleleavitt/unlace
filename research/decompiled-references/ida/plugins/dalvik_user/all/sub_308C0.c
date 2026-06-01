__int64 __fastcall sub_308C0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_7D5B8;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

