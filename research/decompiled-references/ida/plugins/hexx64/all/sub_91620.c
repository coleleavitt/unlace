unsigned __int64 __fastcall sub_91620(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 *v5; // rax
  __int64 v6; // rsi
  bool v7; // zf
  __int64 *v8; // r12
  __int64 *v9; // r13
  __int64 *v10; // rdi
  char *v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  const char *v14; // rdx
  __int64 v15; // rdi
  char *v16; // rsi
  char v17; // r12
  __int64 j; // r13
  char v19; // al
  _QWORD *v20; // r13
  __int64 v21; // rsi
  char v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // r15
  _QWORD *v26; // r13
  char *v27; // rsi
  _QWORD *v28; // r14
  _QWORD *v29; // r13
  _QWORD *v30; // rdx
  _QWORD *v31; // r15
  _QWORD *v32; // r13
  char *v33; // rsi
  _QWORD *v34; // rdx
  __int64 *v35; // r13
  unsigned __int64 (__fastcall *v36)(__int64, __int64 *); // rax
  _QWORD *v37; // r14
  _QWORD *v38; // r13
  _QWORD *v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  _QWORD *v43; // r13
  _QWORD *v44; // r13
  _QWORD *v45; // r12
  _QWORD *v46; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  const char *v58; // rdx
  char *v59; // rsi
  __int64 i; // rbp
  _QWORD *v61; // r13
  _QWORD *v62; // rdx
  _QWORD *v63; // r12
  _QWORD *v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  _QWORD *v71; // r12
  _QWORD *v72; // r13
  __int64 v73; // rsi
  int v74; // [rsp+Ch] [rbp-5Ch]
  const char *v75; // [rsp+10h] [rbp-58h] BYREF
  __int128 v76; // [rsp+18h] [rbp-50h]
  unsigned __int64 v77; // [rsp+28h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  v74 = *(_DWORD *)(a2 + 48);
  if ( v74 == 1 )
  {
    *(_QWORD *)(a2 + 40) = -1;
    sub_8F680(a2, 0, "mba.flags");
    sub_7F8E0((__int64 *)a2);
    v58 = s1;
    if ( *(_QWORD *)(a1 + 416) )
      v58 = *(const char **)(a1 + 408);
    sub_8F680(a2, 0, v58);
    v59 = (char *)s1;
    if ( *(_QWORD *)(a1 + 416) )
      v59 = *(char **)(a1 + 408);
    sub_7FC40((__int64 *)a2, v59);
    sub_8F680(a2, 0, "mba.#lvars");
    sub_7F8E0((__int64 *)a2);
    sub_8F680(a2, 0, "mba.qty");
    sub_7F8E0((__int64 *)a2);
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      sub_8FC50(a2, 2);
      sub_91040(i, a2, a3);
    }
    return v77 - __readfsqword(0x28u);
  }
  sub_7F8E0((__int64 *)a2);
  sub_8F680(a2, 0, "mba.flags");
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  v5 = *(__int64 **)(a1 + 8);
  if ( v5 )
  {
    v6 = *v5;
    v7 = *(_DWORD *)(a2 + 48) == 4;
    *(_QWORD *)(a2 + 40) = *v5;
    if ( !v7 )
      goto LABEL_4;
  }
  else
  {
    v54 = *(__int64 **)(a1 + 16);
    v7 = *(_DWORD *)(a2 + 48) == 4;
    v6 = *v54;
    *(_QWORD *)(a2 + 40) = *v54;
    if ( !v7 )
      goto LABEL_4;
  }
  sub_7F940((__int64 *)a2, v6);
