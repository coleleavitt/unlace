unsigned __int64 __fastcall sub_B120(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // ax
  __int64 v6; // r13
  char v7; // al
  const char *v8; // r8
  __int64 v9; // rcx
  _BYTE v10[136]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v11; // [rsp+A8h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  get_segm_name();
  v4 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 4LL);
  if ( (v4 & 0x400) != 0 )
  {
    validate_name();
    v7 = segtype();
    v8 = "DATA";
    if ( v7 == 2 )
      v8 = "CODE";
    sub_A7A0(a2, 0xFFFF, (__int64)&unk_F489, byte_11204, v8);
  }
  else if ( (v4 & 0x200) != 0 )
  {
    validate_name();
    sub_A7A0(a2, 0xFFFF, (__int64)&unk_F4AF, "segment", byte_11204);
  }
  else if ( (v4 & 0x80u) != 0 )
  {
    validate_name();
    sub_A850(a2, (__int64)"segment '%s'", byte_11204);
    v9 = 99;
    if ( !*(_BYTE *)(a3 + 40) )
      v9 = 97;
    sub_A7A0(a2, 0xFFFF, (__int64)&unk_F4C6, v9);
  }
  if ( (getinf() & 0x100) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6 != get_segm_base() )
    {
      btoa64();
      sub_A7A0(a2, 0xFFFF, (__int64)&unk_F4AF, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v10);
    }
  }
  return v11 - __readfsqword(0x28u);
}

