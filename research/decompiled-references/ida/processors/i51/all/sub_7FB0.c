__int64 __fastcall sub_7FB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v6; // rax
  _BYTE v7[136]; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v8; // [rsp+F8h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  v2 = getseg();
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(v3 + 184) == 12 && *(_QWORD *)(v4 + 168) )
  {
    get_ea_name();
    v6 = *(_QWORD *)a2;
    *(_DWORD *)(a2 + 144) &= 0xFFFFE7FF;
    (*(void (__fastcall **)(__int64, char *, __int64))(v6 + 136))(a2, &byte_CB04, 0xFFFFFFFFLL);
    return 1;
  }
  if ( (*(_BYTE *)(v4 + 5) & 1) == 0 || (unsigned __int8)is_loaded() || *(_BYTE *)(v3 + 184) != 2 )
    return 0;
  get_segm_base();
  get_item_end();
  btoa64();
  sub_6FB0(a2, 0xFFFF, (__int64)&word_CB26, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL), v7);
  return 1;
}