LABEL_4:
  sub_8F680(a2, 2, "mbr.ranges");
  sub_80100((__int64 *)a2, a1 + 16);
  sub_8F680(a2, 0, "mba.last_prolog_ea");
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 48) - *(_QWORD *)(a2 + 40));
  sub_8F680(a2, 0, "mba.first_epilog_ea");
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 56) - *(_QWORD *)(a2 + 40));
  sub_8F680(a2, 0, "mba.npurged");
  sub_7F8E0((__int64 *)a2);
  sub_8F680(a2, 0, "mba.cc");
  sub_7F8E0((__int64 *)a2);
  sub_8F680(a2, 0, "mba.frame");
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 80));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 88));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 96));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 104));
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 128));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 136));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 144));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 152));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 160) - *(_QWORD *)(a2 + 40));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 168));
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 176));
  sub_902A0((__int64 *)(a1 + 1448), (__int64 *)a2);
  sub_8F680(a2, 0, "mba.subframes");
  sub_7F8E0((__int64 *)a2);
  v8 = *(__int64 **)(a1 + 1472);
  v9 = &v8[5 * *(_QWORD *)(a1 + 1480)];
  while ( v9 != v8 )
  {
    v10 = v8;
    v8 += 5;
    sub_80F20(v10, (__int64 *)a2);
  }
  sub_8F680(a2, 0, "mba.memory");
  sub_801C0(a1 + 184, (__int64 *)a2);
  sub_801C0(a1 + 208, (__int64 *)a2);
  sub_801C0(a1 + 232, (__int64 *)a2);
  sub_80410((__int64 *)(a1 + 256), (__int64 *)a2);
  sub_801C0(a1 + 272, (__int64 *)a2);
  sub_80410((__int64 *)(a1 + 296), (__int64 *)a2);
  sub_8F680(a2, 0, "mba.maturity");
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  sub_8F680(a2, 0, "mba.functype");
  sub_7FD50((__int64 *)a2, (_BYTE *)(a1 + 328));
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
  {
    sub_7F810((__int64 *)a2, (__int64 *)(a1 + 336));
    sub_80410((__int64 *)(a1 + 360), (__int64 *)a2);
    sub_801C0(a1 + 376, (__int64 *)a2);
  }
  sub_7F8E0((__int64 *)a2);
  sub_8F680(a2, 0, "mba.label");
  v11 = (char *)s1;
  if ( *(_QWORD *)(a1 + 416) )
    v11 = *(char **)(a1 + 408);
  v12 = 0;
  v13 = 0;
  sub_7FC40((__int64 *)a2, v11);
  sub_8F680(a2, 0, "mba.lvars");
  sub_7F8E0((__int64 *)a2);
  if ( *(_QWORD *)(a1 + 440) )
  {
    do
    {
      if ( *(_BYTE *)(a2 + 52) )
      {
        a3 = 0;
        v75 = nullptr;
        v76 = 0;
        sub_6B870((__int64 *)&v75);
        v14 = s1;
        if ( (_QWORD)v76 )
          v14 = v75;
        sub_8F680(a2, 2, v14);
        if ( v75 )
        {
          *(_QWORD *)&v76 = 0;
          qfree((__int64)v75);
        }
      }
      ++v13;
      v15 = v12 + *(_QWORD *)(a1 + 432);
      v12 += 104;
      sub_81B20(v15, (__int64 *)a2);
    }
    while ( v13 < *(_QWORD *)(a1 + 440) );
  }
  sub_8F680(a2, 0, "mba.argidx");
  sub_7FEE0((__int64 *)a2, (__int64 *)(a1 + 456));
  sub_7F8E0((__int64 *)a2);
  sub_8F680(a2, 0, "mba.error");
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 488) - *(_QWORD *)(a2 + 40));
  v16 = (char *)s1;
  if ( *(_QWORD *)(a1 + 504) )
    v16 = *(char **)(a1 + 496);
  v17 = 0;
  sub_7FC40((__int64 *)a2, v16);
  sub_8F680(a2, 0, "mba.blocks");
  sub_7F8E0((__int64 *)a2);
  for ( j = *(_QWORD *)(a1 + 520); j; v17 |= (v19 & 8) != 0 )
  {
    sub_8FC50(a2, 2);
    sub_91040(j, a2, a3);
    v19 = *(_BYTE *)(j + 24);
    j = *(_QWORD *)(j + 8);
  }
  sub_8F680(a2, 0, "mba.std_ivls");
  v20 = (_QWORD *)(a1 + 536);
  do
  {
    v21 = *(_QWORD *)a2;
    v22 = *v20 == 0;
    v23 = *(_QWORD *)(a2 + 8);
    if ( v20[1] + *v20 == -1 )
      v22 |= 2u;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v23 + 1) )
    {
      v24 = qvector_reserve(a2, v21, v23 + 1, 1);
      *(_QWORD *)a2 = v24;
      v21 = v24;
      v23 = *(_QWORD *)(a2 + 8);
    }
    *(_BYTE *)(v21 + v23) = v22;
    v20 += 4;
    ++*(_QWORD *)(a2 + 8);
    sub_7FB70((__int64 *)a2, *(v20 - 4) - *(_QWORD *)(a2 + 40));
    sub_7F940((__int64 *)a2, *(v20 - 3));
  }
  while ( (_QWORD *)(a1 + 728) != v20 );
  sub_8F680(a2, 0, "mba.notes");
  sub_7F8E0((__int64 *)a2);
  v25 = *(_QWORD **)(a1 + 728);
  v26 = &v25[5 * *(_QWORD *)(a1 + 736)];
  while ( v26 != v25 )
  {
    sub_7FB70((__int64 *)a2, *v25 - *(_QWORD *)(a2 + 40));
    sub_7F8E0((__int64 *)a2);
    v27 = (char *)s1;
    if ( v25[3] )
      v27 = (char *)v25[2];
    v25 += 5;
    sub_7FC40((__int64 *)a2, v27);
  }
  sub_8F680(a2, 0, "mba.occurred_warns");
  sub_7F760((__int64 *)a2, a1 + 752, 32);
  sub_8F680(a2, 0, "mba.nprealloc");
  sub_7F8E0((__int64 *)a2);
  if ( *(_QWORD *)(a1 + 800) )
  {
    if ( !under_debugger )
      sub_383060(0xCBB8u, *(double *)a3.m128i_i64);
LABEL_168:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 808) )
  {
    if ( !under_debugger )
      sub_383060(0xCBB9u, *(double *)a3.m128i_i64);
    goto LABEL_168;
  }
  sub_8F680(a2, 0, "mba.corrected_stkvars");
  sub_7F8E0((__int64 *)a2);
  v28 = *(_QWORD **)(a1 + 816);
  if ( v28 )
  {
    if ( *(_QWORD *)(a1 + 824) )
    {
      v29 = (_QWORD *)v28[1];
      if ( v28 != v29 )
      {
        do
        {
          while ( 1 )
          {
            sub_7F940((__int64 *)a2, v29[3]);
            sub_7F940((__int64 *)a2, v29[4]);
            if ( (*v29 & 2) == 0 )
              break;
LABEL_39:
            if ( v29 == v28 )
              goto LABEL_40;
          }
          v30 = (_QWORD *)v29[2];
          if ( (*(_BYTE *)v30 & 2) == 0 )
          {
            do
            {
              v29 = v30;
              v30 = (_QWORD *)v30[1];
            }
            while ( (*(_BYTE *)v30 & 2) == 0 );
            goto LABEL_39;
          }
          v48 = (_QWORD *)(*v29 & 0xFFFFFFFFFFFFFFFCLL);
          v49 = *v48;
          if ( (*v48 & 2) == 0 )
          {
            while ( (_QWORD *)v48[2] == v29 )
            {
              v29 = (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
              v49 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v49 & 2) != 0 )
                goto LABEL_39;
              v50 = v48;
              v48 = v29;
              v29 = v50;
            }
          }
          v29 = v48;
        }
        while ( v48 != v28 );
      }
    }
  }
