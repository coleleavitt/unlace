__int64 __fastcall sub_1BDF0(__int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 i; // rbx
  __int64 v3; // rax
  __int64 v5; // [rsp+8h] [rbp-80h] BYREF
  __int64 v6; // [rsp+10h] [rbp-78h]
  __int128 v7; // [rsp+18h] [rbp-70h]
  __int64 v8; // [rsp+30h] [rbp-58h] BYREF
  __int128 v9; // [rsp+38h] [rbp-50h]
  unsigned __int64 v10; // [rsp+48h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  for ( i = *a2; i < a2[1]; i = get_item_end() )
  {
    op_offset();
    v3 = *a1;
    v6 = 0;
    v5 = 0;
    v7 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(v3 + 136))(a1, &v5, i)
      && get_strlit_contents() > 0 )
    {
      sub_1B0D0();
      v8 = 0;
      v9 = 0;
      sub_D6A0(&v8);
      set_name();
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
      if ( !v6 )
        continue;
    }
    else if ( !v6 )
    {
      continue;
    }
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return 1;
}
