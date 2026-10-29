__int64 __fastcall sub_3BECD0(char a1, double a2)
{
  char **v3; // rbx

  if ( a1 )
  {
    v3 = &off_4BC440;
    while ( (unsigned __int8)add_idc_func() )
    {
      v3 += 5;
      if ( &algn_4BC4A8[16] == (_BYTE *)v3 )
        goto LABEL_5;
    }
    if ( !under_debugger )
      sub_37CFE0(0xC9B8u, a2);
LABEL_14:
    BUG();
  }
  if ( !(unsigned __int8)del_idc_func() || !(unsigned __int8)del_idc_func() || !(unsigned __int8)del_idc_func() )
  {
    if ( !under_debugger )
      sub_37CFE0(0xC9D0u, a2);
    goto LABEL_14;
  }
LABEL_5:
  add_idc_class();
  set_idc_dtor();
  return set_idc_getattr();
}

