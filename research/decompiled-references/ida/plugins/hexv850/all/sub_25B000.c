__int64 __fastcall sub_25B000(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_4B6FB8;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

