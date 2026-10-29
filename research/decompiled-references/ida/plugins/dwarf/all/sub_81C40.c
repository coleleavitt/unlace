char *__fastcall sub_81C40(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 224) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a1 + 224) == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
  }
  return sub_81860((__int64 *)(a1 + 224), nullptr, 0);
}

