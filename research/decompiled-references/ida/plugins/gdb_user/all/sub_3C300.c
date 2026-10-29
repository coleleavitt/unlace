__int64 __fastcall sub_3C300(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  sub_F710(&v4);
  LOBYTE(v1) = sub_3A5F0(a1, &v4);
  v2 = v1;
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v2;
}

