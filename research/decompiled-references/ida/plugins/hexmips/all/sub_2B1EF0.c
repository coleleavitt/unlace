unsigned __int64 __fastcall sub_2B1EF0(__int64 *a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-58h] BYREF
  __int128 v4; // [rsp+8h] [rbp-50h]
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  char v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  unsigned __int64 v8; // [rsp+48h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v7 = a2;
  v6 = 102;
  v3 = 0;
  v4 = 0;
  v5[1] = a1[5];
  v5[0] = &off_4C17B8;
  sub_2AF160((__int64)v5, &v3);
  sub_7B560(a1, v3, ((_QWORD)v4 == 0) + (_QWORD)v4 - 1LL);
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}

