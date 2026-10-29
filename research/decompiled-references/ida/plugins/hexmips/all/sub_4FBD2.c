void __noreturn sub_4FBD2()
{
  _QWORD *exception; // rax

  exception = __cxa_allocate_exception(8u);
  *exception = "division by zero occurred when emulating instruction";
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
}

