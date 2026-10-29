unsigned __int64 __fastcall sub_4430(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v5; // [rsp+88h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  if ( (getinf() & 0x100) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 != get_segm_base() )
    {
      btoa64();
      sub_3BE0(a2, 0xFFFF, (__int64)&qword_5668, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), &v4);
    }
  }
  return v5 - __readfsqword(0x28u);
}

