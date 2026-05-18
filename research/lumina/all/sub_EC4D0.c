__int64 __fastcall sub_EC4D0(_BYTE *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( !*a1 && (a1[1] & 8) != 0 )
  {
    *a2 = 0;
    return 0;
  }
  else
  {
    result = sub_EC330((__int64)a1);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 16 )
      {
        *a2 = 1;
        return 0;
      }
    }
    else
    {
      *a2 = 0;
      result = sub_EBF40((__int64)a1);
      if ( (_DWORD)result )
        a1[1] &= ~8u;
      else
        a1[1] |= 8u;
    }
  }
  return result;
}
