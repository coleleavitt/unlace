unsigned __int64 __fastcall sub_7B70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 i; // rbp
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  sub_7490(&v7);
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
  {
    for ( i = 0; i < v4; ++i )
    {
      reg_update_strlist();
      v4 = *(_QWORD *)(a3 + 8);
    }
  }
  if ( v4 > *(_QWORD *)(a1 + 8784) )
    v4 = *(_QWORD *)(a1 + 8784);
  while ( v4 )
  {
    --v4;
    reg_update_strlist();
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v9 - __readfsqword(0x28u);
}

