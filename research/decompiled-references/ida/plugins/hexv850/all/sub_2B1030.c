__int64 __fastcall sub_2B1030(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v3 = a2[1];
  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  sub_2B0DF0(a1, v3, 0);
  if ( netnode_qgetblob() <= 0 )
    v4 = 0;
  else
    v4 = sub_2B0F70(a2, a1, &v6, 0.0);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v4;
}

