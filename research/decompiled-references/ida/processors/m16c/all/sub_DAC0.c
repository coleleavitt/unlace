__int64 __fastcall sub_DAC0(char a1)
{
  __int64 result; // rax

  if ( (a1 & 0xBF) == 0x3F )
  {
    result = get_byte() & 3;
    if ( (_DWORD)result )
    {
      LOBYTE(result) = (_BYTE)result != 1;
      return (unsigned int)(result + 1);
    }
  }
  else
  {
    result = a1 & 3;
    if ( (a1 & 3) != 0 )
    {
      LOBYTE(result) = (_BYTE)result != 1;
      return (unsigned int)(result + 1);
    }
  }
  return result;
}

