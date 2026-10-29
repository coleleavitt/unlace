__int64 __fastcall sub_22AF40(__int64 a1, __int64 *a2, int *a3, int a4, double a5, __m128 a6)
{
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 *v16; // r13
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // r9d
  int v22; // eax
  char tinfo_property; // al
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  bool v28; // dl
  __int64 *v29; // rax
  __int64 *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 v33; // r12
  __int64 v34; // r13
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  __int64 *v39; // rdi
  __int64 *v40; // rdx
  __int64 *v41; // rsi
  __int64 *n; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rsi
  __int64 v48; // rdx
  int v49; // eax
  char v50; // al
  __int64 v51; // rdx
  int v52; // r12d
  __int64 *v53; // rdx
  __int64 *j; // rax
  __int64 *v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 *v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdi
  unsigned int v66; // esi
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rsi
  unsigned __int64 v71; // rcx
  __int64 m; // rcx
  unsigned __int64 v73; // rsi
  __int64 v74; // rax
  __int64 i; // rcx
  __int64 v76; // rdx
  unsigned __int64 k; // rdx
  __int64 v78; // rsi
  unsigned __int64 v79; // rdi
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // [rsp+0h] [rbp-A8h]
  __int64 *v88; // [rsp+10h] [rbp-98h]
  __int64 *v89; // [rsp+10h] [rbp-98h]
  char v90; // [rsp+18h] [rbp-90h]
  __int64 v91; // [rsp+18h] [rbp-90h]
  __int64 v92; // [rsp+20h] [rbp-88h]
  __int64 v93; // [rsp+30h] [rbp-78h]
  __int64 tinfo_size; // [rsp+38h] [rbp-70h]
  __int64 *v97; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v98; // [rsp+58h] [rbp-50h] BYREF
  __int64 v99; // [rsp+60h] [rbp-48h]
  unsigned __int64 v100; // [rsp+68h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v100 = __readfsqword(0x28u);
  v8 = a1 + 144;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 936) + 40LL))(*(_QWORD *)(v7 + 936));
  v10 = *(_QWORD *)(v7 + 136);
  v11 = *(__int64 **)(a1 + 88);
  v12 = v9;
  v13 = *(__int64 **)(a1 + 120);
  v88 = v11;
  if ( v10 <= v9 )
    v12 = v10;
  if ( v9 != -1 )
    v10 = v12;
  if ( v13 == v11 )
    return 0;
  v14 = v13[7];
  v86 = 0;
  v15 = v13 + 3;
  v16 = *(__int64 **)(a1 + 88);
  if ( v10 <= v14 )
    v14 = v10;
  v92 = v14 - *(_QWORD *)(a1 + 176);
  while ( 1 )
  {
    v17 = v15[4];
    if ( (__int64)v17 < v86 )
      goto LABEL_62;
    v18 = *(int *)(v8 + 52);
    v19 = *(_QWORD *)(v8 + 32);
    if ( (int)v18 <= 0 )
      v18 = 1;
    if ( v19 + v18 - 1 < v17 )
      goto LABEL_62;
    v20 = *((int *)v15 + 13);
    v90 = 1;
    if ( (int)v20 <= 0 )
      v20 = 1;
    if ( v17 + v20 - 1 < v19 )
    {
LABEL_62:
      v90 = 0;
      if ( v88 != v16 )
      {
        v43 = *v16;
        v44 = (unsigned __int64)v16;
        if ( (*v16 & 2) == 0 )
        {
          v44 = v16[2];
          if ( (*(_BYTE *)v44 & 2) != 0 )
          {
            v44 = v43 & 0xFFFFFFFFFFFFFFFCLL;
            v45 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v45 & 2) == 0 )
            {
              v46 = (unsigned __int64)v16;
              do
              {
                if ( *(_QWORD *)(v44 + 16) != v46 )
                  break;
                v46 = v44;
                v47 = v45 & 0xFFFFFFFFFFFFFFFCLL;
                v45 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCLL);
                v44 = v47;
              }
              while ( (v45 & 2) == 0 );
            }
          }
          else
          {
            while ( (**(_BYTE **)(v44 + 8) & 2) == 0 )
              v44 = *(_QWORD *)(v44 + 8);
          }
        }
        v48 = v10;
        if ( (__int64 *)v44 != v11 )
        {
          v48 = *(_QWORD *)(v44 + 56);
          if ( v10 <= v48 )
            v48 = v10;
        }
        v92 = v48 - *(_QWORD *)(a1 + 176);
        if ( *((_DWORD *)v16 + 19) > *a3 && !a4 && (*(_BYTE *)(a1 + 201) & 4) == 0 )
        {
          v97 = v16;
          sub_22A6C0(a1, a3, (__int64)&v97, v92);
        }
        v88 = v16;
        v90 = 0;
      }
    }
    if ( (v15[7] & 0x101C) != 0 )
      break;
    if ( v15[4] >= v10 || (get_tinfo_property() & 0x2F) == 0xD && *((_DWORD *)v15 + 13) > *a3 )
      goto LABEL_33;
    v22 = *((_DWORD *)v15 + 14);
    if ( (v22 & 0x400) != 0 )
    {
      tinfo_property = get_tinfo_property();
      v99 = 0;
      if ( (tinfo_property & 0xF) == 0xB )
        v99 = get_tinfo_property();
      else
        copy_tinfo_t();
      tinfo_size = get_tinfo_size();
      v93 = *a3;
      clear_tinfo_t();
      if ( v93 != tinfo_size )
        goto LABEL_33;
      v98 = v13;
      sub_22A6C0(a1, a3, (__int64)&v98, v92);
      v22 = *((_DWORD *)v15 + 14);
    }
    if ( (v22 & 1) != 0 || (v22 & 2) != 0 && v15[5] != -1 && (get_tinfo_property() & 0xF) == 0xB )
    {
      v24 = v15[4];
      if ( (__int64)v24 >= v86 )
      {
        if ( v90 )
        {
          if ( (*(_BYTE *)(v8 + 56) & 1) != 0 )
            goto LABEL_33;
          v25 = *(_QWORD *)(v8 + 32);
          v26 = *(int *)(v8 + 52);
          v27 = *((int *)v15 + 13);
          v28 = v26 != 0 && v24 >= v25;
          if ( (_DWORD)v27 )
          {
            if ( !v28 )
              goto LABEL_33;
            v24 = v24 + v27 - 1;
          }
          else if ( !v28 )
          {
            goto LABEL_33;
          }
          if ( v25 + v26 - 1 < v24 )
            goto LABEL_33;
        }
        v49 = *((_DWORD *)v15 + 14);
        if ( (v49 & 1) != 0 )
        {
          if ( !*((_DWORD *)v15 + 13) )
          {
            v50 = get_tinfo_property();
            v51 = 2;
            if ( (v50 & 0xF) != 0xB )
            {
              v51 = 0;
              if ( !*((_DWORD *)v15 + 13) )
              {
                v91 = v15[9];
                v52 = v91;
                if ( (get_tinfo_property() & 0x2F) == 0xD )
                {
                  v51 = (int)v91;
                }
                else
                {
                  v74 = v15[8];
                  for ( i = v74 + 40 * v15[9]; i != v74; v74 += 40 )
                  {
                    v76 = *(_QWORD *)(v74 + 16);
                    if ( *(_DWORD *)v76 == 12 )
                    {
                      ++v52;
                    }
                    else if ( *(_BYTE *)(v76 + 64) == 8 )
                    {
                      v52 += *(_DWORD *)(*(_QWORD *)(v76 + 72) + 284LL) == 2;
                    }
                  }
                  v51 = v52;
                }
              }
            }
            if ( 2 * v15[9] != v51 )
              goto LABEL_33;
            goto LABEL_82;
          }
          if ( v15[9] != 1 || *a3 && *a3 != *((_DWORD *)v15 + 13) )
            goto LABEL_33;
          v58 = v15[8];
          if ( *(_DWORD *)(v58 + 32) == 1 )
          {
            v59 = *(_QWORD *)(v58 + 16);
            if ( (*(_DWORD *)v59 == 4 || *(_DWORD *)v59 == 67 && *(_DWORD *)(v59 + 36) == *(_DWORD *)(v59 + 68))
              && *(_QWORD *)(v58 + 24) == v59 + 64
              && v59 == *(_QWORD *)(v58 + 8) )
            {
              if ( *(_BYTE *)(v59 + 32) == 1 )
              {
                v60 = *(_QWORD *)(a1 + 8);
                if ( *(_DWORD *)(v60 + 64) <= 1u )
                  sub_226E40(a5);
                if ( sub_129010(
                       *(_QWORD *)(*(_QWORD *)(v60 + 528) + 8LL),
                       *(_DWORD *)(v59 + 40),
                       *(_QWORD *)(v59 + 16),
                       0,
                       0,
                       v21,
                       a5,
                       a6) )
                {
                  goto LABEL_82;
                }
                if ( !(unsigned __int8)sub_36E210(*(_QWORD *)(a1 + 8), *(_DWORD *)(v59 + 40)) )
                  goto LABEL_33;
              }
              v61 = sub_1FBD10(*(_QWORD ***)(*(_QWORD *)(a1 + 8) + 800LL), v59 + 32);
              if ( v61 )
              {
                v62 = *v61;
                v63 = *((int *)v61 + 4);
                if ( *(_QWORD *)(v62 + 440) < v63 )
                  sub_226EC0(a5);
                v64 = *(_QWORD *)(v62 + 432) + 104 * v63;
                if ( (unsigned int)(*(_DWORD *)v64 - 3) <= 1
                  && !*(_DWORD *)(v64 + 92)
                  && (*(_BYTE *)(v64 + 25) & 1) == 0 )
                {
                  v65 = *(_QWORD *)(a1 + 8);
                  if ( *(_BYTE *)(v65 + 320) )
                    goto LABEL_33;
                  v66 = *(_DWORD *)(v64 + 8);
                  if ( *(_DWORD *)v64 == 4 )
                    v66 = (unsigned __int16)v66;
                  if ( !(unsigned __int8)sub_36E210(v65, v66) )
                  {
LABEL_33:
                    v29 = *(__int64 **)(a1 + 88);
                    v30 = v29;
                    goto LABEL_34;
                  }
                }
              }
LABEL_82:
              v49 = *((_DWORD *)v15 + 14);
            }
          }
        }
        if ( (v49 & 2) != 0 && v15[5] != -1 && (get_tinfo_property() & 0xF) == 0xB )
        {
          v98 = v13;
          v86 = sub_22A3E0((_QWORD *)a1, v13);
          if ( v86 == -1 )
            goto LABEL_33;
        }
      }
      v8 = (__int64)v15;
      v16 = v13;
    }
    if ( (*v13 & 2) == 0 )
    {
      v53 = (__int64 *)v13[2];
      if ( (*(_BYTE *)v53 & 2) != 0 )
      {
        v55 = (__int64 *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
        v56 = *v55;
        if ( (*v55 & 2) == 0 )
        {
          while ( (__int64 *)v55[2] == v13 )
          {
            v13 = v55;
            v57 = v56 & 0xFFFFFFFFFFFFFFFCLL;
            v56 = *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v56 & 2) != 0 )
            {
              v13 = (__int64 *)v57;
              goto LABEL_90;
            }
            v55 = (__int64 *)v57;
          }
        }
        v13 = v55;
      }
      else
      {
        for ( j = (__int64 *)v53[1]; (*(_BYTE *)j & 2) == 0; j = (__int64 *)j[1] )
          v53 = j;
        v13 = v53;
      }
    }
