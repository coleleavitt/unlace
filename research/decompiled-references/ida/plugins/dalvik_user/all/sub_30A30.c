__int64 __fastcall sub_30A30(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_7D8B8;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

