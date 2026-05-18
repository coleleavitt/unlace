__int64 __fastcall sub_C68F0(unsigned __int8 *a1, int a2)
{
  __int64 result; // rax

  result = sub_C6820(a1);
  if ( (char)result <= 64 || (char)a2 <= 64 )
  {
    if ( (char)result < 65 )
      return a2 | 0x40u;
  }
  else
  {
    if ( (char)result > 66 )
      return 67;
    result = 65;
    if ( (char)a2 > 66 )
      return 67;
  }
  return result;
}
