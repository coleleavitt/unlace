__int64 __fastcall sub_23C580(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rbp
  int v13; // edx
  bool v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  char v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  int v27; // edx
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // edx
  _QWORD *v34; // rcx
  _QWORD *i; // rax
  int v36; // r14d
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rsi
  char tinfo_property; // al
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // r10
  int v46; // eax
  __int64 v47; // r9
  unsigned __int64 v48; // r8
  bool v49; // si
  __int64 v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rsi
  _QWORD *v53; // r10
  _QWORD *v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rsi
  _QWORD *v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  int v63; // edx
  int v64; // r12d
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdi
  signed int v69; // ecx
  int v70; // eax
  __int64 *v71; // rbp
  int v72; // eax
  int v73; // ecx
  __int64 v74; // rdi
  __int64 v75; // rbp
  _QWORD *v76; // r14
  int v77; // edx
  __int64 v78; // rbp
  int v79; // r15d
  __int64 j; // rax
  __int64 v81; // rdi
  __int64 v82; // rbp
  __int64 v83; // r14
  __int64 *v84; // rbp
  __int64 v85; // r13
  signed __int64 v86; // rdx
  signed __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // r15
  int v90; // r13d
  int v91; // r15d
  signed __int64 v92; // rsi
  signed __int64 v93; // rax
  unsigned int v94; // [rsp+Ch] [rbp-6Ch]
  __int64 v95; // [rsp+10h] [rbp-68h] BYREF
  char v96; // [rsp+18h] [rbp-60h]
  signed __int64 v97; // [rsp+20h] [rbp-58h] BYREF
  __int128 v98; // [rsp+28h] [rbp-50h]
  unsigned __int64 v99; // [rsp+38h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 112) || *(_DWORD *)(a1 + 192) == -1 )
    return 1;
  if ( (unsigned __int8)sub_232DA0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 176), *(_DWORD *)(a1 + 196)) )
  {
    if ( (**(_DWORD **)(a1 + 8) & 0x8000000) != 0 )
    {
      *(_DWORD *)(a1 + 136) |= 4u;
      return 0xFFFFFFFFLL;
    }
    if ( !under_debugger )
      sub_3835A0(52302);
LABEL_245:
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 176);
  v4 = *(_QWORD *)(a1 + 128);
  v5 = *(int *)(a1 + 196);
  v6 = v3 + v5;
  if ( (_DWORD)v5 == -1 )
    v6 = *(_QWORD *)(a1 + 176);
  if ( v4 >= v6 )
  {
    v14 = sub_227390(*(_QWORD *)(a1 + 8), v3, v5);
    if ( v14 )
      goto LABEL_20;
    v26 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 120) == v26 )
    {
LABEL_59:
      v13 = *(_DWORD *)(a1 + 200);
      if ( (v13 & 4) == 0 )
      {
        if ( *(_QWORD *)(a1 + 184) != -1 )
        {
          v12 = *(_QWORD *)(a1 + 8);
          goto LABEL_62;
        }
LABEL_239:
        if ( !under_debugger )
          sub_3835A0(52278);
        goto LABEL_245;
      }
      v12 = *(_QWORD *)(a1 + 8);
LABEL_145:
      v64 = 0;
      v65 = 0;
      if ( *(_QWORD *)(v12 + 440) )
      {
        do
        {
          v66 = *(_QWORD *)(v12 + 432) + 104 * v65;
          if ( *(_QWORD *)(v66 + 16) == *(_QWORD *)(a1 + 184) )
          {
            sub_1C2F20(v66, &v95, &v97, *(_DWORD *)(v66 + 88));
            if ( *(_QWORD *)(a1 + 176) == v95 && v97 - v95 == *(_DWORD *)(a1 + 196) )
            {
              sub_23A5C0(a1, v64, 1);
              return 1;
            }
            v12 = *(_QWORD *)(a1 + 8);
          }
          v65 = ++v64;
        }
        while ( (unsigned __int64)v64 < *(_QWORD *)(v12 + 440) );
        v13 = *(_DWORD *)(a1 + 200);
      }
      if ( (v13 & 0x80) != 0 )
        goto LABEL_205;
      if ( *(_QWORD *)(a1 + 184) != -1 )
      {
        if ( v14 )
        {
          v10 = *(_DWORD *)(a1 + 296);
          v11 = *(_DWORD *)(a1 + 300);
          goto LABEL_27;
        }
LABEL_62:
        v30 = *(_QWORD *)(a1 + 128);
        v31 = *(_QWORD *)(a1 + 112);
        if ( v31 == *(_QWORD *)(a1 + 120) )
        {
          v33 = v30 + 1;
          v32 = -1;
        }
        else
        {
          v32 = *(_QWORD *)(v31 + 56);
          v33 = v30 - *(_DWORD *)(v31 + 56);
        }
        v14 = sub_227390(v12, v32, v33);
        if ( v14 )
        {
          v10 = *(_DWORD *)(a1 + 296);
          v11 = *(_DWORD *)(a1 + 300);
          v14 = 0;
          v12 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          v60 = *(_QWORD *)(a1 + 112);
          if ( v60 == *(_QWORD *)(a1 + 120) )
          {
            *(_QWORD *)(a1 + 176) = -1;
            v61 = *(_QWORD *)(a1 + 128);
            LODWORD(v62) = -1;
          }
          else
          {
            *(_QWORD *)(a1 + 176) = *(_QWORD *)(v60 + 56);
            v61 = *(_QWORD *)(a1 + 128);
            v62 = *(_QWORD *)(v60 + 56);
          }
          v63 = v61 - v62;
          v10 = *(_DWORD *)(a1 + 296);
          v11 = *(_DWORD *)(a1 + 300);
          *(_DWORD *)(a1 + 196) = v63;
          v12 = *(_QWORD *)(a1 + 8);
        }
        goto LABEL_27;
      }
      goto LABEL_239;
    }
    while ( 1 )
    {
      v27 = *(_DWORD *)(v26 + 80);
      if ( (v27 & 1) != 0 )
        break;
      if ( (v27 & 2) == 0 )
        goto LABEL_120;
      if ( *(_QWORD *)(v26 + 64) != -1 )
      {
        tinfo_property = get_tinfo_property();
        v27 = *(_DWORD *)(v26 + 80);
        if ( (tinfo_property & 0xF) == 0xB )
          break;
        if ( (v27 & 2) == 0 )
        {
LABEL_120:
          v28 = *(_QWORD *)(a1 + 120);
          if ( (v27 & 0x20) != 0 )
          {
LABEL_121:
            v48 = *(_QWORD *)(v26 + 56);
            v43 = *(_QWORD *)(a1 + 112);
LABEL_110:
            if ( v28 == v43 )
              v50 = -1;
            else
              v50 = *(_QWORD *)(v43 + 56);
            if ( v50 != v48 )
              goto LABEL_55;
          }
LABEL_54:
          if ( (v27 & 0x1018) != 0 )
            goto LABEL_94;
          goto LABEL_55;
        }
      }
      v28 = *(_QWORD *)(a1 + 120);
      if ( (v27 & 0x1018) != 0 )
      {
        if ( (v27 & 0x20) == 0 )
        {
LABEL_94:
          v39 = *(int *)(v26 + 76);
          if ( (_DWORD)v39 )
          {
            v40 = *(_QWORD *)(a1 + 112);
            v41 = v40 == v28 ? -1LL : *(_QWORD *)(v40 + 56);
            if ( v39 != *(_QWORD *)(a1 + 128) - v41 )
              goto LABEL_20;
          }
          goto LABEL_55;
        }
        goto LABEL_121;
      }
      v43 = *(_QWORD *)(a1 + 112);
      v44 = *(_QWORD *)(a1 + 128);
      if ( v43 == v28 )
      {
        v46 = v44 + 1;
        v45 = -1;
      }
      else
      {
        v45 = *(_QWORD *)(v43 + 56);
        v46 = v44 - *(_DWORD *)(v43 + 56);
      }
      v47 = *(int *)(v26 + 76);
      v48 = *(_QWORD *)(v26 + 56);
      v49 = v45 >= v48 && v47 != 0;
      if ( v46 )
      {
        if ( !v49 || v47 + v48 - 1 < v45 + v46 - 1 )
          goto LABEL_55;
      }
      else if ( !v49 || v47 + v48 - 1 < v45 )
      {
        goto LABEL_55;
      }
      if ( (v27 & 0x20) != 0 )
        goto LABEL_110;
LABEL_55:
      if ( (*(_QWORD *)v26 & 2) == 0 )
      {
        v29 = *(_QWORD *)(v26 + 16);
        if ( (*(_BYTE *)v29 & 2) != 0 )
        {
          v54 = (_QWORD *)(*(_QWORD *)v26 & 0xFFFFFFFFFFFFFFFCLL);
          v55 = *v54;
          if ( (*v54 & 2) != 0 || v54[2] != v26 )
          {
LABEL_123:
            v26 = (unsigned __int64)v54;
          }
          else
          {
            while ( 1 )
            {
              v26 = v55 & 0xFFFFFFFFFFFFFFFCLL;
              v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v55 & 2) != 0 )
                break;
              v56 = v54;
              v54 = (_QWORD *)v26;
              if ( *(_QWORD **)(v26 + 16) != v56 )
                goto LABEL_123;
            }
          }
        }
        else
        {
          do
          {
            v26 = v29;
            v29 = *(_QWORD *)(v29 + 8);
          }
          while ( (*(_BYTE *)v29 & 2) == 0 );
        }
      }
      if ( v28 == v26 )
        goto LABEL_59;
    }
    v28 = *(_QWORD *)(a1 + 120);
    goto LABEL_54;
  }
  if ( (*(_BYTE *)(a1 + 203) & 0x20) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(a1 + 88) == v7 || (*(_BYTE *)(v7 + 83) & 0x10) == 0 )
    {
      if ( !under_debugger )
        sub_3835A0(52290);
      goto LABEL_245;
    }
  }
  v8 = *(_QWORD *)(a1 + 112);
  if ( v8 == *(_QWORD *)(a1 + 120) )
    LODWORD(v9) = -1;
  else
    v9 = *(_QWORD *)(v8 + 56);
  *(_DWORD *)(a1 + 196) = v4 - v9;
