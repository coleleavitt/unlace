__int64 __fastcall sub_3F34C0(__int64 a1, const __m128i *a2, __int64 a3, double a4)
{
  __int64 v4; // r15
  _QWORD *v7; // r14
  unsigned int v8; // eax
  __int64 v10; // r15
  __int64 v11; // rdx
  _DWORD *v12; // r8
  char v13; // al
  __int64 v14; // r8
  __int128 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r15
  unsigned __int8 *v18; // rdi
  __int128 v19; // rdi
  int v20; // eax
  char v21; // al
  __int128 v22; // rdi
  __int64 v23; // r13
  _BYTE *v24; // rdi
  __int128 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rsi
  _QWORD *v30; // rcx
  __int64 v31; // rdi
  _BYTE *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r15
  char *v35; // r12
  int v36; // r9d
  char *v37; // r15
  __int64 (__fastcall **v38)(); // rax
  int v39; // edx
  __int128 v40; // rdi
  __int128 v41; // rdi
  char v42; // al
  char *v43; // [rsp+8h] [rbp-138h]
  char *v44; // [rsp+10h] [rbp-130h]
  __int64 v45; // [rsp+10h] [rbp-130h]
  __int64 v46; // [rsp+18h] [rbp-128h]
  char v47; // [rsp+18h] [rbp-128h]
  __int64 v48; // [rsp+20h] [rbp-120h]
  __int64 v49; // [rsp+20h] [rbp-120h]
  size_t n; // [rsp+28h] [rbp-118h]
  char na; // [rsp+28h] [rbp-118h]
  __int64 nc; // [rsp+28h] [rbp-118h]
  size_t nb; // [rsp+28h] [rbp-118h]
  __int64 v54; // [rsp+30h] [rbp-110h]
  unsigned __int8 *v55; // [rsp+30h] [rbp-110h]
  __int64 v56; // [rsp+38h] [rbp-108h]
  __int64 v57; // [rsp+38h] [rbp-108h]
  __int64 v58; // [rsp+40h] [rbp-100h]
  __int64 v59; // [rsp+40h] [rbp-100h]
  __int64 v61; // [rsp+58h] [rbp-E8h] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v63; // [rsp+68h] [rbp-D8h]
  void *src; // [rsp+70h] [rbp-D0h]
  __int128 v65; // [rsp+78h] [rbp-C8h]
  __int64 v66[2]; // [rsp+90h] [rbp-B0h] BYREF
  void *v67; // [rsp+A0h] [rbp-A0h]
  __int128 v68; // [rsp+A8h] [rbp-98h]
  __int64 (__fastcall **v69)(); // [rsp+C0h] [rbp-80h] BYREF
  _QWORD *v70; // [rsp+C8h] [rbp-78h]
  const __m128i *v71; // [rsp+D0h] [rbp-70h] BYREF
  __int128 v72; // [rsp+D8h] [rbp-68h]
  unsigned __int64 *v73; // [rsp+E8h] [rbp-58h]
  __int64 v74; // [rsp+F0h] [rbp-50h]
  unsigned int v75; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v76; // [rsp+108h] [rbp-38h]

  v76 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCD2u, a4);
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 8);
  v7 = (_QWORD *)a2[4].m128i_i64[0];
  v8 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0xDu )
  {
    if ( v8 != 67 )
      goto LABEL_6;
    if ( (a2[1].m128i_i8[9] & 8) == 0 )
      goto LABEL_6;
    if ( *(char *)(a3 + 4) < 0 )
      goto LABEL_6;
    v20 = *(_DWORD *)(a3 + 68);
    if ( *(_DWORD *)(a3 + 36) != v20 || v20 != 4 )
      goto LABEL_6;
    v21 = *(_BYTE *)(a3 + 64);
    if ( v21 == 1 )
    {
      v39 = *(_DWORD *)(a3 + 72);
      if ( v39 >= *(_DWORD *)(v4 + 484) && v39 <= *(_DWORD *)(v4 + 608) + *(_DWORD *)(v4 + 80) - 1 )
      {
        v55 = (unsigned __int8 *)(a3 + 64);
        goto LABEL_49;
      }
    }
    else if ( v21 != 5 )
    {
      goto LABEL_6;
    }
    *(_QWORD *)&v22 = a2;
    *((_QWORD *)&v22 + 1) = &v62;
    v62 = 0;
    v63 = 0;
    src = nullptr;
    v55 = (unsigned __int8 *)(a3 + 64);
    v65 = 0;
    sub_11FCA0(v22, a3 + 64, 1u, 0xFFFF0000);
    sub_5FE00(v66, (__int64)&v62);
    v23 = v65;
    v67 = nullptr;
    v68 = 0;
    if ( (_QWORD)v65 )
    {
      nc = 16 * v65;
      v67 = (void *)qalloc_or_throw();
      *((_QWORD *)&v68 + 1) = v23;
      memcpy(v67, src, nc);
      *(_QWORD *)&v68 = v23;
    }
    v24 = (_BYTE *)sub_A5B90((__int64)a2, v66, *(_QWORD *)(a3 + 8), 0, 1u);
    if ( !v24
      || (v70 = nullptr, v72 = 0u, v71 = a2, v69 = off_4CA070, v73 = &v62, v74 = 0, sub_11B560(v24, &v69), !v74)
      || (get_tinfo_property() & 0x3F) != 0x19 )
    {
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree();
      }
      qfree();
      if ( src )
      {
        *(_QWORD *)&v65 = 0;
        qfree();
      }
      qfree();
      v4 = *(_QWORD *)(a1 + 8);
      goto LABEL_6;
    }
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree();
    }
    qfree();
    if ( src )
    {
      *(_QWORD *)&v65 = 0;
      qfree();
    }
    qfree();
