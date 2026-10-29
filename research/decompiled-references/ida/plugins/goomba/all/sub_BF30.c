__int64 __fastcall sub_BF30(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4D758;
  result = a1[14];
  if ( result )
  {
    a1[15] = 0;
    return qfree(result);
  }
  return result;
}

