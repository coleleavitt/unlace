_BOOL8 __fastcall sub_367F40(__int64 a1, __int64 *a2, int *a3, char a4, char a5)
{
  unsigned int v7; // eax
  __int64 v8; // rax
  _QWORD *v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // r15
  int v16; // ebx
  __int64 v17; // r13
  int v18; // esi
  bool v19; // zf
  int v20; // esi
  __int64 v21; // r15
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // r15
  __int64 v28; // rbx
  __int64 v29; // rdx
  unsigned int v31; // r14d
  int v32; // eax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r15
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  _DWORD *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r13
  void *v45; // rdi
  unsigned __int64 v46; // r13
  void *v47; // rdi
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // [rsp+0h] [rbp-1B0h]
  bool v53; // [rsp+7h] [rbp-1A9h]
  __int64 v54; // [rsp+8h] [rbp-1A8h]
  signed int v55; // [rsp+10h] [rbp-1A0h]
  int v56; // [rsp+14h] [rbp-19Ch]
  bool src; // [rsp+30h] [rbp-180h]
  void *srca; // [rsp+30h] [rbp-180h]
  void *srcb; // [rsp+30h] [rbp-180h]
  _QWORD *v61; // [rsp+40h] [rbp-170h]
  int n; // [rsp+48h] [rbp-168h]
  size_t na; // [rsp+48h] [rbp-168h]
  size_t nb; // [rsp+48h] [rbp-168h]
  unsigned int v66; // [rsp+60h] [rbp-150h]
  int v67; // [rsp+68h] [rbp-148h]
  int v68; // [rsp+6Ch] [rbp-144h]
  __int64 v69; // [rsp+78h] [rbp-138h] BYREF
  int v70[4]; // [rsp+80h] [rbp-130h] BYREF
  __int64 v71; // [rsp+90h] [rbp-120h]
  _BYTE v72[16]; // [rsp+A0h] [rbp-110h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-100h]
  int v74; // [rsp+B8h] [rbp-F8h]
  void *v75; // [rsp+C0h] [rbp-F0h]
  unsigned __int64 v76; // [rsp+C8h] [rbp-E8h]
  void *v77; // [rsp+D8h] [rbp-D8h]
  unsigned __int64 v78; // [rsp+E0h] [rbp-D0h]
  int v79; // [rsp+F8h] [rbp-B8h]
  int v80; // [rsp+FCh] [rbp-B4h]
  __int64 v81; // [rsp+100h] [rbp-B0h]
  __int64 v82; // [rsp+110h] [rbp-A0h] BYREF
  __int128 v83; // [rsp+118h] [rbp-98h]
  __int64 v84; // [rsp+128h] [rbp-88h]
  __int64 v85; // [rsp+130h] [rbp-80h]
  __int64 v86; // [rsp+138h] [rbp-78h]
  __int64 v87; // [rsp+148h] [rbp-68h]
  __int64 v88; // [rsp+150h] [rbp-60h]
  unsigned __int64 v89; // [rsp+178h] [rbp-38h]

  v89 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a2[35] + 72);
  if ( v7 > 0x10 )
  {
    if ( v7 != 176 )
      goto LABEL_3;
LABEL_60:
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        return 1;
      netnode_check();
      v31 = netnode_altval();
      if ( v31 <= 0x74 )
        return 1;
      v32 = *(_DWORD *)(get_ph() + 4);
      if ( v32 )
      {
        v33 = (unsigned int)(v32 - 13);
        if ( (unsigned int)v33 > 0x3B )
          return 1;
        v34 = 0x800000000000005LL;
        if ( !_bittest64(&v34, v33) || v31 == 117 )
          return 1;
      }
    }
    goto LABEL_4;
  }
  v7 = getinf();
  if ( v7 == 176 )
    goto LABEL_60;
LABEL_3:
  if ( v7 == 256 )
    return 1;
