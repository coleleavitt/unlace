unsigned __int64 __fastcall sub_145E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+A8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  v2 = getseg();
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_class();
    if ( *(_QWORD *)(v2 + 32) )
    {
      btoa64();
      sub_12E30(a2, 0xFFFF, (__int64)byte_18745, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v4);
    }
  }
  return v5 - __readfsqword(0x28u);
}