LABEL_20:
  v10 = *(_DWORD *)(a1 + 296);
  v11 = *(_DWORD *)(a1 + 300);
  if ( v10 != v11 && (v11 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0) )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 1496) + 604LL) & 0x10) == 0 )
    return 0xFFFFFFFFLL;
  v13 = *(_DWORD *)(a1 + 200);
  if ( (v13 & 4) != 0 )
  {
    v14 = 1;
    goto LABEL_145;
  }
  if ( *(_QWORD *)(a1 + 184) == -1 )
    goto LABEL_239;
  v14 = 1;
LABEL_27:
  if ( v11 == v10 || v11 == 1 && (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) == 0 )
  {
    v15 = *(_QWORD *)(a1 + 176);
    v16 = *(_QWORD *)(v12 + 144);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 176);
    v16 = sub_18CAC0(v12);
  }
  v17 = 0;
  if ( v16 <= v15 )
    v17 = (*(_BYTE *)(v12 + 5) & 0x10) == 0
       || (v71 = *(__int64 **)(v12 + 944), v71[1] == -1) && !(unsigned __int8)sub_21EB20(v71)
       || !v71[2]
       || v71[1] > v15;
  if ( (unsigned __int8)*(_QWORD *)(a1 + 168) )
  {
    v18 = *(_QWORD *)(a1 + 112);
    v19 = v18 == *(_QWORD *)(a1 + 120) ? -1LL : *(_QWORD *)(v18 + 56);
    if ( *(_QWORD *)(a1 + 176) != v19
      || (get_tinfo_property() & 0xF) == 0xB
      && (v82 = *(_QWORD *)(a1 + 8), v83 = *(_QWORD *)(a1 + 176), v83 >= sub_18CAC0(v82))
      && ((*(_BYTE *)(v82 + 5) & 0x10) == 0
       || (v84 = *(__int64 **)(v82 + 944), v84[1] == -1) && !(unsigned __int8)sub_21EB20(v84)
       || !v84[2]
       || v83 < v84[1])
      || *(_DWORD *)(a1 + 196) && *(_DWORD *)(a1 + 196) != get_tinfo_size() )
    {
      clear_tinfo_t();
    }
  }
  v20 = *(_DWORD *)(a1 + 136);
  if ( (v20 & 8) == 0 )
    goto LABEL_75;
  if ( (v20 & 0x10) == 0 )
  {
    if ( !under_debugger )
      sub_3835A0(52500);
    goto LABEL_245;
  }
  v21 = *(_QWORD **)(a1 + 120);
  v22 = *(_QWORD **)(a1 + 112);
