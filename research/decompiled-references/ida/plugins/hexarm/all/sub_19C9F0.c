unsigned __int64 __fastcall sub_19C9F0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[7]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h]
  __int64 v6; // [rsp+40h] [rbp-38h] BYREF
  __int128 v7; // [rsp+48h] [rbp-30h]
  unsigned __int64 v8; // [rsp+58h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v4[0] = off_4D8920;
  memset(&v4[1], 0, 32);
  v4[5] = a1;
  v4[6] = a2;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    sub_317070(&v6, a2 + 16);
    a3 = v5;
  }
  if ( a3 )
    sub_317070(&v6, a3 + 16);
  sub_11F660(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL), (__int64)v4);
  v4[0] = off_4D8920;
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}

