__int64 sub_155C0()
{
  __int64 result; // rax
  td_err_e v1; // esi

  if ( !(unsigned __int8)qgetenv() )
  {
    if ( dword_46588 == -1 )
    {
      sub_13820("IDA_USE_LIBTHREAD_DB", 0);
      result = 2;
      if ( dword_46588 == 1 )
        goto LABEL_6;
    }
    else
    {
      result = 2;
      if ( dword_46588 == 1 )
      {
LABEL_6:
        dword_48130 = result;
        return result;
      }
    }
  }
  if ( byte_480E0 )
  {
LABEL_5:
    result = 3;
    goto LABEL_6;
  }
  v1 = td_init();
  if ( v1 == TD_OK )
  {
    byte_480E0 = 1;
    goto LABEL_5;
  }
  sub_B0B0((__int64)"DBG: td_init error code %d\n", v1);
  if ( byte_480E0 )
    goto LABEL_5;
  dword_48130 = 1;
  return 1;
}

