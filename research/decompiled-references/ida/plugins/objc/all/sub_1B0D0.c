unsigned __int64 sub_1B0D0()
{
  __int64 v1; // [rsp+0h] [rbp-28h] BYREF
  __int128 v2; // [rsp+8h] [rbp-20h]
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v1 = 0;
  v2 = 0;
  sub_D6A0(&v1);
  set_name();
  if ( v1 )
  {
    *(_QWORD *)&v2 = 0;
    qfree();
  }
  return v3 - __readfsqword(0x28u);
}
