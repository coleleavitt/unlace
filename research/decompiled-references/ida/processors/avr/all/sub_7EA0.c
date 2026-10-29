__int64 __fastcall sub_7EA0(double a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7, __int64 *a8)
{
  __int64 module_data; // rax
  __int64 v11; // rbp
  __int64 v12; // rax

  module_data = get_module_data();
  if ( *(_BYTE *)(module_data + 349) == 1
    && !a5
    && (*(_DWORD *)(a6 + 24) & 0x4F) != (*(_DWORD *)(module_data + 316) | 0x40)
    && !*(_QWORD *)(a6 + 16)
    && *(_QWORD *)a6 != -1 )
  {
    v11 = *a8;
    v12 = (unsigned __int8)segtype() == 2 ? get_wide_byte() : (unsigned __int16)get_word();
    if ( v11 == v12 )
      return 3;
  }
  sub_7DD0((__int64)"%a: Unexpected or incorrect CUSTOM offset\n", a1);
  return 0;
}

