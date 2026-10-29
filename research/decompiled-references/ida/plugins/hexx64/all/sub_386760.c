__int64 __fastcall sub_386760(__int64 a1, __int64 a2, __int64 *a3, double a4, __m128 a5)
{
  unsigned int v6; // eax
  __int64 v8; // r13
  __int64 tinfo_property; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  copy_tinfo_t();
  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 <= 0x3C )
  {
    if ( v6 > 0x3A )
    {
      tinfo_property = 0;
      v8 = *(unsigned int *)(a2 + 32);
      tinfo_property = get_tinfo_property();
      sub_32D910(a3, (__int64)&tinfo_property, v8);
      clear_tinfo_t();
    }
  }
  else if ( v6 == 64 )
  {
    return sub_3810A0(a1, *(_QWORD *)(a2 + 24), (__int64)a3, 3, a4, a5);
  }
  return v10 - __readfsqword(0x28u);
}

