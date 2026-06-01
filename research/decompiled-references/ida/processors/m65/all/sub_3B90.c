__int64 __fastcall sub_3B90(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  int v7; // r12d
  bool v8; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v9 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v4 < v5 )
    goto LABEL_2;
  if ( v4 < *(_DWORD *)(v3 + 108) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    v8 = (*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8) & 1) == 0;
    if ( (v7 & 0x100) != 0 )
      sub_38E0(a1, (unsigned __int8 *)(a2 + 40), 1, a2, &v8, a3);
    if ( (v7 & 0x200) != 0 )
      sub_38E0(a1, (unsigned __int8 *)(a2 + 80), 1, a2, &v8, a3);
    if ( (v7 & 4) != 0 )
      sub_38E0(a1, (unsigned __int8 *)(a2 + 40), 0, a2, &v8, a3);
    if ( (v7 & 8) != 0 )
      sub_38E0(a1, (unsigned __int8 *)(a2 + 80), 0, a2, &v8, a3);
    if ( (v7 & 0x4000) != 0 )
      remember_problem();
  }
  else
  {
    v8 = 1;
  }
  if ( v8 )
LABEL_2:
    add_cref();
  return 1;
}

