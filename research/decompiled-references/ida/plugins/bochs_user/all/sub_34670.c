__int64 __fastcall sub_34670(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_70C58;
  result = a1[1];
  if ( result )
  {
    a1[2] = 0;
    return qfree();
  }
  return result;
}

