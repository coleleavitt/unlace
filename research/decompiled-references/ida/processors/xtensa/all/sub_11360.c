unsigned __int64 __fastcall sub_11360(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char v4[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+A8h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  get_segm_name();
  sub_10390(a2, (__int64)&unk_144E2, byte_14F84);
  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 != get_segm_base() )
  {
    btoa64();
    sub_10390(a2, (__int64)"%s %s", *(const char **)(*(_QWORD *)(a1 + 24) + 32LL), v4);
  }
  return v5 - __readfsqword(0x28u);
}

