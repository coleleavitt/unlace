__int64 __fastcall sub_63B0(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_1E298;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree(result);
  }
  return result;
}
