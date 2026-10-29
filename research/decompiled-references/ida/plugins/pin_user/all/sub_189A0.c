__int64 __fastcall sub_189A0(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // rdx
  const char *v5; // rsi
  const char *v6; // rbx
  const char *v7; // rdx

  if ( *(_QWORD *)(a2 + 8) > 1u )
  {
    v4 = *(const char **)a2;
    v5 = s;
    if ( (_QWORD)xmmword_3C438 )
      v5 = (const char *)qword_3C430;
    sub_BDA0((__int64)"Launch PIN: %s %s\n", v5, v4);
  }
  if ( qfopen() )
  {
    sub_BDA0((__int64)"--- contents of %s:\n", "pin.log");
    while ( qgetline() >= 0 )
      sub_BDA0((__int64)"%s\n", s);
    qfclose();
    v6 = "\nPlease check the output window for more details.";
  }
  else
  {
    v6 = "";
  }
  v7 = (const char *)winerr();
  return sub_BCD0((__int64)"IDA failed to connect to PIN: error %d (%s)%s", a3, v7, v6);
}

