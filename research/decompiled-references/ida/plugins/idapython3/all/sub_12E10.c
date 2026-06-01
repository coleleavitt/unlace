__int64 __fastcall sub_12E10(__int64 a1, const char *a2)
{
  const char *v2; // rdi
  __int64 v3; // rdi

  v2 = "__main__";
  if ( a2 )
  {
    v2 = a2;
    if ( !*a2 )
      v2 = "__main__";
  }
  v3 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 560))(v2);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(qword_24798 + 696))(v3);
  else
    return 0;
}

