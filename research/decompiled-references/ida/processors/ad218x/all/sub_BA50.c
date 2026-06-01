__int64 __fastcall sub_BA50(__int64 a1)
{
  const char *v1; // rsi

  getinf_buf();
  qstrlwr();
  qstrncat();
  if ( (unsigned __int8)choose_ioport_device() )
  {
    v1 = (const char *)&dword_F604;
    if ( *(_QWORD *)(a1 + 144) )
      v1 = *(const char **)(a1 + 136);
    sub_B860(a1, v1, 4);
  }
  return 0;
}

