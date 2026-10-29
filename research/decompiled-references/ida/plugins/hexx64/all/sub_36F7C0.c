_BOOL8 __fastcall sub_36F7C0(__int64 a1, __int64 *a2, int *a3, char a4, char a5, double a6)
{
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  int v17; // ebx
  __int64 v18; // r13
  int v19; // esi
  bool v20; // zf
  int v21; // esi
  __int64 v22; // r15
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rdx
  unsigned int v32; // r14d
  int v33; // eax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  _DWORD *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // r13
  void *v46; // rdi
  unsigned __int64 v47; // r13
  void *v48; // rdi
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // [rsp+0h] [rbp-1B0h]
  bool v54; // [rsp+7h] [rbp-1A9h]
  __int64 v55; // [rsp+8h] [rbp-1A8h]
  signed int v56; // [rsp+10h] [rbp-1A0h]
  int v57; // [rsp+14h] [rbp-19Ch]
  bool src; // [rsp+30h] [rbp-180h]
  void *srca; // [rsp+30h] [rbp-180h]
  void *srcb; // [rsp+30h] [rbp-180h]
  _QWORD *v62; // [rsp+40h] [rbp-170h]
  int n; // [rsp+48h] [rbp-168h]
  size_t na; // [rsp+48h] [rbp-168h]
  size_t nb; // [rsp+48h] [rbp-168h]
  unsigned int v67; // [rsp+60h] [rbp-150h]
  int v68; // [rsp+68h] [rbp-148h]
  int v69; // [rsp+6Ch] [rbp-144h]
  __int64 v70; // [rsp+78h] [rbp-138h] BYREF
  int v71[4]; // [rsp+80h] [rbp-130h] BYREF
  __int64 v72; // [rsp+90h] [rbp-120h]
  _BYTE v73[16]; // [rsp+A0h] [rbp-110h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-100h]
  int v75; // [rsp+B8h] [rbp-F8h]
  void *v76; // [rsp+C0h] [rbp-F0h]
  unsigned __int64 v77; // [rsp+C8h] [rbp-E8h]
  void *v78; // [rsp+D8h] [rbp-D8h]
  unsigned __int64 v79; // [rsp+E0h] [rbp-D0h]
  int v80; // [rsp+F8h] [rbp-B8h]
  int v81; // [rsp+FCh] [rbp-B4h]
  __int64 v82; // [rsp+100h] [rbp-B0h]
  __int64 v83; // [rsp+110h] [rbp-A0h] BYREF
  __int128 v84; // [rsp+118h] [rbp-98h]
  __int64 v85; // [rsp+128h] [rbp-88h]
  __int64 v86; // [rsp+130h] [rbp-80h]
  __int64 v87; // [rsp+138h] [rbp-78h]
  __int64 v88; // [rsp+148h] [rbp-68h]
  __int64 v89; // [rsp+150h] [rbp-60h]
  unsigned __int64 v90; // [rsp+178h] [rbp-38h]

  v90 = __readfsqword(0x28u);
  v8 = *(_DWORD *)(a2[35] + 72);
  if ( v8 > 0x10 )
  {
    if ( v8 != 176 )
      goto LABEL_3;
LABEL_60:
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        return 1;
      netnode_check();
      v32 = netnode_altval();
      if ( v32 <= 0x74 )
        return 1;
      v33 = *(_DWORD *)(get_ph() + 4);
      if ( v33 )
      {
        v34 = (unsigned int)(v33 - 13);
        if ( (unsigned int)v34 > 0x3B )
          return 1;
        v35 = 0x800000000000005LL;
        if ( !_bittest64(&v35, v34) || v32 == 117 )
          return 1;
      }
    }
    goto LABEL_4;
  }
  v8 = getinf();
  if ( v8 == 176 )
    goto LABEL_60;
LABEL_3:
  if ( v8 == 256 )
    return 1;
