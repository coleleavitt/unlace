unsigned __int64 __fastcall sub_8350(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+0h] [rbp-F8h]
  _BYTE v6[136]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v7; // [rsp+C8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    sub_79C0(a2, 0xFFFF, (__int64)byte_D4AB, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), ".data", &byte_D9A4, 0);
    if ( *(_QWORD *)(a3 + 32) )
    {
      btoa64();
      sub_79C0(a2, 0xFFFF, (__int64)word_D4BA, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v6);
    }
    if ( v5 )
      qfree();
  }
  return v7 - __readfsqword(0x28u);
}

