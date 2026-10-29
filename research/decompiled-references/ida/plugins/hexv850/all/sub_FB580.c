__int64 __fastcall sub_FB580(__int64 a1)
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
  __int64 v41; // rax
  char v42; // al
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // rbx
  int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rbx
  int v49; // esi
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rbp
  __int64 v53; // rax
  int v54; // r14d
  __int64 v55; // rax
  int ind_purged; // ebp
  __int64 v57; // rdi
  char v58; // al
  __int64 v59; // r8
  int v60; // r9d
  int v61; // eax
  int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rsi
  _QWORD *func; // rax
  bool v66; // zf
  _DWORD *v67; // rsi
  int v68; // ebx
  __int64 v69; // rax
  __int64 v70; // rax
  char v71; // al
  __int64 v72; // rax
  __int64 v73; // rdi
  int v74; // eax
  __int64 v75; // r14
  __int64 *v76; // rsi
  __int64 v77; // rcx
  __int64 *v78; // rdx
  __int64 *v79; // rax
  __int64 item_end; // rbx
  __int64 v81; // rax
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  unsigned int tinfo_property; // ebp
  __int64 v90; // rax
  __int64 v91; // rcx
  int v92; // r9d
  _QWORD *v93; // r14
  __int64 v94; // r8
  _DWORD *exception; // rdi
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // r14
  __int64 v101; // rbp
  _QWORD *v102; // rbp
  __int64 v103; // rax
  char *v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rax
  int *v107; // [rsp+0h] [rbp-E8h]
  __int64 v108; // [rsp+0h] [rbp-E8h]
  __int64 v109; // [rsp+8h] [rbp-E0h]
  char v110; // [rsp+18h] [rbp-D0h]
  unsigned int v111; // [rsp+18h] [rbp-D0h]
  __int64 v112; // [rsp+18h] [rbp-D0h]
  __int64 v113; // [rsp+18h] [rbp-D0h]
  __int64 v114; // [rsp+18h] [rbp-D0h]
  __int64 v115; // [rsp+20h] [rbp-C8h]
  __int64 v116; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v117[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 (__fastcall **v118)(); // [rsp+70h] [rbp-78h] BYREF
  __int64 v119; // [rsp+78h] [rbp-70h]
  __int64 v120; // [rsp+80h] [rbp-68h]
  __int64 v121; // [rsp+88h] [rbp-60h]
  __int64 v122; // [rsp+90h] [rbp-58h]
  __int64 v123; // [rsp+98h] [rbp-50h]
  unsigned __int64 v124; // [rsp+A8h] [rbp-40h]

  v124 = __readfsqword(0x28u);
  v1 = *(int **)(a1 + 56);
  if ( !v1 )
  {
    if ( !under_debugger )
      sub_37CFE0(50109);
LABEL_173:
    BUG();
  }
  v2 = *v1;
  if ( (unsigned int)(*v1 - 54) > 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(50110);
    goto LABEL_173;
  }
  if ( v2 != 55 )
  {
    v107 = v1 + 16;
    v4 = *((_BYTE *)v1 + 64);
    if ( v4 != 5 )
    {
      if ( v4 > 5u )
      {
        if ( v4 != 6 )
          return 0;
        v8 = *((_QWORD *)v1 + 9);
        if ( (unsigned __int8)segtype() == 1 )
        {
          v1 = *(int **)(a1 + 56);
          v109 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
        }
        else
        {
          if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
            return 0;
          v1 = *(int **)(a1 + 56);
          v109 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
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
    v109 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
LABEL_22:
    v11 = *(__int64 (**)())(*(_QWORD *)v109 + 352LL);
    if ( v11 == sub_F8ED0 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      v10 = 0;
    }
    else
    {
      v69 = ((__int64 (__fastcall *)(__int64, int *))v11)(v109, v1);
      v1 = *(int **)(a1 + 56);
      v6 = *(_QWORD *)(a1 + 64);
      v10 = v69;
    }
    goto LABEL_24;
  }
  v107 = v1 + 8;
  v9 = *((_BYTE *)v1 + 32);
  if ( v9 == 5 )
    goto LABEL_20;
  if ( v9 > 5u )
  {
    if ( v9 != 6 )
      return 0;
    v8 = *((_QWORD *)v1 + 5);
    if ( (unsigned __int8)segtype() == 1 )
    {
      v1 = *(int **)(a1 + 56);
      v10 = 0;
      v6 = *(_QWORD *)(a1 + 64);
      v109 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    else
    {
      func = (_QWORD *)get_func();
      if ( !func || *func != v8 )
        return 0;
      v1 = *(int **)(a1 + 56);
      v10 = 0;
      v6 = *(_QWORD *)(a1 + 64);
      v109 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
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
    v109 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    goto LABEL_24;
  }
LABEL_9:
  v6 = *(_QWORD *)(a1 + 64);
  if ( v5[17] != *(_DWORD *)(*(_QWORD *)(v6 + 1504) + 80LL) )
    return 0;
  v8 = -1;
  v10 = 0;
  v109 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v2 != 55 )
    goto LABEL_22;
LABEL_24:
  v12 = sub_1CAD30(v6, *((_QWORD *)v1 + 3));
  if ( (v1[1] & 0x20) != 0 )
    v12 += *(int *)(*(_QWORD *)(v6 + 1504) + 80LL);
  v13 = *(_QWORD *)(a1 + 64);
  if ( v10 + v12 != *(_QWORD *)(v13 + 136) )
  {
    if ( v8 == -1 )
    {
      item_end = get_item_end();
      v81 = sub_1C9B60(*(_QWORD *)(a1 + 64));
      if ( v81 && *(_QWORD *)(v81 + 8) == item_end )
        sub_32B650(*(_QWORD *)(a1 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 51, v82, v83, v84);
      return 0;
    }
    goto LABEL_28;
  }
  if ( v8 != -1 )
  {
    v54 = *(_DWORD *)(v13 + 68);
    v55 = get_func();
    if ( v55 )
    {
      ind_purged = *(_QWORD *)(v55 + 48);
      if ( !*(_QWORD *)(v55 + 48) )
      {
        if ( (*(_BYTE *)(v55 + 17) & 0x40) == 0 )
        {
          ind_purged = -1;
          if ( v54 == -1 )
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
    if ( v54 == ind_purged )
      goto LABEL_91;
    if ( (ind_purged | v54) >= 0 )
      return 0;
LABEL_89:
    if ( v54 < 0 )
    {
      v54 = ind_purged;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 68LL) = ind_purged;
      set_purged();
    }
LABEL_91:
    v57 = *(_QWORD *)(a1 + 480);
    v117[0] = 0;
    v118 = nullptr;
    v110 = sub_37B020(v57, v8, v117, 0);
    v58 = sub_EEA10(*(_QWORD *)(a1 + 64), (__int64)&v118);
    if ( v58 == 1 )
    {
      if ( v110 )
      {
LABEL_96:
        clear_tinfo_t();
        clear_tinfo_t();
        v13 = *(_QWORD *)(a1 + 64);
        goto LABEL_28;
      }
    }
    else if ( v110 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 64) + 320LL)
        && (v54 == ind_purged || v54 < 0)
        && (get_tinfo_property() & 0xF) == 0xC
        && !(unsigned __int8)sub_D24A0(*(_QWORD *)(a1 + 64)) )
      {
        v111 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL);
        tinfo_property = get_tinfo_property();
        v112 = sub_1CAD90(v111);
        v90 = sub_1CAD90(tinfo_property);
        v93 = *(_QWORD **)(a1 + 64);
        v94 = v90;
        if ( v112 <= v90 )
        {
          if ( v112 < v90 )
          {
            v113 = v90 - v112;
            v66 = (unsigned int)sub_223C20(v93 + 54, v109, v93[18], (unsigned int)v113) == -1;
            v94 = v113;
            if ( v66 )
            {
              v99 = *(_QWORD *)(a1 + 64);
              v100 = *(_QWORD *)(v99 + 456);
              v101 = *(_QWORD *)(v99 + 464);
              *(_QWORD *)(v99 + 456) = 0;
              *(_OWORD *)(v99 + 464) = 0;
              sub_367B40(
                *(_QWORD *)(a1 + 64),
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) + v113,
                0xFFFFFFFFLL,
                0);
              v114 = 4 * v101;
              v115 = (4 * v101) >> 2;
              if ( v115 )
              {
                v102 = *(_QWORD **)(a1 + 64);
                v103 = v102[58];
                v104 = (char *)v102[57];
                if ( v102[59] < (unsigned __int64)(v115 + v103) )
                {
                  v106 = qvector_reserve();
                  v102[57] = v106;
                  v104 = (char *)v106;
                  v103 = v102[58];
                }
                memmove(&v104[v114], v104, 4 * v103);
                v105 = 0;
                do
                {
                  *(_DWORD *)&v104[v105] = *(_DWORD *)(v100 + v105);
                  v105 += 4;
                }
                while ( v114 != v105 );
                v102[58] += v115;
              }
              if ( v100 )
                qfree();
            }
            v93 = *(_QWORD **)(a1 + 64);
          }
        }
        else if ( tinfo_property - 208 > 0x2F || (*(_BYTE *)(*(_QWORD *)(a1 + 480) + 606LL) & 0x10) == 0 )
        {
          sub_37BE10(v93[187], v93[5], (unsigned int)v117, 0, 1, v92);
          *(_DWORD *)(*(_QWORD *)(a1 + 64) + 72LL) = tinfo_property;
          exception = __cxa_allocate_exception(0x30u);
          v96 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
          *(_QWORD *)exception = off_4AF6B0;
          exception[2] = -17;
          *((_QWORD *)exception + 2) = v96;
          *((_QWORD *)exception + 3) = 0;
          *((_OWORD *)exception + 2) = 0;
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_75A40);
        }
        if ( !(unsigned __int8)sub_372040(v93, v117, 2, v91, v94) )
        {
          if ( !under_debugger )
            sub_37CFE0(50111);
          goto LABEL_173;
        }
      }
      goto LABEL_96;
    }
    if ( v54 == ind_purged || ind_purged < 0 )
    {
      v75 = *(_QWORD *)(a1 + 64);
      if ( (*(_BYTE *)(v75 + 757) & 1) == 0 )
      {
        if ( v58 && *(_BYTE *)(v75 + 320) )
        {
          sub_EE900(*(_QWORD *)(a1 + 64), v8, (int)&v118, 2, v59, v60);
        }
        else
        {
          v76 = *(__int64 **)(v75 + 1216);
          v77 = *(_QWORD *)(v75 + 1224);
          v78 = &v76[v77];
          if ( v76 == v78 )
            goto LABEL_136;
          v79 = *(__int64 **)(v75 + 1216);
          while ( *v79 != v8 )
          {
            if ( v78 == ++v79 )
              goto LABEL_136;
          }
          if ( v78 == v79 )
          {
LABEL_136:
            if ( *(_QWORD *)(v75 + 1232) < (unsigned __int64)(v77 + 1) )
            {
              v97 = qvector_reserve();
              v98 = *(_QWORD *)(v75 + 1224);
              *(_QWORD *)(v75 + 1216) = v97;
              v78 = (__int64 *)(v97 + 8 * v98);
            }
            *v78 = v8;
            ++*(_QWORD *)(v75 + 1224);
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
      sub_117E50(*(_QWORD *)(a1 + 56) + 32LL, *(_QWORD *)(a1 + 56) + 48LL);
      sub_117E50(*(_QWORD *)(a1 + 56) + 48LL, *(_QWORD *)(a1 + 56) + 64LL);
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
              if ( (unsigned int)(*(_DWORD *)v40 - 56) <= 1 && *(_QWORD *)(v40 + 24) == *(_QWORD *)(v38 + 24) )
                break;
            }
          }
          v39 = *(_QWORD *)(v39 + 8);
          if ( !v39 )
            goto LABEL_75;
        }
        v41 = sub_32B3E0(v37);
        v42 = sub_32CDA0(v37 + 8, v41);
        v43 = *(_QWORD *)(a1 + 56);
        v44 = *(_QWORD *)(v43 + 24);
        if ( !v42 )
          break;
        *(_QWORD *)(v43 + 24) = v44 + 1;
        v37 = *(_QWORD *)(a1 + 64);
        v38 = *(_QWORD *)(a1 + 56);
        v39 = *(_QWORD *)(*(_QWORD *)(v37 + 520) + 8LL);
        if ( !v39 )
          goto LABEL_75;
      }
      *(_QWORD *)(v43 + 24) = sub_32CF30(*(_QWORD *)(a1 + 64), v44);
      v38 = *(_QWORD *)(a1 + 56);
    }
LABEL_75:
    if ( *(_DWORD *)(a1 + 72) != 1 )
    {
      v45 = *(_QWORD *)(a1 + 64);
      if ( *(_QWORD *)(v38 + 24) == *(_QWORD *)(v45 + 40) )
      {
        v70 = sub_32B3E0(*(_QWORD *)(a1 + 64));
        v71 = sub_32CDA0(v45 + 8, v70);
        v38 = *(_QWORD *)(a1 + 56);
        if ( v71 )
        {
          v72 = *(_QWORD *)(v38 + 24);
          v73 = *(_QWORD *)(a1 + 64);
          v119 = 0;
          v120 = 0;
          v121 = 0;
          v122 = 0;
          v118 = off_4B0BC0;
          v123 = v72 + 1;
          v74 = sub_11B060(v73, &v118);
          v38 = *(_QWORD *)(a1 + 56);
          if ( !v74 )
          {
            ++*(_QWORD *)(v38 + 24);
            v38 = *(_QWORD *)(a1 + 56);
          }
        }
      }
    }
    *(_DWORD *)(v38 + 4) |= 0x40u;
    v46 = *(_DWORD *)(a1 + 24);
    v47 = *(_QWORD *)(a1 + 56);
    BYTE1(v46) &= ~2u;
    LOBYTE(v46) = v46 | 0x88;
    *(_DWORD *)(a1 + 24) = v46;
    if ( !(unsigned __int8)sub_117B90(v47, v109, 0) )
    {
      if ( (get_aflags() & 0x4000000) != 0 )
        sub_36D510(*(_QWORD *)(a1 + 64));
      v48 = sub_1D0330(*(_QWORD *)(a1 + 64));
      v49 = *(_DWORD *)(a1 + 72) + 1;
      if ( *(_DWORD *)(v48 + 72) != v49 )
      {
        v50 = sub_64540(*(_QWORD *)(a1 + 64), v49);
        v51 = *(_DWORD *)(v48 + 72);
        v52 = v50;
        v53 = sub_32B3E0(*(_QWORD *)(a1 + 64));
        sub_B0700((_QWORD *)v52, v53, v51);
        *(_DWORD *)(v52 + 24) |= 0x202u;
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
      if ( (unsigned __int8)sub_120A10(v107, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v18, 0) )
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
  v116 = 0;
  v108 = *(_QWORD *)(v21 + 112);
  v22 = v20 + 8;
  if ( v2 == 55 )
    v22 = v20 + 4;
  if ( *(_BYTE *)v22 == 6 && (unsigned __int8)sub_37B020(v21, v22[1], &v116, 0) && !(unsigned int)get_tinfo_property() )
  {
    if ( v20[3] == *(_QWORD *)(v19 + 24) )
    {
LABEL_63:
      clear_tinfo_t();
      v19 = *(_QWORD *)(a1 + 56);
      goto LABEL_64;
    }
  }
  else if ( (*(_BYTE *)(v108 + 49) & 0x40) == 0 )
  {
    v35 = v20[3];
    v36 = *(_QWORD *)(v15 + 64);
    memset(&v117[1], 0, 32);
    v117[0] = off_4B0BE8;
    v117[5] = v35;
    if ( !(unsigned int)sub_11B060(v36, v117) )
      goto LABEL_63;
  }
  if ( v19 == *(_QWORD *)(a1 + 48) && (unsigned __int8)sub_117B90(v20, v108, 0) )
  {
    v66 = *(_QWORD *)(v15 + 384) == 0;
    v67 = *(_DWORD **)(v15 + 368);
    *(_QWORD *)(v15 + 376) = 0;
    v68 = *(_DWORD *)(a1 + 72);
    if ( v66 )
    {
      v87 = qvector_reserve();
      v88 = *(_QWORD *)(v15 + 376);
      *(_QWORD *)(v15 + 368) = v87;
      v67 = (_DWORD *)(v87 + 4 * v88);
    }
    *v67 = v68;
    v24 = a1;
    ++*(_QWORD *)(v15 + 376);
  }
  else
  {
    v23 = sub_64540(*(_QWORD *)(v15 + 64), *(_DWORD *)(v15 + 72) + 1);
    *(_DWORD *)(v23 + 24) |= 2u;
    v24 = v23;
    *(_QWORD *)(v23 + 32) = v20[3];
    *(_QWORD *)(v23 + 40) = *(_QWORD *)(v15 + 40);
    v25 = sub_117B90(v20, v108, 0);
    v26 = *(_DWORD **)(v15 + 368);
    if ( v25 )
    {
      v27 = *(_DWORD *)(v15 + 72) + 1;
      v28 = *(_QWORD *)(v15 + 376);
      if ( *(_QWORD *)(v15 + 384) < (unsigned __int64)(v28 + 1) )
      {
        v86 = qvector_reserve();
        *(_QWORD *)(v15 + 368) = v86;
        v26 = (_DWORD *)v86;
        v28 = *(_QWORD *)(v15 + 376);
      }
      v26[v28] = v27;
      v29 = 2;
      ++*(_QWORD *)(v15 + 376);
    }
    else
    {
      v61 = *(_DWORD *)(v24 + 72);
      *v26 = v61;
      v62 = v61 + 1;
      v63 = *(_QWORD *)(v24 + 376);
      v64 = *(_QWORD *)(v24 + 368);
      if ( *(_QWORD *)(v24 + 384) < (unsigned __int64)(v63 + 1) )
      {
        v85 = qvector_reserve();
        *(_QWORD *)(v24 + 368) = v85;
        v64 = v85;
        v63 = *(_QWORD *)(v24 + 376);
      }
      *(_DWORD *)(v64 + 4 * v63) = v62;
      v29 = 3;
      ++*(_QWORD *)(v24 + 376);
    }
    *(_DWORD *)(v24 + 76) = v29;
  }
  *(_DWORD *)(v15 + 76) = 3;
  sub_9E800(v15, (__int64)v20);
  sub_9E5A0(v24, v20, 0);
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
      clear_tinfo_t();
      goto LABEL_109;
    }
    v33 = *(_QWORD *)(v24 + 64);
    v34 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
    v118 = off_4B0BC0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v122 = 0;
    v123 = v34;
    if ( !(unsigned int)sub_11B060(v33, &v118) )
      v20[3] = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
  }
  clear_tinfo_t();
LABEL_56:
  if ( a1 != v24 )
    goto LABEL_57;
LABEL_109:
  sub_9E800(a1, v19);
  sub_9E5A0(v15, (_QWORD *)v19, *(_QWORD *)(v15 + 56));
  *(_DWORD *)(a1 + 76) = 2;
  v32 = *(_DWORD *)(a1 + 72);
LABEL_57:
  if ( v19 )
  {
    if ( *(_DWORD *)v19 != 55 )
    {
      sub_1189E0(v19);
      *(_DWORD *)v19 = 55;
    }
    *(_BYTE *)(v19 + 32) = 7;
    *(_DWORD *)(v19 + 40) = v32;
  }
  return 1;
}

