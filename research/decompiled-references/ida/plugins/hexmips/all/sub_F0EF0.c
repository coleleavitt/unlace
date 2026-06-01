bool __fastcall sub_F0EF0(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 8 )
  {
    if ( !under_debugger )
      sub_37E160(50097);
    BUG();
  }
  return (unsigned int)sub_F0560(a1, 1) == 1;
}

