const char *__fastcall sub_AA60(__int64 a1, int a2)
{
  char v2; // al

  v2 = byte_DDF9[a2];
  if ( v2 != *(_BYTE *)(a1 + 232) )
    *(_BYTE *)(a1 + 232) = v2;
  if ( v2 == 1 )
  {
    *(_QWORD *)(a1 + 272) = "pic30.cfg";
    return "pic30.cfg";
  }
  else if ( v2 == 2 )
  {
    *(_QWORD *)(a1 + 272) = "pic33.cfg";
    return "pic33.cfg";
  }
  else if ( v2 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return (const char *)sub_AAE0(10326);
  }
  else
  {
    *(_QWORD *)(a1 + 272) = "pic24.cfg";
    return "pic24.cfg";
  }
}

