__int64 __fastcall sub_123F70(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) <= a4 )
    return 0;
  result = 0;
  if ( a4 > 0 )
  {
    if ( !(unsigned __int8)sub_123E10(a1, a2, a4, 0) )
      sub_11CDA0((char *)a1, a2, 11, a3, a4);
    return 1;
  }
  return result;
}

