unsigned __int64 __fastcall sub_C820(__int64 a1)
{
  unsigned __int64 v2; // [rsp+18h] [rbp-20h]

  v2 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    validate_name();
    sub_AC30(a1, 0xFFFF, (__int64)&qword_10920, &dword_10CA4);
  }
  return v2 - __readfsqword(0x28u);
}

