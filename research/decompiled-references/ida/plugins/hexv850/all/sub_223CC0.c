bool __fastcall sub_223CC0(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  unsigned __int64 v5; // rsi
  bool result; // al

  if ( a3 != -1 )
  {
    if ( *(_DWORD *)(a1 + 116) )
    {
      if ( a3 )
      {
        v5 = *(_QWORD *)(a1 + 136);
        if ( *(int *)(a1 + 116) + v5 - 1 >= a2 && a3 + a2 - 1 >= v5 )
          return 1;
      }
    }
  }
  result = 0;
  if ( a4 )
    return result;
  return (unsigned __int8)sub_1EA5F0(a1, a2, 1) || (__int64)(a2 + 1) > *(_QWORD *)(a1 + 144) - *(int *)(a1 + 120);
}

