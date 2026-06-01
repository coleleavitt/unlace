__int64 sub_49D0()
{
  const char *errdesc; // rax
  const char *v2; // rax

  if ( qfopen() )
  {
    if ( !(unsigned int)base2file() )
    {
      errdesc = (const char *)get_errdesc();
      sub_4900((__int64)"%s", errdesc);
    }
    qfclose();
    return 1;
  }
  else
  {
    v2 = (const char *)get_errdesc();
    sub_4900((__int64)"%s", v2);
    return 0;
  }
}