LABEL_39:
  while ( v22 != v21 )
  {
    if ( (v22[10] & 1) != 0 )
    {
      v23 = v22[8];
      if ( v23 != -1 )
      {
        v24 = *(_QWORD *)(a1 + 112);
        while ( v21 != (_QWORD *)v24 )
        {
          do
          {
            if ( v23 == *(_QWORD *)(v24 + 64)
              && *(_QWORD *)(v24 + 56) == *(_QWORD *)(a1 + 176)
              && (*(_BYTE *)(v24 + 80) & 0x40) != 0 )
            {
              goto LABEL_67;
            }
          }
          while ( (*(_QWORD *)v24 & 2) != 0 );
          v25 = *(_QWORD *)(v24 + 16);
          if ( (*(_BYTE *)v25 & 2) != 0 )
          {
            v51 = (_QWORD *)(*(_QWORD *)v24 & 0xFFFFFFFFFFFFFFFCLL);
            v52 = *v51;
            if ( (*v51 & 2) != 0 || v51[2] != v24 )
            {
LABEL_115:
              v24 = (unsigned __int64)v51;
            }
            else
            {
              while ( 1 )
              {
                v24 = v52 & 0xFFFFFFFFFFFFFFFCLL;
                v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v52 & 2) != 0 )
                  break;
                v53 = v51;
                v51 = (_QWORD *)v24;
                if ( *(_QWORD **)(v24 + 16) != v53 )
                  goto LABEL_115;
              }
            }
          }
          else
          {
            do
            {
              v24 = v25;
              v25 = *(_QWORD *)(v25 + 8);
            }
            while ( (*(_BYTE *)v25 & 2) == 0 );
          }
        }
        *(_QWORD *)(a1 + 184) = v23;
        goto LABEL_75;
      }
    }
