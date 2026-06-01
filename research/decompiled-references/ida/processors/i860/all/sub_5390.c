unsigned __int64 __fastcall sub_5390(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  const char *v5; // rcx
  __int64 v7; // r13
  _BYTE v8[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v9; // [rsp+A8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  get_segm_name();
  sub_4570(a2, 0xFFFF, (__int64)qword_6678, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), &dword_687C);
  v4 = *(_BYTE *)(a3 + 40);
  v5 = ".word";
  if ( v4 != 2 )
  {
    v5 = ".float";
    if ( v4 != 3 )
      v5 = ".byte";
  }
  sub_4570(a2, 0xFFFF, (__int64)&qword_6688, v5);
  if ( (getinf() & 0x100) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    if ( v7 != get_segm_base() )
    {
      btoa64();
      sub_4570(
        a2,
        0xFFFF,
        (__int64)&word_6696,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL),
        v8);
    }
  }
  return v9 - __readfsqword(0x28u);
}

