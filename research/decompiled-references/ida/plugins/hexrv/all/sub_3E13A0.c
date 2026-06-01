unsigned __int64 __fastcall sub_3E13A0(__int64 a1, _QWORD *a2)
{
  _QWORD *exception; // rdi
  unsigned __int64 v4; // [rsp+8h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  qstrncat();
  if ( !(unsigned __int8)parse_decl() )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = "Bad pattern type declaration";
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  *a2 = 0;
  clear_tinfo_t();
  return v4 - __readfsqword(0x28u);
}

