__int64 __fastcall sub_5300(unsigned __int16 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  const char *v3; // rbp
  const char *v4; // rbx

  if ( !a1 || a1 >= (unsigned __int64)xmmword_14508 )
    sub_52E0("get_omf_extdef");
  v1 = qword_14500 + 59LL * a1;
  result = 0;
  if ( *(_QWORD *)(v1 + 8) == 7 )
  {
    v3 = *(const char **)v1;
    v4 = "FIARQQFICRQQFIDRQQFISRQQFIWRQQFIERQQFJARQQFJCRQQFJSRQQ";
    do
    {
      if ( !strncmp(v4, v3, 6u) )
        return 1;
      v4 += 6;
    }
    while ( *v4 );
    return 0;
  }
  return result;
}

