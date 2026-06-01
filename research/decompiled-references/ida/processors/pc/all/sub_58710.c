__int64 __fastcall sub_58710(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( (_BYTE)a1 )
  {
    result = a1;
    if ( (_BYTE)a2 )
    {
      if ( (_BYTE)a1 != 7 && (_BYTE)a2 != 7 )
      {
        if ( (_BYTE)a1 == 1 || (_BYTE)a2 == 1 )
          return 1;
        if ( (_BYTE)a1 != 5 && (_BYTE)a2 != 5 )
          return 2;
      }
      return 7;
    }
  }
  return result;
}
