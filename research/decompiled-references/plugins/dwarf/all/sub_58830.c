_QWORD *__fastcall sub_58830(__int64 a1, __int64 a2)
{
  if ( (*(_QWORD *)(a2 + 224) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a2 + 224) == -1 )
  {
    if ( under_debugger )
      BUG();
    a1 = 30478;
    interr(30478);
  }
  return sub_58480(a1, (__int64 *)(a2 + 224));
}
