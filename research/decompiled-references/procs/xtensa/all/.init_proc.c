__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = (__int64 (**)(void))&_gmon_start__;
  if ( &_gmon_start__ )
    return _gmon_start__();
  return result;
}
