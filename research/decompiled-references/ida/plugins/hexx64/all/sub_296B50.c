unsigned __int64 __fastcall sub_296B50(__int64 a1, int a2, int a3)
{
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-68h] BYREF
  int v5; // [rsp+8h] [rbp-60h]
  __int64 v6; // [rsp+10h] [rbp-58h]
  __int128 v7; // [rsp+18h] [rbp-50h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+44h] [rbp-24h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v10 = a2;
  v11 = a3;
  v5 = 0;
  v6 = 0;
  v8 = 0;
  v4 = (__int64 (__fastcall **)())&off_4E0D10;
  v7 = 0;
  v9 = 0;
  sub_255A80((__int64 *)&v4, a1, 0, 0.0);
  v4 = off_4DBCF8;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v12 - __readfsqword(0x28u);
}

