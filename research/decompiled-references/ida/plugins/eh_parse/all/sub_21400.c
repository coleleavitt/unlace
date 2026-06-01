void __fastcall sub_21400(unsigned int *a1)
{
  *(_QWORD *)a1 = &off_2ED18;
  if ( a1[60] )
  {
    unregister_custom_data_format(a1[61]);
    unregister_custom_data_type(a1[60]);
  }
  operator delete(a1, 0xF8u);
}

