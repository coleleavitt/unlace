char __fastcall sub_4B2D0(char a1, char a2, unsigned __int64 a3, unsigned int a4)
{
  char result; // al
  __int64 v5; // rax

  result = 0;
  if ( (unsigned int)a3 >= a4 )
  {
    if ( a1 )
    {
      if ( (_DWORD)a3 != 63 )
      {
        result = (a2 ^ 1) & (a4 == 0);
        if ( result )
        {
          if ( (unsigned int)a3 <= 0x1F )
          {
            v5 = 2147516544LL;
            return !_bittest64(&v5, a3);
          }
        }
        else
        {
          return a1;
        }
      }
    }
    else if ( (_DWORD)a3 != 31 )
    {
      result = 1;
      if ( !a4 )
        return (a3 & 0xFFFFFFF7) != 7;
    }
  }
  return result;
}
