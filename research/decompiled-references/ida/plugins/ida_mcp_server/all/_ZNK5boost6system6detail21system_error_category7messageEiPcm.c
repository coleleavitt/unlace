char *__fastcall boost::system::detail::system_error_category::message(
        boost::system::detail::system_error_category *this,
        int a2,
        char *a3,
        size_t a4)
{
  char *result; // rax
  char buf; // [rsp+17h] [rbp-11h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  if ( a3 )
    return strerror_r(a2, a3, a4);
  buf = 0;
  result = strerror_r(a2, &buf, 0);
  if ( result == &buf )
    return nullptr;
  return result;
}

