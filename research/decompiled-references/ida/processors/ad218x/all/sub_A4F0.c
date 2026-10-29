unsigned __int64 __fastcall sub_A4F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() && (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) == 0 )
  {
    get_segm_name();
    sub_8FB0(a2, 0xFFFF, (__int64)"endsec");
  }
  return v3 - __readfsqword(0x28u);
}

