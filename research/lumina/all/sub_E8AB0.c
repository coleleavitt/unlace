const char *__fastcall sub_E8AB0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  const char *result; // rax
  __int64 v6; // rdx

  v4 = a2;
  if ( qword_242248 )
    xmmword_241500(qword_242248);
  result = dlerror();
  if ( result )
  {
    a2 = a3;
    result = (const char *)sub_E89C0(v4, a3, "%s", result);
  }
  if ( qword_242248 )
    return (const char *)xmmword_241510(qword_242248, a2, v6);
  return result;
}
