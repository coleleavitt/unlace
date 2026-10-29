__int64 sub_286D0()
{
  __int64 result; // rax

  if ( !qword_2439D0 )
  {
    qword_2439D0 = j__pthread_self();
    result = sub_19A2A0();
    qword_2439D8 = result;
  }
  return result;
}
