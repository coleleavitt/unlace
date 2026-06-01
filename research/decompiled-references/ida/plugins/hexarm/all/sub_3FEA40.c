__int64 __fastcall sub_3FEA40(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  int v9; // r15d
  char v10; // r8
  int v11; // eax
  unsigned int dtype_size; // r12d
  unsigned int v13; // eax
  int tinfo_size; // eax
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  unsigned int v19; // r15d
  int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  int v23; // ebx
  __int64 v24; // r12
  __int64 v25; // rbp
  unsigned __int8 v26; // al
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // [rsp+4h] [rbp-54h]
  unsigned int v30; // [rsp+4h] [rbp-54h]
  int v31; // [rsp+4h] [rbp-54h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  unsigned int v33; // [rsp+8h] [rbp-50h]
  __int64 v34[9]; // [rsp+10h] [rbp-48h] BYREF

  v34[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_3EE030(a1, a3) )
    return (unsigned __int8)sub_3FE660(a1, a2, a3, a4, a5);
  v9 = sub_3F8180(a1, *(unsigned __int16 *)(a3 + 6), *(_BYTE *)(a3 + 5), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a5);
  if ( *(_BYTE *)(a3 + 1) == 5 && (a4 & 0x80u) != 0 )
  {
    dtype_size = get_dtype_size();
    sub_120450(a2, *(_QWORD *)(a1 + 832), *(_QWORD *)(a3 + 8), dtype_size, *(_QWORD *)(a1 + 40), 0);
    sub_32C760(v34, *(_QWORD *)(a1 + 832), dtype_size, 2);
    copy_tinfo_t();
    clear_tinfo_t();
    return 1;
  }
  if ( !sub_3EDFE0(a1, a3) )
  {
    if ( (a4 & 0x400) != 0 )
    {
      if ( v10 != 1 )
        return 0;
      if ( (unsigned __int16)(*(_WORD *)(a3 + 6) - 61) <= 0x3Fu )
      {
        if ( sub_3EE080(a1, a3) )
          return 0;
        if ( !sub_3EE2E0(a1, a3) )
          goto LABEL_30;
        goto LABEL_27;
      }
      if ( (a4 & 0x100) == 0 )
        return 0;
    }
    else if ( (a4 & 0x100) == 0 || v10 != 1 )
    {
      return 0;
    }
    v32 = *(_QWORD *)(a1 + 832);
    v29 = get_dtype_size();
    sub_32C760(v34, v32, v29, 2);
    sub_32F3F0(a2, v9, v29);
    clear_tinfo_t();
    v11 = 10306;
    if ( !*(_BYTE *)a3 )
      v11 = 12290;
    if ( (v11 & a4) != 0 )
    {
      v15 = get_dtype_size();
      sub_32C480(v34, *(_QWORD *)(a1 + 832), v15);
      copy_tinfo_t();
      clear_tinfo_t();
    }
    return 1;
  }
  if ( sub_3EE080(a1, a3) )
  {
    if ( (a4 & 0x600) == 0 )
    {
      v30 = sub_3EFC90(a1, a3, a5);
      sub_3EE110(a1, a3, a5);
      v13 = get_dtype_size();
      sub_3FE370(v34, *(_QWORD *)(a1 + 832), v13, v30, a4, a5);
      tinfo_size = get_tinfo_size();
      sub_32F3F0(a2, v9, tinfo_size);
      clear_tinfo_t();
      return 1;
    }
    return 0;
  }
  if ( !sub_3EE2E0(a1, a3) )
    goto LABEL_7;
LABEL_27:
  if ( (a4 & 4) == 0 )
  {
    if ( *(char *)(a3 + 34) - 1 > 0 )
      return 0;
LABEL_7:
    if ( (a4 & 0x608) == 0 )
      return 0;
LABEL_30:
    sub_3EE470(a1, a3, 0, a5);
    v16 = get_dtype_size();
    v17 = *(_QWORD *)(a1 + 832);
    if ( (a4 & 2) != 0 )
      sub_32C480(v34, v17, v16);
    else
      sub_32C760(v34, v17, v16, (a4 & 1) + 1);
    v18 = get_tinfo_size();
    sub_32F3F0(a2, v9, v18);
    clear_tinfo_t();
    return 1;
  }
  v31 = sub_3F8240(a1, a3, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a5);
  v19 = sub_3EE210(a1, a3, a5);
  sub_3EFBC0(a1, a3, a5);
  v20 = get_dtype_size();
  v21 = v20;
  if ( v20 > 8 )
  {
    v33 = v20;
    v28 = sub_3EE270(a1, a3, a5);
    v21 = v33;
    if ( (int)(v19 + v28) <= 8 )
      v21 = 8;
  }
  sub_3FE370(v34, *(_QWORD *)(a1 + 832), v21, v19, a4, a5);
  v22 = get_tinfo_size();
  sub_32F3F0(a2, v31, v22);
  clear_tinfo_t();
  v23 = *(char *)(a3 + 34);
  v34[0] = 7;
  v24 = *(_QWORD *)(a1 + 40);
  v25 = *(_QWORD *)(a1 + 832);
  copy_tinfo_t();
  clear_tinfo_t();
  v26 = getinf();
  sub_120450(a2 + 80, v25, v23 - 1, v26, v24, 0);
  v27 = *(_QWORD *)(a2 + 104);
  if ( (_BYTE)v27 )
    *(_QWORD *)(a2 + 104) = v27 | 0x40;
  return 2;
}

