__int64 __fastcall sub_8AB80(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r13d
  const char *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r14
  unsigned __int64 v21; // r8
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdx
  size_t v25; // rax
  unsigned int v26; // r14d
  __int64 v27; // rax
  unsigned int v28; // r12d
  bool v29; // al
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 *v34; // rax
  __int64 v35; // rdi
  const char *v36; // rbp
  int v37; // eax
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  const char *v40; // rbp
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  size_t v44; // r12
  __int64 v45; // rbp
  const void *v46; // r14
  size_t v47; // r15
  size_t v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  size_t v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __m128i v60; // xmm0
  __int64 v62; // rax
  __int64 v63; // [rsp+10h] [rbp-338h]
  __int64 v64; // [rsp+18h] [rbp-330h]
  __int64 v65; // [rsp+18h] [rbp-330h]
  char v66; // [rsp+20h] [rbp-328h]
  __int64 v67; // [rsp+20h] [rbp-328h]
  __int64 v68; // [rsp+20h] [rbp-328h]
  unsigned __int64 v69; // [rsp+20h] [rbp-328h]
  const char *v70; // [rsp+28h] [rbp-320h]
  unsigned __int8 v71; // [rsp+3Eh] [rbp-30Ah]
  char v72; // [rsp+3Fh] [rbp-309h]
  __int64 v73; // [rsp+40h] [rbp-308h] BYREF
  __int128 v74; // [rsp+48h] [rbp-300h]
  size_t n[4]; // [rsp+60h] [rbp-2E8h] BYREF
  char v76[4]; // [rsp+84h] [rbp-2C4h] BYREF
  size_t v77; // [rsp+88h] [rbp-2C0h] BYREF
  _BYTE v78[32]; // [rsp+90h] [rbp-2B8h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-298h]
  __int64 v80; // [rsp+B8h] [rbp-290h]
  __int64 v81[4]; // [rsp+E0h] [rbp-268h] BYREF
  __int64 v82; // [rsp+100h] [rbp-248h]
  __int64 v83; // [rsp+108h] [rbp-240h]
  __int64 v84; // [rsp+1B0h] [rbp-198h]
  __int64 v85; // [rsp+1B8h] [rbp-190h]
  __int64 v86; // [rsp+268h] [rbp-E0h]
  __int64 v87; // [rsp+270h] [rbp-D8h]
  __int64 v88; // [rsp+278h] [rbp-D0h]
  char v89; // [rsp+28Ch] [rbp-BCh]
  char v90; // [rsp+28Dh] [rbp-BBh]
  unsigned int v91; // [rsp+2C8h] [rbp-80h]
  __int64 v92; // [rsp+2D0h] [rbp-78h]
  __int64 v93; // [rsp+2D8h] [rbp-70h]
  __int64 v94; // [rsp+2E8h] [rbp-60h]
  char v95; // [rsp+2F8h] [rbp-50h]
  unsigned __int64 v96; // [rsp+308h] [rbp-40h]

  v96 = __readfsqword(0x28u);
  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (v2 = *(_DWORD *)(v1 + 8), v2 != 1) )
  {
    sub_1D740((__int64)"Input source is not local file.\n");
    return 0;
  }
  v4 = src;
  if ( *(_QWORD *)(v1 + 24) )
    v4 = *(const char **)(v1 + 16);
  v63 = open_linput(v4, 0);
  if ( !v63 )
  {
    sub_1D740((__int64)"Cannot open file: %s.\n", v4);
    return 0;
  }
  sub_17FA0((__int64)v78, v63, 0);
  sub_18160((__int64)v78, nullptr);
  if ( !(unsigned __int8)sub_18180((__int64)v78) || !(unsigned __int8)sub_186E0((__int64)v78) )
  {
    sub_1D740((__int64)"Failed to read ELF ident/header from: %s\n", v4);
LABEL_9:
    v71 = 0;
    goto LABEL_10;
  }
  v72 = sub_20BC0((__int64)v78);
  if ( !v72 )
  {
    sub_1D740((__int64)"Failed to read ELF sections from: %s\n", v4);
    goto LABEL_9;
  }
  v71 = 0;
  v73 = 0;
  v74 = 0;
  if ( v91 <= 1 )
  {
    v30 = v89 == 2;
    *(_BYTE *)(a1 + 169) = v90 == 2;
    *(_BYTE *)(a1 + 168) = v30;
    goto LABEL_59;
  }
  do
  {
    v12 = *(_QWORD *)(a1 + 112);
    v13 = *(_QWORD *)(a1 + 104);
    if ( *(_QWORD *)(a1 + 120) < (unsigned __int64)(v12 + 1) )
    {
      v39 = qvector_reserve(a1 + 104, v13, v12 + 1, 120);
      *(_QWORD *)(a1 + 104) = v39;
      v12 = *(_QWORD *)(a1 + 112);
      v13 = v39;
    }
    v14 = v13 + 120 * v12;
    *(_QWORD *)v14 = 0;
    *(_QWORD *)(v14 + 112) = 0;
    memset(
      (void *)((v14 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v14 - (((_DWORD)v14 + 8) & 0xFFFFFFF8) + 120) >> 3));
    ++*(_QWORD *)(a1 + 112);
    v15 = sub_19030((__int64)v81, v2);
    *(_QWORD *)v14 = *(_QWORD *)(v15 + 16);
    *(_DWORD *)(v14 + 8) = *(_QWORD *)(v15 + 32);
    *(_DWORD *)(v14 + 40) = *(_DWORD *)(v15 + 40);
    *(_DWORD *)(v14 + 44) = *(_QWORD *)(v15 + 56);
    *(_QWORD *)(v14 + 48) = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v14 + 56) = *(unsigned int *)(v15 + 4);
    *(_QWORD *)(v14 + 64) = *(unsigned int *)(v15 + 44);
    v64 = v14 + 16;
    sub_20500(v81, (__int64 *)(v14 + 16), (unsigned int *)v15);
    v16 = *(_QWORD *)(v14 + 24);
    if ( v16 )
    {
      if ( (unsigned __int64)(v16 - 1) <= 7 )
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( (v17 & 0x800) == 0 )
        {
          v36 = *(const char **)(v14 + 16);
LABEL_95:
          v71 |= strncmp(v36, ".debug_", 7u) == 0;
          goto LABEL_71;
        }
      }
      else
      {
        v36 = *(const char **)(v14 + 16);
        v70 = v36;
        v37 = strncmp(v36, ".zdebug_", 8u);
        v38 = v16 - 1;
        if ( !v37 )
        {
          v66 = v72;
          if ( (debug & 0x400000) == 0 )
            goto LABEL_39;
          goto LABEL_38;
        }
        v17 = *(_QWORD *)(v15 + 8);
        if ( (v17 & 0x800) == 0 )
          goto LABEL_87;
      }
      if ( (debug & 0x400000) == 0 )
      {
        v66 = 0;
        goto LABEL_40;
      }
      v66 = 0;
      v70 = *(const char **)(v14 + 16);
