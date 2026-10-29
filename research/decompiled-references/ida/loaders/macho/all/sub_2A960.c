unsigned __int64 __fastcall sub_2A960(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // r12
  __int64 v6; // rax
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  char v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v3 = *(_BYTE *)(a3 + 161);
  v9 = __readfsqword(0x28u);
  v7.m128i_i64[0] = (__int64)off_644C0;
  v7.m128i_i64[1] = -1;
  v8 = v3;
  sub_27280(a3, &v7, (__int64 (*)())a3, (__int64 (*)())off_644C0);
  v4 = v7.m128i_i64[1];
  if ( v7.m128i_i64[1] != -1 )
  {
    v6 = *(_QWORD *)(a2 + 240);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v6 && v6 != -1 )
    {
      if ( !*(_QWORD *)(a2 + 184) || !rangeset_t_find_range() )
        return v9 - __readfsqword(0x28u);
      v4 = v7.m128i_i64[1];
    }
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) != 0 )
    {
      sub_1A010();
      v7.m128i_i64[1] = v4 & 0xFFFFFFFFFFFFFFFELL;
    }
    if ( (get_flags_ex() & 0xC000) != 0x4000 )
      set_name();
    if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 )
    {
      if ( getinf() == -1 )
        setinf();
      else
        add_entry();
    }
    auto_mark_range();
    auto_mark_range();
  }
  return v9 - __readfsqword(0x28u);
}

