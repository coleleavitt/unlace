__int64 __fastcall sub_100140(__int64 a1, double a2)
{
  int *v2; // r15
  int v3; // ebx
  unsigned __int8 v5; // al
  _DWORD *v6; // rax
  __int64 v7; // r14
  unsigned __int64 v9; // r12
  unsigned __int8 v10; // al
  __int64 v11; // rbp
  __int64 (*v12)(); // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  char v28; // al
  _DWORD *v29; // rsi
  int v30; // ebx
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // ebx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  _QWORD *v40; // r14
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  char v46; // al
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 v50; // rax
  int v51; // eax
  int *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  int v58; // esi
  __int64 v59; // rax
  unsigned int v60; // ebx
  __int64 v61; // rbp
  unsigned __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // r14d
  __int64 v65; // rax
  int ind_purged; // ebp
  __int64 v67; // rdi
  char v68; // al
  int v69; // eax
  int v70; // ebx
  __int64 v71; // rax
  __int64 v72; // rsi
  _QWORD *func; // rax
  bool v74; // zf
  _DWORD *v75; // rsi
  int v76; // ebx
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  char v79; // al
  __int64 v80; // rax
  __int64 v81; // rdi
  int v82; // eax
  __int64 v83; // r14
  __int64 v84; // rsi
  __int64 v85; // rcx
  unsigned __int64 *v86; // rdx
  unsigned __int64 *v87; // rax
  __int64 item_end; // rbx
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  int tinfo_property; // ebp
  signed __int64 v95; // rax
  _QWORD *v96; // r14
  _DWORD *exception; // rdi
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // r14
  __int64 v103; // rbp
  _QWORD *v104; // rbp
  __int64 v105; // rax
  char *v106; // rsi
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int8 *v109; // [rsp+0h] [rbp-E8h]
  __int64 v110; // [rsp+0h] [rbp-E8h]
  __int64 v111; // [rsp+8h] [rbp-E0h]
  char v112; // [rsp+18h] [rbp-D0h]
  signed __int64 v113; // [rsp+18h] [rbp-D0h]
  signed __int64 v114; // [rsp+18h] [rbp-D0h]
  __int64 v115; // [rsp+18h] [rbp-D0h]
  __int64 v116; // [rsp+20h] [rbp-C8h]
  __int64 v117; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v118[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 (__fastcall **v119)(); // [rsp+70h] [rbp-78h] BYREF
  __int64 v120; // [rsp+78h] [rbp-70h]
  __int64 v121; // [rsp+80h] [rbp-68h]
  __int64 v122; // [rsp+88h] [rbp-60h]
  __int64 v123; // [rsp+90h] [rbp-58h]
  __int64 v124; // [rsp+98h] [rbp-50h]
  unsigned __int64 v125; // [rsp+A8h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  v2 = *(int **)(a1 + 56);
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_383060(0xC3BDu, a2);
LABEL_173:
    BUG();
  }
  v3 = *v2;
  if ( (unsigned int)(*v2 - 54) > 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC3BEu, a2);
    goto LABEL_173;
  }
  if ( v3 != 55 )
  {
    v109 = (unsigned __int8 *)(v2 + 16);
    v5 = *((_BYTE *)v2 + 64);
    if ( v5 != 5 )
    {
      if ( v5 > 5u )
      {
        if ( v5 != 6 )
          return 0;
        v9 = *((_QWORD *)v2 + 9);
        if ( (unsigned __int8)segtype() == 1 )
        {
          v2 = *(int **)(a1 + 56);
          v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        else
        {
          if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
            return 0;
          v2 = *(int **)(a1 + 56);
          v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        goto LABEL_22;
      }
      if ( v5 != 1 )
      {
        if ( v5 != 4 )
          return 0;
        v6 = *((_DWORD **)v2 + 9);
        if ( *v6 == 2 )
          goto LABEL_9;
      }
    }
    v9 = -1;
    v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
LABEL_22:
    v12 = *(__int64 (**)())(*(_QWORD *)v111 + 352LL);
    if ( v12 == sub_FDA90 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      v11 = 0;
    }
    else
    {
      v77 = ((__int64 (__fastcall *)(__int64, int *))v12)(v111, v2);
      v2 = *(int **)(a1 + 56);
      v7 = *(_QWORD *)(a1 + 64);
      v11 = v77;
    }
    goto LABEL_24;
  }
  v109 = (unsigned __int8 *)(v2 + 8);
  v10 = *((_BYTE *)v2 + 32);
  if ( v10 == 5 )
    goto LABEL_20;
  if ( v10 > 5u )
  {
    if ( v10 != 6 )
      return 0;
    v9 = *((_QWORD *)v2 + 5);
    if ( (unsigned __int8)segtype() == 1 )
    {
      v2 = *(int **)(a1 + 56);
      v11 = 0;
      v7 = *(_QWORD *)(a1 + 64);
      v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    else
    {
      func = (_QWORD *)get_func();
      if ( !func || *func != v9 )
        return 0;
      v2 = *(int **)(a1 + 56);
      v11 = 0;
      v7 = *(_QWORD *)(a1 + 64);
      v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    goto LABEL_24;
  }
  if ( v10 == 1 )
    goto LABEL_20;
  if ( v10 != 4 )
    return 0;
  v6 = *((_DWORD **)v2 + 5);
  if ( *v6 != 2 )
  {
LABEL_20:
    v7 = *(_QWORD *)(a1 + 64);
    v9 = -1;
    v11 = 0;
    v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    goto LABEL_24;
  }
LABEL_9:
  v7 = *(_QWORD *)(a1 + 64);
  if ( v6[17] != *(_DWORD *)(*(_QWORD *)(v7 + 1504) + 80LL) )
    return 0;
  v9 = -1;
  v11 = 0;
  v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v3 != 55 )
    goto LABEL_22;
LABEL_24:
  v13 = sub_1CFBB0(v7, *((_QWORD *)v2 + 3));
  if ( (v2[1] & 0x20) != 0 )
    v13 += *(int *)(*(_QWORD *)(v7 + 1504) + 80LL);
  v15 = *(_QWORD *)(a1 + 64);
  if ( v11 + v13 != *(_QWORD *)(v15 + 136) )
  {
    if ( v9 == -1 )
    {
      item_end = get_item_end();
      v89 = sub_1CE9E0(*(_QWORD *)(a1 + 64));
      if ( v89 && v89[1] == item_end )
        sub_3311F0(*(_QWORD **)(a1 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 0x33u);
      return 0;
    }
    goto LABEL_28;
  }
  if ( v9 != -1 )
  {
    v64 = *(_DWORD *)(v15 + 68);
    v65 = get_func();
    if ( v65 )
    {
      ind_purged = *(_QWORD *)(v65 + 48);
      if ( !*(_QWORD *)(v65 + 48) )
      {
        if ( (*(_BYTE *)(v65 + 17) & 0x40) == 0 )
        {
          ind_purged = -1;
          if ( v64 == -1 )
            goto LABEL_91;
          goto LABEL_89;
        }
        ind_purged = 0;
      }
    }
    else
    {
      ind_purged = get_ind_purged();
    }
    if ( v64 == ind_purged )
      goto LABEL_91;
    if ( (ind_purged | v64) >= 0 )
      return 0;
LABEL_89:
    if ( v64 < 0 )
    {
      v64 = ind_purged;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 68LL) = ind_purged;
      set_purged();
    }
LABEL_91:
    v67 = *(_QWORD *)(a1 + 480);
    v118[0] = 0;
    v119 = nullptr;
    v112 = sub_3810A0(v67, v9, (__int64)v118, 0);
    v68 = sub_F35D0(*(_QWORD *)(a1 + 64));
    if ( v68 == 1 )
    {
      if ( v112 )
      {
LABEL_96:
        clear_tinfo_t();
        clear_tinfo_t();
        v15 = *(_QWORD *)(a1 + 64);
        goto LABEL_28;
      }
    }
    else if ( v112 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 64) + 320LL)
        && (v64 == ind_purged || v64 < 0)
        && (get_tinfo_property() & 0xF) == 0xC
        && !(unsigned __int8)sub_D7060(*(_QWORD *)(a1 + 64)) )
      {
        tinfo_property = get_tinfo_property();
        v113 = sub_1CFC10();
        v95 = sub_1CFC10();
        v96 = *(_QWORD **)(a1 + 64);
        if ( v113 <= v95 )
        {
          if ( v113 < v95 )
          {
            v114 = v95 - v113;
            if ( (unsigned int)sub_228FE0(v96 + 54, v111, v96[18], v114) == -1 )
            {
              v101 = *(_QWORD *)(a1 + 64);
              a2 = 0.0;
              v102 = *(_QWORD *)(v101 + 456);
              v103 = *(_QWORD *)(v101 + 464);
              *(_QWORD *)(v101 + 456) = 0;
              *(_OWORD *)(v101 + 464) = 0;
              sub_36DBC0(
                *(_QWORD *)(a1 + 64),
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) + v114,
                -1,
                0);
              v115 = 4 * v103;
              v116 = (4 * v103) >> 2;
              if ( v116 )
              {
                v104 = *(_QWORD **)(a1 + 64);
                v105 = v104[58];
                v106 = (char *)v104[57];
                if ( v104[59] < (unsigned __int64)(v116 + v105) )
                {
                  v108 = qvector_reserve((__int64)(v104 + 57), (__int64)v106, v116 + v105, 4);
                  v104[57] = v108;
                  v106 = (char *)v108;
                  v105 = v104[58];
                }
                memmove(&v106[v115], v106, 4 * v105);
                v107 = 0;
                do
                {
                  *(_DWORD *)&v106[v107] = *(_DWORD *)(v102 + v107);
                  v107 += 4;
                }
                while ( v115 != v107 );
                v104[58] += v116;
              }
              if ( v102 )
                qfree(v102);
            }
            v96 = *(_QWORD **)(a1 + 64);
          }
        }
        else if ( (unsigned int)(tinfo_property - 208) > 0x2F || (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 606LL) & 0x10) == 0 )
        {
          sub_381E90(v96[187], v96[5], v118, 0, 1);
          *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL) = tinfo_property;
          exception = __cxa_allocate_exception(0x30u);
          v98 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          *(_QWORD *)exception = off_4DBCD0;
          exception[2] = -17;
          *((_QWORD *)exception + 2) = v98;
          *((_QWORD *)exception + 3) = 0;
          *((_OWORD *)exception + 2) = 0;
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
        }
        if ( !(unsigned __int8)sub_3780C0((__int64)v96, (__int64)v118, 2) )
        {
          if ( !under_debugger )
            sub_383060(0xC3BFu, a2);
          goto LABEL_173;
        }
      }
      goto LABEL_96;
    }
    if ( v64 == ind_purged || ind_purged < 0 )
    {
      v83 = *(_QWORD *)(a1 + 64);
      if ( (*(_BYTE *)(v83 + 757) & 1) == 0 )
      {
        if ( v68 && *(_BYTE *)(v83 + 320) )
        {
          sub_F34C0(*(_QWORD *)(a1 + 64), v9, &v119, 2u, a2);
        }
        else
        {
          v84 = *(_QWORD *)(v83 + 1216);
          v85 = *(_QWORD *)(v83 + 1224);
          v86 = (unsigned __int64 *)(v84 + 8 * v85);
          if ( (unsigned __int64 *)v84 == v86 )
            goto LABEL_136;
          v87 = *(unsigned __int64 **)(v83 + 1216);
          while ( *v87 != v9 )
          {
            if ( v86 == ++v87 )
              goto LABEL_136;
          }
          if ( v86 == v87 )
          {
LABEL_136:
            if ( *(_QWORD *)(v83 + 1232) < (unsigned __int64)(v85 + 1) )
            {
              v99 = qvector_reserve(v83 + 1216, v84, v85 + 1, 8);
              v100 = *(_QWORD *)(v83 + 1224);
              *(_QWORD *)(v83 + 1216) = v99;
              v86 = (unsigned __int64 *)(v99 + 8 * v100);
            }
            *v86 = v9;
            ++*(_QWORD *)(v83 + 1224);
          }
        }
      }
    }
    goto LABEL_96;
  }