LABEL_49:
    sub_11F840((__int64)v66, v55);
    if ( (unsigned __int8)sub_128B10((__int16 *)v66, v4, 1) )
    {
      na = 0;
    }
    else
    {
      na = sub_128B10((__int16 *)v66, v4, 0);
      if ( !na )
      {
        sub_118BA0((__int64)v66);
        v4 = *(_QWORD *)(a1 + 8);
        goto LABEL_6;
      }
    }
    *(_QWORD *)&v25 = a2;
    *((_QWORD *)&v25 + 1) = &v69;
    v69 = nullptr;
    v70 = nullptr;
    v71 = nullptr;
    v72 = 0;
    sub_11FCA0(v25, (__int64)v66, 1u, 0xFFFF0000);
    v26 = sub_A58A0((__int64)a2, &v69, *(_QWORD *)(a3 + 8), 0, 1u);
    v57 = v26;
    if ( !v26 )
      goto LABEL_53;
    if ( *(_DWORD *)v26 != 67 )
      goto LABEL_53;
    v45 = v26 + 64;
    v47 = sub_121960((unsigned __int8 *)(v26 + 64), (__int64)v66, 0);
    if ( !v47 )
      goto LABEL_53;
    if ( na )
    {
      v49 = a3;
      nb = v57;
    }
    else
    {
      nb = a3;
      v49 = v57;
    }
    if ( *(_BYTE *)(nb + 32) != 13 || *(_BYTE *)(v49 + 32) != 13 )
    {
      if ( !(unsigned __int8)sub_12C9C0(a2, nb, nb + 32, v49, v49 + 32, 0) )
        goto LABEL_53;
      v47 = 0;
    }
    v70 = nullptr;
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree();
      v71 = nullptr;
      *((_QWORD *)&v72 + 1) = 0;
    }
    *(_QWORD *)&v40 = a2;
    *((_QWORD *)&v40 + 1) = &v69;
    sub_11FCA0(v40, (__int64)v55, 1u, 0xFFFF0000);
    if ( !sub_A5B90((__int64)a2, (__int64 *)&v69, *(_QWORD *)(a3 + 8), v57, 1u) )
    {
      v70 = nullptr;
      sub_3F2DA0(&v71);
      *(_QWORD *)&v41 = a2;
      *((_QWORD *)&v41 + 1) = &v69;
      sub_11FCA0(v41, (__int64)v55, 1u, 0xFFFF0000);
      *(_QWORD *)&v41 = a2;
      *((_QWORD *)&v41 + 1) = &v69;
      sub_11FCA0(v41, a3 + 32, 1u, 0xFFFF0000);
      if ( !sub_A58A0((__int64)a2, &v69, *(_QWORD *)(a3 + 8), v57, 1u) )
      {
        if ( !v47 )
        {
          sub_AD320((__int64)a2, v57, v57 + 32, nb, nb + 32, v49, v49 + 32, 0);
          goto LABEL_106;
        }
        if ( (unsigned int)sub_CBD70() == 1 && (unsigned int)sub_CBD70() == 1 && (unsigned int)sub_CBD70() == 1 )
        {
          *(_DWORD *)(v57 + 36) = 8;
LABEL_106:
          sub_AD320((__int64)a2, v57, v45, nb, nb + 64, v49, v49 + 64, 0);
          sub_1193D0(v57, v4);
          sub_1193A0(a3);
          if ( v71 )
          {
            *(_QWORD *)&v72 = 0;
            qfree();
          }
          qfree();
          sub_118BA0((__int64)v66);
          return 1;
        }
      }
    }
