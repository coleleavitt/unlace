unsigned __int64 __fastcall sub_18DE0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  sub_18A90(a1, &v9, a3);
  v5 = v9;
  netnode_setblob(*(_QWORD *)(a2 + 120), v9, v10, a3, 371);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, v5, v6, v7);
  }
  return v11 - __readfsqword(0x28u);
}

