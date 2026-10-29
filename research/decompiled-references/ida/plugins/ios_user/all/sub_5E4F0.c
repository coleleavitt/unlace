__int64 __fastcall sub_5E4F0(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  __int128 v5; // [rsp+8h] [rbp-50h]
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  sub_15620(&v6);
  sub_15620(&v4);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  LOBYTE(v1) = sub_5B360(a1, &v4);
  v2 = v1;
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v2;
}

