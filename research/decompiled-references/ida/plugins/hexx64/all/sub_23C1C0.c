__int64 __fastcall sub_23C1C0(__int64 a1, __m128 a2, __m128 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rbp
  int v15; // edx
  bool v16; // r13
  __int64 v17; // r14
  __int64 v18; // rax
  char v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  _QWORD *v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rbp
  int v29; // edx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  int v35; // edx
  _QWORD *v36; // rcx
  _QWORD *i; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r14d
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rsi
  char tinfo_property; // al
  __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // r10
  int v50; // eax
  __int64 v51; // r9
  unsigned __int64 v52; // r8
  bool v53; // si
  __int64 v54; // rax
  _QWORD *v55; // rcx
  __int64 v56; // rsi
  _QWORD *v57; // r10
  _QWORD *v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // rsi
  _QWORD *v61; // rdx
  __int64 v62; // rcx
  unsigned __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  int v67; // edx
  int v68; // r12d
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdi
  int v73; // ecx
  int v74; // eax
  __int64 *v75; // rbp
  int v76; // eax
  int v77; // ecx
  __int64 v78; // rdi
  __int64 v79; // rbp
  _QWORD *v80; // r14
  int v81; // edx
  __int64 v82; // rbp
  int v83; // r15d
  __int64 j; // rax
  __int64 v85; // rdi
  __int64 v86; // rbp
  __int64 v87; // r14
  __int64 *v88; // rbp
  __int64 v89; // r13
  char *v90; // rdx
  char *v91; // rax
  __int64 v92; // rdi
  __int64 v93; // r15
  int v94; // r13d
  int v95; // r15d
  signed __int64 v96; // rsi
  signed __int64 v97; // rax
  unsigned int v98; // [rsp+Ch] [rbp-6Ch]
  __int64 v99; // [rsp+10h] [rbp-68h] BYREF
  char v100; // [rsp+18h] [rbp-60h]
  char *v101; // [rsp+20h] [rbp-58h] BYREF
  __int128 v102; // [rsp+28h] [rbp-50h]
  unsigned __int64 v103; // [rsp+38h] [rbp-40h]

  v103 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 112) || *(_DWORD *)(a1 + 192) == -1 )
    return 1;
  if ( (unsigned __int8)sub_2329E0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 176), *(_DWORD *)(a1 + 196)) )
  {
    if ( (**(_DWORD **)(a1 + 8) & 0x8000000) != 0 )
    {
      *(_DWORD *)(a1 + 136) |= 4u;
      return 0xFFFFFFFFLL;
    }
    if ( !under_debugger )
      sub_383060(0xCC4Eu, *(double *)a2.m128_u64);
LABEL_245:
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 176);
  v6 = *(_QWORD *)(a1 + 128);
  v7 = *(int *)(a1 + 196);
  v8 = v5 + v7;
  if ( (_DWORD)v7 == -1 )
    v8 = *(_QWORD *)(a1 + 176);
  if ( v6 >= v8 )
  {
    v16 = sub_226FD0(*(_QWORD *)(a1 + 8), v5, v7);
    if ( v16 )
      goto LABEL_20;
    v28 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 120) == v28 )
    {
LABEL_59:
      v15 = *(_DWORD *)(a1 + 200);
      if ( (v15 & 4) == 0 )
      {
        if ( *(_QWORD *)(a1 + 184) != -1 )
        {
          v14 = *(_QWORD *)(a1 + 8);
          goto LABEL_62;
        }
LABEL_239:
        if ( !under_debugger )
          sub_383060(0xCC36u, *(double *)a2.m128_u64);
        goto LABEL_245;
      }
      v14 = *(_QWORD *)(a1 + 8);
LABEL_145:
      v68 = 0;
      v69 = 0;
      if ( *(_QWORD *)(v14 + 440) )
      {
        do
        {
          v70 = *(_QWORD *)(v14 + 432) + 104 * v69;
          if ( *(_QWORD *)(v70 + 16) == *(_QWORD *)(a1 + 184) )
          {
            sub_1C34E0(v70, &v99, (signed __int64 *)&v101, *(_DWORD *)(v70 + 88), *(double *)a2.m128_u64);
            if ( *(_QWORD *)(a1 + 176) == v99 && &v101[-v99] == (char *)*(int *)(a1 + 196) )
            {
              sub_23A200(a1, v68, 1, (__m128i)a2);
              return 1;
            }
            v14 = *(_QWORD *)(a1 + 8);
          }
          v69 = ++v68;
        }
        while ( (unsigned __int64)v68 < *(_QWORD *)(v14 + 440) );
        v15 = *(_DWORD *)(a1 + 200);
      }
      if ( (v15 & 0x80) != 0 )
        goto LABEL_205;
      if ( *(_QWORD *)(a1 + 184) != -1 )
      {
        if ( v16 )
        {
          v12 = *(_DWORD *)(a1 + 296);
          v13 = *(_DWORD *)(a1 + 300);
          goto LABEL_27;
        }
LABEL_62:
        v32 = *(_QWORD *)(a1 + 128);
        v33 = *(_QWORD *)(a1 + 112);
        if ( v33 == *(_QWORD *)(a1 + 120) )
        {
          v35 = v32 + 1;
          v34 = -1;
        }
        else
        {
          v34 = *(_QWORD *)(v33 + 56);
          v35 = v32 - *(_DWORD *)(v33 + 56);
        }
        v16 = sub_226FD0(v14, v34, v35);
        if ( v16 )
        {
          v12 = *(_DWORD *)(a1 + 296);
          v13 = *(_DWORD *)(a1 + 300);
          v16 = 0;
          v14 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          v64 = *(_QWORD *)(a1 + 112);
          if ( v64 == *(_QWORD *)(a1 + 120) )
          {
            *(_QWORD *)(a1 + 176) = -1;
            v65 = *(_QWORD *)(a1 + 128);
            LODWORD(v66) = -1;
          }
          else
          {
            *(_QWORD *)(a1 + 176) = *(_QWORD *)(v64 + 56);
            v65 = *(_QWORD *)(a1 + 128);
            v66 = *(_QWORD *)(v64 + 56);
          }
          v67 = v65 - v66;
          v12 = *(_DWORD *)(a1 + 296);
          v13 = *(_DWORD *)(a1 + 300);
          *(_DWORD *)(a1 + 196) = v67;
          v14 = *(_QWORD *)(a1 + 8);
        }
        goto LABEL_27;
      }
      goto LABEL_239;
    }
    while ( 1 )
    {
      v29 = *(_DWORD *)(v28 + 80);
      if ( (v29 & 1) != 0 )
        break;
      if ( (v29 & 2) == 0 )
        goto LABEL_120;
      if ( *(_QWORD *)(v28 + 64) != -1 )
      {
        tinfo_property = get_tinfo_property();
        v29 = *(_DWORD *)(v28 + 80);
        if ( (tinfo_property & 0xF) == 0xB )
          break;
        if ( (v29 & 2) == 0 )
        {
LABEL_120:
          v30 = *(_QWORD *)(a1 + 120);
          if ( (v29 & 0x20) != 0 )
          {
LABEL_121:
            v52 = *(_QWORD *)(v28 + 56);
            v47 = *(_QWORD *)(a1 + 112);
LABEL_110:
            if ( v30 == v47 )
              v54 = -1;
            else
              v54 = *(_QWORD *)(v47 + 56);
            if ( v54 != v52 )
              goto LABEL_55;
          }
LABEL_54:
          if ( (v29 & 0x1018) != 0 )
            goto LABEL_94;
          goto LABEL_55;
        }
      }
      v30 = *(_QWORD *)(a1 + 120);
      if ( (v29 & 0x1018) != 0 )
      {
        if ( (v29 & 0x20) == 0 )
        {
LABEL_94:
          v43 = *(int *)(v28 + 76);
          if ( (_DWORD)v43 )
          {
            v44 = *(_QWORD *)(a1 + 112);
            v45 = v44 == v30 ? -1LL : *(_QWORD *)(v44 + 56);
            if ( v43 != *(_QWORD *)(a1 + 128) - v45 )
              goto LABEL_20;
          }
          goto LABEL_55;
        }
        goto LABEL_121;
      }
      v47 = *(_QWORD *)(a1 + 112);
      v48 = *(_QWORD *)(a1 + 128);
      if ( v47 == v30 )
      {
        v50 = v48 + 1;
        v49 = -1;
      }
      else
      {
        v49 = *(_QWORD *)(v47 + 56);
        v50 = v48 - *(_DWORD *)(v47 + 56);
      }
      v51 = *(int *)(v28 + 76);
      v52 = *(_QWORD *)(v28 + 56);
      v53 = v49 >= v52 && v51 != 0;
      if ( v50 )
      {
        if ( !v53 || v51 + v52 - 1 < v49 + v50 - 1 )
          goto LABEL_55;
      }
      else if ( !v53 || v51 + v52 - 1 < v49 )
      {
        goto LABEL_55;
      }
      if ( (v29 & 0x20) != 0 )
        goto LABEL_110;
LABEL_55:
      if ( (*(_QWORD *)v28 & 2) == 0 )
      {
        v31 = *(_QWORD *)(v28 + 16);
        if ( (*(_BYTE *)v31 & 2) != 0 )
        {
          v58 = (_QWORD *)(*(_QWORD *)v28 & 0xFFFFFFFFFFFFFFFCLL);
          v59 = *v58;
          if ( (*v58 & 2) != 0 || v58[2] != v28 )
          {
LABEL_123:
            v28 = (unsigned __int64)v58;
          }
          else
          {
            while ( 1 )
            {
              v28 = v59 & 0xFFFFFFFFFFFFFFFCLL;
              v59 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v59 & 2) != 0 )
                break;
              v60 = v58;
              v58 = (_QWORD *)v28;
              if ( *(_QWORD **)(v28 + 16) != v60 )
                goto LABEL_123;
            }
          }
        }
        else
        {
          do
          {
            v28 = v31;
            v31 = *(_QWORD *)(v31 + 8);
          }
          while ( (*(_BYTE *)v31 & 2) == 0 );
        }
      }
      if ( v30 == v28 )
        goto LABEL_59;
    }
    v30 = *(_QWORD *)(a1 + 120);
    goto LABEL_54;
  }
  if ( (*(_BYTE *)(a1 + 203) & 0x20) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(a1 + 88) == v9 || (*(_BYTE *)(v9 + 83) & 0x10) == 0 )
    {
      if ( !under_debugger )
        sub_383060(0xCC42u, *(double *)a2.m128_u64);
      goto LABEL_245;
    }
  }
  v10 = *(_QWORD *)(a1 + 112);
  if ( v10 == *(_QWORD *)(a1 + 120) )
    LODWORD(v11) = -1;
  else
    v11 = *(_QWORD *)(v10 + 56);
  *(_DWORD *)(a1 + 196) = v6 - v11;
