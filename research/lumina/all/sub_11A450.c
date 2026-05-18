__int64 __fastcall sub_11A450(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int (__fastcall *a4)(__int64),
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 *v9; // rax
  unsigned int *v10; // r13
  unsigned int v11; // ebx
  int v12; // ebp
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // eax
  _DWORD *v17; // r14
  __int64 v18; // rdi
  bool v19; // al
  int v21; // ebx
  unsigned __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rdi
  _WORD *v25; // r13
  __int64 *v26; // r14
  unsigned __int16 *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbp
  signed __int64 v33; // rdx
  _QWORD *v34; // r12
  __int64 *v35; // rax
  unsigned int v36; // r14d
  __int64 *v37; // r15
  int v38; // edx
  int v39; // ecx
  __int64 *v40; // rax
  unsigned int v41; // r15d
  __int64 v42; // rax
  unsigned int v43; // ebx
  int v44; // r12d
  unsigned __int16 **v45; // r15
  int v46; // edx
  __int64 v47; // rax
  int v48; // edx
  __int64 *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned int v52; // ebp
  unsigned int v53; // r11d
  int v54; // eax
  unsigned int v55; // r12d
  __int64 v56; // r13
  __int64 v57; // rdi
  __int64 v58; // r13
  int v59; // eax
  int v60; // r8d
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // r9
  int v64; // eax
  unsigned int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int v68; // eax
  __int64 v69; // rdi
  __int64 v70; // rdi
  unsigned int v71; // eax
  unsigned int v72; // [rsp+0h] [rbp-1D8h]
  __int64 v74; // [rsp+10h] [rbp-1C8h]
  unsigned int v76; // [rsp+20h] [rbp-1B8h]
  signed __int64 v79; // [rsp+38h] [rbp-1A0h]
  int v80; // [rsp+38h] [rbp-1A0h]
  int v82; // [rsp+48h] [rbp-190h]
  unsigned int v83; // [rsp+58h] [rbp-180h]
  unsigned int v84; // [rsp+5Ch] [rbp-17Ch]
  unsigned int v85; // [rsp+5Ch] [rbp-17Ch]
  __int64 v86; // [rsp+60h] [rbp-178h]
  __int64 v87; // [rsp+68h] [rbp-170h]
  unsigned __int16 v88; // [rsp+7Ah] [rbp-15Eh]
  unsigned int v89; // [rsp+7Ch] [rbp-15Ch]
  __int64 v90; // [rsp+80h] [rbp-158h]
  int v91; // [rsp+88h] [rbp-150h]
  int v92; // [rsp+8Ch] [rbp-14Ch]
  int v93; // [rsp+94h] [rbp-144h] BYREF
  signed __int64 v94; // [rsp+98h] [rbp-140h] BYREF
  signed __int64 v95; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-130h]
  unsigned int v97; // [rsp+B0h] [rbp-128h]
  _QWORD v98[35]; // [rsp+C0h] [rbp-118h] BYREF

  v7 = a1;
  v8 = *(unsigned int *)(a1 + 88);
  v98[27] = __readfsqword(0x28u);
  v9 = *(__int64 **)(a1 + 48);
  v76 = v8;
  v74 = *v9;
  if ( *(_DWORD *)(*v9 + 96) >= (unsigned int)v8 )
  {
    v19 = 1;
    v17 = nullptr;
    v11 = 0;
    goto LABEL_14;
  }
  v10 = (unsigned int *)(*v9 + 104);
  v11 = 0;
  v12 = 2;
  v13 = a1;
  v88 = *(_WORD *)(a1 + 86);
  v83 = *(_DWORD *)(a1 + 92);
  v14 = *v10;
  if ( *v10 < (unsigned int)v8 )
    goto LABEL_5;
