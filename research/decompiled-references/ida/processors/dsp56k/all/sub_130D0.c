__int64 __fastcall sub_130D0(__int64 *a1)
{
  const char *v1; // rsi

  getinf_buf();
  qstrlwr();
  qstrncat();
  if ( (unsigned __int8)choose_ioport_device() )
  {
    v1 = byte_17A50;
    if ( a1[18] )
      v1 = (const char *)a1[17];
    sub_12F10(a1, v1, 4);
  }
  return 0;
}

