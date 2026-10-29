unsigned __int64 __fastcall sub_C3D50(double a1)
{
  unsigned __int64 result; // rax

  if ( a1 <= -9.223372036854776e18 )
    return 0x8000000000000000LL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( a1 < 9.223372036854776e18 )
    return (unsigned int)(int)a1;
  return result;
}
