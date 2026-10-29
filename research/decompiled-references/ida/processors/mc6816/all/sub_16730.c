unsigned __int64 __fastcall sub_16730(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+38h] [rbp-30h]

  v3 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    if ( *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL) == 1 )
    {
      sub_15EC0(a2, 0xFFFF, (__int64)&unk_1A4AD, byte_1A764);
    }
    else
    {
      validate_name();
      sub_15F70(a2, (__int64)"Segment Name: %s", byte_1A764);
    }
  }
  return v3 - __readfsqword(0x28u);
}

