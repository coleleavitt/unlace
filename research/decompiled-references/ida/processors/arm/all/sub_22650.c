__int64 __fastcall sub_22650(__int64 a1)
{
  _BYTE *v3; // r14
  __int64 v4; // rbx
  char *v5; // r15
  __int64 v6; // rdi
  char *v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdi

  if ( (get_flags_ex(a1, 4) & 0x4000) == 0 )
  {
    v3 = &unk_8B140;
    v4 = a1;
    v5 = (char *)&unk_8B120 - a1;
    while ( 1 )
    {
      v6 = v4++;
      if ( ((unsigned __int8)get_byte(v6) & (unsigned __int8)~v5[v4 - 1]) != *v3++ )
        break;
      if ( v3 == (_BYTE *)&unk_8B158 )
      {
        set_name(a1, (__int64)"__security_push_cookie", 6144);
        return 1;
      }
    }
    v7 = (char *)&unk_8B0E0;
    v8 = a1;
    while ( 1 )
    {
      v9 = v8;
      if ( ((unsigned __int8)get_byte(v9) & (unsigned __int8)~*v7++) != byte_8B100[++v8 - a1 - 1] )
        break;
      if ( v7 == (char *)&unk_8B0FA )
      {
        set_name(a1, (__int64)"__security_pop_cookie", 6144);
        return 1;
      }
    }
  }
  return 0;
}
