unsigned __int64 __fastcall sub_3F5110(__int64 a1, __int64 a2)
{
  __int64 custom_refinfo; // rax
  char v4; // [rsp+18h] [rbp-30h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  get_flags_ex();
  if ( (unsigned __int8)is_off() )
  {
    if ( (unsigned __int8)get_refinfo() )
    {
      if ( (v4 & 0x40) != 0 )
      {
        custom_refinfo = get_custom_refinfo();
        if ( custom_refinfo )
        {
          if ( !strcmp(*(const char **)(custom_refinfo + 8), "PAGEOFF") )
            *(_BYTE *)(a2 + 49) |= 0x20u;
        }
      }
    }
  }
  return v5 - __readfsqword(0x28u);
}

