__int64 __fastcall sub_8B00(__int64 a1, __int64 a2, int *a3)
{
  int v5; // ecx
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // r12
  unsigned int *v21; // r9
  __int64 v22; // rdi
  __int64 **v23; // rcx
  unsigned int v24; // ebp
  __int64 *v25; // r13
  __int64 v26; // rdi
  unsigned int v27; // eax
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // eax
  int v34; // ecx
  __int64 v35; // rdx
  unsigned int v36; // eax
  _DWORD *v37; // rdx
  __int64 v38; // rbx
  unsigned int v39; // eax
  __int64 v40; // rdi
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rdi
  unsigned int v46; // ebp
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  __int64 i; // rbx
  __int64 v51; // rax
  int v52; // r8d
  int v53; // r9d
  unsigned int v54; // eax
  __int64 **v55; // rdx
  __int64 v56; // rbx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  int v60; // eax
  unsigned int v61; // eax
  _QWORD *v62; // rdx
  __int64 v63; // r13
  _QWORD *func; // rbx
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // r15d
  __int64 v69; // rsi
  __int64 v70; // r14
  __int64 *v71; // rdx
  __int64 v72; // rbp
  char *v73; // rax
  __int64 v74; // rbx
  int v75; // eax
  int v76; // ecx
  __int64 v77; // rdx
  _QWORD *v78; // rax
  unsigned int *v79; // rdx
  _QWORD *v80; // rcx
  unsigned int **v81; // rax
  unsigned int **v82; // rcx
  _DWORD *v83; // rax
  __int64 *v84; // rcx
  __int64 v85; // r14
  __int64 v86; // rbp
  __int64 v87; // rdi
  int v88; // r8d
  int v89; // r9d
  __int64 v90; // [rsp+18h] [rbp-1F0h] BYREF
  _BYTE v91[8]; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v92; // [rsp+28h] [rbp-1E0h]
  char v93; // [rsp+30h] [rbp-1D8h]
  __int64 v94; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v95; // [rsp+48h] [rbp-1C0h]
  __int128 v96; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v97; // [rsp+70h] [rbp-198h]
  __int64 v98; // [rsp+78h] [rbp-190h]
  __int64 v99; // [rsp+80h] [rbp-188h]
  char v100; // [rsp+88h] [rbp-180h] BYREF
  _QWORD v101[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v101[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)getinf_flag(11, 1) )
    return 0;
  if ( a2 > 96 )
  {
    if ( a2 != 2017 )
      return 0;
    v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 4LL);
    if ( v60 )
    {
      if ( v60 != 13 )
        return 0;
    }
    v61 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v62 = *((_QWORD **)a3 + 1);
      *((_QWORD *)a3 + 1) = v62 + 1;
    }
    else
    {
      v62 = (_QWORD *)(*((_QWORD *)a3 + 2) + v61);
      *a3 = v61 + 8;
    }
    v63 = *v62;
    func = (_QWORD *)get_func(*v62);
    if ( !func )
      return 0;
    v65 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v83 = *((_DWORD **)a3 + 1);
      v84 = (__int64 *)(v83 + 2);
      *((_QWORD *)a3 + 1) = v83 + 2;
      v68 = *v83;
      if ( (int)*v83 <= 0 )
        return 0;
    }
    else
    {
      v66 = *((_QWORD *)a3 + 2);
      v67 = v65 + 8;
      *a3 = v67;
      v68 = *(_DWORD *)(v66 + v65);
      if ( v68 <= 0 )
        return 0;
      if ( (unsigned int)v67 <= 0x2F )
      {
        v69 = v65 + 16;
        *a3 = v69;
        v70 = *(_QWORD *)(v66 + v67);
        if ( (unsigned int)v69 <= 0x2F )
        {
          v71 = (__int64 *)(v69 + v66);
          *a3 = v65 + 24;
          goto LABEL_70;
        }
        v71 = *((__int64 **)a3 + 1);
LABEL_103:
        *((_QWORD *)a3 + 1) = v71 + 1;
LABEL_70:
        v72 = *v71;
        if ( (unsigned __int8)xrefblk_t_first_from(v91, v63, 1) )
        {
          if ( v93 )
            goto LABEL_123;
          v97 = -1;
          v73 = &v100;
          v98 = 0;
          v99 = 0;
          v96 = -1;
          do
          {
            *(_WORD *)v73 = 0;
            v73 += 40;
            *((_WORD *)v73 - 19) = 0;
            *((_WORD *)v73 - 18) = 0;
            *((_DWORD *)v73 - 2) = 0;
            *((_WORD *)v73 - 17) = 0;
            *((_OWORD *)v73 - 2) = 0;
            *((_QWORD *)v73 - 2) = 0;
          }
          while ( v73 != (char *)v101 );
          if ( (int)decode_insn(&v96, v63, v101, 0.0) > 0
            && ((unsigned __int8)is_call_insn(&v96) || (unsigned __int8)segtype(v92) != 1) )
          {
LABEL_123:
            if ( get_func(v92) || (unsigned __int8)is_spec_ea(v92) )
            {
              v94 = 0;
              v95 = 0;
              if ( get_func_name(&v94, v92) > 0 )
              {
                if ( (unsigned __int8)sub_ED10(*(_QWORD *)(a1 + 16), v94, (_DWORD)func, v68, v72, v70) )
                {
                  v85 = *(_QWORD *)(a1 + 16);
                  v86 = *func;
                  if ( !netnode_altval(*(_QWORD *)(v85 + 104), *func, 115) )
                  {
                    v87 = *(_QWORD *)(v85 + 104);
                    v90 = 1;
                    netnode_supset(v87, v86, &v90, 8, 115);
                    sub_DAB0(*(_QWORD *)(a1 + 16), (_DWORD)func, v63, v92, v88, v89);
                  }
                }
                if ( v94 )
                {
                  *(_QWORD *)&v95 = 0;
                  qfree(v94);
                }
              }
              else if ( v94 )
              {
                *(_QWORD *)&v95 = 0;
                qfree(v94);
              }
            }
          }
        }
        return 0;
      }
      v84 = *((__int64 **)a3 + 1);
    }
    v71 = v84 + 1;
    *((_QWORD *)a3 + 1) = v84 + 1;
    v70 = *v84;
    goto LABEL_103;
  }
  if ( a2 <= 56 )
  {
    if ( a2 == 4 )
    {
      v74 = *(_QWORD *)(a1 + 16);
      v75 = getinf(3) & 6;
      if ( v75 )
      {
        v76 = 8;
        v77 = -1;
        if ( v75 == 2 )
        {
          v76 = 4;
          v77 = 0xFFFFFFFFLL;
        }
      }
      else
      {
        v76 = 2;
        v77 = 0xFFFF;
      }
      *(_DWORD *)(v74 + 132) = v76;
      *(_QWORD *)(v74 + 136) = v77;
      sub_9AB0(*(_QWORD *)(a1 + 16), 1);
    }
    else if ( a2 == 5 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = getinf(3) & 6;
      if ( v9 )
      {
        v10 = 8;
        v11 = -1;
        if ( v9 == 2 )
        {
          v10 = 4;
          v11 = 0xFFFFFFFFLL;
        }
      }
      else
      {
        v10 = 2;
        v11 = 0xFFFF;
      }
      *(_DWORD *)(v8 + 132) = v10;
      *(_QWORD *)(v8 + 136) = v11;
    }
    return 0;
  }
  switch ( a2 )
  {
    case '9':
      v54 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v55 = *((__int64 ***)a3 + 1);
        *((_QWORD *)a3 + 1) = v55 + 1;
      }
      else
      {
        v55 = (__int64 **)(*((_QWORD *)a3 + 2) + v54);
        *a3 = v54 + 8;
      }
      v56 = **v55;
      if ( (unsigned __int64)((*v55)[1] - v56) > 1 )
      {
        sub_11D60(*(_QWORD *)(a1 + 16));
        sub_1FF40(*(_QWORD *)(a1 + 16), v56, 0, v57, v58, v59);
      }
      return 0;
    case 'F':
      v36 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v37 = *((_DWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v37 + 2;
      }
      else
      {
        v37 = (_DWORD *)(*((_QWORD *)a3 + 2) + v36);
        *a3 = v36 + 8;
      }
      if ( *v37 == 200 )
      {
        v38 = *(_QWORD *)(a1 + 16);
        v39 = *(_DWORD *)(v38 + 120);
        if ( v39 <= 1 )
        {
          v40 = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(v38 + 120) = v39 + 1;
          sub_8290(v40);
          if ( *(_DWORD *)(v38 + 120) <= 1u )
          {
            v45 = *(_QWORD *)(a1 + 16);
            v46 = *(_DWORD *)(v45 + 120);
            sub_BA40(v45, v46 > 1, v41, v42, v43, v44);
            sub_1A000(*(_QWORD *)(a1 + 16), v46 > 1);
            sub_19EF0(*(_QWORD *)(a1 + 16), v46 > 1);
            sub_1FF40(*(_QWORD *)(a1 + 16), -1, v46 > 1, v47, v48, v49);
            if ( v46 <= 1 )
            {
              for ( i = netnode_supfirst(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL), 115);
                    i != -1;
                    i = netnode_supnext(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL), i, 115) )
              {
                v51 = get_func(i);
                if ( v51 )
                  sub_DAB0(*(_QWORD *)(a1 + 16), v51, -1, -1, v52, v53);
              }
              netnode_supdel_all(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL), 115);
            }
          }
        }
      }
      return 0;
    case 'V':
      sub_80F0(*(_QWORD *)(a1 + 16));
      v31 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v31 + 152) = 0;
      *(_QWORD *)(v31 + 288) = 0;
      memset(
        (void *)((v31 + 160) & 0xFFFFFFFFFFFFFFF8LL),
        0,
        8LL * (((unsigned int)v31 - (((_DWORD)v31 + 160) & 0xFFFFFFF8) + 296) >> 3));
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 144LL) = -1;
      v32 = *(_QWORD *)(a1 + 16);
      v33 = getinf(3) & 6;
      if ( v33 )
      {
        v34 = 8;
        v35 = -1;
        if ( v33 == 2 )
        {
          v34 = 4;
          v35 = 0xFFFFFFFFLL;
        }
      }
      else
      {
        v34 = 2;
        v35 = 0xFFFF;
      }
      *(_DWORD *)(v32 + 132) = v34;
      *(_QWORD *)(v32 + 136) = v35;
      sub_BA10(*(_QWORD *)(a1 + 16));
      return 0;
    case ']':
      v29 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v30 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v30 + 1;
      }
      else
      {
        v30 = (_QWORD *)(*((_QWORD *)a3 + 2) + v29);
        *a3 = v29 + 8;
      }
      if ( *v30 != 0x45485F5041525345LL )
        return 0;
      return *(_QWORD *)(*(_QWORD *)(a1 + 16) + 624LL);
    case '^':
      v27 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v28 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v28 + 1;
      }
      else
      {
        v28 = (_QWORD *)(*((_QWORD *)a3 + 2) + v27);
        *a3 = v27 + 8;
      }
      sub_23050(*v28, 1, (_DWORD)v28, v5, v6, v7);
      return 0;
    case '_':
      v26 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v26 + 104) != -1 )
        netnode_check(v26 + 104, "$ eh info", 0, 1);
      sub_14230();
      return 0;
    case '`':
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) == -1 )
      {
        netnode_check(&v94, "$ eh info", 0, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) = v94;
      }
      v13 = *a3;
      if ( (unsigned int)*a3 > 0x2F )
      {
        v78 = *((_QWORD **)a3 + 1);
        v79 = (unsigned int *)(v78 + 1);
        *((_QWORD *)a3 + 1) = v78 + 1;
        v16 = *v78;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) != *v78 )
          return 0;
        goto LABEL_92;
      }
      v14 = *((_QWORD *)a3 + 2);
      v15 = v13 + 8;
      *a3 = v15;
      v16 = *(_QWORD *)(v14 + v13);
      if ( v16 != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL) )
        return 0;
      if ( (unsigned int)v15 > 0x2F )
      {
        v79 = *((unsigned int **)a3 + 1);
LABEL_92:
        v80 = v79 + 2;
        *((_QWORD *)a3 + 1) = v79 + 2;
        v17 = *v79;
        v18 = (unsigned int)v17;
LABEL_93:
        v81 = (unsigned int **)(v80 + 1);
        *((_QWORD *)a3 + 1) = v80 + 1;
        v20 = *v80;
LABEL_94:
        v82 = v81 + 1;
        *((_QWORD *)a3 + 1) = v81 + 1;
        v21 = *v81;
LABEL_95:
        v23 = (__int64 **)(v82 + 1);
        goto LABEL_96;
      }
      v6 = v13 + 16;
      *a3 = v6;
      v17 = *(unsigned int *)(v14 + v15);
      v18 = (unsigned int)v17;
      if ( (unsigned int)v6 > 0x2F )
      {
        v80 = *((_QWORD **)a3 + 1);
        goto LABEL_93;
      }
      v19 = v13 + 24;
      *a3 = v19;
      v20 = *(_QWORD *)(v14 + v6);
      if ( (unsigned int)v19 > 0x2F )
      {
        v81 = *((unsigned int ***)a3 + 1);
        goto LABEL_94;
      }
      v6 = v13 + 32;
      *a3 = v6;
      v21 = *(unsigned int **)(v14 + v19);
      if ( (unsigned int)v6 > 0x2F )
      {
        v82 = *((unsigned int ***)a3 + 1);
        goto LABEL_95;
      }
      v22 = v13 + 40;
      *a3 = v22;
      if ( (unsigned int)v22 <= 0x2F )
      {
        v23 = (__int64 **)(v22 + v14);
        *a3 = v13 + 48;
        goto LABEL_21;
      }
      v23 = *((__int64 ***)a3 + 1);
LABEL_96:
      *((_QWORD *)a3 + 1) = v23 + 1;
LABEL_21:
      v24 = (unsigned __int8)v17;
      if ( (_BYTE)v18 == 120 || (_BYTE)v18 == 115 )
      {
        v94 = *v21;
        netnode_supset(v16, v20, &v94, 8, (unsigned __int8)v17);
        return 1;
      }
      v25 = *v23;
      if ( (_BYTE)v18 == 65 && (!v20 || !node2ea(v20, v18, v17, v23, v6, v21)) )
      {
        v95 = 0;
        v94 = 0;
        if ( netnode_qgetblob(v16, &v94, 1, v20, v24) > 0 )
          netnode_setblob(v16, v94, v95, 0, v24);
        if ( v94 )
        {
          *(_QWORD *)&v95 = 0;
          qfree(v94);
        }
        return 1;
      }
      sub_8A10(v25, (__int64)"EH_PARSE: unknown tag '%c'", v24);
      return 0;
    default:
      return 0;
  }
}

