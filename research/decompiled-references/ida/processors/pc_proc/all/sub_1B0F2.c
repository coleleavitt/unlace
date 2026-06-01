__int64 __fastcall sub_1B0F2(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}