LABEL_4:
  v9 = a2[35];
  v10 = v9;
  v57 = *(_DWORD *)v9;
  v54 = *(_DWORD *)v9 == 3;
  if ( *(_DWORD *)v9 == 3 )
  {
    if ( !a4 )
    {
      v11 = a2[27];
      v12 = *(_QWORD *)(v9 + 120);
      if ( v12 < v11 )
      {
        if ( !under_debugger )
          sub_383060(0xCB5Bu, a6);
      }
      else if ( a2[24] == v11 )
      {
        if ( v12 == *(_QWORD *)(v10 + 96) )
        {
          v13 = *(_QWORD *)(a1 + 1504);
          v67 = *(_DWORD *)(v13 + 80);
          if ( !v12 )
          {
            v52 = 8;
            goto LABEL_11;
          }
          v56 = *(_DWORD *)(v13 + 80);
LABEL_50:
          v67 = 8;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v10 + 80) + 112LL) + 200LL))(
                 *(_QWORD *)(*(_QWORD *)(v10 + 80) + 112LL),
                 **(unsigned int **)(v10 + 112)) )
          {
            v67 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v10 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(v10 + 80) + 112LL),
                    **(unsigned int **)(v10 + 112));
          }
          if ( *(_QWORD *)(v10 + 120) > 1u && *(_DWORD *)(*(_QWORD *)(v10 + 112) + 4LL) - **(_DWORD **)(v10 + 112) < v67 )
            v67 = round_down_power2();
          v13 = *(_QWORD *)(a1 + 1504);
          v10 = a2[35];
          if ( !a4 )
            goto LABEL_56;
LABEL_46:
          v62 = (_QWORD *)(v10 + 112);
          v14 = a2 + 26;
          sub_32C150(&v70, v13, v67, a6);
          v15 = a2[27];
          if ( *(_QWORD *)(v10 + 120) < v15 )
            goto LABEL_132;
          v29 = a2[35];
          v30 = *(_QWORD *)(v29 + 80);
          if ( *(_DWORD *)(*(_QWORD *)(v30 + 8) + 4LL) == 13 || !*(_QWORD *)(v29 + 120) )
          {
            v68 = 1;
            v55 = -1;
            v52 = v67;
            goto LABEL_14;
          }
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v30 + 112) + 200LL))(
                 *(_QWORD *)(v30 + 112),
                 **(unsigned int **)(v29 + 112)) )
          {
            v49 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v29 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(v29 + 80) + 112LL),
                    **(unsigned int **)(v29 + 112));
            if ( *(_QWORD *)(v29 + 120) <= 1u
              || *(_DWORD *)(*(_QWORD *)(v29 + 112) + 4LL) - **(_DWORD **)(v29 + 112) >= (unsigned int)v49 )
            {
LABEL_117:
              if ( v49 <= 7 )
              {
                v55 = -1;
                v68 = 2;
                v52 = v67;
                v15 = a2[27];
                goto LABEL_14;
              }
              goto LABEL_72;
            }
          }
          else
          {
            if ( *(_QWORD *)(v29 + 120) <= 1u )
            {
              v15 = a2[27];
              v55 = -1;
              v68 = 1;
              v52 = v67;
              goto LABEL_14;
            }
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v29 + 112) + 4LL) - **(_DWORD **)(v29 + 112)) > 7 )
            {
LABEL_72:
              v55 = -1;
              v68 = 1;
              v52 = v67;
              v15 = a2[27];
              goto LABEL_14;
            }
          }
          v49 = round_down_power2();
          goto LABEL_117;
        }
        if ( !under_debugger )
          sub_383060(0xCB5Du, a6);
      }
      else if ( !under_debugger )
      {
        sub_383060(0xCB5Cu, a6);
      }
LABEL_136:
      BUG();
    }
    return 1;
  }
  v13 = *(_QWORD *)(a1 + 1504);
  v67 = 8;
  v56 = *(_DWORD *)(v13 + 80);
  if ( *(_QWORD *)(v9 + 120) )
    goto LABEL_50;
  if ( a4 )
    goto LABEL_46;
LABEL_56:
  v52 = v67;
  v67 = v56;
LABEL_11:
  v62 = (_QWORD *)(v10 + 88);
  v14 = a2 + 23;
  sub_32C270(&v70, v13, v67);
  if ( !sub_36F620(*(_QWORD *)(a1 + 1504), *(_DWORD *)(a2[35] + 72), a6) )
  {
    v15 = a2[24];
    if ( *(_QWORD *)(v10 + 96) >= v15 )
    {
      v68 = 1;
      v55 = -1;
      v56 = v67;
      goto LABEL_14;
    }
    goto LABEL_132;
  }
  a6 = 0.0;
  v83 = 32;
  v85 = 0;
  v84 = 0;
  get_stkarg_area_info();
  v55 = *(_QWORD *)(a1 + 144) + v84 - *(int *)(a1 + 120);
  v15 = a2[24];
  if ( *(_QWORD *)(v10 + 96) < v15 )
  {
LABEL_132:
    if ( !under_debugger )
      sub_383060(0xCB5Eu, a6);
    goto LABEL_136;
  }
  v68 = 1;
  v56 = v67;
