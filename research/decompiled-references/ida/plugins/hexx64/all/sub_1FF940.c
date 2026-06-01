__int64 __fastcall sub_1FF940(__int64 a1, int *a2, unsigned __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v8; // rbp
  _QWORD *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rax
  signed int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // r15d
  bool v16; // zf
  int v17; // eax
  int v18; // r11d
  __int64 tinfo_size; // rax
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // rax
  __m128i *v23; // r8
  int *v24; // rsi
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // eax
  int v30; // r11d
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  char v33; // al
  unsigned __int64 v34; // rdx
  char v35; // al
  int v36; // eax
  __m128i *v37; // rax
  char v38; // al
  int v39; // eax
  __int64 v40; // r12
  __m128i *v41; // r13
  unsigned __int64 v42; // rdx
  char *v43; // rdi
  __m128i *v44; // r12
  __int32 v45; // ecx
  __int32 v46; // edx
  __int32 *v47; // rax
  __m128i *v48; // rsi
  unsigned int v49; // r13d
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  int v52; // r12d
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // r12
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdi
  char v61; // al
  bool v62; // al
  char tinfo_property; // al
  _QWORD *v64; // rcx
  __int64 v65; // rsi
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // r8
  int srce; // [rsp+8h] [rbp-B0h]
  int src; // [rsp+8h] [rbp-B0h]
  signed int srca; // [rsp+8h] [rbp-B0h]
  signed int srcb; // [rsp+8h] [rbp-B0h]
  __m128i *srcc; // [rsp+8h] [rbp-B0h]
  void *srcd; // [rsp+8h] [rbp-B0h]
  __m128i *srcf; // [rsp+8h] [rbp-B0h]
  __int64 v77; // [rsp+20h] [rbp-98h]
  signed __int64 v78; // [rsp+20h] [rbp-98h]
  int v79; // [rsp+34h] [rbp-84h] BYREF
  _QWORD *v80; // [rsp+38h] [rbp-80h] BYREF
  __int64 v81; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v82; // [rsp+48h] [rbp-70h]
  signed __int64 v83; // [rsp+50h] [rbp-68h] BYREF
  char v84; // [rsp+58h] [rbp-60h]
  __m128i *v85; // [rsp+60h] [rbp-58h] BYREF
  __int128 v86; // [rsp+68h] [rbp-50h]
  unsigned __int64 v87; // [rsp+78h] [rbp-40h]

  v8 = *a2;
  v87 = __readfsqword(0x28u);
  v9 = (_QWORD *)a4;
  v10 = **(_QWORD **)(a1 + 48) + 104 * v8;
  v11 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v11 + 320) && (*(_WORD *)(v10 + 24) & 0x180) != 0 )
  {
LABEL_3:
    if ( (*(_DWORD *)v11 & 0x40000) == 0
      && *(_BYTE *)a3 == 15
      && (unsigned __int8)sub_1CBA80(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a3, 1, a5, a6) )
    {
      return 1;
    }
    else
    {
      v12 = *(_DWORD *)(v10 + 88);
      *(_DWORD *)(v10 + 24) |= 0x400u;
      v13 = *(_QWORD *)(a1 + 8);
      v85 = nullptr;
      *(_QWORD *)&v86 = 0;
      sub_1EFA10(*(_DWORD **)(v13 + 1504), (__int64 *)(v13 + 496), v10, v12, &v85, 0);
      v14 = -1;
      cleanup_argloc();
      sub_1F08B0(*(_QWORD **)(a1 + 8), *(_QWORD *)(v10 + 16), 0xAu);
    }
    return v14;
  }
  a5 = 0.0;
  v16 = *(_BYTE *)a3 == 15;
  v81 = 0;
  v82 = 0;
  v85 = nullptr;
  v86 = 0;
  if ( v16 )
  {
    v17 = sub_1FC560(a1, &v81, (__int64 *)&v85, (_DWORD *)v10, a3, a4, (__m128i)0LL, a6);
    v18 = v17;
    if ( !v17 )
      goto LABEL_37;
  }
  else
  {
    v17 = sub_1FBEF0(a1, &v81, (__int64 *)&v85, (_DWORD *)v10, a3, a4, (__m128i)0LL, a6);
    v18 = v17;
    if ( !v17 )
      goto LABEL_37;
  }
  if ( !v9 || (srce = v17, tinfo_size = get_tinfo_size(), v18 = srce, srce != tinfo_size) )
    v9 = nullptr;
  v20 = *(_QWORD *)(a1 + 8);
  if ( (_QWORD)v86 )
  {
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      v23 = v85;
      v24 = &v85->m128i_i32[v22];
      v25 = *v24;
      v26 = **(_QWORD **)(a1 + 48) + 104LL * *v24;
      if ( *(_BYTE *)(v20 + 320) )
        break;
      v27 = *(_QWORD *)(v20 + 40);
      if ( *(_QWORD *)(v26 + 16) == v27 )
      {
        *(_QWORD *)(v10 + 16) = v27;
        v25 = *v24;
        v20 = *(_QWORD *)(a1 + 8);
      }
      v28 = *(_DWORD *)(v20 + 792);
      if ( v28 <= v25 || v28 > (int)v8 )
      {
LABEL_15:
        v22 = ++v21;
        if ( v21 >= (unsigned __int64)v86 )
          goto LABEL_22;
      }
      else
      {
        *v24 = v8;
        ++v21;
        LODWORD(v8) = v25;
        v20 = *(_QWORD *)(a1 + 8);
        v10 = **(_QWORD **)(a1 + 48) + 104LL * v25;
        v22 = v21;
        if ( v21 >= (unsigned __int64)v86 )
          goto LABEL_22;
      }
    }
    if ( (*(_BYTE *)(v26 + 25) & 1) != 0 )
      goto LABEL_38;
    goto LABEL_15;
  }