LABEL_20:
  v12 = *(_DWORD *)(a1 + 296);
  v13 = *(_DWORD *)(a1 + 300);
  if ( v12 != v13 && (v13 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
    return 0xFFFFFFFFLL;
  v14 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v14 + 1496) + 604LL) & 0x10) == 0 )
    return 0xFFFFFFFFLL;
  v15 = *(_DWORD *)(a1 + 200);
  if ( (v15 & 4) != 0 )
  {
    v16 = 1;
    goto LABEL_145;
  }
  if ( *(_QWORD *)(a1 + 184) == -1 )
    goto LABEL_239;
  v16 = 1;
LABEL_27:
  if ( v13 == v12 || v13 == 1 && (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) == 0 )
  {
    v17 = *(_QWORD *)(a1 + 176);
    v18 = *(_QWORD *)(v14 + 144);
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 176);
    v18 = sub_18D080(v14);
  }
  v19 = 0;
  if ( v18 <= v17 )
    v19 = (*(_BYTE *)(v14 + 5) & 0x10) == 0
       || (v75 = *(__int64 **)(v14 + 944), v75[1] == -1) && !(unsigned __int8)sub_21E760(v75, *(double *)a2.m128_u64)
       || !v75[2]
       || v75[1] > v17;
  if ( (unsigned __int8)*(_QWORD *)(a1 + 168) )
  {
    v20 = *(_QWORD *)(a1 + 112);
    v21 = v20 == *(_QWORD *)(a1 + 120) ? -1LL : *(_QWORD *)(v20 + 56);
    if ( *(_QWORD *)(a1 + 176) != v21
      || (get_tinfo_property() & 0xF) == 0xB
      && (v86 = *(_QWORD *)(a1 + 8), v87 = *(_QWORD *)(a1 + 176), v87 >= sub_18D080(v86))
      && ((*(_BYTE *)(v86 + 5) & 0x10) == 0
       || (v88 = *(__int64 **)(v86 + 944), v88[1] == -1) && !(unsigned __int8)sub_21E760(v88, *(double *)a2.m128_u64)
       || !v88[2]
       || v87 < v88[1])
      || *(_DWORD *)(a1 + 196) && *(_DWORD *)(a1 + 196) != get_tinfo_size() )
    {
      clear_tinfo_t();
    }
  }
  v22 = *(_DWORD *)(a1 + 136);
  if ( (v22 & 8) == 0 )
    goto LABEL_75;
  if ( (v22 & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCD14u, *(double *)a2.m128_u64);
    goto LABEL_245;
  }
  v23 = *(_QWORD **)(a1 + 120);
  v24 = *(_QWORD **)(a1 + 112);
