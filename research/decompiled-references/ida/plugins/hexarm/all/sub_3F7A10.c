__int64 __fastcall sub_3F7A10(__int64 a1, unsigned __int8 a2, signed int a3, int a4, signed int a5, double a6)
{
  unsigned int v6; // r15d
  __int64 v8; // r13
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  __int16 v14; // ax
  __int16 v16; // ax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, int); // rax
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // rax
  char v24; // dl
  char v25; // dl
  __int16 v26; // ax
  __int64 v27; // r8
  char v28; // r8
  char v29; // al
  char v30; // cl
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(__int64, int); // rax
  signed int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 (__fastcall *v37)(__int64, int); // rax
  __int64 v38; // [rsp-10h] [rbp-58h]
  __int64 v39; // [rsp-10h] [rbp-58h]
  __int64 v40; // [rsp-10h] [rbp-58h]
  __int64 v41; // [rsp-8h] [rbp-50h]
  __int64 v42; // [rsp+8h] [rbp-40h]
  int dtype_size; // [rsp+8h] [rbp-40h]

  v6 = 21;
  v8 = a4;
  v12 = *(unsigned __int16 *)(a1 + 48);
  if ( (_WORD)v12 == 331 )
    goto LABEL_6;
  if ( (unsigned __int16)v12 <= 0x14Bu )
  {
    if ( (unsigned __int16)(v12 - 310) <= 1u )
    {
      v6 = 20;
      if ( (unsigned __int16)(v12 - 311) > 0x34u )
        goto LABEL_6;
      goto LABEL_5;
    }
LABEL_26:
    LOWORD(v12) = v12 - 311;
    v6 = 4;
    if ( (unsigned __int16)v12 <= 0x34u )
    {
      v21 = 0x10800000000001LL;
      if ( _bittest64(&v21, v12) )
        goto LABEL_5;
    }
    goto LABEL_6;
  }
  if ( (unsigned __int16)(v12 - 363) > 1u )
    goto LABEL_26;
  v6 = 19;
  if ( (_WORD)v12 != 364 )
  {
LABEL_5:
    v42 = *(int *)(*(_QWORD *)(a1 + 832) + 628LL);
    v13 = sub_3EE110(a1, a1 + 104, a6);
    sub_3F70E0(a1, 7u, v13, a5, 0x3BEA45E214ADDC55LL, v42, a6);
    a5 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL);
  }
