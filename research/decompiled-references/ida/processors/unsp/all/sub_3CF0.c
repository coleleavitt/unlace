unsigned __int64 __fastcall sub_3CF0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  _BYTE v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+A8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  get_segm_name();
  sub_34A0(a2, 0xFFFF, (__int64)byte_56DB, byte_5810);
  if ( (getinf() & 0x100) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 != get_segm_base() )
    {
      btoa64();
      sub_34A0(a2, 0xFFFF, (__int64)word_56EA, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), v4);
    }
  }
  return v5 - __readfsqword(0x28u);
}

