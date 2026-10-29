unsigned __int64 __fastcall sub_15AF0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v5[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v6; // [rsp+A8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() && get_segm_class() >= 0 && *(_QWORD *)(a3 + 32) )
  {
    btoa64();
    sub_14390(a2, 0xFFFF, (__int64)&dword_1AA6C, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v5);
  }
  return v6 - __readfsqword(0x28u);
}

