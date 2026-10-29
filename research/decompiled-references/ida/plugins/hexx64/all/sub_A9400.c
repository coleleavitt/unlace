char __fastcall sub_A9400(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int64 a4, __int64 a5, double a6)
{
  _DWORD *v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // rax
  bool v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h] BYREF
  __int64 v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v14 = a4;
  v15[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 1) & 0x40) != 0 )
    return 0;
  if ( *(_BYTE *)a3 == 4 )
  {
    v9 = *(_DWORD **)(a3 + 8);
    if ( *v9 == 11
      || (v13 = a5, v10 = sub_30D1C0((__int64)v9), a5 = v13, v10)
      || (v11 = *(_QWORD *)(a3 + 8), *(_DWORD *)v11 == 10)
      && *(_BYTE *)(v11 + 32) == 4
      && (unsigned int)(**(_DWORD **)(v11 + 40) - 23) <= 1 )
    {
      if ( (unsigned int)(*a2 - 1) <= 1 || (unsigned int)(*a2 - 56) <= 1 )
        return 1;
    }
  }
  if ( !a5 )
  {
LABEL_6:
    if ( (unsigned __int8)sub_A8840(a1, (char *)a3, nullptr, &v14, 1u, a6) )
      return v14 != 0;
    return 0;
  }
  v15[0] = 0;
  copy_tinfo_t();
  if ( !(unsigned __int8)sub_A8580(v15, &v14, *(_DWORD *)(a3 + 4), 1u) )
  {
    clear_tinfo_t();
    goto LABEL_6;
  }
  v12 = v14 != 0;
  clear_tinfo_t();
  return v12;
}

