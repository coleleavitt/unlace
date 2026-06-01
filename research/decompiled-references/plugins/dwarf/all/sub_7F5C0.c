unsigned __int64 __fastcall sub_7F5C0(__int64 a1, __int64 a2)
{
  void *exception; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 result; // rax

  v3 = qtime64();
  v4 = (unsigned int)(1000000 * HIDWORD(v3) + v3);
  result = *(_QWORD *)(a1 + 8) + 500000LL;
  if ( result < v4 )
  {
    result = callui(27, a2);
    if ( (_BYTE)result )
    {
      exception = __cxa_allocate_exception(1u);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'dwarf_cancelled_t, nullptr);
    }
    *(_QWORD *)(a1 + 8) = v4;
  }
  return result;
}
