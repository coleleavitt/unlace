unsigned __int64 __fastcall sub_8D160(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rsi
  bool v6; // zf
  __int64 *v7; // r12
  __int64 *v8; // r13
  __int64 *v9; // rdi
  char *v10; // rsi
  __int64 v11; // r13
  unsigned __int64 v12; // r12
  const char *v13; // rdx
  __int64 v14; // rdi
  char *v15; // rsi
  char v16; // r12
  __int64 j; // r13
  char v18; // al
  _QWORD *v19; // r13
  __int64 v20; // rsi
  char v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r15
  _QWORD *v25; // r13
  char *v26; // rsi
  _QWORD *v27; // r14
  _QWORD *v28; // r13
  _QWORD *v29; // rdx
  _QWORD *v30; // r15
  _QWORD *v31; // r13
  char *v32; // rsi
  _QWORD *v33; // rdx
  __int64 *v34; // r13
  unsigned __int64 (__fastcall *v35)(__int64, __int64 *); // rax
  _QWORD *v36; // r14
  _QWORD *v37; // r13
  _QWORD *v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rsi
  _QWORD *v42; // r13
  _QWORD *v43; // r13
  _QWORD *v44; // r12
  _QWORD *v45; // rdx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  const char *v57; // rdx
  char *v58; // rsi
  __int64 i; // rbp
  _QWORD *v60; // r13
  _QWORD *v61; // rdx
  _QWORD *v62; // r12
  _QWORD *v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  _QWORD *v70; // r12
  _QWORD *v71; // r13
  __int64 v72; // rsi
  int v73; // [rsp+Ch] [rbp-5Ch]
  const char *v74; // [rsp+10h] [rbp-58h] BYREF
  __int128 v75; // [rsp+18h] [rbp-50h]
  unsigned __int64 v76; // [rsp+28h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  v73 = *(_DWORD *)(a2 + 48);
  if ( v73 == 1 )
  {
    *(_QWORD *)(a2 + 40) = -1;
    sub_8B1C0(a2, 0, "mba.flags");
    sub_7B4E0((__int64 *)a2);
    v57 = s1;
    if ( *(_QWORD *)(a1 + 416) )
      v57 = *(const char **)(a1 + 408);
    sub_8B1C0(a2, 0, v57);
    v58 = (char *)s1;
    if ( *(_QWORD *)(a1 + 416) )
      v58 = *(char **)(a1 + 408);
    sub_7B840((__int64 *)a2, v58);
    sub_8B1C0(a2, 0, "mba.#lvars");
    sub_7B4E0((__int64 *)a2);
    sub_8B1C0(a2, 0, "mba.qty");
    sub_7B4E0((__int64 *)a2);
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      sub_8B790(a2, 2);
      sub_8CB80(i, a2);
    }
    return v76 - __readfsqword(0x28u);
  }
  sub_7B4E0((__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.flags");
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  v4 = *(__int64 **)(a1 + 8);
  if ( v4 )
  {
    v5 = *v4;
    v6 = *(_DWORD *)(a2 + 48) == 4;
    *(_QWORD *)(a2 + 40) = *v4;
    if ( !v6 )
      goto LABEL_4;
  }
  else
  {
    v53 = *(__int64 **)(a1 + 16);
    v6 = *(_DWORD *)(a2 + 48) == 4;
    v5 = *v53;
    *(_QWORD *)(a2 + 40) = *v53;
    if ( !v6 )
      goto LABEL_4;
  }
  sub_7B540((__int64 *)a2, v5);
LABEL_4:
  sub_8B1C0(a2, 2, "mbr.ranges");
  sub_7BD00((__int64 *)a2, a1 + 16);
  sub_8B1C0(a2, 0, "mba.last_prolog_ea");
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 48) - *(_QWORD *)(a2 + 40));
  sub_8B1C0(a2, 0, "mba.first_epilog_ea");
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 56) - *(_QWORD *)(a2 + 40));
  sub_8B1C0(a2, 0, "mba.npurged");
  sub_7B4E0((__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.cc");
  sub_7B4E0((__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.frame");
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 80));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 88));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 96));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 104));
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 128));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 136));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 144));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 152));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 160) - *(_QWORD *)(a2 + 40));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 168));
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 176));
  sub_8BDE0((__int64 *)(a1 + 1448), (__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.subframes");
  sub_7B4E0((__int64 *)a2);
  v7 = *(__int64 **)(a1 + 1472);
  v8 = &v7[5 * *(_QWORD *)(a1 + 1480)];
  while ( v8 != v7 )
  {
    v9 = v7;
    v7 += 5;
    sub_7CA60(v9, (__int64 *)a2);
  }
  sub_8B1C0(a2, 0, "mba.memory");
  sub_7BDC0(a1 + 184, (__int64 *)a2);
  sub_7BDC0(a1 + 208, (__int64 *)a2);
  sub_7BDC0(a1 + 232, (__int64 *)a2);
  sub_7C010((__int64 *)(a1 + 256), (__int64 *)a2);
  sub_7BDC0(a1 + 272, (__int64 *)a2);
  sub_7C010((__int64 *)(a1 + 296), (__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.maturity");
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.functype");
  sub_7B950((__int64 *)a2, (_BYTE *)(a1 + 328));
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
  {
    sub_7B410((__int64 *)a2, (__int64 *)(a1 + 336));
    sub_7C010((__int64 *)(a1 + 360), (__int64 *)a2);
    sub_7BDC0(a1 + 376, (__int64 *)a2);
  }
  sub_7B4E0((__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.label");
  v10 = (char *)s1;
  if ( *(_QWORD *)(a1 + 416) )
    v10 = *(char **)(a1 + 408);
  v11 = 0;
  v12 = 0;
  sub_7B840((__int64 *)a2, v10);
  sub_8B1C0(a2, 0, "mba.lvars");
  sub_7B4E0((__int64 *)a2);
  if ( *(_QWORD *)(a1 + 440) )
  {
    do
    {
      if ( *(_BYTE *)(a2 + 52) )
      {
        v74 = nullptr;
        v75 = 0;
        sub_674F0((__int64 *)&v74);
        v13 = s1;
        if ( (_QWORD)v75 )
          v13 = v74;
        sub_8B1C0(a2, 2, v13);
        if ( v74 )
        {
          *(_QWORD *)&v75 = 0;
          qfree();
        }
      }
      ++v12;
      v14 = v11 + *(_QWORD *)(a1 + 432);
      v11 += 104;
      sub_7D660(v14, (__int64 *)a2);
    }
    while ( v12 < *(_QWORD *)(a1 + 440) );
  }
  sub_8B1C0(a2, 0, "mba.argidx");
  sub_7BAE0((__int64 *)a2, (__int64 *)(a1 + 456));
  sub_7B4E0((__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.error");
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 488) - *(_QWORD *)(a2 + 40));
  v15 = (char *)s1;
  if ( *(_QWORD *)(a1 + 504) )
    v15 = *(char **)(a1 + 496);
  v16 = 0;
  sub_7B840((__int64 *)a2, v15);
  sub_8B1C0(a2, 0, "mba.blocks");
  sub_7B4E0((__int64 *)a2);
  for ( j = *(_QWORD *)(a1 + 520); j; v16 |= (v18 & 8) != 0 )
  {
    sub_8B790(a2, 2);
    sub_8CB80(j, a2);
    v18 = *(_BYTE *)(j + 24);
    j = *(_QWORD *)(j + 8);
  }
  sub_8B1C0(a2, 0, "mba.std_ivls");
  v19 = (_QWORD *)(a1 + 536);
  do
  {
    v20 = *(_QWORD *)a2;
    v21 = *v19 == 0;
    v22 = *(_QWORD *)(a2 + 8);
    if ( v19[1] + *v19 == -1 )
      v21 |= 2u;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v22 + 1) )
    {
      v23 = qvector_reserve();
      *(_QWORD *)a2 = v23;
      v20 = v23;
      v22 = *(_QWORD *)(a2 + 8);
    }
    *(_BYTE *)(v20 + v22) = v21;
    v19 += 4;
    ++*(_QWORD *)(a2 + 8);
    sub_7B770((__int64 *)a2, *(v19 - 4) - *(_QWORD *)(a2 + 40));
    sub_7B540((__int64 *)a2, *(v19 - 3));
  }
  while ( (_QWORD *)(a1 + 728) != v19 );
  sub_8B1C0(a2, 0, "mba.notes");
  sub_7B4E0((__int64 *)a2);
  v24 = *(_QWORD **)(a1 + 728);
  v25 = &v24[5 * *(_QWORD *)(a1 + 736)];
  while ( v25 != v24 )
  {
    sub_7B770((__int64 *)a2, *v24 - *(_QWORD *)(a2 + 40));
    sub_7B4E0((__int64 *)a2);
    v26 = (char *)s1;
    if ( v24[3] )
      v26 = (char *)v24[2];
    v24 += 5;
    sub_7B840((__int64 *)a2, v26);
  }
  sub_8B1C0(a2, 0, "mba.occurred_warns");
  sub_7B360((__int64 *)a2, a1 + 752, 32);
  sub_8B1C0(a2, 0, "mba.nprealloc");
  sub_7B4E0((__int64 *)a2);
  if ( *(_QWORD *)(a1 + 800) )
  {
    if ( !under_debugger )
      sub_37DDE0(52152);
LABEL_168:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 808) )
  {
    if ( !under_debugger )
      sub_37DDE0(52153);
    goto LABEL_168;
  }
  sub_8B1C0(a2, 0, "mba.corrected_stkvars");
  sub_7B4E0((__int64 *)a2);
  v27 = *(_QWORD **)(a1 + 816);
  if ( v27 )
  {
    if ( *(_QWORD *)(a1 + 824) )
    {
      v28 = (_QWORD *)v27[1];
      if ( v27 != v28 )
      {
        do
        {
          while ( 1 )
          {
            sub_7B540((__int64 *)a2, v28[3]);
            sub_7B540((__int64 *)a2, v28[4]);
            if ( (*v28 & 2) == 0 )
              break;
LABEL_39:
            if ( v28 == v27 )
              goto LABEL_40;
          }
          v29 = (_QWORD *)v28[2];
          if ( (*(_BYTE *)v29 & 2) == 0 )
          {
            do
            {
              v28 = v29;
              v29 = (_QWORD *)v29[1];
            }
            while ( (*(_BYTE *)v29 & 2) == 0 );
            goto LABEL_39;
          }
          v47 = (_QWORD *)(*v28 & 0xFFFFFFFFFFFFFFFCLL);
          v48 = *v47;
          if ( (*v47 & 2) == 0 )
          {
            while ( (_QWORD *)v47[2] == v28 )
            {
              v28 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
              v48 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v48 & 2) != 0 )
                goto LABEL_39;
              v49 = v47;
              v47 = v28;
              v28 = v49;
            }
          }
          v28 = v47;
        }
        while ( v47 != v27 );
      }
    }
  }
LABEL_40:
  sub_8B1C0(a2, 0, "mba.lv_aliased");
  sub_7C010((__int64 *)(a1 + 832), (__int64 *)a2);
  sub_7BDC0(a1 + 848, (__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.lvar_names");
  sub_7B4E0((__int64 *)a2);
  v30 = *(_QWORD **)(a1 + 872);
  if ( v30 )
  {
    if ( *(_QWORD *)(a1 + 880) )
    {
      v31 = (_QWORD *)v30[1];
      if ( v30 != v31 )
      {
        while ( 1 )
        {
LABEL_43:
          v32 = (char *)s1;
          if ( v31[4] )
            v32 = (char *)v31[3];
          sub_7B840((__int64 *)a2, v32);
          if ( (*v31 & 2) != 0 )
            goto LABEL_48;
          v33 = (_QWORD *)v31[2];
          if ( (*(_BYTE *)v33 & 2) != 0 )
          {
            v50 = (_QWORD *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
            v51 = *v50;
            if ( (*v50 & 2) == 0 )
            {
              while ( (_QWORD *)v50[2] == v31 )
              {
                v31 = v50;
                v52 = v51 & 0xFFFFFFFFFFFFFFFCLL;
                v51 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v51 & 2) != 0 )
                {
                  v31 = (_QWORD *)v52;
                  if ( v30 != (_QWORD *)v52 )
                    goto LABEL_43;
                  goto LABEL_49;
                }
                v50 = (_QWORD *)v52;
              }
            }
            v31 = v50;
            if ( v30 == v50 )
              break;
          }
          else
          {
            do
            {
              v31 = v33;
              v33 = (_QWORD *)v33[1];
            }
            while ( (*(_BYTE *)v33 & 2) == 0 );
LABEL_48:
            if ( v30 == v31 )
              break;
          }
        }
      }
    }
  }
LABEL_49:
  sub_8B1C0(a2, 0, "mba.counters");
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  sub_7B4E0((__int64 *)a2);
  if ( *(_QWORD *)(a1 + 920) )
  {
    sub_8B1C0(a2, 0, "mba.procinf");
    v34 = *(__int64 **)(a1 + 920);
    v35 = *(unsigned __int64 (__fastcall **)(__int64, __int64 *))(*v34 + 16);
    if ( v35 == sub_8B830 )
    {
      sub_8B1C0(a2, 2, "procinf.sregs");
      sub_7BAE0((__int64 *)a2, v34 + 1);
      sub_8B1C0(a2, 2, "procinf.spoiled");
      sub_7B410((__int64 *)a2, v34 + 4);
    }
    else
    {
      v35(*(_QWORD *)(a1 + 920), (__int64 *)a2);
    }
  }
  if ( *(_QWORD *)(a1 + 928) )
  {
    sub_8B1C0(a2, 0, "mba.gvad");
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 928) + 80LL))(*(_QWORD *)(a1 + 928), a2);
    if ( *(_QWORD *)(a1 + 936) )
    {
      sub_8B1C0(a2, 0, "mba.va_collector");
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 936) + 104LL))(*(_QWORD *)(a1 + 936), a2);
    }
    goto LABEL_55;
  }
  if ( *(_QWORD *)(a1 + 936) )
  {
    if ( !under_debugger )
      sub_37DDE0(52164);
    goto LABEL_168;
  }
