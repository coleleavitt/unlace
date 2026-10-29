unsigned __int64 __fastcall sub_7D30(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r13
  _BYTE v6[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v7; // [rsp+A8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  get_segm_name();
  sub_6A50(a2, 0xFFFF, (__int64)&qword_96B8, byte_9B30);
  if ( (getinf() & 0x100) != 0 )
  {
    v5 = *a3;
    if ( v5 != get_segm_base() )
    {
      btoa64();
      sub_6A50(a2, 0xFFFF, (__int64)&byte_96C7, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), v6);
    }
  }
  return v7 - __readfsqword(0x28u);
}

