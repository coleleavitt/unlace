__int64 __fastcall sub_192B0(__int64 a1, __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  __int64 v5; // r15
  __int64 v8; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // r13d
  int flags; // eax
  const char *v15; // rsi
  const char *v16; // rsi
  int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // r12
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 v26; // rdi
  int v27; // eax
  unsigned __int64 v28; // r14
  unsigned int v29; // eax
  bool v30; // zf
  unsigned int v31; // eax
  int v32; // [rsp+8h] [rbp-70h]
  unsigned int v33; // [rsp+Ch] [rbp-6Ch]
  unsigned int v34; // [rsp+10h] [rbp-68h]
  unsigned int dword; // [rsp+14h] [rbp-64h]
  const char *v36; // [rsp+20h] [rbp-58h] BYREF
  __int128 v37; // [rsp+28h] [rbp-50h]
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v5 = a2 + 4;
  v8 = *(_QWORD *)(a1 + 8);
  v38 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_17230(v8, a2 + 4, 1u) )
  {
    dword = get_dword(v5);
    v20 = (dword >> 8) & 0x3FFFFF;
    v33 = dword >> 31;
    v32 = dword & 0x40000000;
    if ( (dword & 0x40000000) != 0 )
    {
      v21 = 4 * v20;
      v34 = v21;
      v32 = 0x40000000;
      if ( v21 )
        v10 = v21;
      else
        v10 = 4;
    }
    else
    {
      v30 = 2 * v20 == 0;
      v31 = 2 * v20;
      v34 = v31;
      if ( v30 )
        v10 = 2;
      else
        v10 = v31;
    }
  }
  else
  {
    LOBYTE(v33) = 0;
    v10 = 2;
    LOBYTE(dword) = 0;
    v34 = 0;
    v32 = 0;
  }
  v12 = sub_17230(*(_QWORD *)(a1 + 8), a3, v10);
  if ( !(_BYTE)v12 )
    return v12;
  if ( *(_DWORD *)(a1 + 76) )
  {
    if ( a3 <= 7 || !(_BYTE)v33 )
      return v12;
  }
  else
  {
    flags = get_flags_ex(a2, 4, v11);
    if ( (flags & 0x600) != 0x400
      || (flags & 0xF0000000) != 0x20000000
      || (v22 = get_flags_ex(v5, 4, 1024), (v22 & 0x600) != 0x400)
      || (v22 & 0xF0000000) != 0x20000000 )
    {
      sub_111C0(*(_QWORD *)(a1 + 8), a2, 8);
      create_data(a2, 0x20000000, 4, -1);
      create_data(v5, 0x20000000, 4, -1);
    }
    sub_11320(*(_QWORD *)(a1 + 8), a2);
    v36 = nullptr;
    v37 = 0;
    sub_8A10((__int64 *)&v36, (__int64)"Function start");
    v15 = s1;
    if ( (_QWORD)v37 )
      v15 = v36;
    set_cmt(a2, v15, 0);
    sub_8A10(
      (__int64 *)&v36,
      (__int64)"Function end: %a, prolog end: %a, 32-bit: %d, has EH: %d",
      0.0,
      a5,
      a3 + v34,
      a3 + (v32 == 0 ? 2 : 4) * (unsigned __int8)dword);
    v16 = s1;
    if ( (_QWORD)v37 )
      v16 = v36;
    set_cmt(v5, v16, 0);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( a3 <= 7 || !(_BYTE)v33 )
      goto LABEL_18;
  }
  v19 = 0;
  if ( !(unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), a3 - 8, 1u) || (v23 = get_dword(a3 - 8), v19 = v23, v23 <= 1) )
  {
    if ( !(unsigned __int8)get_fixups(0, a3 - 8, 4) )
      goto LABEL_26;
  }
  v24 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v24 + 124) & 2) != 0 )
    v19 += *(_QWORD *)(a1 + 24);
  if ( !(unsigned __int8)sub_17230(v24, v19, 1u) )
LABEL_26:
    v19 = -1;
  v25 = 0;
  if ( !(unsigned __int8)sub_17230(*(_QWORD *)(a1 + 8), a3 - 4, 1u) || (v29 = get_dword(a3 - 4), v25 = v29, v29 <= 1) )
  {
    if ( !(unsigned __int8)get_fixups(0, a3 - 4, 4) )
      goto LABEL_18;
  }
  v26 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v26 + 124) & 2) != 0 )
    v25 += *(_QWORD *)(a1 + 24);
  if ( !(unsigned __int8)sub_17230(v26, v25, 1u) || v19 == -1 || v25 == -1 )
  {
LABEL_18:
    v17 = *(_DWORD *)(a1 + 76);
    goto LABEL_19;
  }
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 && sub_114F0(a3) )
    return v12;
  v27 = *(_DWORD *)(a1 + 76);
  if ( v27 )
  {
    if ( v27 != 1 )
      return v12;
    v28 = a3 + v34;
  }
  else
  {
    v28 = a3 + v34;
    sub_EFD0(*(_QWORD *)(a1 + 8), a3, v28, v19);
    v17 = *(_DWORD *)(a1 + 76);
    if ( v17 != 1 )
      goto LABEL_19;
  }
  sub_160D0(*(_QWORD *)(a1 + 8), a3, v28, v19, v25, 0, 0, *(_DWORD *)(a1 + 72));
  v17 = *(_DWORD *)(a1 + 76);
LABEL_19:
  if ( !v17 && (get_aflags(a3) & 0x20000000) == 0 )
  {
    v18 = a3 + v34;
    if ( !v34 )
      v18 = -1;
    sub_16AF0(a3, v18);
  }
  return v12;
}

