__int64 __fastcall sub_24F9F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-78h] BYREF
  int v5; // [rsp+8h] [rbp-70h]
  __int64 v6; // [rsp+10h] [rbp-68h]
  __int128 v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int128 v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  unsigned __int64 v12; // [rsp+58h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( a1 == a2 )
    return 0;
  v10 = a2;
  v5 = 2;
  v6 = 0;
  v8 = 0;
  v4 = (__int64 (__fastcall **)())&off_4AC4D8;
  v11 = 0;
  v7 = 0;
  v9 = 0;
  v2 = 0;
  if ( (unsigned int)sub_24E700((__int64 *)&v4, a1, 0) )
    v2 = v11;
  v4 = off_4A8538;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v2;
}

