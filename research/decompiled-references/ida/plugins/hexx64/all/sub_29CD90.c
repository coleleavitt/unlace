__int64 __fastcall sub_29CD90(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // r13d
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v15; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-B0h]
  __int64 v17; // [rsp+10h] [rbp-A8h]
  __int64 v18; // [rsp+20h] [rbp-98h]
  __int64 v19; // [rsp+28h] [rbp-90h]
  __int64 v20; // [rsp+58h] [rbp-60h]
  __int64 v21; // [rsp+60h] [rbp-58h]
  __int64 v22; // [rsp+70h] [rbp-48h]
  __int64 v23; // [rsp+78h] [rbp-40h]
  unsigned __int64 v24; // [rsp+88h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v24 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(v3 + 48);
  v6 = &v5[*(_QWORD *)(v3 + 56)];
  if ( v5 != v6 )
  {
    while ( v4 != *v5 )
    {
      if ( v6 == ++v5 )
        goto LABEL_8;
    }
    if ( v5 != v6 )
    {
      if ( (unsigned __int8)sub_29CC80(a2) )
        return 0;
      v4 = *(_QWORD *)(a1 + 16);
    }
  }
LABEL_8:
  if ( (*(_BYTE *)(v4 + 26) & 4) != 0 && (get_tinfo_property() & 0xF) == 0xA )
    return 0;
  if ( !*(_BYTE *)a2 )
    return 0;
  v7 = *(_QWORD **)(a1 + 8);
  v8 = *(_QWORD *)(v7[1] + 8LL);
  v9 = *(_DWORD *)(v8 + 72);
  v10 = v9 - 208;
  LOBYTE(v11) = sub_1EF340(*(_QWORD *)(a1 + 16), *(_QWORD *)(*v7 + 112LL), a2, v9, 4 * (v9 - 208 > 0x2F), a3);
  v12 = v11;
  if ( !(_BYTE)v11 )
    return 0;
  if ( v10 <= 0x2F )
    return v12;
  v13 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v13 + 25) & 1) == 0 || *(_DWORD *)v13 == 1 )
    return v12;
  sub_D10B0((__int64)&v15, **(_QWORD **)(a1 + 8), *(_DWORD *)(v8 + 72));
  if ( !(unsigned __int8)sub_D4680((__int64)&v15, v8, *(_DWORD **)(a1 + 16)) )
  {
    if ( v22 )
    {
      v23 = 0;
      qfree(v22);
    }
    if ( v20 )
    {
      v21 = 0;
      qfree(v20);
    }
    if ( v18 )
    {
      v19 = 0;
      qfree(v18);
    }
    if ( v16 )
    {
      v17 = 0;
      qfree(v16);
    }
    return 0;
  }
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
  }
  if ( v20 )
  {
    v21 = 0;
    qfree(v20);
  }
  if ( v18 )
  {
    v19 = 0;
    qfree(v18);
  }
  if ( v16 )
  {
    v17 = 0;
    qfree(v16);
  }
  return v12;
}

