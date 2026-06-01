__int64 sub_28120()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)sub_F0E0();
  if ( v0[211] )
    term_process();
  v0[211] = 0;
  sub_27B30((__int64)v0);
  if ( v0[125] )
  {
    v0[126] = 0;
    qfree();
    v0[125] = 0;
    v0[127] = 0;
  }
  return 1;
}