LABEL_38:
      sub_88B80((__int64)"Section '%s' is compressed.\n", v70);
LABEL_39:
      v17 = *(_QWORD *)(v15 + 8);
      goto LABEL_40;
    }
    v17 = *(_QWORD *)(v15 + 8);
    if ( (v17 & 0x800) == 0 )
      goto LABEL_56;
    v66 = 0;
    v70 = src;
    if ( (debug & 0x400000) != 0 )
      goto LABEL_38;
LABEL_40:
    BYTE1(v17) |= 8u;
    *(_QWORD *)(v14 + 72) = v17;
    *(_QWORD *)(v14 + 88) = *(unsigned int *)(v14 + 8);
    memset(n, 0, 24);
    v18 = qlseek(v86, 0, 1);
    v19 = v18 - v87;
    if ( qlseek(v86, *(_QWORD *)(v15 + 24) + v87, 0) == -1 )
      goto LABEL_70;
    if ( v66 )
    {
      if ( (unsigned int)sub_182A0((__int64)v78, (__int64)v76, 12, 0) )
        goto LABEL_70;
      if ( !v95 )
        memrev(&v77, 8);
      LODWORD(n[0]) = 1;
      n[2] = 1;
      n[1] = v77;
      v20 = *(_QWORD *)(v14 + 24);
      if ( v20 && (v21 = v20 - 1, (unsigned __int64)(v20 - 1) > 1) )
      {
        v22 = 1;
        if ( v20 != 3 )
        {
          v22 = v20 - 2;
          memmove((void *)(*(_QWORD *)(v14 + 16) + 1LL), (const void *)(*(_QWORD *)(v14 + 16) + 2LL), v20 - 3);
          v21 = v20 - 1;
        }
        v23 = *(_QWORD *)(v14 + 16);
        if ( *(_QWORD *)(v14 + 32) < v21 )
        {
          v69 = v21;
          v62 = qvector_reserve(v64, v23, v21, 1);
          *(_QWORD *)(v14 + 16) = v62;
          v21 = v69;
          v23 = v62;
        }
        *(_QWORD *)(v14 + 24) = v21;
        *(_BYTE *)(v23 + v22) = 0;
        v24 = LODWORD(n[0]);
        v25 = n[2];
      }
      else
      {
        v25 = 1;
        v24 = 1;
      }
      goto LABEL_85;
    }
    if ( !sub_18EE0((__int64)v78, (__int64)n) )
    {
LABEL_70:
      sub_1D740((__int64)"Truncated file.\n");
      qlseek(v86, v19 + v87, 0);
      v16 = *(_QWORD *)(v14 + 24);
LABEL_71:
      if ( !v16 )
        goto LABEL_56;
      v40 = *(const char **)(v14 + 16);
      goto LABEL_73;
    }
    v24 = LODWORD(n[0]);
    v25 = n[2];
