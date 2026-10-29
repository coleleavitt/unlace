unsigned __int64 __fastcall sub_9FC0(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  char v5; // r8
  unsigned __int8 byte; // bp
  unsigned __int8 v8; // al
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v5 = a5 & 0x1F;
  v9 = __readfsqword(0x28u);
  if ( (a4 & 1) != 0 )
  {
    get_data_value();
  }
  else if ( v5 == 17 || (unsigned __int8)(v5 - 22) <= 1u )
  {
    if ( (unsigned __int8)get_data_value() )
    {
      byte = get_byte();
      v8 = get_byte();
      sub_9FC0(a1, a2, 0, byte, v8);
    }
  }
  return v9 - __readfsqword(0x28u);
}
