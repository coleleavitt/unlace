void __fastcall sub_572D0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = &unk_C9C30;
  v2 = a1[43];
  if ( v2 )
  {
    a1[44] = 0;
    qfree(v2);
  }
  v3 = a1[39];
  if ( v3 )
  {
    a1[40] = 0;
    qfree(v3);
  }
  v4 = a1[36];
  if ( v4 )
  {
    a1[37] = 0;
    qfree(v4);
  }
  sub_1B750((__int64)(a1 + 1));
}