LABEL_4:
  v8 = a2[35];
  v9 = (_QWORD *)v8;
  v56 = *(_DWORD *)v8;
  v53 = *(_DWORD *)v8 == 3;
  if ( *(_DWORD *)v8 == 3 )
  {
    if ( !a4 )
    {
      v10 = a2[27];
      v11 = *(_QWORD *)(v8 + 120);
      if ( v11 < v10 )
      {
        if ( !under_debugger )
          sub_37B760(52059);
      }
      else if ( a2[24] == v10 )
      {
        if ( v11 == v9[12] )
        {
          v12 = *(_QWORD *)(a1 + 1504);
          v66 = *(_DWORD *)(v12 + 80);
          if ( !v11 )
          {
            v51 = 8;
            goto LABEL_11;
          }
          v55 = *(_DWORD *)(v12 + 80);
LABEL_50:
          v66 = 8;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9[10] + 112LL) + 200LL))(
                 *(_QWORD *)(v9[10] + 112LL),
                 *(unsigned int *)v9[14]) )
          {
            v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9[10] + 112LL) + 32LL))(
                    *(_QWORD *)(v9[10] + 112LL),
                    *(unsigned int *)v9[14]);
          }
          if ( v9[15] > 1u && *(_DWORD *)(v9[14] + 4LL) - *(_DWORD *)v9[14] < v66 )
            v66 = round_down_power2();
          v12 = *(_QWORD *)(a1 + 1504);
          v9 = (_QWORD *)a2[35];
          if ( !a4 )
            goto LABEL_56;
LABEL_46:
          v61 = v9 + 14;
          v13 = a2 + 26;
          sub_324C20(&v69, v12, v66);
          v14 = a2[27];
          if ( v9[15] < v14 )
            goto LABEL_132;
          v28 = a2[35];
          v29 = *(_QWORD *)(v28 + 80);
          if ( *(_DWORD *)(*(_QWORD *)(v29 + 8) + 4LL) == 13 || !*(_QWORD *)(v28 + 120) )
          {
            v67 = 1;
            v54 = -1;
            v51 = v66;
            goto LABEL_14;
          }
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v29 + 112) + 200LL))(
                 *(_QWORD *)(v29 + 112),
                 **(unsigned int **)(v28 + 112)) )
          {
            v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v28 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(v28 + 80) + 112LL),
                    **(unsigned int **)(v28 + 112));
            if ( *(_QWORD *)(v28 + 120) <= 1u
              || *(_DWORD *)(*(_QWORD *)(v28 + 112) + 4LL) - **(_DWORD **)(v28 + 112) >= (unsigned int)v48 )
            {
LABEL_117:
              if ( v48 <= 7 )
              {
                v54 = -1;
                v67 = 2;
                v51 = v66;
                v14 = a2[27];
                goto LABEL_14;
              }
              goto LABEL_72;
            }
          }
          else
          {
            if ( *(_QWORD *)(v28 + 120) <= 1u )
            {
              v14 = a2[27];
              v54 = -1;
              v67 = 1;
              v51 = v66;
              goto LABEL_14;
            }
            if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v28 + 112) + 4LL) - **(_DWORD **)(v28 + 112)) > 7 )
            {
LABEL_72:
              v54 = -1;
              v67 = 1;
              v51 = v66;
              v14 = a2[27];
              goto LABEL_14;
            }
          }
          v48 = round_down_power2();
          goto LABEL_117;
        }
        if ( !under_debugger )
          sub_37B760(52061);
      }
      else if ( !under_debugger )
      {
        sub_37B760(52060);
      }
LABEL_136:
      BUG();
    }
    return 1;
  }
  v12 = *(_QWORD *)(a1 + 1504);
  v66 = 8;
  v55 = *(_DWORD *)(v12 + 80);
  if ( *(_QWORD *)(v8 + 120) )
    goto LABEL_50;
  if ( a4 )
    goto LABEL_46;
LABEL_56:
  v51 = v66;
  v66 = v55;
LABEL_11:
  v61 = v9 + 11;
  v13 = a2 + 23;
  sub_324D40(&v69, v12, v66);
  if ( !sub_367DA0(*(_QWORD *)(a1 + 1504), *(_DWORD *)(a2[35] + 72)) )
  {
    v14 = a2[24];
    if ( v9[12] >= v14 )
    {
      v67 = 1;
      v54 = -1;
      v55 = v66;
      goto LABEL_14;
    }
    goto LABEL_132;
  }
  v82 = 32;
  v84 = 0;
  v83 = 0;
  get_stkarg_area_info();
  v54 = *(_QWORD *)(a1 + 144) + v83 - *(int *)(a1 + 120);
  v14 = a2[24];
  if ( v9[12] < v14 )
  {
LABEL_132:
    if ( !under_debugger )
      sub_37B760(52062);
    goto LABEL_136;
  }
  v67 = 1;
  v55 = v66;
