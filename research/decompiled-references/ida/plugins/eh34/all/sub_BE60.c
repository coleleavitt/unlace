__int64 __fastcall sub_BE60(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0;
  if ( a2 != a3 )
  {
    do
    {
      if ( a3 == -1 )
        return 0;
      a3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * a3);
    }
    while ( a2 != a3 );
    return 1;
  }
  return result;
}

