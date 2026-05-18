void *__fastcall sub_6D510(__int64 *a1, __int64 a2, const void *a3, size_t a4)
{
  void *result; // rax

  if ( HIDWORD(a4) )
  {
    if ( !unk_2439A0 )
      sub_198E10(1576);
    BUG();
  }
  sub_69D50(a1);
  result = (void *)sub_69D50(a1);
  if ( a4 )
    return sub_67AC0(a1, a3, a4);
  return result;
}