LABEL_6:
  if ( !*(_BYTE *)(a1 + 145) )
  {
    if ( *(_BYTE *)(a1 + 105) != 5 )
    {
      v14 = *(_WORD *)(a1 + 48);
      if ( (unsigned __int16)(v14 - 95) <= 0x46u || v14 == 351 || v14 == 358 )
        return sub_3F70E0(a1, v6, a2, a5, 0x3BEA45E214ADDC55LL, a3, a6);
      if ( !under_debugger )
        sub_3835A0(0xC8E5u, a6);
LABEL_81:
      BUG();
    }
    v22 = 0;
    if ( (unsigned int)*(unsigned __int16 *)(a1 + 70) - 45 <= 0x4F )
    {
      v22 = 16;
      if ( *(unsigned __int16 *)(a1 + 70) > 0x3Cu )
        v22 = 4LL * (*(unsigned __int16 *)(a1 + 70) <= 0x5Cu) + 4;
    }
    v23 = v22 / get_dtype_size();
    v24 = *(_BYTE *)(a1 + 96);
    if ( v24 )
    {
      v25 = (unsigned __int8)(v24 - 19) <= 2u;
    }
    else
    {
      v30 = *(_BYTE *)(a1 + 57);
      v25 = 0;
      if ( v30 < 0 )
        v25 = (unsigned __int8)((v30 & 0x7F) - 19) <= 2u;
    }
    return sub_3F7790(a1, v6, a3, a5, v23, *(_BYTE *)(a1 + 109), a6, v25);
  }
  if ( *(_BYTE *)(a1 + 185) )
  {
    if ( *(_BYTE *)(a1 + 225) )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8ECu, a6);
      goto LABEL_81;
    }
    v16 = *(_WORD *)(a1 + 48);
    if ( (unsigned __int16)(v16 - 95) > 0x46u && v16 != 351 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8EDu, a6);
      goto LABEL_81;
    }
    if ( get_dtype_size() != 4 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8EEu, a6);
      goto LABEL_81;
    }
    sub_3F6E70(a1, 4u, a2, a5, 0x3BEA45E214ADDC55LL, a3, a6, 0, 1);
    v17 = *(_QWORD *)(a1 + 832);
    v18 = *(unsigned __int16 *)(a1 + 190);
    v19 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v17 + 168LL);
    if ( v19 == sub_3EA010 )
      v20 = sub_3EA010(v17, v18);
    else
      v20 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64, int), __int64, __int64))v19)(
              v17,
              v18,
              sub_3EA010,
              v38,
              v41);
    sub_3F6E70(a1, 4u, a2, v20, 0x3BEA45E214ADDC55LL, v8, a6, 0, 1);
    return v39;
  }
  dtype_size = get_dtype_size();
  v26 = *(_WORD *)(a1 + 48);
  if ( (unsigned __int16)(v26 - 95) > 0x46u && v26 != 351 )
  {
    if ( sub_3EE080(a1, a1 + 64) )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8E6u, a6);
      goto LABEL_81;
    }
    v27 = (int)v8;
    if ( v6 == 4 )
      v27 = 0x3BEA45E214ADDC55LL;
    sub_3F6E70(a1, v6, a2, a5, v27, a3, a6, 0, 1);
    return v40;
  }
  v28 = *(_BYTE *)(a1 + 109);
  v29 = *(_BYTE *)(a1 + 65);
  if ( *(_BYTE *)(a1 + 69) == v28 && v29 == 1 )
  {
    if ( *(_BYTE *)(a1 + 145) == 12 )
    {
      v35 = *(_QWORD *)(a1 + 832);
      v36 = *(unsigned __int16 *)(a1 + 150);
      v37 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v35 + 168LL);
      if ( v37 == sub_3EA010 )
        a5 = sub_3EA010(v35, v36);
      else
        a5 = v37(v35, v36);
    }
    if ( dtype_size != 4 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8E7u, a6);
      goto LABEL_81;
    }
    if ( *(_WORD *)(a1 + 48) != 165 && get_dtype_size() != 8 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8E8u, a6);
      goto LABEL_81;
    }
    sub_3F6E70(a1, 4u, a2, a5, 0x3BEA45E214ADDC55LL, a3, a6, 0, 1);
    sub_3F6E70(a1, 4u, a2, a5 + 4, 0x3BEA45E214ADDC55LL, (int)v8, a6, 0, 1);
    return v39;
  }
  if ( v29 == 12 )
  {
    v31 = *(_QWORD *)(a1 + 832);
    v32 = *(unsigned __int16 *)(a1 + 70);
    v33 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v31 + 168LL);
    if ( v33 == sub_3EA010 )
    {
      a3 = sub_3EA010(v31, v32);
    }
    else
    {
      v34 = v33(v31, v32);
      v28 = *(_BYTE *)(a1 + 109);
      a3 = v34;
    }
  }
  if ( *(_BYTE *)(a1 + 149) != v28 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8E9u, a6);
    goto LABEL_81;
  }
  if ( get_dtype_size() != 4 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8EAu, a6);
    goto LABEL_81;
  }
  if ( dtype_size != 8 && *(_WORD *)(a1 + 48) != 164 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8EBu, a6);
    goto LABEL_81;
  }
  sub_3F6E70(a1, 4u, *(_BYTE *)(a1 + 109), (int)v8, 0x3BEA45E214ADDC55LL, a3, a6, 0, 1);
  return sub_3F6E70(a1, 4u, *(_BYTE *)(a1 + 109), a5, 0x3BEA45E214ADDC55LL, a3 + 4, a6, 0, 1);
}

