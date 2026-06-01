__int64 sub_49DE0()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)sub_148E0();
  if ( v0[211] )
    term_process();
  v0[211] = 0;
  sub_497F0((__int64)v0);
  if ( v0[125] )
  {
    v0[126] = 0;
    qfree();
    v0[125] = 0;
    v0[127] = 0;
  }
  return 1;
}

