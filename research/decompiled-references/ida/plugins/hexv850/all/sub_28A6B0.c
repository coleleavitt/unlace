__int64 __fastcall sub_28A6B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  char v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rbp

  v4 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(v4 + 8) != 61 )
  {
    v4 = *(_QWORD *)(a2 + 40);
    if ( *(_DWORD *)(v4 + 8) != 61 )
      return 0;
  }
  v6 = v4 + 48;
  v7 = sub_250670(*(__int64 **)(v4 + 24));
  if ( v7 > 1 )
    return 0;
  v8 = *(_QWORD *)(a2 + 32);
  v9 = v8;
  if ( v8 == v4 )
    v9 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(v9 + 8) == 61 )
  {
    v15 = sub_250670(*(__int64 **)(v9 + 24));
    if ( v7 != v15 && v15 <= 1 )
    {
      v16 = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a2 + 8) = 48;
      v14 = (v7 ^ 1) & 1;
      if ( v16 )
      {
        sub_250270(v16);
        clear_tinfo_t();
        j__qfree();
      }
      if ( *(_QWORD *)(a2 + 40) )
      {
        sub_250270(*(_QWORD *)(a2 + 40));
        clear_tinfo_t();
        j__qfree();
      }
      *(_QWORD *)(a2 + 32) = 0;
      goto LABEL_14;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_297CD0(v8, v6) || !(unsigned __int8)sub_297CD0(*(_QWORD *)(a2 + 40), v6) )
    return 0;
  v13 = *(_QWORD *)(a2 + 32);
  v14 = (v7 ^ (v13 == v4)) & 1;
  if ( v13 == v4 )
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 8) = (v7 == 0) + 17;
  if ( v4 )
  {
    sub_250270(v4);
    clear_tinfo_t();
    j__qfree();
  }
LABEL_14:
  if ( v14 )
    *(_QWORD *)(a2 + 24) = sub_23F0A0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(a2 + 24), v10, v11, v12);
  *(_QWORD *)(a2 + 40) = 0;
  sub_23EE00(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
  if ( (unsigned __int8)sub_27E740(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}

