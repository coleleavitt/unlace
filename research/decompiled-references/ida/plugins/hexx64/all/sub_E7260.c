unsigned __int64 __fastcall sub_E7260(__int64 a1, char a2, char a3, double a4)
{
  int tinfo_property; // eax
  __int64 v7; // rsi
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  v7 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 360) = tinfo_property;
  if ( !sub_32CB80((_BYTE *)(a1 + 296), v7) )
  {
    if ( !under_debugger )
      sub_383060(0xCB76u, a4);
    BUG();
  }
  *(_DWORD *)(a1 + 348) = get_tinfo_property();
  if ( a3 || (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 757LL) & 1) == 0 )
  {
    v11 = 0;
    copy_tinfo_t();
    if ( a2 && (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 )
    {
      sub_32C540(&v12, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v11);
      copy_tinfo_t();
      clear_tinfo_t();
    }
    sub_F34C0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 320), (int)&v11, 2, v9, v10);
    clear_tinfo_t();
  }
  return v13 - __readfsqword(0x28u);
}

