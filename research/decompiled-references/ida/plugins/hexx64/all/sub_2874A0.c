__int64 __fastcall sub_2874A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  const char *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // r14
  __int64 v17; // [rsp+0h] [rbp-98h]
  __int64 v18; // [rsp+0h] [rbp-98h]
  __int64 *v19; // [rsp+8h] [rbp-90h]
  __int64 v20; // [rsp+10h] [rbp-88h] BYREF
  int v21; // [rsp+18h] [rbp-80h]
  __int64 v22; // [rsp+1Ch] [rbp-7Ch]
  __int64 *v23; // [rsp+28h] [rbp-70h]
  __int64 *v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+38h] [rbp-60h]
  __int64 v26; // [rsp+40h] [rbp-58h]
  int v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v2 = a2[3];
  if ( *(_QWORD *)(v2 + 72) )
    return 0;
  if ( (unsigned __int8)sub_285160(v2, 1, 1) )
    return 0;
  if ( (unsigned __int8)sub_285160(v2, 66, 1) )
    return 0;
  if ( (unsigned __int8)sub_285230(v2) )
    return 0;
  v6 = (const char *)&word_2;
  if ( (get_tinfo_property() & 0xF) != 8 )
    return 0;
  if ( *(_DWORD *)(v2 + 8) == 57 )
  {
    v7 = *(_QWORD *)(v2 + 24);
    if ( *(_DWORD *)(v7 + 8) == 68 )
    {
      v6 = "__eh34_";
      if ( !strncmp(*(const char **)(v7 + 24), "__eh34_", 6u) )
        return 0;
    }
  }
  v8 = *(_QWORD **)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( v8[2] != 1 )
    return 0;
  v9 = *v8;
  if ( *(_QWORD *)(*v8 + 24LL) != -4294967223LL )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 40) + 72LL) )
    return 0;
  v17 = *(_QWORD *)(v9 + 40);
  LOBYTE(v10) = sub_285360(v17);
  v11 = v17;
  v3 = v10;
  if ( !(_BYTE)v10 )
  {
    return 0;
  }
  else
  {
    v19 = (__int64 *)v17;
    v18 = *(_QWORD *)(v2 + 64);
    *(_QWORD *)(v2 + 64) = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL);
    *(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL) = 0;
    v12 = j__qalloc_or_throw(64, (__int64)v6, 0, v11);
    *(_QWORD *)(v12 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v12 + 8) = 0xFFFFFFFF00000000LL;
    v13 = (__int64 *)v12;
    *(_QWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 48) = 0;
    *(_DWORD *)(v12 + 56) = 0;
    *(_QWORD *)v12 = -1;
    *(_OWORD *)(v12 + 24) = 0;
    v15 = j__qalloc_or_throw(64, 0, v14, 0);
    *(_QWORD *)(v15 + 40) = 0;
    v16 = (__int64 *)v15;
    *(_QWORD *)(v15 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v15 + 48) = 0;
    *(_QWORD *)v15 = -1;
    *(_QWORD *)(v15 + 16) = 0xFFFFFFFFLL;
    *(_DWORD *)(v15 + 56) = 0;
    *(_OWORD *)(v15 + 24) = 0;
    sub_2819E0(v13, (__int64 *)v2);
    sub_2819E0(v16, v19);
    v24 = v16;
    v20 = -1;
    v21 = 18;
    v22 = -1;
    v23 = v13;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    sub_2819E0(&v20, (__int64 *)v2);
    if ( v18 )
    {
      sub_255050(v18, 0.0);
      j__qfree(v18);
    }
    sub_2441C0(v2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, 0.0);
    sub_283AE0(a2);
    sub_255630((__int64)&v20, 0.0);
    clear_tinfo_t();
  }
  return v3;
}