LABEL_3:
  while ( 2 )
  {
    if ( v12 == 5 )
    {
LABEL_9:
      v7 = v13;
      v17 = nullptr;
      if ( *(_DWORD *)(v74 + 96) >= v76 )
        goto LABEL_10;
      v21 = *(_DWORD *)(v74 + 96);
      v89 = *(_DWORD *)(v7 + 88);
      if ( (unsigned int)sub_FEBD0(a1, v8)
        || (v22 = ((unsigned __int64)(v89 + 4096) - 4063) >> 12,
            (v17 = (_DWORD *)sub_D1E10(2 * (v89 + 16LL * (int)v22 + 20), v8)) == nullptr) )
      {
        v17 = nullptr;
        v11 = 7;
        goto LABEL_12;
      }
      v8 = 0;
      v91 = v22 + 1;
      memset(v17, 0, 2 * (v89 + 16LL * (int)v22 + 20));
      v17[1] = v22 + 1;
      if ( (unsigned int)sub_FEBD0((__int64)v17, 0) )
        goto LABEL_31;
      v24 = 4096;
      if ( v89 <= 0x1000 )
        v24 = v89;
      v25 = (_WORD *)sub_D1E10(2 * v24, 0);
      if ( !v25 )
      {
LABEL_31:
        v11 = 7;
        sub_C91C0(0, 0);
        v23 = (__int64)v17;
        v17 = nullptr;
        sub_C91C0(v23, 0);
      }
      else
      {
        v84 = ((unsigned __int64)(unsigned int)(v21 + 4097) - 4063) >> 12;
        if ( v91 > (int)v84 )
        {
          v87 = (__int64)v17;
          v86 = v7;
          v26 = &v94;
          while ( 1 )
          {
            v8 = v84;
            v11 = sub_D2AD0(v86, v84, (__int64)&v95);
            if ( v11 )
            {
              v7 = v86;
              sub_C91C0((__int64)v25, v84);
              v17 = nullptr;
              sub_C91C0(v87, v84);
              goto LABEL_10;
            }
            v92 = v84 + 1;
            v82 = v91 == v84 + 1 ? v89 - v97 : (v95 - v96) >> 2;
            v27 = (unsigned __int16 *)v87;
            v28 = v97;
            v29 = *(int *)(v87 + 4);
            ++v97;
            v30 = v87 + 32 * v29 + 2 * v28 + 8;
            v90 = v30;
            if ( v82 <= 0 )
              break;
            v31 = 0;
            do
            {
              *(_WORD *)(v30 + 2 * v31) = v31;
              ++v31;
            }
            while ( v31 != (unsigned int)(v82 - 1) + 1LL );
            v32 = v96;
            memset(v98, 0, 0xD0u);
            v79 = v30;
            do
            {
              v93 = 1;
              v33 = v79;
              v94 = v79;
              if ( (v11 & 1) != 0 )
              {
                v34 = v98;
                v35 = v26;
                v36 = 0;
                v37 = v35;
                do
                {
                  v27 = (unsigned __int16 *)v34[1];
                  v38 = *(_DWORD *)v34;
                  ++v36;
                  v34 += 2;
                  sub_C6C60(v32, v27, v38, v37, &v93, v25);
                }
                while ( _bittest((const int *)&v11, v36) );
                v33 = v94;
                v39 = v93;
                v40 = v37;
                v41 = v36;
                v26 = v40;
              }
              else
              {
                v39 = 1;
                v41 = 0;
              }
              ++v11;
              v79 += 2LL;
              v42 = 2LL * v41;
              v98[v42 + 1] = v33;
              LODWORD(v98[v42]) = v39;
            }
            while ( v11 != v82 );
            v43 = v41 + 1;
            if ( v41 + 1 <= 0xC )
              goto LABEL_52;
LABEL_56:
            v47 = v87 + 32LL * (int)v84;
            *(_DWORD *)(v47 + 36) = v97;
            v48 = v93;
            *(_QWORD *)(v47 + 16) = v90;
            *(_DWORD *)(v47 + 32) = v48;
            *(_QWORD *)(v47 + 24) = v96;
            ++v84;
            if ( v91 <= v92 )
            {
              v17 = (_DWORD *)v87;
              v7 = v86;
              sub_C91C0((__int64)v25, (__int64)v27);
              goto LABEL_58;
            }
          }
          v32 = v96;
          v93 = 0;
          v43 = 1;
          v94 = 0;
          memset(v98, 0, 0xD0u);
LABEL_52:
          v44 = v82;
          v45 = (unsigned __int16 **)&v98[2 * v43 + 1];
          do
          {
            while ( !_bittest(&v44, v43) )
            {
              ++v43;
              v45 += 2;
              if ( v43 == 13 )
                goto LABEL_56;
            }
            v46 = *((_DWORD *)v45 - 2);
            v27 = *v45;
            ++v43;
            v45 += 2;
            sub_C6C60(v32, v27, v46, v26, &v93, v25);
          }
          while ( v43 != 13 );
          goto LABEL_56;
        }
        sub_C91C0((__int64)v25, 0);
LABEL_58:
        v8 = (__int64)a4;
        v11 = sub_C37D0(v7, a4, a5, 3u, 1u);
        if ( !v11 )
        {
          v80 = v88 & 0xFE00 | (v88 << 16) & 0x10000;
          v72 = *(_DWORD *)(v74 + 96);
          *(_DWORD *)(v74 + 128) = v76;
          v85 = (a6 >> 2) & 3;
          if ( v85 )
          {
            v8 = v85;
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 16) + 40LL))(*(_QWORD *)(v7 + 16), v85);
            if ( v11 )
              goto LABEL_84;
          }
          v49 = *(__int64 **)(v7 + 8);
          v94 = v80 * (unsigned __int64)v83;
          v50 = *v49;
          if ( *v49 )
          {
            (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v50 + 80))(v49, 39, 0);
            v49 = *(__int64 **)(v7 + 8);
            v50 = *v49;
          }
          v8 = (__int64)&v95;
          v11 = (*(__int64 (__fastcall **)(__int64 *, signed __int64 *))(v50 + 48))(v49, &v95);
          if ( v11 )
            goto LABEL_84;
          if ( v95 >= v94 )
            goto LABEL_68;
          if ( v94 <= (__int64)((__int64)&stru_10000 + v95 + v80 * (unsigned __int64)*(unsigned int *)(v7 + 88)) )
          {
            v51 = *(_QWORD *)(v7 + 8);
            if ( *(_QWORD *)v51 )
            {
              v8 = 5;
              (*(void (__fastcall **)(__int64, __int64, signed __int64 *))(*(_QWORD *)v51 + 80LL))(v51, 5, &v94);
            }
LABEL_68:
            v52 = 0;
            while ( 1 )
            {
              v53 = *v17;
              v54 = v17[1] - 1;
              if ( v54 < 0 )
                break;
              v55 = -1;
              v56 = 8LL * v54;
              v57 = (__int64)&v17[v56 + 2];
              v58 = (__int64)&v17[v56 - 6 + -8 * (unsigned int)v54];
              do
              {
                v59 = *(_DWORD *)v57;
                v60 = *(_DWORD *)(v57 + 24);
                if ( v60 > *(_DWORD *)v57 )
                {
                  v61 = *(_QWORD *)(v57 + 8);
                  v62 = v59;
                  v63 = *(_QWORD *)(v57 + 16);
                  v64 = v59 + 1;
                  v8 = *(unsigned __int16 *)(v61 + 2 * v62);
                  v65 = *(_DWORD *)(v63 + 4LL * (unsigned __int16)v8);
                  v66 = 2LL * v64;
                  if ( v53 >= v65 )
                  {
                    while ( 1 )
                    {
                      *(_DWORD *)v57 = v64;
                      if ( v60 == v64 )
                        break;
                      v67 = *(unsigned __int16 *)(v61 + v66);
                      ++v64;
                      v66 += 2;
                      v8 = v67;
                      v65 = *(_DWORD *)(v63 + 4 * v67);
                      if ( v53 < v65 )
                        goto LABEL_88;
                    }
                  }
                  else
                  {
LABEL_88:
                    if ( v55 > v65 )
                    {
                      v8 = (unsigned int)(*(_DWORD *)(v57 + 28) + v8);
                      v55 = v65;
                      v52 = v8;
                    }
                  }
                }
                v57 -= 32;
              }
              while ( v57 != v58 );
              *v17 = v55;
              if ( v55 == -1 )
                goto LABEL_91;
              if ( *(_DWORD *)(a2 + 400) )
              {
                v11 = *(_BYTE *)(a2 + 103) == 0 ? 9 : 7;
                goto LABEL_84;
              }
              if ( v76 >= v52 && v72 < v52 && v83 >= v55 )
              {
                v8 = a7;
                v68 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64))(**(_QWORD **)(v7 + 16)
                                                                                           + 16LL))(
                        *(_QWORD *)(v7 + 16),
                        a7,
                        (unsigned int)v80,
                        (v80 + 24) * (unsigned __int64)(v52 - 1) + 56);
                if ( v68
                  || (v8 = a7,
                      (v68 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned __int64))(**(_QWORD **)(v7 + 8)
                                                                                                  + 24LL))(
                               *(_QWORD *)(v7 + 8),
                               a7,
                               (unsigned int)v80,
                               v80 * (unsigned __int64)(v55 - 1))) != 0) )
                {
                  v11 = v68;
                  goto LABEL_84;
                }
              }
            }
            *v17 = -1;