LABEL_39:
  while ( v24 != v23 )
  {
    if ( (v24[10] & 1) != 0 )
    {
      v25 = v24[8];
      if ( v25 != -1 )
      {
        v26 = *(_QWORD *)(a1 + 112);
        while ( v23 != (_QWORD *)v26 )
        {
          do
          {
            if ( v25 == *(_QWORD *)(v26 + 64)
              && *(_QWORD *)(v26 + 56) == *(_QWORD *)(a1 + 176)
              && (*(_BYTE *)(v26 + 80) & 0x40) != 0 )
            {
              goto LABEL_67;
            }
          }
          while ( (*(_QWORD *)v26 & 2) != 0 );
          v27 = *(_QWORD *)(v26 + 16);
          if ( (*(_BYTE *)v27 & 2) != 0 )
          {
            v55 = (_QWORD *)(*(_QWORD *)v26 & 0xFFFFFFFFFFFFFFFCLL);
            v56 = *v55;
            if ( (*v55 & 2) != 0 || v55[2] != v26 )
            {
LABEL_115:
              v26 = (unsigned __int64)v55;
            }
            else
            {
              while ( 1 )
              {
                v26 = v56 & 0xFFFFFFFFFFFFFFFCLL;
                v56 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v56 & 2) != 0 )
                  break;
                v57 = v55;
                v55 = (_QWORD *)v26;
                if ( *(_QWORD **)(v26 + 16) != v57 )
                  goto LABEL_115;
              }
            }
          }
          else
          {
            do
            {
              v26 = v27;
              v27 = *(_QWORD *)(v27 + 8);
            }
            while ( (*(_BYTE *)v27 & 2) == 0 );
          }
        }
        *(_QWORD *)(a1 + 184) = v25;
        goto LABEL_75;
      }
    }
