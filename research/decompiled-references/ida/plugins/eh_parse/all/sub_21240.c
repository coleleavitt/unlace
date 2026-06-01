__int64 __fastcall sub_21240(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // dl
  __int64 result; // rax

  v2 = byte_279E0[(unsigned __int8)get_byte(a1)];
  result = 1;
  *a2 = v2;
  if ( v2 > 0xBu )
    return v2 < 0x16u ? 2 : 4;
  return result;
}

