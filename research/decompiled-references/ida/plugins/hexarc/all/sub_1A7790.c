__int64 __fastcall sub_1A7790(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_4AAC18;
  result = a1[5];
  if ( result )
  {
    a1[6] = 0;
    return qfree();
  }
  return result;
}

