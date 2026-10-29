unsigned __int64 __fastcall sub_2B4E10(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  sub_2B4AC0((__int64)&v4, a2[5], a1, nullptr);
  v2 = v4;
  sub_79160(a2, v4, ((_QWORD)v5 == 0) + (_QWORD)v5 - 1LL);
  if ( v2 )
    qfree();
  return v6 - __readfsqword(0x28u);
}

