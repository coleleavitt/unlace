__int64 __fastcall sub_1499C0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rsi

  result = 1;
  if ( (a2 & 1) == 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1352LL);
      if ( v5 != -1 )
      {
        LOBYTE(result) = a3 != v5;
        LOBYTE(a3) = a4 != v5;
        return (unsigned int)a3 & (unsigned int)result;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

