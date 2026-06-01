unsigned __int64 __fastcall sub_163B0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  _BYTE v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+A8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  get_segm_name();
  sub_15820(a2, 0xFFFF, (__int64)byte_1BE4B, &dword_1C204);
  if ( (getinf() & 0x100) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 != get_segm_base() )
    {
      btoa64();
      sub_15820(a2, 0xFFFF, (__int64)byte_1BE5B, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v4);
    }
  }
  return v5 - __readfsqword(0x28u);
}