LABEL_67:
    if ( (*v24 & 2) == 0 )
    {
      v36 = (_QWORD *)v24[2];
      if ( (*(_BYTE *)v36 & 2) != 0 )
      {
        v61 = (_QWORD *)(*v24 & 0xFFFFFFFFFFFFFFFCLL);
        v62 = *v61;
        if ( (*v61 & 2) == 0 )
        {
          while ( v24 == (_QWORD *)v61[2] )
          {
            v24 = v61;
            v63 = v62 & 0xFFFFFFFFFFFFFFFCLL;
            v62 = *(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v62 & 2) != 0 )
            {
              v24 = (_QWORD *)v63;
              goto LABEL_39;
            }
            v61 = (_QWORD *)v63;
          }
        }
        v24 = v61;
      }
      else
      {
        for ( i = (_QWORD *)v36[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v36 = i;
        v24 = v36;
      }
    }
  }
  v82 = *(_QWORD *)(a1 + 8);
  v83 = 0;
  for ( j = 0; (unsigned __int64)v83 < *(_QWORD *)(v82 + 440); j = ++v83 )
  {
    v85 = *(_QWORD *)(v82 + 432) + 104 * j;
    if ( *(_QWORD *)(v85 + 16) == *(_QWORD *)(a1 + 184) )
    {
      sub_1C34E0(v85, &v99, (signed __int64 *)&v101, *(_DWORD *)(v85 + 88), *(double *)a2.m128_u64);
      if ( *(_QWORD *)(a1 + 176) == v99 && &v101[-v99] == (char *)*(int *)(a1 + 196) )
      {
        sub_23A200(a1, v83, 0, (__m128i)a2);
        return 1;
      }
      v82 = *(_QWORD *)(a1 + 8);
    }
  }
  if ( *(char *)(a1 + 200) < 0 )
