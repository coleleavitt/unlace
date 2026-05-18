__int64 __fastcall sub_E7780(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r9
  int v8; // edi
  int *v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // r13
  __int16 v14; // r11
  int v15; // r15d
  __int64 v16; // rbp
  int v17; // r14d
  _DWORD *v18; // r13
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 *v22; // rsi
  __int64 v23; // rax
  __int16 v24; // di
  _BYTE *v25; // rdi
  int v26; // ecx
  __int64 v27; // rbx
  int v28; // r12d
  __int64 *v29; // rax
  __int64 v30; // rbp
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // esi
  int v35; // ecx
  __int64 v36; // rdx
  __int16 v37; // r11
  __int16 v38; // di
  int v39; // edi
  unsigned __int16 v40; // r12
  int *v41; // r13
  int v42; // ebp
  __int64 v43; // r12
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rsi
  int v47; // eax
  int v48; // r12d
  unsigned __int64 v49; // rsi
  unsigned int v50; // eax
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // r13d
  char *v57; // rbx
  char v58; // r11
  int v59; // r11d
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r11
  __int64 v65; // r13
  unsigned __int64 v66; // rbx
  int v67; // r14d
  __int64 v68; // rax
  __int64 v69; // r12
  __int64 v70; // r15
  __int64 v71; // rdx
  int *v72; // rax
  __int64 v73; // rdi
  unsigned int v74; // eax
  unsigned __int16 v75; // bx
  _BYTE *i; // rsi
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  int v81; // eax
  __int64 v82; // [rsp-10h] [rbp-F8h]
  unsigned __int64 v83; // [rsp-10h] [rbp-F8h]
  __int64 v84; // [rsp-10h] [rbp-F8h]
  unsigned __int64 v85; // [rsp-10h] [rbp-F8h]
  __int64 v86; // [rsp-8h] [rbp-F0h]
  __int64 v87; // [rsp-8h] [rbp-F0h]
  unsigned __int64 v88; // [rsp-8h] [rbp-F0h]
  size_t v89; // [rsp+0h] [rbp-E8h]
  unsigned __int16 v90; // [rsp+0h] [rbp-E8h]
  __int64 *v92; // [rsp+10h] [rbp-D8h]
  __int64 v93; // [rsp+18h] [rbp-D0h]
  int *v94; // [rsp+18h] [rbp-D0h]
  __int64 v95; // [rsp+18h] [rbp-D0h]
  __int64 v96; // [rsp+20h] [rbp-C8h]
  __int64 v98; // [rsp+30h] [rbp-B8h]
  unsigned __int16 v99; // [rsp+30h] [rbp-B8h]
  __int64 v100; // [rsp+30h] [rbp-B8h]
  __int64 v101; // [rsp+38h] [rbp-B0h]
  __int64 v102; // [rsp+40h] [rbp-A8h]
  __int64 v103; // [rsp+40h] [rbp-A8h]
  _BOOL4 v104; // [rsp+40h] [rbp-A8h]
  __int64 v105; // [rsp+48h] [rbp-A0h]
  _BOOL4 v106; // [rsp+48h] [rbp-A0h]
  int *v107; // [rsp+50h] [rbp-98h]
  __int64 v108; // [rsp+58h] [rbp-90h]
  int v109; // [rsp+6Ch] [rbp-7Ch] BYREF
  _BOOL4 v110; // [rsp+70h] [rbp-78h] BYREF
  __int64 (__fastcall *v111)(__int64, __int64); // [rsp+78h] [rbp-70h]
  __int64 (__fastcall *v112)(__int64); // [rsp+80h] [rbp-68h]
  __int16 v113; // [rsp+94h] [rbp-54h]
  int v114; // [rsp+98h] [rbp-50h]
  unsigned __int64 v115; // [rsp+A8h] [rbp-40h]

  v3 = a1[2];
  v4 = *a1;
  v5 = a1[1];
  v109 = 0;
  v6 = *(unsigned __int8 *)(v3 + 16);
  v96 = v3;
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_DWORD *)(v5 + 20);
  v115 = __readfsqword(0x28u);
  v9 = *(int **)(v4 + 16);
  v92 = *(__int64 **)v4;
  v10 = v7 + 104 * v6;
  v101 = *(_QWORD *)(v10 + 40);
  v11 = *(_QWORD *)(v5 + 32);
  if ( v8 <= 0 )
  {
    v89 = 136;
    v13 = 0;
  }
  else
  {
    v12 = 0;
    LODWORD(v13) = 0;
    do
    {
      v14 = *(_WORD *)(v11 + 18);
      *(_WORD *)(v11 + 18) = v14 & 0xFFBF;
      if ( *(_DWORD *)(v11 + 28) == *(_DWORD *)(v10 + 72)
        && (a3 & *(_QWORD *)(v11 + 40)) == 0
        && (*(_WORD *)(v11 + 20) & 0xF7FF) != 0
        && (v14 & 0x80) == 0
        && ((*(_BYTE *)(v10 + 68) & 0x48) == 0 || (*(_BYTE *)(*(_QWORD *)v11 + 4LL) & 1) != 0) )
      {
        LODWORD(v13) = v13 + 1;
        *(_WORD *)(v11 + 18) = v14 & 0xFFBF | 0x40;
      }
      ++v12;
      v11 += 56;
    }
    while ( v12 < *(_DWORD *)(v5 + 20) );
    v13 = (int)v13;
    v89 = 28LL * (int)v13 + 136;
  }
  if ( !v9 )
    goto LABEL_27;
  v15 = *v9;
  if ( *v9 > 0 )
  {
    v105 = v5;
    v108 = v13;
    v16 = v7;
    v102 = v4;
    v107 = v9;
    v17 = 0;
    v93 = 13 * v6;
    v18 = v9 + 2;
    do
    {
      v19 = *(_QWORD *)v18;
      v111 = sub_CE7B0;
      v113 = 1;
      v112 = sub_C43E0;
      v114 = 0;
      if ( v19 )
      {
        v98 = v19;
        sub_CDCD0((__int64)&v110, v19);
        if ( !v113 )
        {
          if ( (v18[4] & 2) != 0 )
            goto LABEL_25;
          if ( *(_BYTE *)v98 == 0xA7 )
          {
            if ( *(_DWORD *)(v98 + 44) != *(_DWORD *)(v16 + 8 * v93 + 72) )
              goto LABEL_25;
          }
          else
          {
            if ( *(_BYTE *)v98 != 113 )
              goto LABEL_25;
            v20 = *(_QWORD *)(v98 + 16);
            if ( *(_BYTE *)v20 != 0xA7 || *(_DWORD *)(v20 + 44) != *(_DWORD *)(v16 + 8 * v93 + 72) )
              goto LABEL_25;
            *(_WORD *)(v98 + 48) = *(_WORD *)(v20 + 48);
            v21 = *(__int16 *)(v20 + 48);
            if ( (v21 & 0x8000u) == 0LL )
            {
              v22 = "BINARY";
              v23 = *(_QWORD *)(v101 + 8) + 16 * v21;
              v24 = *(_WORD *)(v23 + 14);
              if ( (v24 & 0x200) != 0 )
              {
                for ( i = *(_BYTE **)v23; *i; ++i )
                  ;
                if ( (v24 & 4) != 0 )
                {
                  do
                  {
                    if ( !*++i )
                      break;
                    ++i;
                  }
                  while ( *i );
                }
                v22 = i + 1;
                if ( !v22 )
                  v22 = "BINARY";
              }
              v25 = *(_BYTE **)(v98 + 8);
              if ( !v25 || (unsigned int)sub_CA2B0(v25, v22) )
              {
LABEL_25:
                v26 = v17;
                v4 = v102;
                v9 = v107;
                v5 = v105;
                v13 = v108;
                goto LABEL_26;
              }
            }
          }
        }
      }
      ++v17;
      v18 += 6;
    }
    while ( v15 != v17 );
    v4 = v102;
    v5 = v105;
    v9 = v107;
    v13 = v108;
    goto LABEL_46;
  }
  v26 = 0;
