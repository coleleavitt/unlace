unsigned __int64 __fastcall sub_4C30(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  void *exception; // rax
  unsigned __int64 result; // rax

  result = a1 + a3;
  if ( a1 + a3 + 12 > a1 + a2 || result < a1 )
  {
    exception = __cxa_allocate_exception(1u);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'bad_cv_t, nullptr);
  }
  return result;
}
