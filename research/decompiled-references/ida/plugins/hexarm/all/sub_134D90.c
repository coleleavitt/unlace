__int64 __fastcall sub_134D90(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // rbp
  __int32 v12; // eax
  bool v13; // zf
  __int64 v14; // rbx
  __int32 v15; // ecx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  char v21; // al
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rbp
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rbx
  void *v31; // r12
  __int64 v32; // r13
  unsigned __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rsi
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rsi
  int v39; // eax
  char v40; // dl
  char *v41; // rbx
  int v42; // edx
  __int64 v43; // rax
  int v44; // ebx
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rbx
  __int64 v50; // rdx
  int **v51; // rdi
  int v52; // edi
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbp
  __int64 v58; // rax
  int v59; // r12d
  __int64 v60; // r14
  int v61; // eax
  int v62; // r13d
  char v63; // al
  int v64; // ecx
  char v65; // al
  size_t v66; // rbp
  _DWORD *v67; // rcx
  int v68; // eax
  __m128i v69; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+10h] [rbp-A8h]
  __int64 v71; // [rsp+18h] [rbp-A0h]
  __int64 v72; // [rsp+20h] [rbp-98h]
  __int64 v73; // [rsp+28h] [rbp-90h]
  int v74; // [rsp+30h] [rbp-88h]
  __int64 v75; // [rsp+38h] [rbp-80h] BYREF
  __int64 v76; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 *v77; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v78; // [rsp+50h] [rbp-68h] BYREF
  __int64 v79; // [rsp+58h] [rbp-60h] BYREF
  __int64 v80[11]; // [rsp+60h] [rbp-58h] BYREF

  v80[3] = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 32);
  switch ( *(_DWORD *)v6 )
  {
    case 0xB:
      v39 = *(_DWORD *)(v6 + 68);
      v40 = *(_BYTE *)(v6 + 32);
      if ( 2 * v39 != *(_DWORD *)(v6 + 36) )
      {
        if ( v40 != 4 )
          return 0;
        v41 = *(char **)(v6 + 40);
        v42 = *(_DWORD *)v41;
LABEL_56:
        if ( v42 == 8 && v39 == *((_DWORD *)v41 + 9) )
        {
          *(_DWORD *)v6 = 24;
          sub_123480((__int64)v80, (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 32LL));
          sub_11C450((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v80);
          v43 = *(_QWORD *)(a1 + 32);
          v44 = 8 * *(_DWORD *)(v43 + 36) - 1;
          sub_120450(v43 + 48, *(_QWORD *)(a1 + 40), v44, 1, *(_QWORD *)(v43 + 24), 0);
          v45 = *(_QWORD *)(a1 + 32);
          if ( *(_BYTE *)(v45 + 32) == 4 )
            sub_1516C0(v45, (unsigned int)v44);
          sub_11C7E0((__int64)v80);
        }
        return 0;
      }
      if ( v40 != 4 )
        return 0;
      v41 = *(char **)(v6 + 40);
      v42 = *(_DWORD *)v41;
      if ( *(_DWORD *)v41 != 14 )
        goto LABEL_56;
      v56 = sub_11C2E0(*(_QWORD *)(v6 + 40), nullptr);
      v57 = v56;
      if ( v56 )
      {
        v58 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v56 + 8) + 16LL), *(unsigned int *)(v56 + 4), 0);
        if ( (v58 & (v58 - 1)) == 0 )
        {
          v59 = 8 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) - log2ceil();
          v60 = **(_QWORD **)(v57 + 8);
          if ( v41 + 48 != (char *)v57 )
            sub_11C450(v41 + 32, v41 + 48);
          sub_120450((__int64)(v41 + 48), *(_QWORD *)(a1 + 40), v59, 1, v60, 0);
          *(_DWORD *)v41 = 23;
          **(_DWORD **)(a1 + 32) = 10;
        }
      }
      return 0;
    case 0xE:
      if ( *(_DWORD *)(v6 + 36) > *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) )
        return 0;
      v46 = sub_11C2E0(*(_QWORD *)(a1 + 32), &v76);
      if ( !v46 )
        return 0;
      v47 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v46 + 8) + 16LL), *(unsigned int *)(v46 + 4), 0);
      if ( v47 <= 0x20 || (v47 & (v47 - 1)) != 0 )
        return 0;
      v48 = log2ceil();
      v49 = v48;
      if ( v48 > 0 )
      {
        v50 = *(_QWORD *)(a1 + 32);
        if ( v50 + 32 != v76 )
        {
          sub_11C450((char *)(v50 + 32), (char *)(v50 + 48));
          v50 = *(_QWORD *)(a1 + 32);
        }
        sub_120450(v50 + 48, *(_QWORD *)(a1 + 40), v49, 1, -1, 0);
        **(_DWORD **)(a1 + 32) = 22;
        return 0;
      }
      if ( !under_debugger )
        sub_3835A0(50434);
      goto LABEL_119;
    case 0x14:
    case 0x17:
    case 0x18:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_DWORD *)(v6 + 36);
      v77 = (unsigned __int8 *)(v6 + 32);
      v13 = *(_DWORD *)v6 == 20;
      v14 = *(_QWORD *)(v11 + 480);
      v69.m128i_i32[0] = v12;
      v70 = *(_QWORD *)(v14 + 112);
      if ( !v13 )
      {
        if ( !(unsigned __int8)sub_152070(v6, (char *)&v75 + 4) )
          goto LABEL_70;
        LODWORD(v72) = BYTE4(v75) & 7;
        if ( (v75 & 0x700000000LL) != 0 )
          goto LABEL_70;
        if ( *(_BYTE *)(v6 + 32) == 4 )
        {
          v67 = *(_DWORD **)(v6 + 40);
          if ( (unsigned int)(*v67 - 8) <= 1 )
            v69.m128i_i32[0] = v67[9];
        }
        LODWORD(v73) = SHIDWORD(v75) / -8;
        HIDWORD(v71) = v69.m128i_i32[0] - SHIDWORD(v75) / 8;
        if ( !sub_11C4C0(SHIDWORD(v71)) )
          goto LABEL_70;
        v15 = v73;
        if ( *(_BYTE *)(v6 + 32) != 4 )
          goto LABEL_22;
        v16 = *(_QWORD *)(v6 + 40);
        v17 = *(_DWORD *)v16;
        if ( (unsigned int)(*(_DWORD *)v16 - 8) <= 1 )
        {
          HIDWORD(v75) = 0;
          v20 = HIDWORD(v71);
          v77 = (unsigned __int8 *)(v16 + 32);
        }
        else
        {
          if ( v17 == 22 )
          {
            v72 = *(_QWORD *)(v6 + 40);
            if ( !(unsigned __int8)sub_152070(v16, (char *)&v75 + 4) )
              goto LABEL_70;
            v15 = v73;
            v77 = (unsigned __int8 *)(v72 + 32);
          }
          else
          {
            if ( v17 != 14 )
              goto LABEL_70;
            LODWORD(v72) = v73;
            v18 = sub_11C2E0(v16, &v77);
            v15 = v73;
            if ( v18 )
            {
              v19 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL), *(unsigned int *)(v18 + 4), 0);
              v15 = v72;
              if ( (v19 & (v19 - 1)) == 0 )
              {
                v68 = log2ceil();
                v15 = v72;
                HIDWORD(v75) = v68;
              }
            }
          }
          if ( (v75 & 0x700000000LL) != 0 )
            goto LABEL_70;
          LODWORD(v72) = SHIDWORD(v75) / 8;
          v20 = HIDWORD(v71) + SHIDWORD(v75) / 8;
        }
        if ( v69.m128i_i32[0] >= v20 )
        {
LABEL_22:
          v69.m128i_i32[0] = v15;
          v21 = sub_11C690(v77, v14);
          v22 = -(v72 + v69.m128i_i32[0]);
          if ( v21 )
            v22 = v72;
          LODWORD(v72) = v22;
          goto LABEL_25;
        }
