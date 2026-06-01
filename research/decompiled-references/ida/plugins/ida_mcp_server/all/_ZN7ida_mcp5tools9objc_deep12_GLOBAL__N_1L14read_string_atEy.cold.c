void __fastcall __noreturn ida_mcp::tools::objc_deep::`anonymous namespace'::read_string_at(
        ida_mcp::tools::objc_deep::_anonymous_namespace_ *this)
{
  _QWORD *v1; // rbx
  struct _Unwind_Exception *v2; // r14

  if ( *v1 )
  {
    v1[1] = 0;
    qfree();
  }
  _Unwind_Resume(v2);
}

