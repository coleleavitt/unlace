__int64 __fastcall sub_23B80(__int64 a1, _QWORD *a2, __int64 a3, void (__fastcall ***a4)(_QWORD), int a5, int a6)
{
  __int16 v10; // ax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r14
  unsigned int ordinal_limit; // eax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  char v21; // r15
  __int64 v22; // r15
  _DWORD *v23; // r14
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // dl
  char v27; // dl
  int v28; // eax
  char v29; // al
  int v30; // eax
  void (__fastcall *v32)(_QWORD *); // rdx
  void (__fastcall *v33)(_QWORD *); // rax
  _QWORD *v34; // rax
  __int64 v35; // r15
  void *v36; // rdi
  __int64 v37; // r15
  _QWORD *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rdi
  _WORD *v41; // rax
  __int16 v42; // dx
  unsigned __int8 v43; // al
  _QWORD *std_dirtree; // rax
  __int64 v45; // rsi
  _QWORD *v46; // r14
  __int64 v47; // r15
  unsigned int v48; // r15d
  int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  const char *v52; // [rsp+8h] [rbp-A0h]
  void *v53; // [rsp+8h] [rbp-A0h]
  _QWORD *v54; // [rsp+8h] [rbp-A0h]
  __int128 v55; // [rsp+30h] [rbp-78h] BYREF
  __int64 v56; // [rsp+40h] [rbp-68h] BYREF
  char v57; // [rsp+48h] [rbp-60h]
  __int128 v58; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v59; // [rsp+68h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( (debug & 0x400000) == 0 )
  {
    if ( a2[36] )
      goto LABEL_3;
    return 0xFFFFFFFFLL;
  }
  sub_88B80((unsigned int)"process_dwarf_debug_section()\n", (_DWORD)a2, a3, (_DWORD)a4, a5, a6);
  if ( !a2[36] )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80((unsigned int)"No .debug_info CU DIEs. Exiting.\n", (_DWORD)a2, v12, v13, v14, v15);
    return 0xFFFFFFFFLL;
  }
