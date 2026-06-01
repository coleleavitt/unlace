unsigned __int64 __fastcall sub_1B6C0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-38h] BYREF
  int v4; // [rsp+8h] [rbp-30h]
  __int64 v5; // [rsp+10h] [rbp-28h] BYREF
  __int128 v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  v4 = 0;
  v3 = off_C7520;
  v5 = 0;
  sub_9D820(a1, a2, &v3, &v5);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v7 - __readfsqword(0x28u);
}

