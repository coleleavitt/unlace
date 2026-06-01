unsigned __int64 __fastcall sub_E6CA0(__int64 a1, char a2, char a3)
{
  int tinfo_property; // eax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v10[8]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property();
  v6 = *(_QWORD *)(a1 + 320);
  v7 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 360) = tinfo_property;
  if ( !(unsigned __int8)sub_32CEA0(a1 + 296, v7, v6) )
  {
    if ( !under_debugger )
      sub_3835A0(52086);
    BUG();
  }
  *(_DWORD *)(a1 + 348) = get_tinfo_property();
  if ( a3 || (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 757LL) & 1) == 0 )
  {
    v9 = 0;
    copy_tinfo_t();
    if ( a2 && (~(unsigned __int16)get_flags_ex() & 0x600) != 0 )
    {
      sub_32C870(v10, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), &v9);
      copy_tinfo_t();
      clear_tinfo_t();
    }
    sub_F2F00(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 320), &v9, 2);
    clear_tinfo_t();
  }
  return v11 - __readfsqword(0x28u);
}

