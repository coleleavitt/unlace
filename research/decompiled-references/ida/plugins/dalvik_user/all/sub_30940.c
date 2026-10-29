__int64 __fastcall sub_30940(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = &off_7D900;
  result = a1[2];
  if ( result )
  {
    a1[3] = 0;
    return qfree();
  }
  return result;
}

