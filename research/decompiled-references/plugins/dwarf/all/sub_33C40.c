__int64 *__fastcall sub_33C40(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx

  v3 = *(_QWORD *)(a3 + 224);
  v4 = v3 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (v3 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v3 == -1 )
  {
    if ( under_debugger )
      BUG();
    interr(30478);
  }
  return sub_20160(a2, (__int64)"$<%llu,%d>", v4, v3 >> 63);
}
