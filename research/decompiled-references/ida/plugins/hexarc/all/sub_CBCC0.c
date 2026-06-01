unsigned __int64 __fastcall sub_CBCC0(_QWORD *a1, int a2)
{
  _DWORD *v2; // rax
  int v3; // r13d
  _DWORD *v4; // r15
  char *v5; // rax
  char *v6; // rdx
  char *v7; // rdi
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  size_t v11; // r12
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  _QWORD *v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  int v18; // r12d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v22; // ebx
  int v23; // eax
  int v25; // [rsp+0h] [rbp-140h]
  int v26; // [rsp+8h] [rbp-138h]
  __int64 v27; // [rsp+10h] [rbp-130h]
  __int64 v28; // [rsp+18h] [rbp-128h]
  int v29; // [rsp+20h] [rbp-120h]
  int v30; // [rsp+24h] [rbp-11Ch]
  int *v31; // [rsp+28h] [rbp-118h]
  int v32; // [rsp+38h] [rbp-108h]
  int v33; // [rsp+3Ch] [rbp-104h]
  int *v34; // [rsp+48h] [rbp-F8h]
  __int64 *v35; // [rsp+50h] [rbp-F0h]
  _QWORD *v36; // [rsp+58h] [rbp-E8h]
  int v37; // [rsp+60h] [rbp-E0h]
  int v38; // [rsp+68h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-D0h] BYREF
  void *src; // [rsp+80h] [rbp-C0h]
  size_t n[3]; // [rsp+88h] [rbp-B8h]
  _DWORD v42[4]; // [rsp+A0h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-90h]
  int v44; // [rsp+B8h] [rbp-88h]
  void *v45; // [rsp+C0h] [rbp-80h]
  __int128 v46; // [rsp+C8h] [rbp-78h]
  __int64 v47; // [rsp+D8h] [rbp-68h]
  __int128 v48; // [rsp+E0h] [rbp-60h]
  __int64 v49; // [rsp+F0h] [rbp-50h] BYREF
  int v50; // [rsp+F8h] [rbp-48h]
  int v51; // [rsp+FCh] [rbp-44h]
  __int64 v52; // [rsp+100h] [rbp-40h]
  unsigned __int64 v53; // [rsp+108h] [rbp-38h]

  v36 = a1;
  v29 = a2;
  v53 = __readfsqword(0x28u);
  v30 = *(_DWORD *)(a1[188] + 80LL);
  v27 = 104LL * a2;
  v2 = (_DWORD *)(a1[54] + v27);
  v3 = v2[22];
  v4 = v2;
  if ( v3 <= v30 && *v2 != 1 )
  {
    if ( !under_debugger )
      sub_37B760(52647);
LABEL_44:
    BUG();
  }
  v5 = (char *)a1[57];
  v6 = &v5[4 * a1[58]];
  v7 = v5;
  if ( v5 == v6 )
    goto LABEL_40;
  while ( *(_DWORD *)v7 != a2 )
  {
    v7 += 4;
    if ( v6 == v7 )
      goto LABEL_40;
  }
  if ( v6 == v7 )
  {
LABEL_40:
    if ( !under_debugger )
      sub_37B760(52648);
    goto LABEL_44;
  }
  v26 = (_DWORD)v36 + 456;
  memmove(v7, v7 + 4, v6 - v7 - 4);
  --v36[58];
  v8 = v4[6];
  BYTE1(v8) &= 0x7Eu;
  v4[6] = v8 | 0x100000;
  v32 = 0;
  LODWORD(v28) = (unsigned int)sub_CBAE0((__int64)v36);
  if ( *v4 == 1 )
    v32 = (int)sub_1BCC80(v4) % v30;
  v9 = 0;
  v34 = &v38;
  v35 = &v39;
  while ( v3 > 0 )
  {
    v22 = v30;
    if ( v30 <= v3 )
    {
      if ( !v32 )
        goto LABEL_13;
    }
    else
    {
      v22 = round_down_power2();
      if ( !v32 )
        goto LABEL_13;
    }
    v23 = round_down_power2();
    if ( v22 > v23 )
      v22 = v23;
    for ( ; v32 % v22; v22 /= 2 )
      ;
    v32 = (v22 + v32) % v30;
LABEL_13:
    sub_324D40(v34, v36[188], (unsigned int)v22);
    LODWORD(v39) = 0;
    copy_argloc();
    if ( v9 && !(unsigned __int8)sub_1BED60(v35, v36[188], v9, (unsigned int)v4[22], 1) )
    {
      if ( !under_debugger )
        sub_37B760(52649);
      goto LABEL_44;
    }
    v10 = (unsigned int)v4[22];
    if ( (int)v10 > v22 && !(unsigned __int8)sub_1BC020(v35, v36[188], v10, (unsigned int)v22) )
    {
      if ( !under_debugger )
        sub_37B760(52650);
      goto LABEL_44;
    }
    *(_OWORD *)n = 0;
    src = nullptr;
    src = (void *)qvector_reserve();
    n[0] = 1;
    *(_BYTE *)src = 0;
    v42[0] = 0;
    copy_argloc();
    v11 = n[0];
    v43 = -2;
    v44 = 1;
    v45 = nullptr;
    v46 = 0;
    if ( n[0] )
    {
      v45 = (void *)qalloc_or_throw();
      *((_QWORD *)&v46 + 1) = v11;
      memcpy(v45, src, v11);
      *(_QWORD *)&v46 = v11;
    }
    v47 = 0;
    v49 = 0;
    v48 = 0;
    copy_tinfo_t();
    v50 = v22;
    v51 = 0;
    v52 = 0;
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    v15 = v36;
    v16 = sub_1EF1E0(
            (_DWORD)v36,
            (unsigned int)v42,
            0,
            v12,
            v13,
            v14,
            v25,
            v26,
            v27,
            v28,
            v29,
            (_DWORD)v31,
            (unsigned int)&v49,
            v32,
            (unsigned int)v42,
            (_DWORD)v34,
            (_DWORD)v35,
            (_DWORD)v36,
            v37,
            v38,
            v39);
    v36 = v15;
    v17 = v15[5];
    v18 = v16;
    v4 = (_DWORD *)(v15[54] + v27);
    sub_CB650(v28, nullptr, v17, v16, v29, 0, v9, v22);
    v19 = 4LL * v33;
    *(_DWORD *)(v36[54] + 104LL * v18 + 24) |= 0x100u;
    v20 = v36[58];
    v21 = v36[57];
    if ( v36[59] < (unsigned __int64)(v20 + 1) )
    {
      v21 = qvector_reserve();
      v19 = 4LL * v33;
      v36[57] = v21;
      v20 = v36[58];
    }
    v9 += v22;
    v3 -= v22;
    v31 = (int *)(v19 + v21);
    memmove(v31 + 1, v31, 4 * v20 - v19);
    *v31 = v18;
    ++v36[58];
    clear_tinfo_t();
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree();
    }
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree();
    }
    cleanup_argloc();
    cleanup_argloc();
    clear_tinfo_t();
  }
  return v53 - __readfsqword(0x28u);
}

