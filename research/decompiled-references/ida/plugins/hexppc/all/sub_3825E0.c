__int64 __fastcall sub_3825E0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // eax
  __int64 v6; // r13
  __int64 tinfo_property; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  copy_tinfo_t();
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 <= 0x3C )
  {
    if ( v4 > 0x3A )
    {
      tinfo_property = 0;
      v6 = *(unsigned int *)(a2 + 32);
      tinfo_property = get_tinfo_property();
      sub_3295D0(a3, (__int64)&tinfo_property, v6);
      clear_tinfo_t();
    }
  }
  else if ( v4 == 64 )
  {
    return sub_37CF20(a1, *(_QWORD *)(a2 + 24), (__int64)a3, 3);
  }
  return v8 - __readfsqword(0x28u);
}

