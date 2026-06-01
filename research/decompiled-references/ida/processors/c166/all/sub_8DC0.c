unsigned __int64 __fastcall sub_8DC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 segment_alignment; // r14
  unsigned __int8 v6; // al
  _BYTE v7[136]; // [rsp+50h] [rbp-C0h] BYREF
  unsigned __int64 v8; // [rsp+D8h] [rbp-38h]

  v8 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    get_segment_combination();
    segment_alignment = get_segment_alignment();
    v6 = getinf();
    sub_7D40(a2, 0, (__int64)&byte_E277, (unsigned int)v6 - 1, s1, s1, segment_alignment);
    if ( *(_QWORD *)(a3 + 32) )
    {
      btoa64();
      sub_7D40(a2, 0xFFFF, (__int64)byte_E291, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v7);
    }
    sub_7D40(a2, 0, (__int64)byte_E29B, s1);
  }
  return v8 - __readfsqword(0x28u);
}

