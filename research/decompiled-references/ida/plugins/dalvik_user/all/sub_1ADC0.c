__int64 __fastcall sub_1ADC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = 0;
  if ( a2 )
  {
    result = 1;
    if ( !*(_DWORD *)(a1 + 1076) )
    {
      v3 = a2;
      result = 0;
      if ( a2 != (int)a2 )
      {
        result = 1;
        if ( (_DWORD)a2 )
        {
          LOBYTE(result) = (a2 & 7) == 0;
          LOBYTE(v3) = (unsigned int)a2 > 0x100;
          return v3 & (unsigned int)result;
        }
      }
    }
  }
  return result;
}