LABEL_22:
  if ( (*(_BYTE *)(v20 + 2) & 4) != 0
    && *(_DWORD *)(a1 + 104) > (int)v8
    && (*(_DWORD *)(v20 + 792) > (int)v8 || *(_DWORD *)v10 == 1) )
  {
    goto LABEL_37;
  }
  if ( *(_BYTE *)a3 != 5 )
    goto LABEL_27;
  v31 = *(int *)(v20 + 116);
  if ( (_DWORD)v31 )
  {
    v32 = *(_QWORD *)(v20 + 136);
    if ( v32 + v31 - 1 >= v82 && v82 + v18 - 1 >= v32 )
    {
LABEL_37:
      v23 = v85;
LABEL_38:
      if ( v23 )
      {
        *(_QWORD *)&v86 = 0;
        qfree((__int64)v23);
      }
      cleanup_argloc();
      v11 = *(_QWORD *)(a1 + 8);
      goto LABEL_3;
    }
  }
  srca = v18;
  v78 = v82;
  v33 = sub_1EF9B0(v20, v82, v18);
  v20 = *(_QWORD *)(a1 + 8);
  v18 = srca;
  if ( v33 )
  {
    v34 = *(_QWORD *)(v20 + 144);
    if ( v34 < v78 + 1 || srca == 1 || v78 + srca - 1 < v34 )
    {
      if ( (__int64)v34 <= v78 )
      {
        v83 = v78;
        v84 = 5;
        v35 = sub_227ED0(v20, (__int64)&v83, v9, srca);
        v18 = srca;
        if ( !v35 )
          goto LABEL_37;
        v20 = *(_QWORD *)(a1 + 8);
      }
      goto LABEL_27;
    }
    goto LABEL_37;
  }
LABEL_27:
  v79 = *(_DWORD *)(v10 + 92);
  v77 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)v20 & 1) != 0 )
  {
    srcb = v18;
    v36 = sub_1C2AD0((int *)&v81, (int *)v10, 0.0);
    v18 = srcb;
    if ( v36 )
    {
      v77 = sub_1FC740(a1, v10, srcb, (int *)&v81, &v79, (__int64 *)&v85);
      v18 = srcb;
      if ( v77 == -1 )
        goto LABEL_37;
    }
  }
  src = v18;
  v29 = sub_1FF8B0(a1, v8, (int *)&v81, v18, (__int64)&v85);
  v30 = src;
  v14 = v29;
  if ( v29 )
  {
    if ( v29 != 1 )
      goto LABEL_37;
    goto LABEL_30;
  }
  if ( *(_BYTE *)a3 != 15 )
    goto LABEL_54;
  v59 = get_tinfo_size();
  v60 = *(_QWORD *)(a3 + 8);
  if ( src == v59 )
  {
    v37 = *(__m128i **)(a1 + 8);
    v9 = (_QWORD *)(v60 + 48);
    goto LABEL_56;
  }
  v61 = sub_1C3110(v60, 0, 0, 0.0);
  v30 = src;
  if ( !v61 )
  {
    if ( !under_debugger )
      sub_383060(0xC7DBu, 0.0);
    goto LABEL_108;
  }
  if ( (*(_BYTE *)(a3 + 1) & 2) == 0 || (v62 = sub_11CA80(*(_DWORD *)(a3 + 4)), v30 = src, v62) )
  {
LABEL_54:
    v37 = *(__m128i **)(a1 + 8);
    goto LABEL_55;
  }
  tinfo_property = get_tinfo_property();
  v30 = src;
  v16 = (tinfo_property & 0x2F) == 13;
  v37 = *(__m128i **)(a1 + 8);
  if ( v16 )
  {
    v64 = (_QWORD *)v37[87].m128i_i64[0];
    v65 = *(_QWORD *)(a1 + 32);
    if ( v64 )
    {
      v66 = *v64 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v66 )
        goto LABEL_55;
      v67 = *(_QWORD *)(v65 + 24);
      while ( (*(_BYTE *)v66 & 2) == 0 )
      {
        v68 = *(_QWORD *)(v66 + 24);
        if ( v67 >= v68 )
        {
          if ( v68 >= v67 )
          {
            if ( v64 != (_QWORD *)v66 )
              goto LABEL_55;
            break;
          }
          v66 = *(_QWORD *)(v66 + 16);
        }
        else
        {
          v66 = *(_QWORD *)(v66 + 8);
        }
      }
    }
    v80 = (_QWORD *)(v65 + 24);
    sub_C7FB0(v37 + 87, (unsigned __int64 *)(v65 + 24), &v80);
    copy_tinfo_t();
    v37 = *(__m128i **)(a1 + 8);
    v30 = src;
  }