LABEL_91:
            v70 = *(_QWORD *)(v7 + 8);
            if ( *(_QWORD *)v70 )
            {
              v8 = 37;
              (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v70 + 80LL))(v70, 37, 0);
            }
            if ( *(_DWORD *)(**(_QWORD **)(v7 + 48) + 16LL) != v76 )
              goto LABEL_97;
            v8 = v80 * (unsigned __int64)*(unsigned int *)(v7 + 92);
            v71 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + 8) + 32LL))(*(_QWORD *)(v7 + 8), v8);
            v69 = *(_QWORD *)(v7 + 8);
            if ( !v71 )
            {
              v8 = v85;
              if ( !v85 || (v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 40LL))(v69)) == 0 )
              {
LABEL_97:
                *(_DWORD *)(v74 + 96) = v76;
                v69 = *(_QWORD *)(v7 + 8);
                if ( !*(_BYTE *)(v7 + 63) )
                  goto LABEL_87;
                v19 = 1;
LABEL_14:
                v18 = a3;
                if ( !a3 )
                  goto LABEL_12;
LABEL_15:
                if ( v19 )
                {
                  v11 = 5;
                  if ( *(_DWORD *)(v74 + 96) >= *(_DWORD *)(v7 + 88) )
                  {
                    v11 = 0;
                    if ( (int)v18 > 1 )
                    {
                      if ( !(unsigned int)sub_FEBD0(v18, v8) )
                        sub_FF240(4, (const char *)&v95);
                      v8 = (__int64)a4;
                      v11 = sub_C37D0(v7, a4, a5, 4u, 4u);
                      if ( !v11 )
                      {
                        if ( a3 == 3 )
                        {
                          sub_C7FB0(v7, v95);
                          v8 = 0;
                          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 16) + 32LL))(
                                  *(_QWORD *)(v7 + 16),
                                  0);
                        }
                        if ( !*(_BYTE *)(v7 + 63) )
                        {
                          v8 = 4;
                          (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v7 + 8) + 112LL))(
                            *(_QWORD *)(v7 + 8),
                            4,
                            4,
                            9);
                        }
                      }
                    }
                  }
                }
                goto LABEL_12;
              }
              v69 = *(_QWORD *)(v7 + 8);
            }
            v11 = v71;
            goto LABEL_86;
          }
          v8 = (__int64)"%s at line %d of [%.10s]";
          sub_E8BB0(
            0xBu,
            "%s at line %d of [%.10s]",
            "database corruption",
            63613,
            "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
          v11 = 11;
LABEL_84:
          v69 = *(_QWORD *)(v7 + 8);
          if ( *(_QWORD *)v69 )
          {
            v8 = 37;
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v69 + 80LL))(v69, 37, 0);
            v69 = *(_QWORD *)(v7 + 8);
          }