LABEL_67:
    if ( (*v22 & 2) == 0 )
    {
      v34 = (_QWORD *)v22[2];
      if ( (*(_BYTE *)v34 & 2) != 0 )
      {
        v57 = (_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFFCLL);
        v58 = *v57;
        if ( (*v57 & 2) == 0 )
        {
          while ( v22 == (_QWORD *)v57[2] )
          {
            v22 = v57;
            v59 = v58 & 0xFFFFFFFFFFFFFFFCLL;
            v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v58 & 2) != 0 )
            {
              v22 = (_QWORD *)v59;
              goto LABEL_39;
            }
            v57 = (_QWORD *)v59;
          }
        }
        v22 = v57;
      }
      else
      {
        for ( i = (_QWORD *)v34[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
          v34 = i;
        v22 = v34;
      }
    }
  }
  v78 = *(_QWORD *)(a1 + 8);
  v79 = 0;
  for ( j = 0; (unsigned __int64)v79 < *(_QWORD *)(v78 + 440); j = ++v79 )
  {
    v81 = *(_QWORD *)(v78 + 432) + 104 * j;
    if ( *(_QWORD *)(v81 + 16) == *(_QWORD *)(a1 + 184) )
    {
      sub_1C2F20(v81, &v95, &v97, *(_DWORD *)(v81 + 88));
      if ( *(_QWORD *)(a1 + 176) == v95 && v97 - v95 == *(_DWORD *)(a1 + 196) )
      {
        sub_23A5C0(a1, v79, 0);
        return 1;
      }
      v78 = *(_QWORD *)(a1 + 8);
    }
  }
  if ( *(char *)(a1 + 200) < 0 )
LABEL_205:
    sub_227260();
LABEL_75:
  if ( v17 || v14 )
  {
    if ( !*(_DWORD *)(a1 + 196) )
      goto LABEL_140;
    if ( v14 )
    {
LABEL_80:
      v97 = 0;
      v98 = 0;
      result = sub_23B9F0(a1, (__int64)&v97);
      if ( (_DWORD)result )
        goto LABEL_91;
      if ( v17 )
      {
        v67 = *(_QWORD *)(a1 + 176);
        v68 = *(_QWORD *)(a1 + 8);
        v69 = *(_DWORD *)(a1 + 196);
        v96 = 5;
        v95 = v67;
        if ( !(unsigned __int8)sub_228290(v68, (__int64)&v95, (_QWORD *)(a1 + 168), v69) )
        {
          v70 = *(_DWORD *)(a1 + 300);
          if ( *(_DWORD *)(a1 + 296) != v70 && (v70 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0)
            || (v88 = *(_QWORD *)(a1 + 8), (*(_BYTE *)(*(_QWORD *)(v88 + 1496) + 604LL) & 0x10) == 0) )
          {
LABEL_163:
            result = 0xFFFFFFFFLL;
LABEL_91:
            if ( v97 )
            {
              v94 = result;
              *(_QWORD *)&v98 = 0;
              qfree();
              return v94;
            }
            return result;
          }
          if ( *(_BYTE *)(v88 + 320) )
          {
            v89 = *(_QWORD *)(a1 + 176);
            if ( (int)sub_F27C0(v88) > v89 )
            {
              if ( !under_debugger )
                sub_3835A0(52300);
              goto LABEL_245;
            }
          }
          else
          {
            *(_DWORD *)(a1 + 196) = sub_2285D0(v88, *(_QWORD *)(a1 + 176), (_QWORD *)(a1 + 168), *(_DWORD *)(a1 + 196));
            v14 = v17;
          }
        }
      }
      set_tinfo_property();
      v36 = sub_2357F0(a1, a1 + 144, *(_DWORD *)(a1 + 196), 256);
      if ( v36 != -1 )
      {
        if ( (unsigned __int64)v98 > 1 || v14 )
        {
          v37 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL);
          if ( (unsigned __int8)sub_22E3C0(a1, (__int64)&v97) )
            *(_DWORD *)(v37 + 104LL * v36 + 24) |= 0x400u;
        }
        sub_23A5C0(a1, v36, v17);
        if ( (*(_BYTE *)(a1 + 201) & 0x10) != 0 )
        {
          v38 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v38 + 2) & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)(v38 + 944) + 64LL) = v36;
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
      v14 = 0;
      goto LABEL_80;
    }