LABEL_55:
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x3B8u) )
  {
    sub_8B1C0(a2, 0, "mba.partials");
    sub_7BB90((__int64 *)a2, a1 + 952);
  }
  sub_8B1C0(a2, 0, "mba.extins");
  sub_7BB90((__int64 *)a2, a1 + 1000);
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x418u) )
  {
    sub_8B1C0(a2, 0, "mba.swapinsns");
    sub_7BB90((__int64 *)a2, a1 + 1048);
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x478u) )
  {
    sub_8B1C0(a2, 0, "mba.ldxmap");
    sub_7B4E0((__int64 *)a2);
    v36 = *(_QWORD **)(a1 + 1144);
    if ( v36 )
    {
      if ( *(_QWORD *)(a1 + 1152) )
      {
        v60 = (_QWORD *)v36[1];
        while ( v36 != v60 )
        {
          sub_7B770((__int64 *)a2, v60[3] - *(_QWORD *)(a2 + 40));
          sub_7B770((__int64 *)a2, v60[4] - *(_QWORD *)(a2 + 40));
          if ( (*v60 & 2) == 0 )
          {
            v61 = (_QWORD *)v60[2];
            if ( (*(_BYTE *)v61 & 2) != 0 )
            {
              v64 = (_QWORD *)(*v60 & 0xFFFFFFFFFFFFFFFCLL);
              v65 = *v64;
              if ( (*v64 & 2) != 0 || (_QWORD *)v64[2] != v60 )
              {
LABEL_148:
                v60 = v64;
              }
              else
              {
                while ( 1 )
                {
                  v60 = (_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
                  v65 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v65 & 2) != 0 )
                    break;
                  v66 = v64;
                  v64 = v60;
                  if ( (_QWORD *)v60[2] != v66 )
                    goto LABEL_148;
                }
              }
            }
            else
            {
              do
              {
                v60 = v61;
                v61 = (_QWORD *)v61[1];
              }
              while ( (*(_BYTE *)v61 & 2) == 0 );
            }
          }
        }
      }
    }
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x488u) )
  {
    sub_8B1C0(a2, 0, "mba.kregs");
    sub_7BDC0(a1 + 1160, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x4A0u) )
  {
    sub_8B1C0(a2, 0, "mba.fp");
    sub_7B4E0((__int64 *)a2);
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x4A8u) )
  {
    sub_8B1C0(a2, 0, "mba.stkpnts");
    sub_7BC30((__int64 *)a2, a1 + 1192);
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x4C0u) )
  {
    sub_8B1C0(a2, 0, "mba.unk_tcalls");
    sub_7B4E0((__int64 *)a2);
    v37 = *(_QWORD **)(a1 + 1216);
    v38 = &v37[*(_QWORD *)(a1 + 1224)];
    while ( v38 != v37 )
    {
      v39 = *v37++ - *(_QWORD *)(a2 + 40);
      sub_7B770((__int64 *)a2, v39);
    }
  }
  if ( v16 )
  {
    v40 = *(_QWORD *)(a1 + 1240);
    if ( v40 )
      sub_7C550(v40, (__int64 *)a2);
    else
      sub_7B4E0((__int64 *)a2);
    v41 = *(_QWORD *)(a1 + 1248);
    if ( v41 )
      sub_7BD00((__int64 *)a2, v41);
    else
      sub_7B4E0((__int64 *)a2);
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x4E8u) )
  {
    sub_8B1C0(a2, 0, "mba.lvinf");
    sub_2B7590(a1 + 1256, a2);
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x520u) )
  {
    sub_8B1C0(a2, 0, "mba.udcalls");
    sub_2B3150(a2, a1 + 1312);
  }
  if ( *(_QWORD *)(a1 + 1328) )
  {
    sub_8B1C0(a2, 0, "mba.numforms");
    sub_2B1B70(a2, *(_QWORD *)(a1 + 1328));
  }
  if ( *(_QWORD *)(a1 + 1344) && (unsigned __int8)sub_762C0(v73, 0, 0x540u) )
  {
    sub_8B1C0(a2, 0, "mba.mflags");
    sub_2B3240(a2, *(_QWORD *)(a1 + 1344), *(_QWORD *)(a2 + 40));
  }
  if ( *(_QWORD *)(a1 + 1336) && (unsigned __int8)sub_762C0(v73, 0, 0x538u) )
  {
    sub_8B1C0(a2, 0, "mba.user_minsns");
    sub_2B3660(a2, *(_QWORD *)(a1 + 1336), *(_QWORD *)(a2 + 40));
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x548u) )
  {
    sub_8B1C0(a2, 0, "mba.got_ea");
    sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 1352) - *(_QWORD *)(a2 + 40));
  }
  if ( (unsigned __int8)sub_762C0(v73, 0, 0x560u) )
  {
    sub_8B1C0(a2, 0, "mba.func_casts");
    sub_7B4E0((__int64 *)a2);
    v42 = *(_QWORD **)(a1 + 1376);
    if ( v42 )
    {
      if ( *(_QWORD *)(a1 + 1384) )
      {
        v62 = (_QWORD *)v42[1];
LABEL_142:
        while ( v42 != v62 )
        {
          sub_7B770((__int64 *)a2, v62[3] - *(_QWORD *)(a2 + 40));
          sub_7B950((__int64 *)a2, (_BYTE *)v62 + 32);
          if ( (*v62 & 2) == 0 )
          {
            v63 = (_QWORD *)v62[2];
            if ( (*(_BYTE *)v63 & 2) != 0 )
            {
              v67 = (_QWORD *)(*v62 & 0xFFFFFFFFFFFFFFFCLL);
              v68 = *v67;
              if ( (*v67 & 2) == 0 )
              {
                while ( v62 == (_QWORD *)v67[2] )
                {
                  v62 = v67;
                  v69 = v68 & 0xFFFFFFFFFFFFFFFCLL;
                  v68 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v68 & 2) != 0 )
                  {
                    v62 = (_QWORD *)v69;
                    goto LABEL_142;
                  }
                  v67 = (_QWORD *)v69;
                }
              }
              v62 = v67;
            }
            else
            {
              do
              {
                v62 = v63;
                v63 = (_QWORD *)v63[1];
              }
              while ( (*(_BYTE *)v63 & 2) == 0 );
            }
          }
        }
      }
    }
  }
  sub_8B1C0(a2, 0, "mba.udtmops");
  sub_7B4E0((__int64 *)a2);
  v43 = *(_QWORD **)(a1 + 1392);
  if ( v43 )
  {
    if ( *(_QWORD *)(a1 + 1400) )
    {
      v44 = (_QWORD *)v43[1];
      while ( v44 != v43 )
      {
        sub_7B770((__int64 *)a2, v44[3] - *(_QWORD *)(a2 + 40));
        sub_7B950((__int64 *)a2, (_BYTE *)v44 + 32);
        if ( (*v44 & 2) == 0 )
        {
          v45 = (_QWORD *)v44[2];
          if ( (*(_BYTE *)v45 & 2) != 0 )
          {
            v54 = (_QWORD *)(*v44 & 0xFFFFFFFFFFFFFFFCLL);
            v55 = *v54;
            if ( (*v54 & 2) == 0 )
            {
              while ( v44 == (_QWORD *)v54[2] )
              {
                v44 = v54;
                v56 = v55 & 0xFFFFFFFFFFFFFFFCLL;
                v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v55 & 2) != 0 )
                {
                  v44 = (_QWORD *)v56;
                  goto LABEL_99;
                }
                v54 = (_QWORD *)v56;
              }
            }
            v44 = v54;
          }
          else
          {
            do
            {
              v44 = v45;
              v45 = (_QWORD *)v45[1];
            }
            while ( (*(_BYTE *)v45 & 2) == 0 );
          }
        }
LABEL_99:
        ;
      }
    }
  }
  sub_8B1C0(a2, 0, "mba.fictvec");
  sub_7B4E0((__int64 *)a2);
  if ( *(_QWORD *)(a1 + 1416) )
  {
    sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 1432) - *(_QWORD *)(a2 + 40));
    v70 = *(_QWORD **)(a1 + 1408);
    v71 = &v70[*(_QWORD *)(a1 + 1416)];
    while ( v71 != v70 )
    {
      v72 = *v70++ - *(_QWORD *)(a2 + 40);
      sub_7B770((__int64 *)a2, v72);
    }
  }
  sub_8B1C0(a2, 0, "mba.retvalue");
  sub_7CAF0(*(_QWORD *)(a1 + 944), (__int64 *)a2);
  sub_8B1C0(a2, 0, "mba.spbase");
  sub_7B770((__int64 *)a2, *(_QWORD *)(a1 + 1440) - *(_QWORD *)(a2 + 40));
  sub_8B1C0(a2, 0, "mba.end");
  return sub_7B4E0((__int64 *)a2);
}

