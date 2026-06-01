void __fastcall __noreturn sub_E6C0(char a1)
{
  const char *v1; // rsi

  v1 = "idp";
  if ( a1 )
    v1 = "compatibility";
  sub_E450((__int64)"Internal error (%s)", v1);
}

