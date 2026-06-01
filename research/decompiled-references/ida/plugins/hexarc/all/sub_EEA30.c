bool __fastcall sub_EEA30(__int64 a1)
{
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + 64LL) != 8 )
  {
    if ( !under_debugger )
      sub_37B760(50097);
    BUG();
  }
  return (unsigned int)sub_EE0A0(a1, 1) == 1;
}

