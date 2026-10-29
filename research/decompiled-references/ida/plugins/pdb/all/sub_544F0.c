__int64 __fastcall sub_544F0(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = sub_7DFA0(*a2);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == -1 )
      return 2147500037LL;
    sub_244A0();
    *(_QWORD *)(*a2 + 128) = 0;
    *(_DWORD *)(*a2 + 136) &= ~8u;
    *(_DWORD *)(*a2 + 136) |= 2u;
    *(_DWORD *)(*a2 + 136) &= ~0x10u;
    if ( (unsigned int)sub_29C90() != 1 )
      return 2147500037LL;
    else
      return (unsigned int)sub_54430(a1, (const char *)a2) != 0;
  }
  return result;
}

