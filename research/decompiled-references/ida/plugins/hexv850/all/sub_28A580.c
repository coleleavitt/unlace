__int64 __fastcall sub_28A580(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v4; // eax
  __int64 v5; // r13
  int v6; // edx
  __int64 v7; // rax
  int v8; // eax

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 61 )
  {
    v2 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v2 + 8) != 61 )
      return 0;
  }
  if ( !v2 || sub_250670(*(__int64 **)(v2 + 24)) != 1 )
    return 0;
  v4 = *(_DWORD *)(a2 + 8);
  if ( v4 == 36 )
  {
    if ( *(_QWORD *)(a2 + 32) != v2 )
      return 0;
    v5 = *(_QWORD *)(a2 + 24);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 == v2 )
      v5 = *(_QWORD *)(a2 + 32);
    if ( v4 == 35 )
    {
      v8 = *(_DWORD *)(v5 + 8);
      if ( v8 == 53 || v8 == 56 )
        goto LABEL_11;
      return 0;
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v5 + 8) - 54) > 1 )
    return 0;
LABEL_11:
  sub_250270(v2);
  clear_tinfo_t();
  j__qfree();
  sub_250490((__int64 *)a2, v5);
  v6 = 54;
  v7 = (unsigned int)(*(_DWORD *)(a2 + 8) - 53);
  if ( (unsigned int)v7 <= 2 )
    v6 = dword_408C98[v7];
  *(_DWORD *)(a2 + 8) = v6;
  if ( (unsigned __int8)sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

