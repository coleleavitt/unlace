__int64 __fastcall sub_3C5290(char a1, double a2)
{
  char **v3; // rbx

  if ( a1 )
  {
    v3 = &off_4E3180;
    while ( (unsigned __int8)add_idc_func() )
    {
      v3 += 5;
      if ( &algn_4E31E8[16] == (_BYTE *)v3 )
        goto LABEL_5;
    }
    if ( !under_debugger )
      sub_3835A0(0xC9B8u, a2);
LABEL_14:
    BUG();
  }
  if ( !(unsigned __int8)del_idc_func() || !(unsigned __int8)del_idc_func() || !(unsigned __int8)del_idc_func() )
  {
    if ( !under_debugger )
      sub_3835A0(0xC9D0u, a2);
    goto LABEL_14;
  }
LABEL_5:
  add_idc_class();
  set_idc_dtor();
  return set_idc_getattr();
}

