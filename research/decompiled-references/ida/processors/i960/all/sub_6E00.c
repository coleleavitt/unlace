unsigned __int64 __fastcall sub_6E00(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+C8h] [rbp-40h]

  v3 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    validate_name();
    sub_66C0(a2, 0xFFFF, (__int64)&byte_ACCF, ".data", *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), &dword_AFE4);
  }
  return v3 - __readfsqword(0x28u);
}

