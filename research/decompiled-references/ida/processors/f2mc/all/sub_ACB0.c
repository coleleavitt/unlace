unsigned __int64 __fastcall sub_ACB0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v5[136]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v6; // [rsp+C8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    sub_9F90(a2, 0xFFFF, (__int64)qword_F350, &dword_F62C, "const");
    if ( *(_QWORD *)(a3 + 32) )
    {
      btoa64();
      sub_9F90(a2, 0xFFFF, (__int64)&dword_F364, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v5);
    }
  }
  return v6 - __readfsqword(0x28u);
}