LABEL_14:
  if ( !v14 )
  {
LABEL_76:
    src = 1;
    goto LABEL_77;
  }
  v15 = 0;
  v68 = 0;
  v16 = 0;
  while ( 1 )
  {
    v17 = 4 * v15;
    if ( *(_DWORD *)(*v13 + 4 * v15) == -1 )
    {
      src = sub_5E3B0((_QWORD *)(a1 + 296), *(_DWORD *)(*v61 + 4 * v15));
      if ( !src && (v56 != 3 || !sub_5E3B0((_QWORD *)(a1 + 296), *(_DWORD *)(*(_QWORD *)(a2[35] + 112) + 4 * v15))) )
        break;
    }
LABEL_16:
    v68 += v55 * v67;
    v16 += v67;
    v15 = v16;
    if ( (unsigned __int64)v16 >= v13[1] )
      goto LABEL_76;
  }
  if ( v54 != -1 )
  {
    v82 = v54 + v68;
    *(_QWORD *)&v83 = v55;
    if ( (unsigned __int8)sub_310AF0(a2 + 29, (__m128i *)&v82, 0) )
      goto LABEL_77;
  }
  v18 = *a3;
  if ( *a3 < 0 )
  {
LABEL_23:
    v19 = v18 == -1;
    v20 = v18 + 1;
    *a3 = v20;
    if ( v19 && *(_QWORD *)(a1 + 464) && *(char *)(sub_136BC0((_QWORD *)a1, v20) + 25) < 0 )
    {
      if ( a5 || *(_DWORD *)(a1 + 72) == 128 )
        goto LABEL_77;
      v40 = sub_136BC0((_QWORD *)a1, 0);
      *(_DWORD *)(v40 + 24) &= ~0x8000u;
      *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
    }
    sub_1E8310((__int64)v72, *(_QWORD *)(a1 + 1504), *(_DWORD *)(*v61 + 4 * v15), v66, &v69, 0, *(_QWORD *)(a1 + 40));
    LODWORD(v82) = 0;
    copy_argloc();
    *((_QWORD *)&v83 + 1) = v73;
    v21 = sub_1E9120((__int64 *)(a1 + 432), (__int64)&v82);
    cleanup_argloc();
    if ( v21 )
      goto LABEL_33;
    if ( v53 )
    {
      sub_1E8310(
        (__int64)&v82,
        *(_QWORD *)(a1 + 1504),
        *(_DWORD *)(*(_QWORD *)(a2[35] + 112) + v17),
        v51,
        &v69,
        0,
        *(_QWORD *)(a1 + 40));
      v70[0] = 0;
      copy_argloc();
      v71 = *((_QWORD *)&v83 + 1);
      v21 = sub_1E9120((__int64 *)(a1 + 432), (__int64)v70);
      cleanup_argloc();
      clear_tinfo_t();
      if ( v87 )
      {
        v88 = 0;
        qfree();
      }
      if ( v85 )
      {
        v86 = 0;
        qfree();
      }
      cleanup_argloc();
    }
    if ( v21 )
    {
LABEL_33:
      if ( (*(_BYTE *)(v21 + 24) & 1) == 0 )
        goto LABEL_34;
      if ( (unsigned __int8)sub_3631C0(a2, (_DWORD *)v21, *a3) )
      {
        v22 = *(_DWORD *)(v21 + 24);
        if ( (v22 & 1) != 0 )
        {
LABEL_36:
          *(_DWORD *)(v21 + 92) = 0;
          v23 = v22 & 0xFFEFFFFF;
          v24 = (v21 - *(_QWORD *)(a1 + 432)) >> 3;
          *(_DWORD *)(v21 + 24) = v23;
          n = -991146299 * v24;
LABEL_37:
          BYTE1(v23) |= 1u;
          *(_DWORD *)(v21 + 24) = v23;
          v25 = *(_QWORD *)(a1 + 464);
          v26 = *(_QWORD *)(a1 + 456);
          v27 = 4LL * *a3;
          if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v25 + 1) )
          {
            v36 = qvector_reserve();
            *(_QWORD *)(a1 + 456) = v36;
            v25 = *(_QWORD *)(a1 + 464);
            v26 = v36;
          }
          memmove((void *)(v26 + v27 + 4), (const void *)(v26 + v27), 4 * v25 - v27);
          *(_DWORD *)(v26 + v27) = n;
          ++*(_QWORD *)(a1 + 464);
          clear_tinfo_t();
          if ( v77 )
          {
            v78 = 0;
            qfree();
          }
          if ( v75 )
          {
            v76 = 0;
            qfree();
          }
          cleanup_argloc();
          goto LABEL_16;
        }
LABEL_34:
        if ( !(unsigned __int8)sub_3631C0(a2, (_DWORD *)v21, *a3) )
        {
          copy_argloc();
          *(_QWORD *)(v21 + 16) = v73;
          *(_DWORD *)(v21 + 24) = v74;
          if ( (_BYTE *)v21 != v72 )
          {
            v44 = v76;
            if ( !v76 || (na = v76 - 1, v76 == 1) )
            {
              *(_QWORD *)(v21 + 40) = 0;
            }
            else
            {
              v45 = *(void **)(v21 + 32);
              srca = v75;
              if ( *(_QWORD *)(v21 + 48) < v76 )
              {
                v50 = qvector_reserve();
                *(_QWORD *)(v21 + 32) = v50;
                v45 = (void *)v50;
              }
              *(_QWORD *)(v21 + 40) = v44;
              memmove(v45, srca, na);
              *(_BYTE *)(*(_QWORD *)(v21 + 32) + v44 - 1) = 0;
            }
            v46 = v78;
            if ( !v78 || (nb = v78 - 1, v78 == 1) )
            {
              *(_QWORD *)(v21 + 64) = 0;
            }
            else
            {
              v47 = *(void **)(v21 + 56);
              srcb = v77;
              if ( *(_QWORD *)(v21 + 72) < v78 )
              {
                v49 = qvector_reserve();
                *(_QWORD *)(v21 + 56) = v49;
                v47 = (void *)v49;
              }
              *(_QWORD *)(v21 + 64) = v46;
              memmove(v47, srcb, nb);
              *(_BYTE *)(*(_QWORD *)(v21 + 56) + v46 - 1) = 0;
            }
          }
          copy_tinfo_t();
          *(_DWORD *)(v21 + 88) = v79;
          *(_DWORD *)(v21 + 92) = v80;
          *(_QWORD *)(v21 + 96) = v81;
        }
        v22 = *(_DWORD *)(v21 + 24);
        goto LABEL_36;
      }
      LODWORD(v82) = 0;
      copy_argloc();
      v70[0] = 0;
      *((_QWORD *)&v83 + 1) = v73;
      copy_argloc();
      v71 = *(_QWORD *)(v21 + 16);
      if ( !(unsigned int)sub_329190(v70, (int *)&v82) )
      {
        cleanup_argloc();
        cleanup_argloc();
        if ( a5 )
        {
          clear_tinfo_t();
          if ( v77 )
          {
            v78 = 0;
            qfree();
          }
          if ( v75 )
          {
            v76 = 0;
            qfree();
          }
          cleanup_argloc();
          goto LABEL_77;
        }
        v39 = (v21 - *(_QWORD *)(a1 + 432)) >> 3;
        *(_DWORD *)(v21 + 24) &= ~0x100000u;
        n = -991146299 * v39;
        copy_argloc();
        sub_1E81B0(v21);
        sub_1ED230(a1, -1, v21);
        *(_DWORD *)(v21 + 24) |= 0x400u;
        goto LABEL_84;
      }
      cleanup_argloc();
      cleanup_argloc();
    }
    v37 = *(_QWORD *)(a1 + 440);
    v74 &= ~1u;
    n = v37;
    sub_1EF1E0(a1, (__int64)v72, 0);
    v21 = *(_QWORD *)(a1 + 432) + 104LL * (int)v37;
    *(_DWORD *)(v21 + 24) |= 0x80000u;
LABEL_84:
    v38 = *a3;
    *(_DWORD *)(*v13 + v17) = *a3;
    if ( v56 == 3 )
      *(_DWORD *)(a2[26] + v17) = v38;
    v23 = *(_DWORD *)(v21 + 24);
    goto LABEL_37;
  }
  v35 = sub_136BC0((_QWORD *)a1, v18);
  if ( *(_DWORD *)v35 != 2 )
  {
    if ( *(_DWORD *)v35 == 1 )
      goto LABEL_77;
    goto LABEL_75;
  }
  v41 = *(_QWORD *)(v35 + 8);
  v42 = *(_DWORD **)v41;
  v43 = *(_QWORD *)v41 + 24LL * *(_QWORD *)(v41 + 8);
  if ( v42 == (_DWORD *)v43 )
  {
LABEL_75:
    v18 = *a3;
    goto LABEL_23;
  }
  while ( *v42 != 1 )
  {
    v42 += 6;
    if ( (_DWORD *)v43 == v42 )
      goto LABEL_75;
  }
LABEL_77:
  clear_tinfo_t();
  return src;
}