LABEL_14:
  if ( !v15 )
  {
LABEL_76:
    src = 1;
    goto LABEL_77;
  }
  v16 = 0;
  v69 = 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = 4 * v16;
    if ( *(_DWORD *)(*v14 + 4 * v16) == -1 )
    {
      src = sub_64930((_QWORD *)(a1 + 296), *(_DWORD *)(*v62 + 4 * v16));
      if ( !src && (v57 != 3 || !sub_64930((_QWORD *)(a1 + 296), *(_DWORD *)(*(_QWORD *)(a2[35] + 112) + 4 * v16))) )
        break;
    }
LABEL_16:
    v69 += v56 * v68;
    v17 += v68;
    v16 = v17;
    if ( v17 >= (unsigned __int64)v14[1] )
      goto LABEL_76;
  }
  if ( v55 != -1 )
  {
    v83 = v55 + v69;
    *(_QWORD *)&v84 = v56;
    if ( (unsigned __int8)sub_317E70(a2 + 29, (__m128i *)&v83, 0) )
      goto LABEL_77;
  }
  v19 = *a3;
  if ( *a3 < 0 )
  {
LABEL_23:
    v20 = v19 == -1;
    v21 = v19 + 1;
    *a3 = v21;
    if ( v20 && *(_QWORD *)(a1 + 464) && *(char *)(sub_13D280((_QWORD *)a1, v21, a6) + 25) < 0 )
    {
      if ( a5 || *(_DWORD *)(a1 + 72) == 128 )
        goto LABEL_77;
      v41 = sub_13D280((_QWORD *)a1, 0, a6);
      *(_DWORD *)(v41 + 24) &= ~0x8000u;
      *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
    }
    sub_1EF690((__int64)v73, *(_QWORD *)(a1 + 1504), *(_DWORD *)(*v62 + 4 * v16), v67, &v70, 0, *(_QWORD *)(a1 + 40));
    LODWORD(v83) = 0;
    copy_argloc();
    *((_QWORD *)&v84 + 1) = v74;
    v22 = sub_1F04A0((__int64 *)(a1 + 432), (__int64)&v83, a6);
    cleanup_argloc();
    if ( v22 )
      goto LABEL_33;
    if ( v54 )
    {
      sub_1EF690(
        (__int64)&v83,
        *(_QWORD *)(a1 + 1504),
        *(_DWORD *)(*(_QWORD *)(a2[35] + 112) + v18),
        v52,
        &v70,
        0,
        *(_QWORD *)(a1 + 40));
      v71[0] = 0;
      copy_argloc();
      v72 = *((_QWORD *)&v84 + 1);
      v22 = sub_1F04A0((__int64 *)(a1 + 432), (__int64)v71, a6);
      cleanup_argloc();
      clear_tinfo_t();
      if ( v88 )
      {
        v89 = 0;
        qfree(v88);
      }
      if ( v86 )
      {
        v87 = 0;
        qfree(v86);
      }
      cleanup_argloc();
    }
    if ( v22 )
    {
LABEL_33:
      if ( (*(_BYTE *)(v22 + 24) & 1) == 0 )
        goto LABEL_34;
      if ( (unsigned __int8)sub_36AA40(a2, (_DWORD *)v22, *a3) )
      {
        v23 = *(_DWORD *)(v22 + 24);
        if ( (v23 & 1) != 0 )
        {
LABEL_36:
          *(_DWORD *)(v22 + 92) = 0;
          v24 = v23 & 0xFFEFFFFF;
          v25 = (v22 - *(_QWORD *)(a1 + 432)) >> 3;
          *(_DWORD *)(v22 + 24) = v24;
          n = -991146299 * v25;
LABEL_37:
          BYTE1(v24) |= 1u;
          *(_DWORD *)(v22 + 24) = v24;
          v26 = *(_QWORD *)(a1 + 464);
          v27 = *(_QWORD *)(a1 + 456);
          v28 = 4LL * *a3;
          if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v26 + 1) )
          {
            v37 = qvector_reserve(a1 + 456, v27, v26 + 1, 4);
            *(_QWORD *)(a1 + 456) = v37;
            v26 = *(_QWORD *)(a1 + 464);
            v27 = v37;
          }
          memmove((void *)(v27 + v28 + 4), (const void *)(v27 + v28), 4 * v26 - v28);
          *(_DWORD *)(v27 + v28) = n;
          ++*(_QWORD *)(a1 + 464);
          clear_tinfo_t();
          if ( v78 )
          {
            v79 = 0;
            qfree((__int64)v78);
          }
          if ( v76 )
          {
            v77 = 0;
            qfree((__int64)v76);
          }
          cleanup_argloc();
          goto LABEL_16;
        }
LABEL_34:
        if ( !(unsigned __int8)sub_36AA40(a2, (_DWORD *)v22, *a3) )
        {
          copy_argloc();
          *(_QWORD *)(v22 + 16) = v74;
          *(_DWORD *)(v22 + 24) = v75;
          if ( (_BYTE *)v22 != v73 )
          {
            v45 = v77;
            if ( !v77 || (na = v77 - 1, v77 == 1) )
            {
              *(_QWORD *)(v22 + 40) = 0;
            }
            else
            {
              v46 = *(void **)(v22 + 32);
              srca = v76;
              if ( *(_QWORD *)(v22 + 48) < v77 )
              {
                v51 = qvector_reserve(v22 + 32, (__int64)v46, v77, 1);
                *(_QWORD *)(v22 + 32) = v51;
                v46 = (void *)v51;
              }
              *(_QWORD *)(v22 + 40) = v45;
              memmove(v46, srca, na);
              *(_BYTE *)(*(_QWORD *)(v22 + 32) + v45 - 1) = 0;
            }
            v47 = v79;
            if ( !v79 || (nb = v79 - 1, v79 == 1) )
            {
              *(_QWORD *)(v22 + 64) = 0;
            }
            else
            {
              v48 = *(void **)(v22 + 56);
              srcb = v78;
              if ( *(_QWORD *)(v22 + 72) < v79 )
              {
                v50 = qvector_reserve(v22 + 56, (__int64)v48, v79, 1);
                *(_QWORD *)(v22 + 56) = v50;
                v48 = (void *)v50;
              }
              *(_QWORD *)(v22 + 64) = v47;
              memmove(v48, srcb, nb);
              *(_BYTE *)(*(_QWORD *)(v22 + 56) + v47 - 1) = 0;
            }
          }
          copy_tinfo_t();
          *(_DWORD *)(v22 + 88) = v80;
          *(_DWORD *)(v22 + 92) = v81;
          *(_QWORD *)(v22 + 96) = v82;
        }
        v23 = *(_DWORD *)(v22 + 24);
        goto LABEL_36;
      }
      LODWORD(v83) = 0;
      copy_argloc();
      v71[0] = 0;
      *((_QWORD *)&v84 + 1) = v74;
      copy_argloc();
      v72 = *(_QWORD *)(v22 + 16);
      if ( !(unsigned int)sub_3307E0(v71, (int *)&v83, a6) )
      {
        cleanup_argloc();
        cleanup_argloc();
        if ( a5 )
        {
          clear_tinfo_t();
          if ( v78 )
          {
            v79 = 0;
            qfree((__int64)v78);
          }
          if ( v76 )
          {
            v77 = 0;
            qfree((__int64)v76);
          }
          cleanup_argloc();
          goto LABEL_77;
        }
        v40 = (v22 - *(_QWORD *)(a1 + 432)) >> 3;
        *(_DWORD *)(v22 + 24) &= ~0x100000u;
        n = -991146299 * v40;
        copy_argloc();
        sub_1EF530(v22);
        sub_1F45B0(a1, 0xFFFFFFFFFFFFFFFFLL, v22);
        *(_DWORD *)(v22 + 24) |= 0x400u;
        goto LABEL_84;
      }
      cleanup_argloc();
      cleanup_argloc();
    }
    v38 = *(_QWORD *)(a1 + 440);
    v75 &= ~1u;
    n = v38;
    sub_1F6560(a1, (__int64)v73, 0, a6);
    v22 = *(_QWORD *)(a1 + 432) + 104LL * (int)v38;
    *(_DWORD *)(v22 + 24) |= 0x80000u;
LABEL_84:
    v39 = *a3;
    *(_DWORD *)(*v14 + v18) = *a3;
    if ( v57 == 3 )
      *(_DWORD *)(a2[26] + v18) = v39;
    v24 = *(_DWORD *)(v22 + 24);
    goto LABEL_37;
  }
  v36 = sub_13D280((_QWORD *)a1, v19, a6);
  if ( *(_DWORD *)v36 != 2 )
  {
    if ( *(_DWORD *)v36 == 1 )
      goto LABEL_77;
    goto LABEL_75;
  }
  v42 = *(_QWORD *)(v36 + 8);
  v43 = *(_DWORD **)v42;
  v44 = *(_QWORD *)v42 + 24LL * *(_QWORD *)(v42 + 8);
  if ( v43 == (_DWORD *)v44 )
  {
LABEL_75:
    v19 = *a3;
    goto LABEL_23;
  }
  while ( *v43 != 1 )
  {
    v43 += 6;
    if ( (_DWORD *)v44 == v43 )
      goto LABEL_75;
  }
LABEL_77:
  clear_tinfo_t();
  return src;
}