LABEL_90:
    v11 = *(__int64 **)(a1 + 88);
    v29 = v11;
    if ( v11 == v13 )
      goto LABEL_138;
    v15 = v13 + 3;
  }
  v29 = *(__int64 **)(a1 + 88);
  v86 = 0;
  v30 = v29;
LABEL_34:
  if ( v13 != v29 )
    goto LABEL_35;
LABEL_138:
  v88 = v16;
  v30 = v13;
LABEL_35:
  if ( v88 == v30 )
    return 0;
  v31 = v88[7];
  v32 = *((int *)v88 + 19);
  if ( (_DWORD)v32 != -1 )
    v31 += v32;
  if ( v88[7] == v31 )
  {
    if ( !(_DWORD)v32 )
    {
      ++v31;
      goto LABEL_39;
    }
    if ( !under_debugger )
      sub_383060(0xCD4Fu, a5);
LABEL_197:
    BUG();
  }
LABEL_39:
  v33 = *(_QWORD *)(a1 + 120);
  v34 = v86;
  if ( v31 >= v86 )
    v34 = v31;
  if ( v88 != (__int64 *)v33 )
  {
    do
    {
      v35 = *(_DWORD *)(v33 + 80);
      if ( (v35 & 1) != 0 || (v35 & 2) != 0 && *(_QWORD *)(v33 + 64) != -1 && (get_tinfo_property() & 0xF) == 0xB )
      {
        v36 = *(_QWORD *)(v33 + 56);
        v37 = *(int *)(v33 + 76);
        if ( (_DWORD)v37 != -1 )
          v36 += v37;
        if ( v36 > v34 && v13[7] >= v36 )
          v34 = v36;
      }
      if ( (*(_QWORD *)v33 & 2) == 0 )
      {
        v38 = *(_QWORD *)(v33 + 16);
        if ( (*(_BYTE *)v38 & 2) != 0 )
        {
          v68 = (_QWORD *)(*(_QWORD *)v33 & 0xFFFFFFFFFFFFFFFCLL);
          v69 = *v68;
          if ( (*v68 & 2) != 0 || v33 != v68[2] )
          {
LABEL_144:
            v33 = (unsigned __int64)v68;
          }
          else
          {
            while ( 1 )
            {
              v33 = v69 & 0xFFFFFFFFFFFFFFFCLL;
              v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v69 & 2) != 0 )
                break;
              v70 = v68;
              v68 = (_QWORD *)v33;
              if ( v70 != *(_QWORD **)(v33 + 16) )
                goto LABEL_144;
            }
          }
        }
        else
        {
          do
          {
            v33 = v38;
            v38 = *(_QWORD *)(v38 + 8);
          }
          while ( (*(_BYTE *)v38 & 2) == 0 );
        }
      }
    }
    while ( v88 != (__int64 *)v33 );
    v29 = *(__int64 **)(a1 + 88);
  }
  v39 = v88;
  if ( (*v88 & 2) != 0 )
  {
    v40 = v88;
  }
  else
  {
    v71 = v88[2];
    if ( (*(_BYTE *)v71 & 2) == 0 )
    {
      for ( k = *(_QWORD *)(v71 + 8); (*(_BYTE *)k & 2) == 0; k = *(_QWORD *)(k + 8) )
        v71 = k;
      goto LABEL_166;
    }
    v40 = (__int64 *)(*v88 & 0xFFFFFFFFFFFFFFFCLL);
    for ( m = *v40; (m & 2) == 0; v40 = (__int64 *)v73 )
    {
      if ( v39 != (__int64 *)v40[2] )
        break;
      v39 = v40;
      v73 = m & 0xFFFFFFFFFFFFFFFCLL;
      m = *(_QWORD *)(m & 0xFFFFFFFFFFFFFFFCLL);
    }
  }
  while ( v40 != v29 )
  {
    if ( v40[7] >= v34 )
    {
      v80 = v10;
      v89 = v40;
      if ( v10 < v34 )
        v80 = v34;
      if ( v80 > v40[7] )
        v80 = v40[7];
      goto LABEL_177;
    }
    if ( (*v40 & 2) == 0 )
    {
      v41 = (__int64 *)v40[2];
      if ( (*(_BYTE *)v41 & 2) != 0 )
      {
        v71 = *v40 & 0xFFFFFFFFFFFFFFFCLL;
        v78 = *(_QWORD *)v71;
        if ( (*(_QWORD *)v71 & 2) != 0 || *(__int64 **)(v71 + 16) != v40 )
        {
LABEL_166:
          v40 = (__int64 *)v71;
        }
        else
        {
          while ( 1 )
          {
            v40 = (__int64 *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
            v78 = *(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v78 & 2) != 0 )
              break;
            v79 = v71;
            v71 = (unsigned __int64)v40;
            if ( v40[2] != v79 )
              goto LABEL_166;
          }
        }
      }
      else
      {
        for ( n = (__int64 *)v41[1]; (*(_BYTE *)n & 2) == 0; n = (__int64 *)n[1] )
          v41 = n;
        v40 = v41;
      }
    }
  }
  v80 = v10;
  v89 = v40;
  if ( v10 < v34 )
    v80 = v34;
LABEL_177:
  v81 = *(_QWORD *)(a1 + 112);
  v82 = v80 - *(_QWORD *)(a1 + 176);
  if ( v81 == *(_QWORD *)(a1 + 120) )
    LODWORD(v83) = -1;
  else
    v83 = *(_QWORD *)(v81 + 56);
  v84 = (int)v34 - (int)v83;
  if ( v84 > v82 )
  {
    if ( !under_debugger )
      sub_383060(0xCD50u, a5);
    goto LABEL_197;
  }
  if ( *a3 )
  {
    v85 = v82 % *a3;
    if ( v84 <= v82 - v85 )
      v82 -= v85;
  }
  if ( *a2 >= v82 || *(char *)(a1 + 200) < 0 && v82 % *(int *)(a1 + 196) )
    return 0;
  *(_QWORD *)(a1 + 128) = v34;
  *(_QWORD *)(a1 + 120) = v89;
  *a2 = v82;
  return 1;
}