LABEL_70:
        v51 = *(int ***)(a1 + 32);
        if ( *(_DWORD *)v51 == 20 )
        {
          if ( (unsigned __int8)sub_11DD00(v51, &v78, &v79, 1) )
          {
            v52 = v78 + v79;
            if ( (int)v78 + (int)v79 < *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) )
            {
              LODWORD(v79) = v78 + v79;
              if ( sub_11C4C0(v52) )
              {
                sub_123480((__int64)v80, (unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 64LL));
                if ( (unsigned __int8)sub_121BE0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v79, 273, 1) )
                {
                  sub_12B130(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 9, -1, 1);
                  sub_124BC0(*(_QWORD *)(a1 + 32) + 64LL, (unsigned __int8 *)v80);
                  v53 = *(_QWORD *)(a1 + 16);
                  v54 = *(_DWORD *)(v53 + 24);
                  BYTE1(v54) &= ~2u;
                  LOBYTE(v54) = v54 | 0x80;
                  *(_DWORD *)(v53 + 24) = v54;
                  v55 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
                  if ( v55 )
                    *(_DWORD *)(v55 + 48) = 63;
                  *(_BYTE *)(a1 + 48) = 1;
                }
                sub_11C7E0((__int64)v80);
              }
            }
          }
        }
        return 0;
      }
      if ( !(unsigned __int8)sub_11F7C0((char *)(v6 + 48), v80, 0) )
        goto LABEL_70;
      if ( (v80[0] & (v80[0] + 1)) != 0 )
        goto LABEL_70;
      v61 = bitcount();
      HIDWORD(v75) = v61;
      LODWORD(v72) = v61 & 7;
      if ( (v61 & 7) != 0 )
        goto LABEL_70;
      v62 = v61 / 8;
      v13 = *(_BYTE *)(v6 + 32) == 4;
      HIDWORD(v71) = v61 / 8;
      if ( v13 && (unsigned int)(**(_DWORD **)(v6 + 40) - 23) <= 1 )
      {
        v73 = *(_QWORD *)(v6 + 40);
        if ( !(unsigned __int8)sub_152070(v73, (char *)&v75 + 4) || (v75 & 0x700000000LL) != 0 )
          goto LABEL_70;
        LODWORD(v72) = SHIDWORD(v75) / 8;
        if ( v62 > v69.m128i_i32[0] - SHIDWORD(v75) / 8 )
        {
          if ( *(_DWORD *)v73 == 24 )
            goto LABEL_70;
          HIDWORD(v71) = v69.m128i_i32[0] - SHIDWORD(v75) / 8;
        }
        v77 = (unsigned __int8 *)(v73 + 32);
      }
      v63 = sub_11C690(v77, v14);
      v64 = v69.m128i_i32[0] - (v72 + HIDWORD(v71));
      if ( !v63 )
        v64 = v72;
      LODWORD(v72) = v64;
