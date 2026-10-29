void __noreturn sub_7964()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(8u);
  *exception = &off_8BF10;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_optional_access, sub_20F70);
}

