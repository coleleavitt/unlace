__int64 __fastcall sub_EF60(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = a1[1];
  result = 4;
  if ( (_BYTE)v5 != 5 )
  {
    if ( (unsigned __int8)v5 > 5u )
    {
      result = 0;
      if ( (_BYTE)v5 == 7 )
        return 193;
    }
    else
    {
      result = 193;
      if ( (_BYTE)v5 != 2 )
      {
        result = 0;
        if ( (_BYTE)v5 == 4 )
        {
          if ( !*((_QWORD *)a1 + 2) && !(unsigned __int8)is_off(a2, *a1, v5, a4, a5) )
            return 204;
          result = 196;
          if ( (a1[32] & 6) != 0 )
            return 204;
        }
      }
    }
  }
  return result;
}

