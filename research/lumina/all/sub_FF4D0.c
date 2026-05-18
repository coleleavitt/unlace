__int64 sub_FF4D0()
{
  __int64 v0; // rax

  sub_FF4A0((__int64)&unk_240C40, 1);
  sub_FF4A0((__int64)&unk_240CE8, 0);
  sub_FF4A0((__int64)&unk_240D90, 0);
  sub_FF4A0((__int64)&unk_240E38, 0);
  if ( (_BYTE)word_241484 )
    v0 = xmmword_2414F0(11);
  else
    v0 = 0;
  qword_242248 = v0;
  qword_241120 = (__int64)getenv("SQLITE_TMPDIR");
  qword_241128 = (__int64)getenv("TMPDIR");
  return 0;
}
