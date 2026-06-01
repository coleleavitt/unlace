__int64 __fastcall sub_3E6C20(__int64 a1, unsigned int a2, double a3)
{
  unsigned __int64 v3; // rbp
  bool v4; // zf
  unsigned __int8 v5; // al
  __int64 v6; // rax
  int v7; // ecx
  _QWORD v9[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]
  char v12; // [rsp+21h] [rbp-27h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v3 = -1;
  v4 = *(_BYTE *)(a1 + 65) == 7;
  v13 = __readfsqword(0x28u);
  if ( v4 )
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL)
       & (16LL * *(_QWORD *)(a1 + 24) + (*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFFELL));
  if ( *(_WORD *)(a1 + 48) == 15 && (unsigned __int8)is_mapped() )
  {
    if ( !(unsigned __int8)xrefblk_t_first_from() || v11 != v3 )
      return 0;
    if ( v12 != 17 )
      return 0;
  }
  else if ( !(unsigned __int8)is_call_insn() )
  {
    return 0;
  }
  v5 = *(_BYTE *)(a1 + 65);
  if ( v5 == 7 )
  {
    v6 = *(_QWORD *)(a1 + 832);
    v10 = -4294967290LL;
    v7 = 8 * *(_DWORD *)(v6 + 84);
    if ( (unsigned __int64)v7 <= 0x3F )
      v3 &= ~(-1LL << v7);
    v11 = v3;
    sub_1CF350(a1, 56, (unsigned __int8 *)&v10, nullptr, nullptr);
    sub_1166E0((__int64)&v10);
  }
  else
  {
    if ( v5 > 7u || v5 != 1 && v5 != 4 )
    {
      if ( !under_debugger )
        sub_37B760(0xCA45u, a3);
      BUG();
    }
    v10 = 0x400000001LL;
    v9[0] = 0x200000001LL;
    v11 = a2;
    v9[1] = 296;
    sub_1CF350(a1, 57, (unsigned __int8 *)v9, (unsigned __int8 *)&v10, nullptr);
    sub_1166E0((__int64)&v10);
    sub_1166E0((__int64)v9);
  }
  return 1;
}