LABEL_40:
  sub_8F680(a2, 0, "mba.lv_aliased");
  sub_80410((__int64 *)(a1 + 832), (__int64 *)a2);
  sub_801C0(a1 + 848, (__int64 *)a2);
  sub_8F680(a2, 0, "mba.lvar_names");
  sub_7F8E0((__int64 *)a2);
  v31 = *(_QWORD **)(a1 + 872);
  if ( v31 )
  {
    if ( *(_QWORD *)(a1 + 880) )
    {
      v32 = (_QWORD *)v31[1];
      if ( v31 != v32 )
      {
        while ( 1 )
        {
LABEL_43:
          v33 = (char *)s1;
          if ( v32[4] )
            v33 = (char *)v32[3];
          sub_7FC40((__int64 *)a2, v33);
          if ( (*v32 & 2) != 0 )
            goto LABEL_48;
          v34 = (_QWORD *)v32[2];
          if ( (*(_BYTE *)v34 & 2) != 0 )
          {
            v51 = (_QWORD *)(*v32 & 0xFFFFFFFFFFFFFFFCLL);
            v52 = *v51;
            if ( (*v51 & 2) == 0 )
            {
              while ( (_QWORD *)v51[2] == v32 )
              {
                v32 = v51;
                v53 = v52 & 0xFFFFFFFFFFFFFFFCLL;
                v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v52 & 2) != 0 )
                {
                  v32 = (_QWORD *)v53;
                  if ( v31 != (_QWORD *)v53 )
                    goto LABEL_43;
                  goto LABEL_49;
                }
                v51 = (_QWORD *)v53;
              }
            }
            v32 = v51;
            if ( v31 == v51 )
              break;
          }
          else
          {
            do
            {
              v32 = v34;
              v34 = (_QWORD *)v34[1];
            }
            while ( (*(_BYTE *)v34 & 2) == 0 );
LABEL_48:
            if ( v31 == v32 )
              break;
          }
        }
      }
    }
  }
