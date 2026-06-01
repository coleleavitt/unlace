__int64 __fastcall sub_52800(_QWORD *a1, double a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = (unsigned __int8)get_byte() + 1LL;
  if ( (unsigned __int8)create_strlit() )
    result = set_name();
  else
    result = sub_52730((__int64)"%a: can't create template name string\n", a2);
  *a1 += v2;
  return result;
}

