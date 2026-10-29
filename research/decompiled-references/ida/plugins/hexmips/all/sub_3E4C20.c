__int64 __fastcall sub_3E4C20(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 255;
  if ( a2 <= 8 )
  {
    result = 31;
    if ( a2 == 8 )
      return 63;
  }
  return result;
}

