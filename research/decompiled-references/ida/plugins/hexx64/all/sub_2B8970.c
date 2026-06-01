__int64 __fastcall sub_2B8970(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4E1258;
  result = a1[3];
  if ( result )
  {
    a1[4] = 0;
    return qfree(result);
  }
  return result;
}

