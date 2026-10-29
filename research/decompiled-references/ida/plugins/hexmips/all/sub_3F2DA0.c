__int64 __fastcall sub_3F2DA0(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    a1[1] = 0;
    result = qfree();
    *a1 = 0;
    a1[2] = 0;
  }
  return result;
}

