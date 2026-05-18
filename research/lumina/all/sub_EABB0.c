__int64 __fastcall sub_EABB0(unsigned int a1, __int64 a2, char *a3, unsigned int a4)
{
  __int64 v6; // rcx

  v6 = (unsigned int)*__errno_location();
  if ( !a3 )
    a3 = "";
  sub_E8BB0(a1, "os_unix.c:%d: (%d) %s(%s) - %s", a4, v6, a2, a3, "");
  return a1;
}
