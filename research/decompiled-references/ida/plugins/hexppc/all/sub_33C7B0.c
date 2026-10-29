unsigned __int64 __fastcall sub_33C7B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rbp
  int v3; // esi
  int v4; // edx
  unsigned int v5; // eax
  int v6; // edx
  __int64 v7; // rdx
  unsigned int v8; // esi
  int v9; // r12d
  __int64 v10; // rax
  char v11; // r14
  unsigned int v12; // edx
  const __m128i *v13; // rbp
  unsigned int v14; // eax
  const __m128i *v15; // rcx
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rdx
  const __m128i *v23; // rax
  __int8 v24; // dl
  __int8 v25; // dl
  unsigned int v26; // eax
  const __m128i *v27; // rcx
  int v28; // eax
  __int64 v29; // [rsp-10h] [rbp-468h]
  __int64 v30; // [rsp-8h] [rbp-460h]
  __int64 v31; // [rsp+10h] [rbp-448h]
  const __m128i *v32; // [rsp+18h] [rbp-440h]
  int v33; // [rsp+20h] [rbp-438h] BYREF
  __int64 v34; // [rsp+24h] [rbp-434h] BYREF
  unsigned __int64 v35; // [rsp+428h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 840);
  v35 = __readfsqword(0x28u);
  v2 = (__int64 *)(v1 + 32);
  sub_33C400(
    (__int64 *)(v1 + 32),
    "memcmp;strcasecmp;strcmp;stricmp;strncasecmp;strncmp;strnicmp;wcscmp;wcsncmp;wmemcmp");
  if ( *(_QWORD *)(a1 + 848) )
  {
    *(_QWORD *)(a1 + 856) = 0;
    qfree();
    *(_QWORD *)(a1 + 848) = 0;
    *(_QWORD *)(a1 + 864) = 0;
  }
  v30 = a1;
  v29 = 0;
  if ( (unsigned __int8)read_config2() )
  {
    v3 = *(_DWORD *)(a1 + 724);
    v4 = *(_DWORD *)(a1 + 604);
    v5 = v4 & 0xFFEFFFFF;
    v6 = v4 | 0x100000;
    if ( (*(_BYTE *)(a1 + 1417) & 1) != 0 )
      v5 = v6;
    *(_DWORD *)(a1 + 604) = v5;
    if ( v3 > 64 )
    {
      if ( ((v3 - 96) & 0xFFFFFFDF) == 0 )
        goto LABEL_9;
    }
    else if ( v3 <= 3 )
    {
      if ( (unsigned int)(v3 - 1) <= 1 )
      {
LABEL_9:
        v8 = *(_DWORD *)(a1 + 656);
        if ( v8 > 0x100 )
        {
          sub_2B11F0((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v8, 256);
          *(_DWORD *)(a1 + 656) = 256;
        }
        goto LABEL_11;
      }
    }
    else
    {
      v7 = 0x1000100000001011LL;
      if ( _bittest64(&v7, (unsigned int)(v3 - 4)) )
        goto LABEL_9;
    }
    sub_2B11F0((__int64)"PSEUDOCODE_DOCKPOS = 0x%X\nValue is wrong, fallback to DP_RIGHT", v3);
    *(_DWORD *)(a1 + 724) = 4;
    goto LABEL_9;
  }
LABEL_11:
  if ( *(_QWORD *)(a1 + 856) > 1u )
    sub_33C400(v2, *(const char **)(a1 + 848));
  v9 = *(_DWORD *)(a1 + 604);
  netnode_check();
  if ( netnode_valobj() > 0 )
    *(_DWORD *)(a1 + 1420) = v31;
  v10 = netnode_supval();
  if ( v10 > 0 )
  {
    v11 = v33;
    v12 = *(_DWORD *)(a1 + 604) & 0xFFEFFFFF;
    *(_DWORD *)(a1 + 604) = v12;
    if ( v11 <= 76 )
    {
      if ( (unsigned __int64)v10 <= 0x60 )
      {
        v20 = (unsigned int)(v33 + 4);
        *(_QWORD *)(a1 + 568) = v20;
        if ( (unsigned __int64)v10 > 4 )
        {
          v21 = v10 - 4;
          v22 = a1 + 576;
          if ( v21 >= 8 )
          {
            *(_QWORD *)(a1 + 576) = v34;
            *(_QWORD *)(v22 + v21 - 8) = *(const __m128i **)((char *)&v32 + v21 + 4);
            qmemcpy(
              (void *)((a1 + 584) & 0xFFFFFFFFFFFFFFF8LL),
              (char *)&v34 - (v22 - ((a1 + 584) & 0xFFFFFFFFFFFFFFF8LL)),
              8LL * ((v21 + (_DWORD)v22 - (((_DWORD)a1 + 584) & 0xFFFFFFF8)) >> 3));
          }
          else if ( (v21 & 4) != 0 )
          {
            *(_DWORD *)(a1 + 576) = v34;
            *(_DWORD *)(v22 + v21 - 4) = *(int *)((char *)&v33 + v21);
          }
          else if ( v21 )
          {
            *(_BYTE *)(a1 + 576) = v34;
            if ( (v21 & 2) != 0 )
              *(_WORD *)(v22 + v21 - 2) = *(_WORD *)((char *)&v33 + v21 + 2);
          }
          v12 = *(_DWORD *)(a1 + 604);
        }
        v16 = *(_DWORD *)(a1 + 656);
        v17 = v16;
        if ( v20 <= 0xC7 )
        {
          if ( v20 <= 0x48 )
            *(_DWORD *)(a1 + 640) = 0;
          *(_BYTE *)(a1 + 712) = 2;
          *(_QWORD *)(a1 + 568) = 200;
        }
        goto LABEL_27;
      }
      if ( !under_debugger )
        sub_37EEE0(51480);
      goto LABEL_80;
    }
    if ( v11 <= 79 )
    {
      if ( !under_debugger )
        sub_37EEE0(51481);
      goto LABEL_80;
    }
    v13 = (const __m128i *)((char *)&v33 + v10);
    v32 = (const __m128i *)((char *)&v33 + 1);
    *(_DWORD *)(a1 + 576) = unpack_dd();
    *(_DWORD *)(a1 + 580) = unpack_dd();
    *(_DWORD *)(a1 + 584) = unpack_dd();
    *(_DWORD *)(a1 + 588) = unpack_dd();
    *(_DWORD *)(a1 + 592) = unpack_dd();
    *(_DWORD *)(a1 + 596) = unpack_dd();
    *(_DWORD *)(a1 + 600) = unpack_dd();
    *(_DWORD *)(a1 + 604) = unpack_dd();
    v14 = unpack_dd();
    v15 = v32;
    if ( __CFADD__(v32, v14)
      || v13 < (const __m128i *)&v32->m128i_i8[v14]
      || (v32 = (const __m128i *)((char *)v32 + v14), !v15) )
    {
      if ( !under_debugger )
        sub_37EEE0(51697);
      goto LABEL_80;
    }
    if ( v14 != 32 )
      goto LABEL_22;
    *(__m128i *)(a1 + 608) = _mm_loadu_si128(v15);
    *(__m128i *)(a1 + 624) = _mm_loadu_si128(v15 + 1);
    if ( v11 <= 88 )
    {
      *(_BYTE *)(a1 + 615) |= 2u;
      *(_DWORD *)(a1 + 640) = unpack_dd();
      *(_DWORD *)(a1 + 644) = unpack_dd();
      if ( v11 <= 85 )
      {
        unpack_ds();
        qfree();
        unpack_ds();
        qfree();
LABEL_22:
        if ( v11 == 80 )
          goto LABEL_25;
        *(_DWORD *)(a1 + 652) = unpack_dd();
        if ( v11 <= 82 )
        {
          unpack_dd();
          if ( v11 == 82 )
          {
            v28 = unpack_dd();
            v16 = *(_DWORD *)(a1 + 656);
            *(_DWORD *)(a1 + 648) = v28;
            v17 = v16;
            goto LABEL_26;
          }
          goto LABEL_25;
        }
        *(_DWORD *)(a1 + 648) = unpack_dd();
        if ( v11 == 83 )
          goto LABEL_25;
        v23 = v32;
        v24 = 0;
        if ( v32 < v13 )
        {
          v24 = v32->m128i_i8[0];
          v23 = (const __m128i *)&v32->m128i_i8[1];
        }
        v32 = v23;
        *(_BYTE *)(a1 + 712) = v24;
        if ( v11 == 84 )
        {
LABEL_25:
          v16 = *(_DWORD *)(a1 + 656);
          v17 = v16;
LABEL_26:
          *(_QWORD *)(a1 + 568) = 200;
          v12 = *(_DWORD *)(a1 + 604);
LABEL_27:
          v18 = v12;
          BYTE1(v12) &= ~0x10u;
          BYTE1(v18) |= 0x10u;
          if ( (v9 & 0x1000) != 0 )
            v12 = v18;
          *(_DWORD *)(a1 + 604) = v12;
          if ( v17 > 0x100 )
          {
            sub_2B11F0((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v16, 256);
            *(_DWORD *)(a1 + 656) = 256;
          }
          *(_BYTE *)(a1 + 720) = (unsigned int)reg_int_op() != 0;
          return v35 - __readfsqword(0x28u);
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
    if ( v32 >= v13 )
    {
      *(_BYTE *)(a1 + 712) = 0;
    }
    else
    {
      v25 = v32->m128i_i8[0];
      v32 = (const __m128i *)((char *)v32 + 1);
      *(_BYTE *)(a1 + 712) = v25;
    }
LABEL_58:
    v17 = unpack_dd();
    *(_DWORD *)(a1 + 656) = v17;
    v16 = v17;
    if ( v11 <= 86 )
      goto LABEL_26;
    v26 = unpack_dd();
    v27 = v32;
    if ( !__CFADD__(v32, v26) && v13 >= (const __m128i *)&v32->m128i_i8[v26] )
    {
      v32 = (const __m128i *)((char *)v32 + v26);
      if ( v27 )
      {
        if ( v26 == 32 )
        {
          *(__m128i *)(a1 + 728) = _mm_loadu_si128(v27);
          *(__m128i *)(a1 + 744) = _mm_loadu_si128(v27 + 1);
        }
        if ( v11 != 87 )
          *(_DWORD *)(a1 + 760) = unpack_dd();
        goto LABEL_25;
      }
    }
    if ( !under_debugger )
      sub_37EEE0(52684);
LABEL_80:
    BUG();
  }
  return v35 - __readfsqword(0x28u);
}

