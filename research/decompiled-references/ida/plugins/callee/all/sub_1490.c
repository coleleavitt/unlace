__int64 __fastcall sub_1490(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 flags; // rax
  unsigned int v5; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+10h] [rbp-448h] BYREF
  __int64 v10; // [rsp+18h] [rbp-440h] BYREF
  _BYTE v11[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v12; // [rsp+428h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  netnode_check();
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v10, &callui, v1, v2, v3);
  flags = get_flags_ex();
  v5 = 0;
  if ( (~BYTE1(flags) & 6) == 0 )
  {
    netnode_altval();
    v7 = node2ea();
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v7;
    if ( *(_DWORD *)(v8 + 4) == 13 )
      v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
    qsnprintf();
    if ( (unsigned int)sub_12F0((__int64)v11, &v9) )
    {
      if ( v9 == -1 )
      {
        netnode_supdel();
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 13
          && (v9 & 1) == 0
          && (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          v9 |= 1u;
        }
        v10 = ea2node() + 1;
        netnode_supset();
      }
      sub_13C0();
      auto_mark_range();
    }
    return 1;
  }
  return v5;
}