LABEL_86:
          if ( !*(_BYTE *)(v7 + 63) )
          {
LABEL_87:
            v8 = 3;
            (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v69 + 112LL))(v69, 3, 1, 9);
          }
        }
LABEL_10:
        if ( v11 == 5 )
        {
          v19 = 1;
          v11 = 0;
          goto LABEL_14;
        }
      }
      v18 = a3;
      v19 = v11 == 0;
      if ( !a3 )
        goto LABEL_12;
      goto LABEL_15;
    }
    while ( 1 )
    {
      ++v10;
      ++v12;
      v14 = *v10;
      if ( *v10 >= v76 )
        goto LABEL_3;
LABEL_5:
      v15 = v12 + 2;
      v8 = (__int64)a4;
      a1 = v13;
      v16 = sub_C37D0(v13, a4, a5, v12 + 2, 1u);
      v11 = v16;
      if ( v16 )
        break;
      if ( v12 != 2 )
      {
        *v10 = -1;
        a1 = *(_QWORD *)(v13 + 8);
        if ( *(_BYTE *)(v13 + 63) )
          goto LABEL_3;
        goto LABEL_8;
      }
      *v10 = v76;
      a1 = *(_QWORD *)(v13 + 8);
      if ( !*(_BYTE *)(v13 + 63) )
      {
LABEL_8:
        v8 = v15;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v15, 1, 9);
        if ( v12 == 5 )
          goto LABEL_9;
      }
    }
    if ( v16 == 5 )
    {
      v76 = v14;
      a4 = nullptr;
      continue;
    }
    break;
  }
  v17 = nullptr;
LABEL_12:
  sub_C91C0((__int64)v17, v8);
  return v11;
}
