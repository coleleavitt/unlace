__int64 __fastcall sub_13280(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_C74C8;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree(result);
  }
  return result;
}