LABEL_3:
  if ( !*(_BYTE *)(a1 + 2797) )
  {
    v22 = a2[35];
    v55 = 0;
    getinf_buf(98, &v55, 16);
    v23 = *(_DWORD **)(v22 + 216);
    if ( v23 )
      ++v23[2];
    v52 = nullptr;
    v24 = (unsigned int)v23[31];
    if ( (unsigned int)v24 <= 9 )
    {
      v25 = 590;
      if ( !_bittest64(&v25, v24) )
        goto LABEL_25;
      if ( (unsigned __int8)getinf_flag(3, 4) && (unsigned int)getinf(5) == 11 )
      {
        v29 = 1;
        v52 = "mingw";
      }
      else
      {
        v52 = nullptr;
        v29 = 6;
      }
      LOBYTE(v55) = v29;
      v30 = v23[31];
      if ( v30 != 3 && (v30 != 1 || v23[30] > 0xBB7u) )
      {
        v43 = getinf(38);
        setinf(38, v43 | 4u);
        LODWORD(v24) = v23[31];
LABEL_25:
        if ( (_DWORD)v24 == 8 )
          goto LABEL_26;
      }
    }
    v57 = 0;
    v56 = 0;
    v58 = 0;
    if ( !(unsigned __int8)sub_945B0(v22, &v58, 19)
      || !(unsigned __int8)sub_96D10(v22, &v56, &v58)
      || (v41 = word_ABD38, (v42 = word_ABD38[0]) == 0) )
    {
LABEL_36:
      sub_84A10(&v58);
      goto LABEL_37;
    }
    while ( (_WORD)v56 != v42 )
    {
      v42 = v41[1];
      ++v41;
      if ( !v42 )
        goto LABEL_36;
    }
    sub_84A10(&v58);
LABEL_26:
    LOWORD(v55) = 774;
    if ( (unsigned __int8)getinf_flag(3, 4)
      && (netnode_check(&v58, "$ golang", 0, 0), v48 = netnode_altval(v58, 0, 65), v48 > 0x74) )
    {
      v49 = *(_DWORD *)(get_ph() + 4);
      v26 = BYTE1(v55) & 0xF;
      if ( !v49
        || (v50 = (unsigned int)(v49 - 13), (unsigned int)v50 <= 0x3B)
        && (v51 = 0x800000000000005LL, _bittest64(&v51, v50))
        && v48 != 117 )
      {
        v27 = v26 | 0xB0;
        v28 = 0;
        goto LABEL_29;
      }
    }
    else
    {
      v26 = BYTE1(v55) & 0xF;
    }
    v27 = v26 | 0xC0;
    v28 = 256;
LABEL_29:
    BYTE1(v55) = v27;
    HIDWORD(v55) = v28;
LABEL_37:
    if ( *(_DWORD *)(a2[18] + 192LL) == 8 )
    {
      BYTE2(v55) = 4;
      BYTE1(v55) = BYTE1(v55) & 0xFC | 1;
    }
    set_compiler(&v55, 1, v52);
    *(_BYTE *)(a1 + 2797) = 1;
    if ( v23 )
    {
      if ( v23[2]-- == 1 )
      {
        v32 = **(void (__fastcall ***)(_QWORD *))v23;
        if ( v32 == sub_15E30 )
        {
          v33 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v23 + 16LL);
          if ( v33 == sub_15D70 )
          {
            *(_QWORD *)v23 = &off_C71D8;
            v34 = *((_QWORD **)v23 + 16);
            v53 = v34;
            if ( v34 )
            {
              v35 = v34[2];
              while ( v35 )
              {
                sub_15270(*(_QWORD **)(v35 + 24));
                v36 = (void *)v35;
                v35 = *(_QWORD *)(v35 + 16);
                operator delete(v36, 0x30u);
              }
              operator delete(v53, 0x30u);
            }
            v37 = *((_QWORD *)v23 + 19);
            while ( v37 )
            {
              sub_159F0(*(_QWORD **)(v37 + 24));
              v38 = (_QWORD *)v37;
              v37 = *(_QWORD *)(v37 + 16);
              v39 = v38[4];
              if ( v39 )
              {
                v38[5] = 0;
                v54 = v38;
                qfree(v39);
                v38 = v54;
              }
              operator delete(v38, 0x48u);
            }
            v40 = *((_QWORD *)v23 + 12);
            if ( v40 )
            {
              *((_QWORD *)v23 + 13) = 0;
              qfree(v40);
            }
            operator delete(v23, 0xC0u);
          }
          else
          {
            v33(v23);
          }
        }
        else
        {
          v32(v23);
        }
      }
    }
  }
  v10 = *(_WORD *)(a1 + 296);
  if ( (v10 & 8) != 0 )
  {
    v16 = a2[18];
    ordinal_limit = get_ordinal_limit(*(_QWORD *)(v16 + 8));
    if ( !ordinal_limit )
      ordinal_limit = 1;
    *(_QWORD *)(v16 + 196) = _mm_shuffle_epi32(_mm_cvtsi32_si128(ordinal_limit), 224).m128i_u64[0];
    sub_426B0((_DWORD)a2, a3, (_DWORD)a4, v18, v19, v20);
    v21 = sub_1D1A0(a1, (const char *)v16);
    if ( (unsigned int)sub_58330(v16, *(unsigned int *)(v16 + 200)) || v21 )
    {
      std_dirtree = (_QWORD *)get_std_dirtree(0);
      v45 = *std_dirtree;
      v46 = std_dirtree;
      BYTE8(v58) = 0;
      *(_QWORD *)&v58 = -1;
      dirtree_resolve_path(&v58, v45, "/dwarf");
      v47 = v58;
      if ( (_QWORD)v58 != -1 )
      {
        dirtree_set_natural_order(*v46, v58, 0);
        dirtree_set_natural_order(*v46, v47, 1);
      }
    }
    v10 = *(_WORD *)(a1 + 296);
  }
  if ( (v10 & 2) != 0 )
  {
    sub_76270(a2, a3, a4);
    v10 = *(_WORD *)(a1 + 296);
  }
  if ( (v10 & 1) != 0 )
  {
    sub_1DD90(a2, a4);
    v10 = *(_WORD *)(a1 + 296);
  }
  if ( (v10 & 0x80u) != 0 )
    sub_13A80(a2, (__int64)a4);
  return 0;
}

