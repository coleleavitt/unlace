unsigned __int64 __fastcall sub_71B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _BYTE v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+A8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  get_segm_name();
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    sub_64E0(a2, 0xFFFF, (__int64)&qword_C270, qword_C098);
  else
    sub_64E0(a2, 0xFFFF, (__int64)&byte_C27F, qword_C098);
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 != get_segm_para() )
  {
    btoa64();
    sub_64E0(a2, 0xFFFF, (__int64)&byte_C28F, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v4);
  }
  return v5 - __readfsqword(0x28u);
}