LABEL_28:
  v16 = *(_QWORD *)(v15 + 520);
  if ( !v16 )
  {
    v21 = *(_QWORD *)(a1 + 56);
LABEL_64:
    if ( v3 == 55 )
    {
      *(_DWORD *)v21 = 56;
    }
    else
    {
      *(_DWORD *)v21 = 57;
      sub_11CA10((char *)(*(_QWORD *)(a1 + 56) + 32LL), (char *)(*(_QWORD *)(a1 + 56) + 48LL));
      sub_11CA10((char *)(*(_QWORD *)(a1 + 56) + 48LL), (char *)(*(_QWORD *)(a1 + 56) + 64LL));
    }
    v40 = *(_QWORD **)(a1 + 64);
    v41 = *(_QWORD *)(a1 + 56);
    v42 = v40[65];
    if ( v42 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( a1 != v42 )
          {
            v43 = *(_QWORD *)(v42 + 56);
            if ( v43 )
            {
              if ( (unsigned int)(*(_DWORD *)v43 - 56) <= 1 )
              {
                v44 = *(_QWORD *)(v41 + 24);
                if ( *(_QWORD *)(v43 + 24) == v44 )
                  break;
              }
            }
          }
          v42 = *(_QWORD *)(v42 + 8);
          if ( !v42 )
            goto LABEL_75;
        }
        v45 = sub_330F80(v40, v44 + 1);
        v46 = sub_332920((__int64)(v40 + 1), v45);
        v47 = *(_QWORD *)(a1 + 56);
        v48 = *(_QWORD *)(v47 + 24);
        if ( !v46 )
          break;
        *(_QWORD *)(v47 + 24) = v48 + 1;
        v40 = *(_QWORD **)(a1 + 64);
        v41 = *(_QWORD *)(a1 + 56);
        v42 = *(_QWORD *)(v40[65] + 8LL);
        if ( !v42 )
          goto LABEL_75;
      }
      *(_QWORD *)(v47 + 24) = sub_332AB0(*(_QWORD **)(a1 + 64), v48);
      v41 = *(_QWORD *)(a1 + 56);
    }
