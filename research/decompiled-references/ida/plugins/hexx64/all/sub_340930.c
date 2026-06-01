unsigned __int64 __fastcall sub_340930(__int64 a1, __m128 a2)
{
  __int64 v2; // rax
  __int64 *v4; // rbp
  __int64 v5; // rdi
  int v6; // esi
  int v7; // edx
  unsigned int v8; // eax
  int v9; // edx
  __int64 v10; // rdx
  unsigned int v11; // esi
  int v12; // r12d
  __int64 v13; // rax
  char v14; // r14
  unsigned int v15; // edx
  const __m128i *v16; // rbp
  unsigned int v17; // eax
  const __m128i *v18; // rcx
  unsigned int v19; // esi
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rdx
  const __m128i *v26; // rax
  __int8 v27; // dl
  __int8 v28; // dl
  unsigned int v29; // eax
  const __m128i *v30; // rcx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp-10h] [rbp-468h]
  __int64 v35; // [rsp-8h] [rbp-460h]
  __int64 v36; // [rsp+10h] [rbp-448h]
  const __m128i *v37; // [rsp+18h] [rbp-440h]
  int v38; // [rsp+20h] [rbp-438h] BYREF
  __int64 v39; // [rsp+24h] [rbp-434h] BYREF
  unsigned __int64 v40; // [rsp+428h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 840);
  v40 = __readfsqword(0x28u);
  v4 = (__int64 *)(v2 + 32);
  sub_340580(
    (__int64 *)(v2 + 32),
    "memcmp;strcasecmp;strcmp;stricmp;strncasecmp;strncmp;strnicmp;wcscmp;wcsncmp;wmemcmp");
  v5 = *(_QWORD *)(a1 + 848);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 856) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 848) = 0;
    *(_QWORD *)(a1 + 864) = 0;
  }
  v35 = a1;
  v34 = 0;
  if ( (unsigned __int8)read_config2() )
  {
    v6 = *(_DWORD *)(a1 + 724);
    v7 = *(_DWORD *)(a1 + 604);
    v8 = v7 & 0xFFEFFFFF;
    v9 = v7 | 0x100000;
    if ( (*(_BYTE *)(a1 + 1417) & 1) != 0 )
      v8 = v9;
    *(_DWORD *)(a1 + 604) = v8;
    if ( v6 > 64 )
    {
      if ( ((v6 - 96) & 0xFFFFFFDF) == 0 )
        goto LABEL_9;
    }
    else if ( v6 <= 3 )
    {
      if ( (unsigned int)(v6 - 1) <= 1 )
      {
LABEL_9:
        v11 = *(_DWORD *)(a1 + 656);
        if ( v11 > 0x100 )
        {
          sub_2B4E70((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v11, 256);
          *(_DWORD *)(a1 + 656) = 256;
        }
        goto LABEL_11;
      }
    }
    else
    {
      v10 = 0x1000100000001011LL;
      if ( _bittest64(&v10, (unsigned int)(v6 - 4)) )
        goto LABEL_9;
    }
    sub_2B4E70((__int64)"PSEUDOCODE_DOCKPOS = 0x%X\nValue is wrong, fallback to DP_RIGHT", v6);
    *(_DWORD *)(a1 + 724) = 4;
    goto LABEL_9;
  }
LABEL_11:
  if ( *(_QWORD *)(a1 + 856) > 1u )
    sub_340580(v4, *(const char **)(a1 + 848));
  v12 = *(_DWORD *)(a1 + 604);
  netnode_check();
  if ( netnode_valobj() > 0 )
    *(_DWORD *)(a1 + 1420) = v36;
  v13 = netnode_supval();
  if ( v13 > 0 )
  {
    v14 = v38;
    v15 = *(_DWORD *)(a1 + 604) & 0xFFEFFFFF;
    *(_DWORD *)(a1 + 604) = v15;
    if ( v14 <= 76 )
    {
      if ( (unsigned __int64)v13 <= 0x60 )
      {
        v23 = (unsigned int)(v38 + 4);
        *(_QWORD *)(a1 + 568) = v23;
        if ( (unsigned __int64)v13 > 4 )
        {
          v24 = v13 - 4;
          v25 = a1 + 576;
          if ( v24 >= 8 )
          {
            *(_QWORD *)(a1 + 576) = v39;
            *(_QWORD *)(v25 + v24 - 8) = *(const __m128i **)((char *)&v37 + v24 + 4);
            qmemcpy(
              (void *)((a1 + 584) & 0xFFFFFFFFFFFFFFF8LL),
              (char *)&v39 - (v25 - ((a1 + 584) & 0xFFFFFFFFFFFFFFF8LL)),
              8LL * ((v24 + (_DWORD)v25 - (((_DWORD)a1 + 584) & 0xFFFFFFF8)) >> 3));
          }
          else if ( (v24 & 4) != 0 )
          {
            *(_DWORD *)(a1 + 576) = v39;
            *(_DWORD *)(v25 + v24 - 4) = *(int *)((char *)&v38 + v24);
          }
          else if ( v24 )
          {
            *(_BYTE *)(a1 + 576) = v39;
            if ( (v24 & 2) != 0 )
              *(_WORD *)(v25 + v24 - 2) = *(_WORD *)((char *)&v38 + v24 + 2);
          }
          v15 = *(_DWORD *)(a1 + 604);
        }
        v19 = *(_DWORD *)(a1 + 656);
        v20 = v19;
        if ( v23 <= 0xC7 )
        {
          if ( v23 <= 0x48 )
            *(_DWORD *)(a1 + 640) = 0;
          *(_BYTE *)(a1 + 712) = 2;
          *(_QWORD *)(a1 + 568) = 200;
        }
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_383060(0xC918u, *(double *)a2.m128_u64);
      goto LABEL_80;
    }
    if ( v14 <= 79 )
    {
      if ( !under_debugger )
        sub_383060(0xC919u, *(double *)a2.m128_u64);
      goto LABEL_80;
    }
    v16 = (const __m128i *)((char *)&v38 + v13);
    v37 = (const __m128i *)((char *)&v38 + 1);
    *(_DWORD *)(a1 + 576) = unpack_dd();
    *(_DWORD *)(a1 + 580) = unpack_dd();
    *(_DWORD *)(a1 + 584) = unpack_dd();
    *(_DWORD *)(a1 + 588) = unpack_dd();
    *(_DWORD *)(a1 + 592) = unpack_dd();
    *(_DWORD *)(a1 + 596) = unpack_dd();
    *(_DWORD *)(a1 + 600) = unpack_dd();
    *(_DWORD *)(a1 + 604) = unpack_dd();
    v17 = unpack_dd();
    v18 = v37;
    if ( __CFADD__(v37, v17)
      || v16 < (const __m128i *)&v37->m128i_i8[v17]
      || (v37 = (const __m128i *)((char *)v37 + v17), !v18) )
    {
      if ( !under_debugger )
        sub_383060(0xC9F1u, *(double *)a2.m128_u64);
      goto LABEL_80;
    }
    if ( v17 != 32 )
      goto LABEL_22;
    *(__m128i *)(a1 + 608) = _mm_loadu_si128(v18);
    a2 = (__m128)_mm_loadu_si128(v18 + 1);
    *(__m128 *)(a1 + 624) = a2;
    if ( v14 <= 88 )
    {
      *(_BYTE *)(a1 + 615) |= 2u;
      *(_DWORD *)(a1 + 640) = unpack_dd();
      *(_DWORD *)(a1 + 644) = unpack_dd();
      if ( v14 <= 85 )
      {
        v32 = unpack_ds();
        qfree(v32);
        v33 = unpack_ds();
        qfree(v33);
LABEL_22:
        if ( v14 == 80 )
          goto LABEL_25;
        *(_DWORD *)(a1 + 652) = unpack_dd();
        if ( v14 <= 82 )
        {
          unpack_dd();
          if ( v14 == 82 )
          {
            v31 = unpack_dd();
            v19 = *(_DWORD *)(a1 + 656);
            *(_DWORD *)(a1 + 648) = v31;
            v20 = v19;
            goto LABEL_26;
          }
          goto LABEL_25;
        }
        *(_DWORD *)(a1 + 648) = unpack_dd();
        if ( v14 == 83 )
          goto LABEL_25;
        v26 = v37;
        v27 = 0;
        if ( v37 < v16 )
        {
          v27 = v37->m128i_i8[0];
          v26 = (const __m128i *)&v37->m128i_i8[1];
        }
        v37 = v26;
        *(_BYTE *)(a1 + 712) = v27;
        if ( v14 == 84 )
        {
LABEL_25:
          v19 = *(_DWORD *)(a1 + 656);
          v20 = v19;
LABEL_26:
          *(_QWORD *)(a1 + 568) = 200;
          v15 = *(_DWORD *)(a1 + 604);
LABEL_27:
          v21 = v15;
          BYTE1(v15) &= ~0x10u;
          BYTE1(v21) |= 0x10u;
          if ( (v12 & 0x1000) != 0 )
            v15 = v21;
          *(_DWORD *)(a1 + 604) = v15;
          if ( v20 > 0x100 )
          {
            sub_2B4E70((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v19, 256);
            *(_DWORD *)(a1 + 656) = 256;
          }
          *(_BYTE *)(a1 + 720) = (unsigned int)reg_int_op() != 0;
          return v40 - __readfsqword(0x28u);
        }
        goto LABEL_58;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 640) = unpack_dd();
      *(_DWORD *)(a1 + 644) = unpack_dd();
    }
    *(_DWORD *)(a1 + 652) = unpack_dd();
    *(_DWORD *)(a1 + 648) = unpack_dd();
    if ( v37 >= v16 )
    {
      *(_BYTE *)(a1 + 712) = 0;
    }
    else
    {
      v28 = v37->m128i_i8[0];
      v37 = (const __m128i *)((char *)v37 + 1);
      *(_BYTE *)(a1 + 712) = v28;
    }
LABEL_58:
    v20 = unpack_dd();
    *(_DWORD *)(a1 + 656) = v20;
    v19 = v20;
    if ( v14 <= 86 )
      goto LABEL_26;
    v29 = unpack_dd();
    v30 = v37;
    if ( !__CFADD__(v37, v29) && v16 >= (const __m128i *)&v37->m128i_i8[v29] )
    {
      v37 = (const __m128i *)((char *)v37 + v29);
      if ( v30 )
      {
        if ( v29 == 32 )
        {
          *(__m128i *)(a1 + 728) = _mm_loadu_si128(v30);
          *(__m128i *)(a1 + 744) = _mm_loadu_si128(v30 + 1);
        }
        if ( v14 != 87 )
          *(_DWORD *)(a1 + 760) = unpack_dd();
        goto LABEL_25;
      }
    }
    if ( !under_debugger )
      sub_383060(0xCDCCu, *(double *)a2.m128_u64);
LABEL_80:
    BUG();
  }
  return v40 - __readfsqword(0x28u);
}

