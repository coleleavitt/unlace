__int64 __fastcall sub_B060(__int64 a1)
{
  const char *v1; // rsi

  getinf_buf();
  qstrlwr();
  qstrncat();
  if ( (unsigned __int8)choose_ioport_device() )
  {
    v1 = (const char *)&qword_E058;
    if ( *(_QWORD *)(a1 + 144) )
      v1 = *(const char **)(a1 + 136);
    sub_AE70(a1, v1, 4);
  }
  return 0;
}