LABEL_25:
      if ( !sub_11C4C0(SHIDWORD(v71)) )
        goto LABEL_70;
      v78 = 0;
      v79 = 0;
      if ( (unsigned __int8)sub_A8280(*(_QWORD *)(v11 + 64), (char *)v77, &v79, &v78, 0) )
        goto LABEL_33;
      v80[0] = 0;
      v80[1] = 0;
      if ( (*v77 & 0xFB) != 1 )
        goto LABEL_69;
      if ( !(unsigned __int8)sub_1C4A70(v77, v80) )
      {
        if ( !under_debugger )
          sub_3835A0(51879);
LABEL_119:
        BUG();
      }
      v23 = sub_1F0A80(
              *(_QWORD *)(v11 + 64) + 432LL,
              v80,
              *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v11 + 64) + 1504LL) + 80LL),
              0xFFFFFFFFLL);
      if ( v23 == -1 )
      {
LABEL_69:
        cleanup_argloc();
        clear_tinfo_t();
        goto LABEL_70;
      }
      v24 = *(_QWORD *)(*(_QWORD *)(v11 + 64) + 432LL) + 104LL * v23;
      copy_tinfo_t();
      v25 = *(_DWORD *)(v24 + 24);
      if ( (v25 & 0x100) != 0
        && (v25 & 2) != 0
        && !(unsigned __int8)sub_1C3940(v24, v80, *((unsigned int *)v77 + 1), *(unsigned int *)(v24 + 88)) )
      {
        cleanup_argloc();
        goto LABEL_34;
      }
      cleanup_argloc();
LABEL_33:
      if ( (get_tinfo_property() & 0x2F) != 0xD && (get_tinfo_property() & 0xF) != 0xB )
        goto LABEL_108;
