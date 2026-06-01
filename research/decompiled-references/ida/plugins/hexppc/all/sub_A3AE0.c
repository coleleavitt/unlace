__int64 __fastcall sub_A3AE0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi

  result = *(_QWORD *)(a1 + 56);
  if ( !result )
    return 0;
  do
  {
    if ( *(char *)(result + 4) >= 0 )
      return 0;
    result = *(_QWORD *)(result + 16);
  }
  while ( result );
  if ( *(_DWORD *)(a1 + 76) != 3 || *(_DWORD *)(*(_QWORD *)(a1 + 8) + 352LL) != 1 )
  {
    while ( 1 )
    {
      v2 = *(_QWORD *)(a1 + 48);
      if ( !v2 )
        break;
      sub_9FA40(a1, v2);
    }
    **(_DWORD **)(a1 + 64) |= 0x400u;
    return 1;
  }
  return result;
}

