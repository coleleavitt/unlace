void __fastcall sub_6B6C0(unsigned __int64 a1)
{
  if ( a1 > 3
    && (~(unsigned __int16)get_flags_ex(a1 - 4, 4) & 0x600) == 0
    && !(unsigned __int8)get_byte(a1 - 1)
    && (get_flags_ex(a1 - 1, 4) & 0x600) == 0
    && !(unsigned __int8)get_byte(a1 - 2)
    && (get_flags_ex(a1 - 2, 4) & 0x600) == 0 )
  {
    create_align();
  }
}