LABEL_75:
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      v49 = *(_QWORD *)(a1 + 64);
      v50 = *(_QWORD *)(v41 + 24);
      if ( v50 == *(_QWORD *)(v49 + 40) )
      {
        v78 = sub_330F80(*(_QWORD **)(a1 + 64), v50 + 1);
        v79 = sub_332920(v49 + 8, v78);
        v41 = *(_QWORD *)(a1 + 56);
        if ( v79 )
        {
          v80 = *(_QWORD *)(v41 + 24);
          v81 = *(_QWORD *)(a1 + 64);
          v120 = 0;
          v121 = 0;
          v122 = 0;
          v123 = 0;
          v119 = &off_4DD1E0;
          v124 = v80 + 1;
          v82 = sub_11FC20(v81, (__int64)&v119);
          v41 = *(_QWORD *)(a1 + 56);
          if ( !v82 )
          {
            ++*(_QWORD *)(v41 + 24);
            v41 = *(_QWORD *)(a1 + 56);
          }
        }
      }
    }
    *(_DWORD *)(v41 + 4) |= 0x40u;
    v51 = *(_DWORD *)(a1 + 24);
    v52 = *(int **)(a1 + 56);
    BYTE1(v51) &= ~2u;
    LOBYTE(v51) = v51 | 0x88;
    *(_DWORD *)(a1 + 24) = v51;
    if ( !(unsigned __int8)sub_11C750(v52, v111, 0) )
    {
      if ( (get_aflags() & 0x4000000) != 0 )
        sub_373590(*(_QWORD *)(a1 + 64));
      v57 = sub_1D5170(*(_QWORD *)(a1 + 64), v111, v53, v54);
      v58 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_DWORD *)(v57 + 72) != v58 )
      {
        v59 = sub_68FC0(*(_QWORD *)(a1 + 64), v58, v55, v56, a2);
        v60 = *(_DWORD *)(v57 + 72);
        v61 = v59;
        v62 = sub_330F80(*(_QWORD **)(a1 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL));
        sub_B52C0((_QWORD *)v61, v62, v60, v63, a2);
        *(_DWORD *)(v61 + 24) |= 0x202u;
      }
    }
    return 1;
  }
  v17 = 0;
  do
  {
    if ( a1 != v16 && (*(_BYTE *)(v16 + 24) & 8) != 0 )
    {
      v18 = *(_QWORD *)(v16 + 56);
      v19 = v18 + 32;
      v20 = v18 + 64;
      if ( v3 == 55 )
        v20 = v19;
      if ( sub_1255D0(v109, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v20, 0) )
      {
        v21 = *(_QWORD *)(a1 + 56);
        v14 = *(_QWORD *)(v21 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(v16 + 56) + 24LL) == v14 )
        {
          v17 = v16;
          v22 = *(_QWORD *)(v16 + 56);
          if ( v22 != *(_QWORD *)(v17 + 48) )
            goto LABEL_41;
          goto LABEL_107;
        }
        if ( !v17 )
          v17 = v16;
      }
    }
    v16 = *(_QWORD *)(v16 + 8);
  }
  while ( v16 );
  v21 = *(_QWORD *)(a1 + 56);
  if ( !v17 )
    goto LABEL_64;
  v22 = *(_QWORD *)(v17 + 56);
  if ( v22 == *(_QWORD *)(v17 + 48) )
  {
LABEL_107:
    v35 = *(_DWORD *)(v17 + 72);
    v27 = 0;
    goto LABEL_56;
  }
