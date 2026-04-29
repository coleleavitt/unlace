__int64 __fastcall sub_100140(__int64 a1)
{
  int *v1; // r15
  int v2; // ebx
  unsigned __int8 v4; // al
  _DWORD *v5; // rax
  __int64 v6; // r14
  __int64 v8; // r12
  unsigned __int8 v9; // al
  __int64 v10; // rbp
  __int64 (*v11)(); // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  _QWORD *v20; // r14
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  char v25; // al
  _DWORD *v26; // rsi
  int v27; // ebx
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ebx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdi
  __int64 v50; // rbx
  int v51; // esi
  __int64 v52; // rax
  int v53; // ebx
  __int64 v54; // rbp
  __int64 v55; // rax
  int v56; // r14d
  __int64 v57; // rax
  int ind_purged; // ebp
  __int64 v59; // rdi
  char v60; // al
  __int64 v61; // r8
  int v62; // r9d
  int v63; // eax
  int v64; // ebx
  __int64 v65; // rax
  __int64 v66; // rsi
  _QWORD *func; // rax
  bool v68; // zf
  _DWORD *v69; // rsi
  int v70; // ebx
  __int64 v71; // rax
  __int64 v72; // rax
  char v73; // al
  __int64 v74; // rax
  __int64 v75; // rdi
  int v76; // eax
  __int64 v77; // r14
  __int64 *v78; // rsi
  __int64 v79; // rcx
  __int64 *v80; // rdx
  __int64 *v81; // rax
  __int64 item_end; // rbx
  __int64 v83; // rax
  int v84; // ecx
  int v85; // r8d
  int v86; // r9d
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned int tinfo_property; // ebp
  __int64 v92; // rax
  __int64 v93; // rcx
  int v94; // r9d
  _QWORD *v95; // r14
  __int64 v96; // r8
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
  int *v109; // [rsp+0h] [rbp-E8h]
  __int64 v110; // [rsp+0h] [rbp-E8h]
  __int64 v111; // [rsp+8h] [rbp-E0h]
  char v112; // [rsp+18h] [rbp-D0h]
  unsigned int v113; // [rsp+18h] [rbp-D0h]
  __int64 v114; // [rsp+18h] [rbp-D0h]
  __int64 v115; // [rsp+18h] [rbp-D0h]
  __int64 v116; // [rsp+18h] [rbp-D0h]
  __int64 v117; // [rsp+20h] [rbp-C8h]
  __int64 v118; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v119[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 (__fastcall **v120)(); // [rsp+70h] [rbp-78h] BYREF
  __int64 v121; // [rsp+78h] [rbp-70h]
  __int64 v122; // [rsp+80h] [rbp-68h]
  __int64 v123; // [rsp+88h] [rbp-60h]
  __int64 v124; // [rsp+90h] [rbp-58h]
  __int64 v125; // [rsp+98h] [rbp-50h]
  unsigned __int64 v126; // [rsp+A8h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  v1 = *(int **)(a1 + 56);
  if ( !v1 )
  {
    if ( !under_debugger )
      sub_383060(50109);
LABEL_173:
    BUG();
  }
  v2 = *v1;
  if ( (unsigned int)(*v1 - 54) > 1 )
  {
    if ( !under_debugger )
      sub_383060(50110);
    goto LABEL_173;
  }
  if ( v2 != 55 )
  {
    v109 = v1 + 16;
    v4 = *((_BYTE *)v1 + 64);
    if ( v4 != 5 )
    {
      if ( v4 > 5u )
      {
        if ( v4 != 6 )
          return 0;
        v8 = *((_QWORD *)v1 + 9);
        if ( (unsigned __int8)segtype(v8) == 1 )
        {
          v1 = *(int **)(a1 + 56);
          v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        else
        {
          if ( (~((unsigned __int16)get_flags_ex(v8, 4) >> 8) & 6) == 0 )
            return 0;
          v1 = *(int **)(a1 + 56);
          v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        goto LABEL_22;
      }
      if ( v4 != 1 )
      {
        if ( v4 != 4 )
          return 0;
        v5 = *((_DWORD **)v1 + 9);
        if ( *v5 == 2 )
          goto LABEL_9;
      }
    }
    v8 = -1;
    v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
LABEL_22:
    v11 = *(__int64 (**)())(*(_QWORD *)v111 + 352LL);
    if ( v11 == sub_FDA90 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      v10 = 0;
    }
    else
    {
      v71 = ((__int64 (__fastcall *)(__int64, int *))v11)(v111, v1);
      v1 = *(int **)(a1 + 56);
      v6 = *(_QWORD *)(a1 + 64);
      v10 = v71;
    }
    goto LABEL_24;
  }
  v109 = v1 + 8;
  v9 = *((_BYTE *)v1 + 32);
  if ( v9 == 5 )
    goto LABEL_20;
  if ( v9 > 5u )
  {
    if ( v9 != 6 )
      return 0;
    v8 = *((_QWORD *)v1 + 5);
    if ( (unsigned __int8)segtype(v8) == 1 )
    {
      v1 = *(int **)(a1 + 56);
      v10 = 0;
      v6 = *(_QWORD *)(a1 + 64);
      v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    else
    {
      func = (_QWORD *)get_func(v8);
      if ( !func || *func != v8 )
        return 0;
      v1 = *(int **)(a1 + 56);
      v10 = 0;
      v6 = *(_QWORD *)(a1 + 64);
      v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    goto LABEL_24;
  }
  if ( v9 == 1 )
    goto LABEL_20;
  if ( v9 != 4 )
    return 0;
  v5 = *((_DWORD **)v1 + 5);
  if ( *v5 != 2 )
  {
LABEL_20:
    v6 = *(_QWORD *)(a1 + 64);
    v8 = -1;
    v10 = 0;
    v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    goto LABEL_24;
  }
LABEL_9:
  v6 = *(_QWORD *)(a1 + 64);
  if ( v5[17] != *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) )
    return 0;
  v8 = -1;
  v10 = 0;
  v111 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v2 != 55 )
    goto LABEL_22;
LABEL_24:
  v12 = sub_1CFBB0(v6, *((_QWORD *)v1 + 3));
  if ( (v1[1] & 0x20) != 0 )
    v12 += *(int *)(*(_QWORD *)(v6 + 1504) + 80LL);
  v13 = *(_QWORD *)(a1 + 64);
  if ( v10 + v12 != *(_QWORD *)(v13 + 136) )
  {
    if ( v8 == -1 )
    {
      item_end = get_item_end(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL));
      v83 = sub_1CE9E0(*(_QWORD *)(a1 + 64));
      if ( v83 && *(_QWORD *)(v83 + 8) == item_end )
        sub_3311F0(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 51, v84, v85, v86);
      return 0;
    }
    goto LABEL_28;
  }
  if ( v8 != -1 )
  {
    v56 = *(_DWORD *)(v13 + 68);
    v57 = get_func(v8);
    if ( v57 )
    {
      ind_purged = *(_QWORD *)(v57 + 48);
      if ( !*(_QWORD *)(v57 + 48) )
      {
        if ( (*(_BYTE *)(v57 + 17) & 0x40) == 0 )
        {
          ind_purged = -1;
          if ( v56 == -1 )
            goto LABEL_91;
          goto LABEL_89;
        }
        ind_purged = 0;
      }
    }
    else
    {
      ind_purged = get_ind_purged(v8);
    }
    if ( v56 == ind_purged )
      goto LABEL_91;
    if ( (ind_purged | v56) >= 0 )
      return 0;
LABEL_89:
    if ( v56 < 0 )
    {
      v56 = ind_purged;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 68LL) = ind_purged;
      set_purged(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL), (unsigned int)ind_purged, 1);
    }
LABEL_91:
    v59 = *(_QWORD *)(a1 + 480);
    v119[0] = 0;
    v120 = nullptr;
    v112 = sub_3810A0(v59, v8, v119, 0);
    v60 = sub_F35D0(*(_QWORD *)(a1 + 64), (__int64)&v120);
    if ( v60 == 1 )
    {
      if ( v112 )
      {
LABEL_96:
        clear_tinfo_t(&v120);
        clear_tinfo_t(v119);
        v13 = *(_QWORD *)(a1 + 64);
        goto LABEL_28;
      }
    }
    else if ( v112 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 64) + 320LL)
        && (v56 == ind_purged || v56 < 0)
        && (get_tinfo_property(v119[0], 2) & 0xF) == 0xC
        && !(unsigned __int8)sub_D7060(*(_QWORD *)(a1 + 64), v119) )
      {
        v113 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL);
        tinfo_property = get_tinfo_property(v119[0], 20);
        v114 = sub_1CFC10(v113);
        v92 = sub_1CFC10(tinfo_property);
        v95 = *(_QWORD **)(a1 + 64);
        v96 = v92;
        if ( v114 <= v92 )
        {
          if ( v114 < v92 )
          {
            v115 = v92 - v114;
            v68 = (unsigned int)sub_228FE0(v95 + 54, v111, v95[18], (unsigned int)v115) == -1;
            v96 = v115;
            if ( v68 )
            {
              v101 = *(_QWORD *)(a1 + 64);
              v102 = *(_QWORD *)(v101 + 456);
              v103 = *(_QWORD *)(v101 + 464);
              *(_QWORD *)(v101 + 456) = 0;
              *(_OWORD *)(v101 + 464) = 0;
              sub_36DBC0(
                *(_QWORD *)(a1 + 64),
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) + v115,
                0xFFFFFFFFLL,
                0);
              v116 = 4 * v103;
              v117 = (4 * v103) >> 2;
              if ( v117 )
              {
                v104 = *(_QWORD **)(a1 + 64);
                v105 = v104[58];
                v106 = (char *)v104[57];
                if ( v104[59] < (unsigned __int64)(v117 + v105) )
                {
                  v108 = qvector_reserve(v104 + 57, v106, v117 + v105, 4);
                  v104[57] = v108;
                  v106 = (char *)v108;
                  v105 = v104[58];
                }
                memmove(&v106[v116], v106, 4 * v105);
                v107 = 0;
                do
                {
                  *(_DWORD *)&v106[v107] = *(_DWORD *)(v102 + v107);
                  v107 += 4;
                }
                while ( v116 != v107 );
                v104[58] += v117;
              }
              if ( v102 )
                qfree(v102);
            }
            v95 = *(_QWORD **)(a1 + 64);
          }
        }
        else if ( tinfo_property - 208 > 0x2F || (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 606LL) & 0x10) == 0 )
        {
          sub_381E90(v95[187], v95[5], (unsigned int)v119, 0, 1, v94);
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
        if ( !(unsigned __int8)sub_3780C0(v95, v119, 2, v93, v96) )
        {
          if ( !under_debugger )
            sub_383060(50111);
          goto LABEL_173;
        }
      }
      goto LABEL_96;
    }
    if ( v56 == ind_purged || ind_purged < 0 )
    {
      v77 = *(_QWORD *)(a1 + 64);
      if ( (*(_BYTE *)(v77 + 757) & 1) == 0 )
      {
        if ( v60 && *(_BYTE *)(v77 + 320) )
        {
          sub_F34C0(*(_QWORD *)(a1 + 64), v8, &v120, 2, v61, v62);
        }
        else
        {
          v78 = *(__int64 **)(v77 + 1216);
          v79 = *(_QWORD *)(v77 + 1224);
          v80 = &v78[v79];
          if ( v78 == v80 )
            goto LABEL_136;
          v81 = *(__int64 **)(v77 + 1216);
          while ( *v81 != v8 )
          {
            if ( v80 == ++v81 )
              goto LABEL_136;
          }
          if ( v80 == v81 )
          {
LABEL_136:
            if ( *(_QWORD *)(v77 + 1232) < (unsigned __int64)(v79 + 1) )
            {
              v99 = qvector_reserve(v77 + 1216, v78, v79 + 1, 8);
              v100 = *(_QWORD *)(v77 + 1224);
              *(_QWORD *)(v77 + 1216) = v99;
              v80 = (__int64 *)(v99 + 8 * v100);
            }
            *v80 = v8;
            ++*(_QWORD *)(v77 + 1224);
          }
        }
      }
    }
    goto LABEL_96;
  }
