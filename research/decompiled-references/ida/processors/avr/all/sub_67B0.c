unsigned __int64 __fastcall sub_67B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+0h] [rbp-108h]
  _BYTE v6[136]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v7; // [rsp+C8h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_spec_segm() )
  {
    get_segm_name();
    get_segm_class();
    sub_5E40(a2, 0, (__int64)&unk_B37F, ".ESEG", *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), &unk_B62C, 0);
    if ( *(_QWORD *)(a3 + 32) )
    {
      btoa64();
      sub_5E40(a2, 0xFFFF, (__int64)&unk_B359, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v6);
    }
    if ( v5 )
      qfree();
  }
  return v7 - __readfsqword(0x28u);
}

