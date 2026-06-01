unsigned __int64 __fastcall sub_C080(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _BYTE v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+A8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  get_segm_name();
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    sub_ADB0(a2, 0xFFFF, (__int64)&qword_11448, byte_127AB);
  else
    sub_ADB0(a2, 0xFFFF, (__int64)&byte_11457, byte_127AB);
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 != get_segm_para() )
  {
    btoa64();
    sub_ADB0(a2, 0xFFFF, (__int64)byte_114CB, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v4);
  }
  return v5 - __readfsqword(0x28u);
}

