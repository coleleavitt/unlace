unsigned __int64 sub_33A440()
{
  __int64 v1; // [rsp+20h] [rbp-B0h] BYREF
  __int128 v2; // [rsp+28h] [rbp-A8h]
  unsigned __int64 v3; // [rsp+98h] [rbp-38h]

  v3 = __readfsqword(0x28u);
  if ( !qstrftime() )
    qstrncpy();
  v1 = 0;
  v2 = 0;
  sub_67670(&v1);
  qsnprintf();
  if ( v1 )
  {
    *(_QWORD *)&v2 = 0;
    qfree();
  }
  return v3 - __readfsqword(0x28u);
}