LABEL_28:
  v14 = *(_QWORD *)(v13 + 520);
  if ( !v14 )
  {
    v19 = *(_QWORD *)(a1 + 56);
LABEL_64:
    if ( v2 == 55 )
    {
      *(_DWORD *)v19 = 56;
    }
    else
    {
      *(_DWORD *)v19 = 57;
      sub_11CA10(*(_QWORD *)(a1 + 56) + 32LL, *(_QWORD *)(a1 + 56) + 48LL);
      sub_11CA10(*(_QWORD *)(a1 + 56) + 48LL, *(_QWORD *)(a1 + 56) + 64LL);
    }
    v37 = *(_QWORD *)(a1 + 64);
    v38 = *(_QWORD *)(a1 + 56);
    v39 = *(_QWORD *)(v37 + 520);
    if ( v39 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( a1 != v39 )
          {
            v40 = *(_QWORD *)(v39 + 56);
            if ( v40 )
            {
              if ( (unsigned int)(*(_DWORD *)v40 - 56) <= 1 )
              {
                v41 = *(_QWORD *)(v38 + 24);
                if ( *(_QWORD *)(v40 + 24) == v41 )
                  break;
              }
            }
          }
          v39 = *(_QWORD *)(v39 + 8);
          if ( !v39 )
            goto LABEL_75;
        }
        v42 = sub_330F80(v37, v41 + 1);
        v43 = sub_332920(v37 + 8, v42);
        v44 = *(_QWORD *)(a1 + 56);
        v45 = *(_QWORD *)(v44 + 24);
        if ( !v43 )
          break;
        *(_QWORD *)(v44 + 24) = v45 + 1;
        v37 = *(_QWORD *)(a1 + 64);
        v38 = *(_QWORD *)(a1 + 56);
        v39 = *(_QWORD *)(*(_QWORD *)(v37 + 520) + 8LL);
        if ( !v39 )
          goto LABEL_75;
      }
      *(_QWORD *)(v44 + 24) = sub_332AB0(*(_QWORD *)(a1 + 64), v45);
      v38 = *(_QWORD *)(a1 + 56);
    }
