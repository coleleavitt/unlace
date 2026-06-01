__int64 __fastcall sub_28EEE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // al
  int tinfo_size; // r12d
  unsigned __int8 v6; // [rsp+Fh] [rbp-39h]
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 51
    || *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL) != 48
    || (get_tinfo_property() & 0x2F) != 0xD )
  {
    return 0;
  }
  get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 0xB
    && (tinfo_size = get_tinfo_size(), tinfo_size == (unsigned int)get_tinfo_size()) )
  {
    sub_328210(v7, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(a2 + 32) + 48LL);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_240540(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    sub_240540(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    if ( (unsigned __int8)sub_27FE80(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v6 = v4;
  clear_tinfo_t();
  return v6;
}

