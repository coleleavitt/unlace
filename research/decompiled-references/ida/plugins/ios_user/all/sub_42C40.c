__int64 __fastcall sub_42C40(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 1384);
  if ( a2 == -3 )
  {
    result = 0;
    if ( v2 )
      return *(_QWORD *)(a1 + 1376);
  }
  else
  {
    result = *(_QWORD *)(a1 + 1376);
    v4 = result + 112 * v2;
    if ( v4 == result )
    {
      return 0;
    }
    else
    {
      while ( *(_DWORD *)(result + 24) != a2 )
      {
        result += 112;
        if ( v4 == result )
          return 0;
      }
    }
  }
  return result;
}