LABEL_53:
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree();
    }
    qfree();
    sub_118BA0((__int64)v66);
    goto LABEL_56;
  }
  if ( v8 > 0xB )
  {
    if ( *(_DWORD *)(a3 + 68) == *(_DWORD *)(v4 + 84) )
    {
      v70 = nullptr;
      v69 = (__int64 (__fastcall **)())0xFFFFFFFF00000000LL;
      sub_1220E0((__int64)&v69, (unsigned __int8 *)a3);
      if ( (unsigned __int8)sub_1385E0((__int64)a2, (__int64)&v69, (int *)a3, 0, (__int64)&v69, 0xFFFFFFFF) )
      {
        sub_118750((char *)&v69, *(_QWORD *)(a1 + 8));
        sub_118810((char *)(a3 + 32), (char *)&v69);
        sub_118BA0(a3 + 48);
        *(_DWORD *)a3 = 4;
        sub_118BA0((__int64)&v69);
        return 1;
      }
      sub_118BA0((__int64)&v69);
    }
    if ( *(_BYTE *)(a3 + 32) == 4 && *(_BYTE *)(a3 + 48) == 4 )
    {
      v10 = *(_QWORD *)(a3 + 40);
      v11 = *(_QWORD *)(a3 + 56);
      if ( *(_DWORD *)v10 == 9 )
      {
        if ( *(_DWORD *)v11 != 12 )
          goto LABEL_56;
        v11 = *(_QWORD *)(a3 + 40);
        v10 = *(_QWORD *)(a3 + 56);
      }
      else if ( *(_DWORD *)v10 != 12 || *(_DWORD *)v11 != 9 )
      {
        goto LABEL_56;
      }
      if ( *(_BYTE *)(v11 + 32) != 4 )
        goto LABEL_56;
      v12 = *(_DWORD **)(v11 + 40);
      if ( *v12 != 35 || v12[9] != *(_DWORD *)(v10 + 36) )
        goto LABEL_56;
      v58 = *(_QWORD *)(v11 + 40);
      v48 = a3 + 64;
      n = v10 + 32;
      v13 = sub_121960((unsigned __int8 *)(v10 + 32), a3 + 64, 0);
      v14 = v58;
      if ( v13 )
      {
        v44 = (char *)(a3 + 32);
        v46 = v10 + 32;
        v43 = (char *)(a3 + 48);
        n = v10 + 48;
      }
      else
      {
        v46 = v10 + 48;
        v42 = sub_121960((unsigned __int8 *)(v10 + 48), v48, 0);
        v14 = v58;
        if ( !v42 )
          goto LABEL_56;
        v44 = (char *)(a3 + 48);
        v43 = (char *)(a3 + 32);
      }
      *(_QWORD *)&v15 = a2;
      *((_QWORD *)&v15 + 1) = v14 + 32;
      v56 = v14;
      v59 = v14 + 32;
      v61 = a3;
      v16 = sub_125240(v15, (__int64)&v61, 0);
      v17 = v16;
      if ( v16 && v16 == v61 && *(_DWORD *)v16 == 12 && sub_121960((unsigned __int8 *)(v16 + 64), v59, 0) )
      {
        v54 = v56 + 48;
        v18 = (unsigned __int8 *)(v17 + 48);
        if ( sub_121960((unsigned __int8 *)(v17 + 32), v59, 0) )
        {
          if ( sub_121960(v18, v54, 0) )
          {
LABEL_30:
            *((_QWORD *)&v19 + 1) = &v69;
            *(_QWORD *)&v19 = a2;
            v69 = nullptr;
            v70 = nullptr;
            v71 = nullptr;
            v72 = 0;
            sub_11FCA0(v19, v54, 1u, 0xFFFF0000);
            if ( sub_A58A0((__int64)a2, &v69, *(_QWORD *)(v17 + 8), a3, 1u)
              || (v70 = nullptr,
                  sub_3F2DA0(&v71),
                  sub_123DE0((__int64)a2, (__int64 *)&v69, v54, 1u),
                  sub_A5B90((__int64)a2, (__int64 *)&v69, *(_QWORD *)(v17 + 8), a3, 1u)) )
            {
              sub_8F940((__int64)&v69);
              v4 = *(_QWORD *)(a1 + 8);
              goto LABEL_6;
            }
            v63 = 0;
            v62 = 0xFFFFFFFF00000000LL;
            sub_AD320((__int64)a2, a3, (__int64)&v62, a3, v59, a3, v46, 4);
            v66[0] = 0xFFFFFFFF00000000LL;
            v66[1] = 0;
            sub_AD320((__int64)a2, a3, (__int64)v66, a3, v54, a3, n, 4);
            sub_120F80(v48, (unsigned __int8 *)&v62);
            sub_118810(v44, (char *)&v62);
            sub_118810(v43, (char *)v66);
            sub_1193A0(v17);
            sub_118BA0((__int64)v66);
            sub_118BA0((__int64)&v62);
            sub_8F940((__int64)&v69);
            return 1;
          }
          v18 = (unsigned __int8 *)(v17 + 48);
        }
        if ( sub_121960(v18, v59, 0) && sub_121960((unsigned __int8 *)(v17 + 32), v54, 0) )
          goto LABEL_30;
      }
    }
LABEL_56:
    v4 = *(_QWORD *)(a1 + 8);
    goto LABEL_6;
  }
  if ( v8 == 4
    && *(_BYTE *)(a3 + 32) == 1
    && **(_DWORD **)(v4 + 728) == *(_DWORD *)(a3 + 40)
    && *(_BYTE *)(a3 + 64) == 5 )
  {
    v27 = v7[115];
    v28 = *(_DWORD *)(v27 + 128);
    if ( (v28 & 1) != 0 )
      return 0;
    v29 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + 8LL);
    v30 = (_QWORD *)*(int *)(a3 + 68);
    *(_DWORD *)(v27 + 128) = v28 | 1;
    v31 = *(_QWORD *)(v27 + 56);
    *(_QWORD *)(v27 + 120) = v29;
    if ( (int)v30 < *(_DWORD *)(v31 + 80) )
      *(_DWORD *)(v27 + 128) = v28 | 9;
    if ( (__int64)v30 + v29 + v7[22] - v7[17] < 0 )
      return 0;
    v38 = (__int64 (__fastcall **)())(*(_QWORD *)(*(_QWORD *)(v7[187] + 24LL) + 16LL) & (v29 + v7[180]));
    v70 = v30;
    v69 = v38;
    sub_F38C0(v7, &v69);
    return 0;
  }
