__int64 __fastcall sub_11DC40(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0;
  if ( (unsigned __int64)a2 <= 8 )
  {
    v3 = 255LL << (8 * (unsigned __int8)a2 - 8);
    if ( a2 )
    {
      do
      {
        if ( (v3 & ~a1) != 0 )
          break;
        result = (unsigned int)(result + 1);
        v3 >>= 8;
      }
      while ( a2 != (_DWORD)result );
    }
  }
  return result;
}