LABEL_75:
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      v46 = *(_QWORD *)(a1 + 64);
      v47 = *(_QWORD *)(v38 + 24);
      if ( v47 == *(_QWORD *)(v46 + 40) )
      {
        v72 = sub_330F80(*(_QWORD *)(a1 + 64), v47 + 1);
        v73 = sub_332920(v46 + 8, v72);
        v38 = *(_QWORD *)(a1 + 56);
        if ( v73 )
        {
          v74 = *(_QWORD *)(v38 + 24);
          v75 = *(_QWORD *)(a1 + 64);
          v121 = 0;
          v122 = 0;
          v123 = 0;
          v124 = 0;
          v120 = &off_4DD1E0;
          v125 = v74 + 1;
          v76 = sub_11FC20(v75, &v120);
          v38 = *(_QWORD *)(a1 + 56);
          if ( !v76 )
          {
            ++*(_QWORD *)(v38 + 24);
            v38 = *(_QWORD *)(a1 + 56);
          }
        }
      }
    }
    *(_DWORD *)(v38 + 4) |= 0x40u;
    v48 = *(_DWORD *)(a1 + 24);
    v49 = *(_QWORD *)(a1 + 56);
    BYTE1(v48) &= ~2u;
    LOBYTE(v48) = v48 | 0x88;
    *(_DWORD *)(a1 + 24) = v48;
    if ( !(unsigned __int8)sub_11C750(v49, v111, 0) )
    {
      if ( (get_aflags(v8) & 0x4000000) != 0 )
        sub_373590(*(_QWORD *)(a1 + 64));
      v50 = sub_1D5170(*(_QWORD *)(a1 + 64));
      v51 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_DWORD *)(v50 + 72) != v51 )
      {
        v52 = sub_68FC0(*(_QWORD *)(a1 + 64), v51);
        v53 = *(_DWORD *)(v50 + 72);
        v54 = v52;
        v55 = sub_330F80(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL));
        sub_B52C0((_QWORD *)v54, v55, v53);
        *(_DWORD *)(v54 + 24) |= 0x202u;
      }
    }
    return 1;
  }
  v15 = 0;
  do
  {
    if ( a1 != v14 && (*(_BYTE *)(v14 + 24) & 8) != 0 )
    {
      v16 = *(_QWORD *)(v14 + 56);
      v17 = v16 + 32;
      v18 = v16 + 64;
      if ( v2 == 55 )
        v18 = v17;
      if ( (unsigned __int8)sub_1255D0(v109, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v18, 0) )
      {
        v19 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(*(_QWORD *)(v14 + 56) + 24LL) == *(_QWORD *)(v19 + 24) )
        {
          v15 = v14;
          v20 = *(_QWORD **)(v14 + 56);
          if ( v20 != *(_QWORD **)(v15 + 48) )
            goto LABEL_41;
          goto LABEL_107;
        }
        if ( !v15 )
          v15 = v14;
      }
    }
    v14 = *(_QWORD *)(v14 + 8);
  }
  while ( v14 );
  v19 = *(_QWORD *)(a1 + 56);
  if ( !v15 )
    goto LABEL_64;
  v20 = *(_QWORD **)(v15 + 56);
  if ( v20 == *(_QWORD **)(v15 + 48) )
  {
LABEL_107:
    v32 = *(_DWORD *)(v15 + 72);
    v24 = 0;
    goto LABEL_56;
  }
