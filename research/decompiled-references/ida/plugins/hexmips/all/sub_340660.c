_QWORD *__fastcall sub_340660(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi

  result = a1;
  if ( (*a1 & 2) == 0 )
  {
    v2 = (_QWORD *)a1[2];
    if ( (*(_BYTE *)v2 & 2) != 0 )
    {
      v3 = (_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFFCLL);
      v4 = *v3;
      if ( (*v3 & 2) == 0 )
      {
        while ( (_QWORD *)v3[2] == result )
        {
          result = v3;
          v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
          v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v4 & 2) != 0 )
            return (_QWORD *)v5;
          v3 = (_QWORD *)v5;
        }
      }
      return v3;
    }
    else
    {
      do
      {
        result = v2;
        v2 = (_QWORD *)v2[1];
      }
      while ( (*(_BYTE *)v2 & 2) == 0 );
    }
  }
  return result;
}