LABEL_26:
  if ( v15 != v26 )
  {
LABEL_27:
    v27 = 0;
    v28 = 0;
    v15 = 0;
    goto LABEL_28;
  }
LABEL_46:
  v40 = *(_WORD *)(v4 + 68);
  v27 = 8LL * v15;
  v89 += v27;
  if ( (v40 & 0x80u) == 0 )
    v28 = (v40 >> 6) & 1;
  else
    v28 = ((v40 & 0x200) != 0) + 2;
LABEL_28:
  v94 = v9;
  v29 = sub_DC1C0(*v92, v89);
  v30 = (__int64)v29;
  if ( !v29 )
  {
    v55 = 7;
    sub_DBD10((__int64)v92, "out of memory");
    return v55;
  }
  v31 = (__int64)&v29[v13 + 16];
  v29[12] = v5;
  *((_DWORD *)v29 + 28) = v28;
  *((_DWORD *)v29 + 29) = 0;
  v32 = v31 + 12 * v13;
  v29[1] = v31;
  v99 = 0;
  v29[3] = v32;
  v29[4] = v32 + v27;
  v29[13] = (__int64)v92;
  v33 = *(_QWORD *)(v5 + 32);
  if ( *(int *)(v5 + 20) > 0 )
  {
    v34 = 0;
    v35 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v33 + 18) & 0x40) == 0 )
        goto LABEL_35;
      v36 = v31 + 12LL * v35;
      *(_DWORD *)v36 = *(_DWORD *)(v33 + 32);
      *(_DWORD *)(v36 + 8) = v34;
      v37 = *(_WORD *)(v33 + 20);
      v38 = v37 & 0x1FFF;
      if ( (v37 & 0x1FFF) == 1 )
      {
        if ( *(__int16 *)(v33 + 18) >= 0 )
        {
          v39 = (1 << v35) | *(_DWORD *)(v30 + 116);
          if ( v35 >= 32 )
            v39 = *(_DWORD *)(v30 + 116);
          *(_DWORD *)(v30 + 116) = v39;
        }
        *(_BYTE *)(v36 + 4) = 2;
      }
      else if ( v38 == 64 )
      {
        *(_BYTE *)(v36 + 4) = *(_BYTE *)(v33 + 23);
      }
      else if ( (v37 & 0x180) != 0 )
      {
        *(_BYTE *)(v36 + 4) = (v38 != 256) + 71;
      }
      else
      {
        *(_BYTE *)(v36 + 4) = v37;
        if ( (v37 & 0x3C) != 0 )
        {
          v57 = *(char **)(*(_QWORD *)v33 + 24LL);
          v58 = *v57;
          if ( *v57 == -80 )
          {
            v58 = v57[2];
            if ( v58 == -79 )
            {
LABEL_92:
              v59 = **((_DWORD **)v57 + 4);
LABEL_93:
              if ( v59 > 1 )
              {
                v75 = v99;
                if ( v35 < 16 )
                  v75 = v99 | (1 << v35);
                v99 = v75;
                if ( v38 == 16 )
                {
                  *(_BYTE *)(v36 + 4) = 8;
                }
                else if ( v38 == 4 )
                {
                  *(_BYTE *)(v36 + 4) = 32;
                }
              }
              goto LABEL_34;
            }
          }
          else if ( v58 == -79 )
          {
            goto LABEL_92;
          }
          if ( v58 == -118 )
          {
            v59 = **(_DWORD **)(*((_QWORD *)v57 + 4) + 32LL);
            goto LABEL_93;
          }
        }
      }