LABEL_34:
      sub_123480((__int64)v80, v77);
      if ( !(unsigned __int8)sub_126950((unsigned __int64)v80, v70, v72)
        || HIDWORD(v71) != HIDWORD(v80[0])
        && !(unsigned __int8)sub_126F00((unsigned __int8 *)v80, v70, SHIDWORD(v71), 0) )
      {
        sub_11C7E0((__int64)v80);
LABEL_108:
        clear_tinfo_t();
        goto LABEL_70;
      }
      sub_11C450((char *)(v6 + 32), (char *)v80);
      sub_11C7E0(v6 + 48);
      v26 = 4;
      if ( *(_DWORD *)(v6 + 36) != *(_DWORD *)(v6 + 68) )
        v26 = (*(_DWORD *)v6 != 24) + 8;
      *(_DWORD *)v6 = v26;
      sub_11C7E0((__int64)v80);
      clear_tinfo_t();
      v27 = *(_QWORD *)(a1 + 16);
      v28 = *(_DWORD *)(v27 + 24);
      BYTE1(v28) &= ~2u;
      LOBYTE(v28) = v28 | 0x80;
      *(_DWORD *)(v27 + 24) = v28;
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
      if ( v29 )
        *(_DWORD *)(v29 + 48) = 63;
LABEL_5:
      *(_BYTE *)(a1 + 48) = 1;
      return 0;
    case 0x19:
      if ( !(unsigned __int8)sub_11F7C0((char *)(v6 + 48), v80, 1u) || v80[0] != -1 )
        return 0;
      **(_DWORD **)(a1 + 32) = 32;
      *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 16LL) = 0;
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *(_DWORD *)(v8 + 24);
      BYTE1(v9) &= ~2u;
      LOBYTE(v9) = v9 | 0x80;
      *(_DWORD *)(v8 + 24) = v9;
      goto LABEL_5;
    case 0x35:
      if ( (unsigned __int8)sub_1C1340(
                              *(_QWORD *)(v6 + 56),
                              a2,
                              a3,
                              a4,
                              a5,
                              a6,
                              v69.m128i_i32[0],
                              v69.m128i_i32[2],
                              v70,
                              v71,
                              v72,
                              v73,
                              v74,
                              v75,
                              v76,
                              (_DWORD)v77,
                              v78,
                              v79,
                              v80[0]) )
      {
        v30 = *(_QWORD *)(a1 + 16);
        v31 = nullptr;
        v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL);
        v33 = *(_QWORD *)(v32 + 32);
        v34 = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
        if ( v33 )
        {
          v66 = 4 * v33;
          v69 = v34;
          v31 = (void *)qalloc_or_throw();
          memcpy(v31, *(const void **)(v32 + 24), v66);
          v34 = _mm_load_si128(&v69);
        }
        if ( *(_QWORD *)(v30 + 368) )
        {
          *(_QWORD *)(v30 + 376) = 0;
          v69 = v34;
          qfree();
          v34 = _mm_load_si128(&v69);
        }
        *(_QWORD *)(v30 + 368) = v31;
        *(__m128i *)(v30 + 376) = v34;
      }
      return 0;
    case 0x36:
      v35 = *(_QWORD *)(a1 + 40);
      if ( *(_BYTE *)(v6 + 48) != 4 )
        goto LABEL_48;
      v65 = sub_11FFE0(*(_BYTE **)(v6 + 56), v35, 0, a4, a5, a6);
      v6 = *(_QWORD *)(a1 + 32);
      if ( !v65 )
        goto LABEL_94;
      if ( (unsigned __int8)sub_155710(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v6 + 48, 0) )
        goto LABEL_51;
      v6 = *(_QWORD *)(a1 + 32);
LABEL_94:
      v35 = *(_QWORD *)(a1 + 40);
LABEL_48:
      if ( *(_BYTE *)(v6 + 64) == 4
        && (unsigned __int8)sub_11FFE0(*(_BYTE **)(v6 + 72), v35, 0, a4, a5, a6)
        && (unsigned __int8)sub_155710(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32) + 64LL, 0) )
      {
LABEL_51:
        v36 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 48) = 1;
        v37 = *(_DWORD *)(v36 + 24);
        BYTE1(v37) &= ~2u;
        LOBYTE(v37) = v37 | 0x80;
        *(_DWORD *)(v36 + 24) = v37;
        v38 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( v38 )
        {
          sub_167250(*(_QWORD *)(a1 + 16), v38, 6);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 4LL) |= 0x20000u;
        }
      }
      return 0;
    default:
      return 0;
  }
}

