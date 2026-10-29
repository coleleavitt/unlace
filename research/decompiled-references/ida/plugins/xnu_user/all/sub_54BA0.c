__int64 sub_54BA0()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)sub_158A0();
  if ( v0[211] )
    term_process();
  v0[211] = 0;
  sub_545B0((__int64)v0);
  if ( v0[125] )
  {
    v0[126] = 0;
    qfree();
    v0[125] = 0;
    v0[127] = 0;
  }
  return 1;
}

