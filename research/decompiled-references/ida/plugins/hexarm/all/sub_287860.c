__int64 __fastcall sub_287860(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // [rsp+0h] [rbp-98h]
  __int64 v14; // [rsp+0h] [rbp-98h]
  __int64 *v15; // [rsp+8h] [rbp-90h]
  __int64 v16; // [rsp+10h] [rbp-88h] BYREF
  int v17; // [rsp+18h] [rbp-80h]
  __int64 v18; // [rsp+1Ch] [rbp-7Ch]
  __int64 *v19; // [rsp+28h] [rbp-70h]
  __int64 *v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  int v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = a2[3];
  if ( *(_QWORD *)(v2 + 72) )
    return 0;
  if ( (unsigned __int8)sub_285520(v2, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_285520(v2, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_2855F0(v2) )
    return 0;
  if ( (get_tinfo_property() & 0xF) != 8 )
    return 0;
  if ( *(_DWORD *)(v2 + 8) == 57 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    if ( *(_DWORD *)(v5 + 8) == 68 && !strncmp(*(const char **)(v5 + 24), "__eh34_", 6u) )
      return 0;
  }
  v6 = *(_QWORD **)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( v6[2] != 1 )
    return 0;
  v7 = *v6;
  if ( *(_QWORD *)(*v6 + 24LL) != -4294967223LL )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v7 + 40) + 72LL) )
    return 0;
  v13 = *(_QWORD *)(v7 + 40);
  LOBYTE(v8) = sub_285720(v13);
  v3 = v8;
  if ( !(_BYTE)v8 )
  {
    return 0;
  }
  else
  {
    v15 = (__int64 *)v13;
    v14 = *(_QWORD *)(v2 + 64);
    *(_QWORD *)(v2 + 64) = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 64LL);
    *(_QWORD *)(*(_QWORD *)(v7 + 40) + 64LL) = 0;
    v9 = j__qalloc_or_throw();
    *(_QWORD *)(v9 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v9 + 8) = 0xFFFFFFFF00000000LL;
    v10 = (__int64 *)v9;
    *(_QWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 48) = 0;
    *(_DWORD *)(v9 + 56) = 0;
    *(_QWORD *)v9 = -1;
    *(_OWORD *)(v9 + 24) = 0;
    v11 = j__qalloc_or_throw();
    *(_QWORD *)(v11 + 40) = 0;
    v12 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 48) = 0;
    *(_QWORD *)v11 = -1;
    *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
    *(_DWORD *)(v11 + 56) = 0;
    *(_OWORD *)(v11 + 24) = 0;
    sub_281DA0(v10, (__int64 *)v2);
    sub_281DA0(v12, v15);
    v20 = v12;
    v16 = -1;
    v17 = 18;
    v18 = -1;
    v19 = v10;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    sub_281DA0(&v16, (__int64 *)v2);
    if ( v14 )
    {
      sub_255410(v14);
      j__qfree();
    }
    sub_244580(v2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
    sub_283EA0(a2);
    sub_2559F0((__int64)&v16);
    clear_tinfo_t();
  }
  return v3;
}