LABEL_85:
    *(_QWORD *)(v14 + 80) = v24;
    *(_QWORD *)(v14 + 96) = v25;
    v50 = qlseek(v86, 0, 1);
    *(_QWORD *)(v14 + 104) = v50 - v87;
    *(_DWORD *)(v14 + 8) = n[1];
    qlseek(v86, v19 + v87, 0);
    v16 = *(_QWORD *)(v14 + 24);
    if ( !v16 )
      goto LABEL_56;
    v36 = *(const char **)(v14 + 16);
    v38 = v16 - 1;
LABEL_87:
    if ( v38 <= 0xA || strncmp(v36, ".rel.debug_", 0xBu) )
      goto LABEL_95;
    sub_806F0(v64, ".rel.debug_", ".rela.debug_");
    if ( *(_QWORD *)(v14 + 56) == 9 )
      *(_QWORD *)(v14 + 56) = 4;
    if ( *(_QWORD *)(v14 + 24) )
    {
      v40 = *(const char **)(v14 + 16);
      v71 |= strncmp(v40, ".debug_", 7u) == 0;
LABEL_73:
      if ( !strcmp(v40, ".note.iar") )
      {
        v26 = *(_DWORD *)(v14 + 8);
        sub_1D740((__int64)"Spotted %u bytes-long section: '%s'.\n", v26, v40);
        v27 = qlseek(v86, 0, 1);
        v65 = v27 - v87;
        if ( qlseek(v86, *(_QWORD *)(v14 + 48) + v87, 0) == -1 )
        {
          sub_1D740((__int64)"Truncated file.\n");
          qlseek(v86, v87 + v65, 0);
        }
        else
        {
          v28 = v26 % 0x14;
          if ( v26 == 20 * (v26 / 0x14) )
          {
            if ( v26 > 0x13 )
            {
              do
              {
                memset(n, 0, 24);
                n[0] = qvector_reserve(n, 0, 20, 1);
                memset((void *)(n[0] + n[1]), 0, 20 - n[1]);
                n[1] = 20;
                if ( (unsigned int)sub_182A0((__int64)v78, n[0], 20, 1) )
                {
                  v51 = n[0];
                }
                else
                {
                  v52 = v74;
                  if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)(v74 + 1) )
                  {
                    v67 = *((_QWORD *)&v74 + 1);
                    v55 = qvector_reserve(&v73, 0, v74 + 1, 24);
                    v53 = v55;
                    v56 = *((_QWORD *)&v74 + 1);
                    v57 = v73;
                    *((_QWORD *)&v74 + 1) = v67;
                    v58 = v74 - 1;
                    if ( (__int64)v74 - 1 >= 0 )
                    {
                      do
                      {
                        v59 = *(_QWORD *)v57;
                        v60 = _mm_loadu_si128((const __m128i *)(v57 + 8));
                        v55 += 24;
                        v57 += 24;
                        *(_QWORD *)(v57 - 24) = 0;
                        *(_QWORD *)(v55 - 24) = v59;
                        *(__m128i *)(v55 - 16) = v60;
                        *(_QWORD *)(v57 - 8) = 0;
                      }
                      while ( v58-- != 0 );
                      v57 = v73;
                    }
                    v68 = v56;
                    qfree(v57);
                    v52 = v74;
                    v73 = v53;
                    *((_QWORD *)&v74 + 1) = v68;
                  }
                  else
                  {
                    v53 = v73;
                  }
                  v54 = v53 + 24 * v52;
                  *(_QWORD *)v54 = 0;
                  *(_OWORD *)(v54 + 8) = 0;
                  *(_QWORD *)&v74 = v74 + 1;
                  v51 = *(_QWORD *)v54;
                  *(_QWORD *)v54 = n[0];
                  *(_QWORD *)(v54 + 8) = n[1];
                  *(_QWORD *)(v54 + 16) = n[2];
                  n[0] = v51;
                  n[2] = 0;
                }
                if ( v51 )
                {
                  n[1] = 0;
                  qfree(v51);
                }
                ++v28;
              }
              while ( v28 < v26 / 0x14 );
            }
          }
          else
          {
            sub_1D740((__int64)"Section is odd-sized. Ignoring.\n");
          }
          qlseek(v86, v87 + v65, 0);
        }
      }
      else if ( !strcmp(v40, ".gnu_debugaltlink") )
      {
        v41 = sub_19030((__int64)v81, v2);
        memset(n, 0, 24);
        sub_22C60(v81, (__int64 *)n, v41);
        v42 = *(_QWORD *)(a1 + 192);
        if ( v42 )
        {
          *(_QWORD *)(a1 + 200) = 0;
          qfree(v42);
          *(_QWORD *)(a1 + 192) = 0;
          v43 = 0;
          *(_QWORD *)(a1 + 208) = 0;
        }
        else
        {
          v43 = *(_QWORD *)(a1 + 208);
        }
        v44 = n[1];
        v45 = *(_QWORD *)(a1 + 200);
        v46 = (const void *)n[0];
        v47 = n[1];
        if ( v45 )
        {
          --v45;
          v47 = n[1] + v45;
        }
        v48 = v47 + 1;
        v49 = 0;
        if ( v43 < v47 + 1 )
        {
          v49 = qvector_reserve(a1 + 192, 0, v48, 1);
          *(_QWORD *)(a1 + 192) = v49;
          v48 = v47 + 1;
        }
        *(_QWORD *)(a1 + 200) = v48;
        *(_BYTE *)(v49 + v47) = 0;
        memmove((void *)(v45 + *(_QWORD *)(a1 + 192)), v46, v44);
        if ( n[0] )
        {
          n[1] = 0;
          qfree(n[0]);
        }
      }
    }
