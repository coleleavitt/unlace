ida_mcp::tools::objc_deep::_anonymous_namespace_ *__fastcall ida_mcp::tools::objc_deep::`anonymous namespace'::read_string_at(
        ida_mcp::tools::objc_deep::_anonymous_namespace_ *this,
        __int64 a2)
{
  *(_QWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0;
  if ( (unsigned __int64)(a2 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    get_max_strlit_length();
    get_strlit_contents();
  }
  return this;
}