LABEL_49:
  sub_8F680(a2, 0, "mba.counters");
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  sub_7F8E0((__int64 *)a2);
  if ( *(_QWORD *)(a1 + 920) )
  {
    sub_8F680(a2, 0, "mba.procinf");
    v35 = *(__int64 **)(a1 + 920);
    v36 = *(unsigned __int64 (__fastcall **)(__int64, __int64 *))(*v35 + 16);
    if ( v36 == sub_8FCF0 )
    {
      sub_8F680(a2, 2, "procinf.sregs");
      sub_7FEE0((__int64 *)a2, v35 + 1);
      sub_8F680(a2, 2, "procinf.spoiled");
      sub_7F810((__int64 *)a2, v35 + 4);
    }
    else
    {
      v36(*(_QWORD *)(a1 + 920), (__int64 *)a2);
    }
  }
  if ( *(_QWORD *)(a1 + 928) )
  {
    sub_8F680(a2, 0, "mba.gvad");
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 928) + 80LL))(*(_QWORD *)(a1 + 928), a2);
    if ( *(_QWORD *)(a1 + 936) )
    {
      sub_8F680(a2, 0, "mba.va_collector");
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 936) + 104LL))(*(_QWORD *)(a1 + 936), a2);
    }
    goto LABEL_55;
  }
  if ( *(_QWORD *)(a1 + 936) )
  {
    if ( !under_debugger )
      sub_383060(0xCBC4u, *(double *)a3.m128i_i64);
    goto LABEL_168;
  }