LABEL_6:
  v70 = v7;
  v71 = a2;
  v72 = (unsigned __int64)a3;
  LOBYTE(v73) = 0;
  v69 = off_4CA098;
  v74 = v4;
  v75 = 0;
  if ( (unsigned __int8)sub_3F2DD0(v4, (__int64)a2, a3, a3) )
    ++v75;
  sub_11A700((_BYTE *)a3, (__int64)&v69);
  if ( *(_BYTE *)(a3 + 64) == 14 )
  {
    if ( sub_11A6C0((unsigned int *)a3) )
    {
      v32 = *(_BYTE **)(a3 + 72);
      if ( *v32 == 1 && v32[16] == 1 )
      {
        v33 = *(_QWORD *)(a3 + 8);
        v34 = v33;
        if ( v33 )
        {
          if ( *(_DWORD *)v33 == 4 )
          {
            v35 = (char *)(v33 + 32);
            if ( sub_121960((unsigned __int8 *)(v33 + 32), (__int64)(v32 + 16), 0) )
            {
              v37 = (char *)(v34 + 64);
              if ( (unsigned __int8)sub_128D30((__int64)v7, *(_QWORD *)(a3 + 72), (__int64)v37, a3 + 64, 0, v36) )
              {
                sub_118810(v35, v37);
                ++v75;
              }
            }
          }
        }
      }
    }
  }
  return v75;
}