LABEL_41:
  v21 = *(_QWORD *)(a1 + 480);
  v118 = 0;
  v110 = *(_QWORD *)(v21 + 112);
  v22 = v20 + 8;
  if ( v2 == 55 )
    v22 = v20 + 4;
  if ( *(_BYTE *)v22 == 6
    && (unsigned __int8)sub_3810A0(v21, v22[1], &v118, 0)
    && !(unsigned int)get_tinfo_property(v118, 23) )
  {
    if ( v20[3] == *(_QWORD *)(v19 + 24) )
    {
LABEL_63:
      clear_tinfo_t(&v118);
      v19 = *(_QWORD *)(a1 + 56);
      goto LABEL_64;
    }
  }
  else if ( (*(_BYTE *)(v110 + 49) & 0x40) == 0 )
  {
    v35 = v20[3];
    v36 = *(_QWORD *)(v15 + 64);
    memset(&v119[1], 0, 32);
    v119[0] = (__int64)&off_4DD208;
    v119[5] = v35;
    if ( !(unsigned int)sub_11FC20(v36, v119) )
      goto LABEL_63;
  }
  if ( v19 == *(_QWORD *)(a1 + 48) && (unsigned __int8)sub_11C750(v20, v110, 0) )
  {
    v68 = *(_QWORD *)(v15 + 384) == 0;
    v69 = *(_DWORD **)(v15 + 368);
    *(_QWORD *)(v15 + 376) = 0;
    v70 = *(_DWORD *)(a1 + 72);
    if ( v68 )
    {
      v89 = qvector_reserve(v15 + 368, v69, 1, 4);
      v90 = *(_QWORD *)(v15 + 376);
      *(_QWORD *)(v15 + 368) = v89;
      v69 = (_DWORD *)(v89 + 4 * v90);
    }
    *v69 = v70;
    v24 = a1;
    ++*(_QWORD *)(v15 + 376);
  }
  else
  {
    v23 = sub_68FC0(*(_QWORD *)(v15 + 64), *(_DWORD *)(v15 + 72) + 1);
    *(_DWORD *)(v23 + 24) |= 2u;
    v24 = v23;
    *(_QWORD *)(v23 + 32) = v20[3];
    *(_QWORD *)(v23 + 40) = *(_QWORD *)(v15 + 40);
    v25 = sub_11C750(v20, v110, 0);
    v26 = *(_DWORD **)(v15 + 368);
    if ( v25 )
    {
      v27 = *(_DWORD *)(v15 + 72) + 1;
      v28 = *(_QWORD *)(v15 + 376);
      if ( *(_QWORD *)(v15 + 384) < (unsigned __int64)(v28 + 1) )
      {
        v88 = qvector_reserve(v15 + 368, v26, v28 + 1, 4);
        *(_QWORD *)(v15 + 368) = v88;
        v26 = (_DWORD *)v88;
        v28 = *(_QWORD *)(v15 + 376);
      }
      v26[v28] = v27;
      v29 = 2;
      ++*(_QWORD *)(v15 + 376);
    }
    else
    {
      v63 = *(_DWORD *)(v24 + 72);
      *v26 = v63;
      v64 = v63 + 1;
      v65 = *(_QWORD *)(v24 + 376);
      v66 = *(_QWORD *)(v24 + 368);
      if ( *(_QWORD *)(v24 + 384) < (unsigned __int64)(v65 + 1) )
      {
        v87 = qvector_reserve(v24 + 368, v66, v65 + 1, 4);
        *(_QWORD *)(v24 + 368) = v87;
        v66 = v87;
        v65 = *(_QWORD *)(v24 + 376);
      }
      *(_DWORD *)(v66 + 4 * v65) = v64;
      v29 = 3;
      ++*(_QWORD *)(v24 + 376);
    }
    *(_DWORD *)(v24 + 76) = v29;
  }
  *(_DWORD *)(v15 + 76) = 3;
  sub_A33C0(v15, (__int64)v20);
  sub_A3160(v24, v20, 0);
  v30 = *(_DWORD *)(v15 + 24);
  BYTE1(v30) &= ~2u;
  LOBYTE(v30) = v30 | 0x80;
  *(_DWORD *)(v15 + 24) = v30;
  v31 = *(_DWORD *)(v24 + 24);
  BYTE1(v31) &= ~2u;
  LOBYTE(v31) = v31 | 0x80;
  *(_DWORD *)(v24 + 24) = v31;
  *(_DWORD *)(v15 + 24) &= ~8u;
  v32 = *(_DWORD *)(v24 + 72);
  *(_DWORD *)(v24 + 24) |= 8u;
  if ( *(_DWORD *)(v24 + 76) != 2 )
  {
    if ( a1 == v24 )
    {
      clear_tinfo_t(&v118);
      goto LABEL_109;
    }
    v33 = *(_QWORD *)(v24 + 64);
    v34 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
    v120 = &off_4DD1E0;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v124 = 0;
    v125 = v34;
    if ( !(unsigned int)sub_11FC20(v33, &v120) )
      v20[3] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
  }
  clear_tinfo_t(&v118);
LABEL_56:
  if ( a1 != v24 )
    goto LABEL_57;
LABEL_109:
  sub_A33C0(a1, v19);
  sub_A3160(v15, (_QWORD *)v19, *(_QWORD *)(v15 + 56));
  *(_DWORD *)(a1 + 76) = 2;
  v32 = *(_DWORD *)(a1 + 72);
LABEL_57:
  if ( v19 )
  {
    if ( *(_DWORD *)v19 != 55 )
    {
      sub_11D5A0(v19);
      *(_DWORD *)v19 = 55;
    }
    *(_BYTE *)(v19 + 32) = 7;
    *(_DWORD *)(v19 + 40) = v32;
  }
  return 1;
}