LABEL_55:
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x3B8u) )
  {
    sub_8F680(a2, 0, "mba.partials");
    sub_7FF90((__int64 *)a2, a1 + 952);
  }
  sub_8F680(a2, 0, "mba.extins");
  sub_7FF90((__int64 *)a2, a1 + 1000);
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x418u) )
  {
    sub_8F680(a2, 0, "mba.swapinsns");
    sub_7FF90((__int64 *)a2, a1 + 1048);
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x478u) )
  {
    sub_8F680(a2, 0, "mba.ldxmap");
    sub_7F8E0((__int64 *)a2);
    v37 = *(_QWORD **)(a1 + 1144);
    if ( v37 )
    {
      if ( *(_QWORD *)(a1 + 1152) )
      {
        v61 = (_QWORD *)v37[1];
        while ( v37 != v61 )
        {
          sub_7FB70((__int64 *)a2, v61[3] - *(_QWORD *)(a2 + 40));
          sub_7FB70((__int64 *)a2, v61[4] - *(_QWORD *)(a2 + 40));
          if ( (*v61 & 2) == 0 )
          {
            v62 = (_QWORD *)v61[2];
            if ( (*(_BYTE *)v62 & 2) != 0 )
            {
              v65 = (_QWORD *)(*v61 & 0xFFFFFFFFFFFFFFFCLL);
              v66 = *v65;
              if ( (*v65 & 2) != 0 || (_QWORD *)v65[2] != v61 )
              {
LABEL_148:
                v61 = v65;
              }
              else
              {
                while ( 1 )
                {
                  v61 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
                  v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v66 & 2) != 0 )
                    break;
                  v67 = v65;
                  v65 = v61;
                  if ( (_QWORD *)v61[2] != v67 )
                    goto LABEL_148;
                }
              }
            }
            else
            {
              do
              {
                v61 = v62;
                v62 = (_QWORD *)v62[1];
              }
              while ( (*(_BYTE *)v62 & 2) == 0 );
            }
          }
        }
      }
    }
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x488u) )
  {
    sub_8F680(a2, 0, "mba.kregs");
    sub_801C0(a1 + 1160, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x4A0u) )
  {
    sub_8F680(a2, 0, "mba.fp");
    sub_7F8E0((__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x4A8u) )
  {
    sub_8F680(a2, 0, "mba.stkpnts");
    sub_80030((__int64 *)a2, a1 + 1192);
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x4C0u) )
  {
    sub_8F680(a2, 0, "mba.unk_tcalls");
    sub_7F8E0((__int64 *)a2);
    v38 = *(_QWORD **)(a1 + 1216);
    v39 = &v38[*(_QWORD *)(a1 + 1224)];
    while ( v39 != v38 )
    {
      v40 = *v38++ - *(_QWORD *)(a2 + 40);
      sub_7FB70((__int64 *)a2, v40);
    }
  }
  if ( v17 )
  {
    v41 = *(_QWORD *)(a1 + 1240);
    if ( v41 )
      sub_80950(v41, (__int64 *)a2, *(double *)a3.m128i_i64);
    else
      sub_7F8E0((__int64 *)a2);
    v42 = *(_QWORD *)(a1 + 1248);
    if ( v42 )
      sub_80100((__int64 *)a2, v42);
    else
      sub_7F8E0((__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x4E8u) )
  {
    sub_8F680(a2, 0, "mba.lvinf");
    sub_2BC190(a1 + 1256, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x520u) )
  {
    sub_8F680(a2, 0, "mba.udcalls");
    sub_2B7D50((__int64 *)a2, (_QWORD *)(a1 + 1312));
  }
  if ( *(_QWORD *)(a1 + 1328) )
  {
    sub_8F680(a2, 0, "mba.numforms");
    sub_2B6770((__int64 *)a2, *(_QWORD *)(a1 + 1328));
  }
  if ( *(_QWORD *)(a1 + 1344) && (unsigned __int8)sub_7A640(v74, 0, 0x540u) )
  {
    sub_8F680(a2, 0, "mba.mflags");
    sub_2B7E40((__int64 *)a2, *(_QWORD **)(a1 + 1344));
  }
  if ( *(_QWORD *)(a1 + 1336) && (unsigned __int8)sub_7A640(v74, 0, 0x538u) )
  {
    sub_8F680(a2, 0, "mba.user_minsns");
    sub_2B8260((__int64 *)a2, *(_QWORD *)(a1 + 1336), *(_QWORD *)(a2 + 40));
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x548u) )
  {
    sub_8F680(a2, 0, "mba.got_ea");
    sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 1352) - *(_QWORD *)(a2 + 40));
  }
  if ( (unsigned __int8)sub_7A640(v74, 0, 0x560u) )
  {
    sub_8F680(a2, 0, "mba.func_casts");
    sub_7F8E0((__int64 *)a2);
    v43 = *(_QWORD **)(a1 + 1376);
    if ( v43 )
    {
      if ( *(_QWORD *)(a1 + 1384) )
      {
        v63 = (_QWORD *)v43[1];
LABEL_142:
        while ( v43 != v63 )
        {
          sub_7FB70((__int64 *)a2, v63[3] - *(_QWORD *)(a2 + 40));
          sub_7FD50((__int64 *)a2, (_BYTE *)v63 + 32);
          if ( (*v63 & 2) == 0 )
          {
            v64 = (_QWORD *)v63[2];
            if ( (*(_BYTE *)v64 & 2) != 0 )
            {
              v68 = (_QWORD *)(*v63 & 0xFFFFFFFFFFFFFFFCLL);
              v69 = *v68;
              if ( (*v68 & 2) == 0 )
              {
                while ( v63 == (_QWORD *)v68[2] )
                {
                  v63 = v68;
                  v70 = v69 & 0xFFFFFFFFFFFFFFFCLL;
                  v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v69 & 2) != 0 )
                  {
                    v63 = (_QWORD *)v70;
                    goto LABEL_142;
                  }
                  v68 = (_QWORD *)v70;
                }
              }
              v63 = v68;
            }
            else
            {
              do
              {
                v63 = v64;
                v64 = (_QWORD *)v64[1];
              }
              while ( (*(_BYTE *)v64 & 2) == 0 );
            }
          }
        }
      }
    }
  }
  sub_8F680(a2, 0, "mba.udtmops");
  sub_7F8E0((__int64 *)a2);
  v44 = *(_QWORD **)(a1 + 1392);
  if ( v44 )
  {
    if ( *(_QWORD *)(a1 + 1400) )
    {
      v45 = (_QWORD *)v44[1];
      while ( v45 != v44 )
      {
        sub_7FB70((__int64 *)a2, v45[3] - *(_QWORD *)(a2 + 40));
        sub_7FD50((__int64 *)a2, (_BYTE *)v45 + 32);
        if ( (*v45 & 2) == 0 )
        {
          v46 = (_QWORD *)v45[2];
          if ( (*(_BYTE *)v46 & 2) != 0 )
          {
            v55 = (_QWORD *)(*v45 & 0xFFFFFFFFFFFFFFFCLL);
            v56 = *v55;
            if ( (*v55 & 2) == 0 )
            {
              while ( v45 == (_QWORD *)v55[2] )
              {
                v45 = v55;
                v57 = v56 & 0xFFFFFFFFFFFFFFFCLL;
                v56 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v56 & 2) != 0 )
                {
                  v45 = (_QWORD *)v57;
                  goto LABEL_99;
                }
                v55 = (_QWORD *)v57;
              }
            }
            v45 = v55;
          }
          else
          {
            do
            {
              v45 = v46;
              v46 = (_QWORD *)v46[1];
            }
            while ( (*(_BYTE *)v46 & 2) == 0 );
          }
        }
LABEL_99:
        ;
      }
    }
  }
  sub_8F680(a2, 0, "mba.fictvec");
  sub_7F8E0((__int64 *)a2);
  if ( *(_QWORD *)(a1 + 1416) )
  {
    sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 1432) - *(_QWORD *)(a2 + 40));
    v71 = *(_QWORD **)(a1 + 1408);
    v72 = &v71[*(_QWORD *)(a1 + 1416)];
    while ( v72 != v71 )
    {
      v73 = *v71++ - *(_QWORD *)(a2 + 40);
      sub_7FB70((__int64 *)a2, v73);
    }
  }
  sub_8F680(a2, 0, "mba.retvalue");
  sub_80FB0(*(_QWORD *)(a1 + 944), (__int64 *)a2);
  sub_8F680(a2, 0, "mba.spbase");
  sub_7FB70((__int64 *)a2, *(_QWORD *)(a1 + 1440) - *(_QWORD *)(a2 + 40));
  sub_8F680(a2, 0, "mba.end");
  return sub_7F8E0((__int64 *)a2);
}