LABEL_205:
    sub_226EA0(*(double *)a2.m128_u64);
LABEL_75:
  if ( v19 || v16 )
  {
    if ( !*(_DWORD *)(a1 + 196) )
      goto LABEL_140;
    if ( v16 )
    {
LABEL_80:
      v101 = nullptr;
      v102 = 0;
      result = sub_23B630(a1, (const char **)&v101, (__m128i)0LL, a3);
      if ( (_DWORD)result )
        goto LABEL_91;
      if ( v19 )
      {
        v71 = *(_QWORD *)(a1 + 176);
        v72 = *(_QWORD *)(a1 + 8);
        v73 = *(_DWORD *)(a1 + 196);
        v100 = 5;
        v99 = v71;
        if ( !(unsigned __int8)sub_227ED0(v72, (__int64)&v99, (_QWORD *)(a1 + 168), v73, 0.0) )
        {
          v74 = *(_DWORD *)(a1 + 300);
          if ( *(_DWORD *)(a1 + 296) != v74 && (v74 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0)
            || (v92 = *(_QWORD *)(a1 + 8), (*(_BYTE *)(*(_QWORD *)(v92 + 1496) + 604LL) & 0x10) == 0) )
          {
LABEL_163:
            result = 0xFFFFFFFFLL;
LABEL_91:
            if ( v101 )
            {
              v98 = result;
              *(_QWORD *)&v102 = 0;
              qfree((__int64)v101);
              return v98;
            }
            return result;
          }
          if ( *(_BYTE *)(v92 + 320) )
          {
            v93 = *(_QWORD *)(a1 + 176);
            if ( (int)sub_F2D80(v92) > v93 )
            {
              if ( !under_debugger )
                sub_383060(0xCC4Cu, 0.0);
              goto LABEL_245;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 196) = sub_228210(
                                      v92,
                                      *(_QWORD *)(a1 + 176),
                                      (_QWORD *)(a1 + 168),
                                      *(_DWORD *)(a1 + 196),
                                      0.0);
            v16 = v19;
          }
        }
      }
      set_tinfo_property();
      v40 = sub_235430(a1, a1 + 144, *(_DWORD *)(a1 + 196), 256, 0.0, a3);
      if ( v40 != -1 )
      {
        if ( (unsigned __int64)v102 > 1 || v16 )
        {
          v41 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL);
          if ( (unsigned __int8)sub_22E000(a1, (const void **)&v101, v38, v39) )
            *(_DWORD *)(v41 + 104LL * v40 + 24) |= 0x400u;
        }
        sub_23A200(a1, v40, v19, (__m128i)0LL);
        if ( (*(_BYTE *)(a1 + 201) & 0x10) != 0 )
        {
          v42 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v42 + 2) & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)(v42 + 944) + 64LL) = v40;
        }
        result = 1;
        goto LABEL_91;
      }
      goto LABEL_163;
    }
    goto LABEL_173;
  }
  if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 196) )
    {
LABEL_79:
      v16 = 0;
      goto LABEL_80;
    }
