__int64 __fastcall PyW_from_jobj_t(__int64 a1)
{
  __int64 v1; // rbx
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  vars8 = a1;
  vars0 = 3;
  v1 = PyW_from_jvalue_t(&vars0);
  if ( vars0 != 3 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  vars0 = 0;
  vars8 = 0;
  jvalue_t_clear();
  return v1;
}

