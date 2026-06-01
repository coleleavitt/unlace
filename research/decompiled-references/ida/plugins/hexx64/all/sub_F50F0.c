bool __fastcall sub_F50F0(__int64 a1, double a2)
{
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 8 )
  {
    if ( !under_debugger )
      sub_383060(0xC3B1u, a2);
    BUG();
  }
  return (unsigned int)sub_F4760(a1, 1) == 1;
}