LABEL_55:
  if ( v9 )
  {
LABEL_56:
    v38 = sub_1EF950(v10, v37[94].m128i_i64[0], v9, v37[4].m128i_u32[2], 10, 0.0);
    goto LABEL_57;
  }
  v38 = sub_1EF5A0((_DWORD *)v10, (_QWORD *)v37[94].m128i_i64[0], v30, v37[4].m128i_u32[2], 2, 0.0);
LABEL_57:
  if ( !v38 )
    goto LABEL_37;
  copy_argloc();
  *(_QWORD *)(v10 + 16) = v77;
  *(_DWORD *)(v10 + 92) = v79;
  v39 = v86;
  v40 = 4 * v86;
  v41 = (__m128i *)((char *)v85 + 4 * v86);
  if ( v85 != v41 )
  {
    if ( v40 >> 2 )
    {
      _BitScanReverse64(&v42, v40 >> 2);
      srcc = v85;
      sub_1FB3C0(v85, &v85->m128i_i8[4 * v86], 2LL * (int)v42);
      v43 = (char *)srcc;
      if ( v40 > 64 )
      {
        v44 = srcc + 4;
        sub_1FB300(srcc->m128i_i8, srcc[4].m128i_i8);
        do
        {
          v45 = v44->m128i_i32[0];
          v46 = v44[-1].m128i_i32[3];
          v47 = &v44[-1].m128i_i32[3];
          if ( v46 <= v44->m128i_i32[0] )
          {
            v48 = v44;
          }
          else
          {
            do
            {
              v47[1] = v46;
              v48 = (__m128i *)v47;
              v46 = *--v47;
            }
            while ( v45 < v46 );
          }
          v44 = (__m128i *)((char *)v44 + 4);
          v48->m128i_i32[0] = v45;
        }
        while ( v41 != v44 );
        goto LABEL_65;
      }
    }
    else
    {
      srcf = v85;
      sub_1FB3C0(v85, &v85->m128i_i8[4 * v86], -2);
      v43 = (char *)srcf;
    }
    sub_1FB300(v43, v41->m128i_i8);
LABEL_65:
    v39 = v86;
  }
  v49 = v39 - 1;
  if ( v39 - 1 >= 0 )
  {
    v50 = 4LL * v49;
    while ( 1 )
    {
      srcd = (void *)v50;
      v51 = *(int *)((char *)v85->m128i_i32 + v50);
      v52 = *(__int32 *)((char *)v85->m128i_i32 + v50);
      if ( v51 >= *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) || (_DWORD)v51 == (_DWORD)v8 )
        break;
      sub_1FEC60(a1, v52, v8, 0.0, a6);
      LODWORD(v8) = v8 - (v52 < (int)v8);
      v53 = *(_DWORD *)(a1 + 104);
      if ( v53 > v52 )
        *(_DWORD *)(a1 + 104) = v53 - 1;
      v54 = *(_QWORD *)(a1 + 8);
      v55 = *(_DWORD *)(v54 + 792);
      if ( v55 > v52 )
        *(_DWORD *)(v54 + 792) = v55 - 1;
      --v49;
      v50 = (__int64)srcd - 4;
      if ( v49 == -1 )
        goto LABEL_75;
    }
    if ( !under_debugger )
      sub_383060(0xC497u, 0.0);
LABEL_108:
    BUG();
  }
LABEL_75:
  v56 = **(_QWORD **)(a1 + 48) + 104LL * (int)v8;
  sub_214580(*(_QWORD **)(a1 + 8), v8);
  *a2 = v8;
  v57 = *(_DWORD *)v56;
  if ( *(_DWORD *)(a1 + 104) <= (int)v8 )
  {
    if ( v57 == 1 )
      sub_232C00(*(_QWORD *)(a1 + 8), *(_QWORD *)(v56 + 8), *(_DWORD *)(v56 + 88));
    goto LABEL_31;
  }
  v58 = *(_QWORD *)(a1 + 8);
  if ( v57 != 1 )
  {
    v14 = *(_DWORD *)(v58 + 792) > (int)v8;
    goto LABEL_31;
  }
  sub_232010((double *)(v58 + 816), v56);
LABEL_30:
  v14 = 1;
LABEL_31:
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree((__int64)v85);
  }
  cleanup_argloc();
  return v14;
}

