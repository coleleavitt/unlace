unsigned __int64 __fastcall sub_54A30(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // rsi
  const char *v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = nullptr;
  v8 = 0;
  sub_54680(a1, (__int64 *)&v7);
  v5 = v7;
  netnode_setblob(*(_QWORD *)(a2 + 120), v7, v8, a3, 371);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, v5);
  }
  return v9 - __readfsqword(0x28u);
}