LABEL_140:
    *(_DWORD *)(a1 + 196) = -1;
    goto LABEL_79;
  }
  v76 = *(_DWORD *)(a1 + 200);
  if ( (v76 & 0x1018) == 0 )
  {
    if ( (v76 & 0x400) == 0 || (get_tinfo_property() & 0xF) != 0xB && (get_tinfo_property() & 0x2F) != 0xD )
    {
      v101 = nullptr;
      copy_tinfo_t();
      v89 = *(_QWORD *)(a1 + 120);
      if ( (unsigned __int8)sub_22BA80(a1, &v101, *(double *)a2.m128_u64, a3) )
      {
        clear_tinfo_t();
        if ( !*(_DWORD *)(a1 + 196) )
          *(_DWORD *)(a1 + 196) = -1;
        goto LABEL_79;
      }
      v90 = v101;
      v91 = *(char **)(a1 + 168);
      *(_QWORD *)(a1 + 120) = v89;
      *(_QWORD *)(a1 + 168) = v90;
      v101 = v91;
      clear_tinfo_t();
    }
    if ( !*(_DWORD *)(a1 + 196) )
      goto LABEL_140;
LABEL_173:
    if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
      goto LABEL_79;
    goto LABEL_174;
  }
  if ( !*(_DWORD *)(a1 + 196) )
    goto LABEL_140;
LABEL_174:
  v77 = *(_DWORD *)(a1 + 196);
  if ( v77 == -1 )
    goto LABEL_79;
  v78 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v78 + 2) & 4) != 0 )
    goto LABEL_79;
  if ( v19 )
  {
    v79 = *(_QWORD *)(a1 + 176);
    v80 = (_QWORD *)(a1 + 168);
    LODWORD(v101) = *(_DWORD *)(a1 + 196);
    if ( v79 != sub_227D30(v78, v79, (_QWORD *)(a1 + 168), v77) )
      goto LABEL_178;
  }
  else
  {
    if ( (get_tinfo_property() & 0xF) == 9 )
      goto LABEL_79;
    v80 = (_QWORD *)(a1 + 168);
    LODWORD(v101) = *(_DWORD *)(a1 + 196);
  }
  v94 = sub_2327F0(*(_QWORD **)(a1 + 8), (int *)&v101, *(_QWORD *)(a1 + 176), v80, a2, a3);
  if ( !v94 )
  {
LABEL_178:
    v81 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v81 )
    {
      result = 0xFFFFFFFFLL;
      if ( v81 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0 )
        return result;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) == 0 )
      return 0xFFFFFFFFLL;
    v16 = 1;
    goto LABEL_80;
  }
  v95 = (int)v101;
  if ( *(_DWORD *)(a1 + 196) == (_DWORD)v101 || (get_tinfo_property() & 0xF) == 9 )
    goto LABEL_222;
  *(_DWORD *)(a1 + 196) = v95;
  v96 = *(_QWORD *)(a1 + 176);
  if ( v95 == -1 )
    v97 = *(_QWORD *)(a1 + 176);
  else
    v97 = v96 + v95;
  *(_QWORD *)(a1 + 128) = v97;
  sub_2329E0(*(_QWORD *)(a1 + 8), v96, v95);
  if ( *(_BYTE *)(a1 + 168) )
    clear_tinfo_t();
  result = 0;
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 88) )
  {
LABEL_222:
    if ( v94 == 2 )
      **(_DWORD **)(a1 + 8) |= 0x8000000u;
    goto LABEL_79;
  }
  return result;
}