LABEL_34:
      ++v35;
LABEL_35:
      ++v34;
      v33 += 56;
      if ( v34 >= *(_DWORD *)(v5 + 20) )
        goto LABEL_49;
    }
  }
  v35 = 0;
LABEL_49:
  *(_DWORD *)v30 = v35;
  if ( v15 )
  {
    v41 = v94 + 2;
    v103 = v30;
    v42 = 0;
    v43 = v32;
    do
    {
      v44 = *(_QWORD *)v41;
      v111 = sub_CE7B0;
      v113 = 1;
      v112 = sub_C43E0;
      v114 = 0;
      if ( v44 )
      {
        sub_CDCD0((__int64)&v110, v44);
        if ( !v113 )
        {
          v45 = v42++;
          v46 = v43 + 8 * v45;
          *(_DWORD *)v46 = *(__int16 *)(v44 + 48);
          *(_BYTE *)(v46 + 4) = v41[4] & 1;
        }
      }
      v41 += 6;
    }
    while ( &v94[6 * (v15 - 1) + 8] != v41 );
    v15 = v42;
    v30 = v103;
  }
  *(_DWORD *)(v30 + 16) = v15;
  *(_BYTE *)(v96 + 28) &= ~1u;
  v47 = *(unsigned __int16 *)(v96 + 56);
  *(_WORD *)(v96 + 18) = 0;
  *(_DWORD *)(v96 + 48) = 1024;
  *(_WORD *)(v96 + 52) = 0;
  v48 = *(_DWORD *)v30;
  if ( *(_DWORD *)v30 > v47 && (unsigned int)sub_DE610(*v92, v96, v48) )
  {
    v55 = 7;
    sub_C9BF0(*v92, (_QWORD *)v30, v60, v61, v62, v63);
    return v55;
  }
  v90 = v99;
  v49 = a2;
  v50 = sub_E7140((__int64)a1, a2, -1, 0, v30, v99, &v110, &v109);
  v53 = v82;
  v54 = v86;
  v55 = v50;
  if ( v109 )
  {
    v77 = sub_E7140((__int64)a1, a2, -1, 0, v30, v99, &v110, nullptr);
    v49 = v83;
    v55 = v77;
  }
  if ( !v55 )
  {
    v52 = v110;
    v64 = ~a2;
    v104 = v110;
    v95 = *(_QWORD *)v96 & ~a2;
    if ( v95 )
    {
      if ( !v110 )
      {
        v100 = 0;
        goto LABEL_77;
      }
    }
    else if ( !v110 )
    {
      goto LABEL_60;
    }
    v49 = a2;
    v78 = sub_E7140((__int64)a1, a2, -1, 1u, v30, v99, &v110, nullptr);
    v51 = v87;
    v64 = ~a2;
    v100 = *(_QWORD *)v96 & ~a2;
    v52 = v100 == 0;
    v104 = v100 == 0;
    if ( v78 )
    {
      v106 = v100 == 0;
      v55 = v78;
LABEL_113:
      if ( !(v55 | v104) )
      {
        v80 = sub_E7140((__int64)a1, a2, a2, 0, v30, v90, &v110, nullptr);
        v49 = v85;
        v53 = v110;
        v55 = v80;
        v81 = 1;
        if ( v110 )
          v81 = v106;
        v106 = v81;
      }
      if ( !(v55 | v106) )
      {
        v49 = a2;
        v79 = sub_E7140((__int64)a1, a2, a2, 1u, v30, v90, &v110, nullptr);
        v51 = v84;
        v55 = v79;
        v52 = v88;
      }
      goto LABEL_60;
    }
LABEL_77:
    v65 = v5;
    v66 = 0;
    v67 = v48;
    v68 = 3LL * (unsigned int)(v48 - 1);
    v69 = v64;
    v70 = 4 * v68;
    v106 = v104;
    while ( 1 )
    {
      v52 = v66;
      if ( v67 <= 0 )
        break;
      v71 = *(_QWORD *)(v30 + 8);
      v53 = *(_QWORD *)(v65 + 32);
      v66 = -1;
      v72 = (int *)(v71 + 8);
      v73 = v71 + v70 + 20;
      do
      {
        v51 = 7LL * *v72;
        v49 = v69 & *(_QWORD *)(v53 + 56LL * *v72 + 40);
        if ( v52 < v49 && v66 > v49 )
          v66 = v69 & *(_QWORD *)(v53 + 56LL * *v72 + 40);
        v72 += 3;
      }
      while ( (int *)v73 != v72 );
      if ( v66 == -1 )
        break;
      LOBYTE(v51) = v66 == v100 || v66 == v95;
      if ( !(_BYTE)v51 )
      {
        v49 = a2;
        v74 = sub_E7140((__int64)a1, a2, v66 | a2, 0, v30, v90, &v110, nullptr);
        v52 = a2;
        if ( *(_QWORD *)v96 == a2 )
        {
          v54 = v110;
          v52 = 1;
          v104 = 1;
          if ( v110 )
            v52 = v106;
          v106 = v52;
        }
        if ( v74 )
        {
          v55 = v74;
          goto LABEL_113;
        }
      }
    }
    v55 = 0;
    goto LABEL_113;
  }
LABEL_60:
  if ( *(_DWORD *)(v30 + 56) )
    sub_C91C0(*(_QWORD *)(v30 + 48), v49);
  sub_C9BF0(*v92, (_QWORD *)v30, v51, v52, v53, v54);
  return v55;
}
