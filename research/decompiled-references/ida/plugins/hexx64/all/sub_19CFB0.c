unsigned __int64 __fastcall sub_19CFB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[7]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+38h] [rbp-40h]
  __int64 v7; // [rsp+40h] [rbp-38h] BYREF
  __int128 v8; // [rsp+48h] [rbp-30h]
  unsigned __int64 v9; // [rsp+58h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v5[0] = off_4DE260;
  memset(&v5[1], 0, 32);
  v5[5] = a1;
  v5[6] = a2;
  v6 = a3;
  v7 = 0;
  v8 = 0;
  if ( a2 )
  {
    sub_316CB0(&v7, (__int64 **)(a2 + 16), a3, a4);
    a3 = v6;
  }
  if ( a3 )
    sub_316CB0(&v7, (__int64 **)(a3 + 16), a3, a4);
  sub_11FC20(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL), (__int64)v5);
  v5[0] = off_4DE260;
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v9 - __readfsqword(0x28u);
}

