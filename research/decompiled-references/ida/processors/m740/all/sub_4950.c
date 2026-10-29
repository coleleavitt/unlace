unsigned __int64 __fastcall sub_4950(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // r13
  _BYTE v5[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v6; // [rsp+A8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  get_segm_name();
  v2 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
  if ( (v2 & 1) != 0 )
  {
    sub_3F70(a2, 0xFFFF, (__int64)&qword_74E0, &qword_7630);
  }
  else if ( (v2 & 2) != 0 )
  {
    sub_3F70(a2, 0xFFFF, (__int64)&byte_74EF, &qword_7630);
  }
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 != get_segm_para() )
  {
    btoa64();
    sub_3F70(a2, 0xFFFF, (__int64)byte_74FB, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v5);
  }
  return v6 - __readfsqword(0x28u);
}

