__int64 __fastcall sub_4910(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = off_12BF0;
  a1[13] = off_12C20;
  qfree(a1[24]);
  qfree(a1[15]);
  v2 = (unsigned int)dword_13374;
  a1[30] = 0;
  clr_module_data(v2);
  v3 = a1[27];
  if ( v3 )
  {
    a1[28] = 0;
    qfree(v3);
  }
  v4 = a1[20];
  if ( v4 )
  {
    a1[21] = 0;
    qfree(v4);
  }
  a1[13] = &off_12D28;
  return remove_event_listener(a1 + 13);
}