LABEL_41:
  v23 = *(_QWORD *)(a1 + 480);
  v24 = v22 + 32;
  v117 = 0;
  v110 = *(_QWORD *)(v23 + 112);
  v25 = v22 + 64;
  if ( v3 == 55 )
    v25 = v22 + 32;
  if ( *(_BYTE *)v25 == 6
    && (unsigned __int8)sub_3810A0(v23, *(_QWORD *)(v25 + 8), (__int64)&v117, 0)
    && !(unsigned int)get_tinfo_property() )
  {
    if ( *(_QWORD *)(v22 + 24) == *(_QWORD *)(v21 + 24) )
    {
LABEL_63:
      clear_tinfo_t();
      v21 = *(_QWORD *)(a1 + 56);
      goto LABEL_64;
    }
  }
  else if ( (*(_BYTE *)(v110 + 49) & 0x40) == 0 )
  {
    v38 = *(_QWORD *)(v22 + 24);
    v39 = *(_QWORD *)(v17 + 64);
    memset(&v118[1], 0, 32);
    v118[0] = &off_4DD208;
    v118[5] = v38;
    if ( !(unsigned int)sub_11FC20(v39, (__int64)v118) )
      goto LABEL_63;
  }
  if ( v21 == *(_QWORD *)(a1 + 48) && (unsigned __int8)sub_11C750((int *)v22, v110, 0) )
  {
    v74 = *(_QWORD *)(v17 + 384) == 0;
    v75 = *(_DWORD **)(v17 + 368);
    *(_QWORD *)(v17 + 376) = 0;
    v76 = *(_DWORD *)(a1 + 72);
    if ( v74 )
    {
      v92 = qvector_reserve(v17 + 368, (__int64)v75, 1, 4);
      v93 = *(_QWORD *)(v17 + 376);
      *(_QWORD *)(v17 + 368) = v92;
      v75 = (_DWORD *)(v92 + 4 * v93);
    }
    *v75 = v76;
    v27 = a1;
    ++*(_QWORD *)(v17 + 376);
  }
  else
  {
    v26 = sub_68FC0(*(_QWORD *)(v17 + 64), *(_DWORD *)(v17 + 72) + 1, v24, v14, a2);
    *(_DWORD *)(v26 + 24) |= 2u;
    v27 = v26;
    *(_QWORD *)(v26 + 32) = *(_QWORD *)(v22 + 24);
    *(_QWORD *)(v26 + 40) = *(_QWORD *)(v17 + 40);
    v28 = sub_11C750((int *)v22, v110, 0);
    v29 = *(_DWORD **)(v17 + 368);
    if ( v28 )
    {
      v30 = *(_DWORD *)(v17 + 72) + 1;
      v31 = *(_QWORD *)(v17 + 376);
      if ( *(_QWORD *)(v17 + 384) < (unsigned __int64)(v31 + 1) )
      {
        v91 = qvector_reserve(v17 + 368, (__int64)v29, v31 + 1, 4);
        *(_QWORD *)(v17 + 368) = v91;
        v29 = (_DWORD *)v91;
        v31 = *(_QWORD *)(v17 + 376);
      }
      v29[v31] = v30;
      v32 = 2;
      ++*(_QWORD *)(v17 + 376);
    }
    else
    {
      v69 = *(_DWORD *)(v27 + 72);
      *v29 = v69;
      v70 = v69 + 1;
      v71 = *(_QWORD *)(v27 + 376);
      v72 = *(_QWORD *)(v27 + 368);
      if ( *(_QWORD *)(v27 + 384) < (unsigned __int64)(v71 + 1) )
      {
        v90 = qvector_reserve(v27 + 368, v72, v71 + 1, 4);
        *(_QWORD *)(v27 + 368) = v90;
        v72 = v90;
        v71 = *(_QWORD *)(v27 + 376);
      }
      *(_DWORD *)(v72 + 4 * v71) = v70;
      v32 = 3;
      ++*(_QWORD *)(v27 + 376);
    }
    *(_DWORD *)(v27 + 76) = v32;
  }
  *(_DWORD *)(v17 + 76) = 3;
  sub_A33C0(v17, v22);
  sub_A3160(v27, (_QWORD *)v22, 0, a2);
  v33 = *(_DWORD *)(v17 + 24);
  BYTE1(v33) &= ~2u;
  LOBYTE(v33) = v33 | 0x80;
  *(_DWORD *)(v17 + 24) = v33;
  v34 = *(_DWORD *)(v27 + 24);
  BYTE1(v34) &= ~2u;
  LOBYTE(v34) = v34 | 0x80;
  *(_DWORD *)(v27 + 24) = v34;
  *(_DWORD *)(v17 + 24) &= ~8u;
  v35 = *(_DWORD *)(v27 + 72);
  *(_DWORD *)(v27 + 24) |= 8u;
  if ( *(_DWORD *)(v27 + 76) != 2 )
  {
    if ( a1 == v27 )
    {
      clear_tinfo_t();
      goto LABEL_109;
    }
    v36 = *(_QWORD *)(v27 + 64);
    v37 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
    v119 = &off_4DD1E0;
    v120 = 0;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v124 = v37;
    if ( !(unsigned int)sub_11FC20(v36, (__int64)&v119) )
      *(_QWORD *)(v22 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
  }
  clear_tinfo_t();
LABEL_56:
  if ( a1 != v27 )
    goto LABEL_57;
LABEL_109:
  sub_A33C0(a1, v21);
  sub_A3160(v17, (_QWORD *)v21, *(_QWORD *)(v17 + 56), a2);
  *(_DWORD *)(a1 + 76) = 2;
  v35 = *(_DWORD *)(a1 + 72);
LABEL_57:
  if ( v21 )
  {
    if ( *(_DWORD *)v21 != 55 )
    {
      sub_11D5A0(v21);
      *(_DWORD *)v21 = 55;
    }
    *(_BYTE *)(v21 + 32) = 7;
    *(_DWORD *)(v21 + 40) = v35;
  }
  return 1;
}