LABEL_140:
    *(_DWORD *)(a1 + 196) = -1;
    goto LABEL_79;
  }
  v72 = *(_DWORD *)(a1 + 200);
  if ( (v72 & 0x1018) == 0 )
  {
    if ( (v72 & 0x400) == 0 || (get_tinfo_property() & 0xF) != 0xB && (get_tinfo_property() & 0x2F) != 0xD )
    {
      v97 = 0;
      copy_tinfo_t();
      v85 = *(_QWORD *)(a1 + 120);
      if ( (unsigned __int8)sub_22BE40(a1, &v97) )
      {
        clear_tinfo_t();
        if ( !*(_DWORD *)(a1 + 196) )
          *(_DWORD *)(a1 + 196) = -1;
        goto LABEL_79;
      }
      v86 = v97;
      v87 = *(_QWORD *)(a1 + 168);
      *(_QWORD *)(a1 + 120) = v85;
      *(_QWORD *)(a1 + 168) = v86;
      v97 = v87;
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
  v73 = *(_DWORD *)(a1 + 196);
  if ( v73 == -1 )
    goto LABEL_79;
  v74 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v74 + 2) & 4) != 0 )
    goto LABEL_79;
  if ( v17 )
  {
    v75 = *(_QWORD *)(a1 + 176);
    v76 = (_QWORD *)(a1 + 168);
    LODWORD(v97) = *(_DWORD *)(a1 + 196);
    if ( v75 != sub_2280F0(v74, v75, (_QWORD *)(a1 + 168), v73) )
      goto LABEL_178;
  }
  else
  {
    if ( (get_tinfo_property() & 0xF) == 9 )
      goto LABEL_79;
    v76 = (_QWORD *)(a1 + 168);
    LODWORD(v97) = *(_DWORD *)(a1 + 196);
  }
  v90 = sub_232BB0(*(_QWORD **)(a1 + 8), (int *)&v97, *(_QWORD *)(a1 + 176), v76);
  if ( !v90 )
  {
LABEL_178:
    v77 = *(_DWORD *)(a1 + 300);
    if ( *(_DWORD *)(a1 + 296) != v77 )
    {
      result = 0xFFFFFFFFLL;
      if ( v77 != 1 || (*(_BYTE *)(*(_QWORD *)(a1 + 112) + 80LL) & 2) != 0 )
        return result;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) == 0 )
      return 0xFFFFFFFFLL;
    v14 = 1;
    goto LABEL_80;
  }
  v91 = v97;
  if ( *(_DWORD *)(a1 + 196) == (_DWORD)v97 || (get_tinfo_property() & 0xF) == 9 )
    goto LABEL_222;
  *(_DWORD *)(a1 + 196) = v91;
  v92 = *(_QWORD *)(a1 + 176);
  if ( v91 == -1 )
    v93 = *(_QWORD *)(a1 + 176);
  else
    v93 = v92 + v91;
  *(_QWORD *)(a1 + 128) = v93;
  sub_232DA0(*(_QWORD *)(a1 + 8), v92, v91);
  if ( *(_BYTE *)(a1 + 168) )
    clear_tinfo_t();
  result = 0;
  if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 88) )
  {
LABEL_222:
    if ( v90 == 2 )
      **(_DWORD **)(a1 + 8) |= 0x8000000u;
    goto LABEL_79;
  }
  return result;
}