LABEL_56:
    ++v2;
  }
  while ( v2 < v91 );
  v29 = v90 == 2;
  *(_BYTE *)(a1 + 168) = v89 == 2;
  v30 = (_QWORD)v74 == 0;
  *(_BYTE *)(a1 + 169) = v29;
  if ( !v30 )
    sub_81480(a1, &v73);
LABEL_59:
  v31 = v73;
  *(_QWORD *)(a1 + 184) = v88 - v87;
  if ( v31 )
  {
    v32 = v74;
    if ( (_QWORD)v74 )
    {
      v33 = 0;
      do
      {
        v34 = (__int64 *)(v31 + 24 * v33);
        v35 = *v34;
        if ( *v34 )
        {
          v34[1] = 0;
          qfree(v35);
          v31 = v73;
        }
        ++v33;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v74 = 0;
    qfree(v31);
  }
LABEL_10:
  if ( v94 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 8LL))(v94);
  if ( v92 )
  {
    v93 = 0;
    qfree(v92);
  }
  v5 = v84;
  if ( v84 )
  {
    v6 = v85;
    if ( v85 )
    {
      v7 = 0;
      do
      {
        v8 = (__int64 *)(v5 + 96 * v7);
        v9 = v8[3];
        if ( v9 )
        {
          v8[4] = 0;
          qfree(v9);
        }
        v10 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v10);
        }
        ++v7;
        v5 = v84;
      }
      while ( v6 != v7 );
    }
    v85 = 0;
    qfree(v5);
  }
  if ( v82 )
  {
    v83 = 0;
    qfree(v82);
  }
  if ( v79 )
  {
    v80 = 0;
    qfree(v79);
  }
  close_linput(v63);
  return v71;
}

