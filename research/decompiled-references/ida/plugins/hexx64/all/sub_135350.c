__int64 __fastcall sub_135350(__int64 a1, __int64 a2, __m128i a3, double a4, __m128 a5)
{
  __int64 v5; // r14
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10; // rbp
  __int32 v11; // eax
  bool v12; // zf
  __int64 v13; // rbx
  __int32 v14; // ecx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int32 v19; // eax
  char v20; // al
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rbp
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  void *v35; // r12
  __int64 v36; // r13
  unsigned __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rsi
  int v46; // eax
  char v47; // dl
  __int64 v48; // rcx
  char *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // ebx
  __int64 v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rdx
  int **v59; // rdi
  int v60; // edi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbp
  __int64 v68; // rax
  int v69; // r12d
  __int64 v70; // r14
  int v71; // eax
  int v72; // r13d
  char v73; // al
  int v74; // ecx
  char v75; // al
  __int64 v76; // r8
  int v77; // r9d
  size_t v78; // rbp
  _DWORD *v79; // rcx
  int v80; // eax
  __m128i v81; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 *v82; // [rsp+10h] [rbp-A8h]
  unsigned int v83; // [rsp+1Ch] [rbp-9Ch]
  __int64 v84; // [rsp+20h] [rbp-98h]
  __int64 v85; // [rsp+28h] [rbp-90h]
  int v86; // [rsp+3Ch] [rbp-7Ch] BYREF
  __int64 v87; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 *v88; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v89; // [rsp+50h] [rbp-68h] BYREF
  __int64 v90; // [rsp+58h] [rbp-60h] BYREF
  __int64 v91[11]; // [rsp+60h] [rbp-58h] BYREF

  v91[3] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 32);
  switch ( *(_DWORD *)v5 )
  {
    case 0xB:
      v46 = *(_DWORD *)(v5 + 68);
      v47 = *(_BYTE *)(v5 + 32);
      v48 = (unsigned int)(2 * v46);
      if ( (_DWORD)v48 != *(_DWORD *)(v5 + 36) )
      {
        if ( v47 != 4 )
          return 0;
        v49 = *(char **)(v5 + 40);
        v50 = *(unsigned int *)v49;
LABEL_56:
        if ( (_DWORD)v50 == 8 && v46 == *((_DWORD *)v49 + 9) )
        {
          *(_DWORD *)v5 = 24;
          sub_123A40((__int64)v91, (unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 32LL), v50, v48);
          sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)v91);
          v51 = *(_QWORD *)(a1 + 32);
          v52 = 8 * *(_DWORD *)(v51 + 36) - 1;
          sub_120A10(v51 + 48, *(unsigned __int64 **)(a1 + 40), v52, 1, *(_QWORD *)(v51 + 24), 0);
          v53 = *(_QWORD *)(a1 + 32);
          if ( *(_BYTE *)(v53 + 32) == 4 )
            sub_151C80((int *)v53, v52);
          sub_11CDA0((__int64)v91);
        }
        return 0;
      }
      if ( v47 != 4 )
        return 0;
      v49 = *(char **)(v5 + 40);
      v50 = *(unsigned int *)v49;
      if ( (_DWORD)v50 != 14 )
        goto LABEL_56;
      v66 = sub_11C8A0(*(_QWORD *)(v5 + 40), nullptr);
      v67 = v66;
      if ( v66 )
      {
        v68 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v66 + 8) + 16LL), *(_DWORD *)(v66 + 4), 0);
        if ( (v68 & (v68 - 1)) == 0 )
        {
          v69 = 8 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) - log2ceil();
          v70 = **(_QWORD **)(v67 + 8);
          if ( v49 + 48 != (char *)v67 )
            sub_11CA10(v49 + 32, v49 + 48);
          sub_120A10((__int64)(v49 + 48), *(unsigned __int64 **)(a1 + 40), v69, 1, v70, 0);
          *(_DWORD *)v49 = 23;
          **(_DWORD **)(a1 + 32) = 10;
        }
      }
      return 0;
    case 0xE:
      if ( *(_DWORD *)(v5 + 36) > *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) )
        return 0;
      v54 = sub_11C8A0(*(_QWORD *)(a1 + 32), &v87);
      if ( !v54 )
        return 0;
      v55 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v54 + 8) + 16LL), *(_DWORD *)(v54 + 4), 0);
      if ( v55 <= 0x20 || (v55 & (v55 - 1)) != 0 )
        return 0;
      v56 = log2ceil();
      v57 = v56;
      if ( v56 > 0 )
      {
        v58 = *(_QWORD *)(a1 + 32);
        if ( v58 + 32 != v87 )
        {
          sub_11CA10((char *)(v58 + 32), (char *)(v58 + 48));
          v58 = *(_QWORD *)(a1 + 32);
        }
        sub_120A10(v58 + 48, *(unsigned __int64 **)(a1 + 40), v57, 1, -1, 0);
        **(_DWORD **)(a1 + 32) = 22;
        return 0;
      }
      if ( !under_debugger )
        sub_383060(0xC502u, *(double *)a3.m128i_i64);
      goto LABEL_119;
    case 0x14:
    case 0x17:
    case 0x18:
      v10 = *(_QWORD *)(a1 + 16);
      v11 = *(_DWORD *)(v5 + 36);
      v88 = (unsigned __int8 *)(v5 + 32);
      v12 = *(_DWORD *)v5 == 20;
      v13 = *(_QWORD *)(v10 + 480);
      v81.m128i_i32[0] = v11;
      v82 = *(unsigned __int64 **)(v13 + 112);
      if ( !v12 )
      {
        if ( !(unsigned __int8)sub_152630(v5, &v86) )
          goto LABEL_70;
        LODWORD(v84) = v86 & 7;
        if ( (v86 & 7) != 0 )
          goto LABEL_70;
        if ( *(_BYTE *)(v5 + 32) == 4 )
        {
          v79 = *(_DWORD **)(v5 + 40);
          if ( (unsigned int)(*v79 - 8) <= 1 )
            v81.m128i_i32[0] = v79[9];
        }
        LODWORD(v85) = v86 / -8;
        v83 = v81.m128i_i32[0] - v86 / 8;
        if ( !sub_11CA80(v83) )
          goto LABEL_70;
        v14 = v85;
        if ( *(_BYTE *)(v5 + 32) != 4 )
          goto LABEL_22;
        v15 = *(_QWORD *)(v5 + 40);
        v16 = *(_DWORD *)v15;
        if ( (unsigned int)(*(_DWORD *)v15 - 8) <= 1 )
        {
          v86 = 0;
          v19 = v83;
          v88 = (unsigned __int8 *)(v15 + 32);
        }
        else
        {
          if ( v16 == 22 )
          {
            v84 = *(_QWORD *)(v5 + 40);
            if ( !(unsigned __int8)sub_152630(v15, &v86) )
              goto LABEL_70;
            v14 = v85;
            v88 = (unsigned __int8 *)(v84 + 32);
          }
          else
          {
            if ( v16 != 14 )
              goto LABEL_70;
            LODWORD(v84) = v85;
            v17 = sub_11C8A0(v15, &v88);
            v14 = v85;
            if ( v17 )
            {
              v18 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 16LL), *(_DWORD *)(v17 + 4), 0);
              v14 = v84;
              if ( (v18 & (v18 - 1)) == 0 )
              {
                v80 = log2ceil();
                v14 = v84;
                v86 = v80;
              }
            }
          }
          if ( (v86 & 7) != 0 )
            goto LABEL_70;
          LODWORD(v84) = v86 / 8;
          v19 = v83 + v86 / 8;
        }
        if ( v81.m128i_i32[0] >= v19 )
        {
LABEL_22:
          v81.m128i_i32[0] = v14;
          v20 = sub_11CC50(v88, v13, 0, *(double *)a3.m128i_i64);
          v21 = -(v84 + v81.m128i_i32[0]);
          if ( v20 )
            v21 = v84;
          LODWORD(v84) = v21;
          goto LABEL_25;
        }
LABEL_70:
        v59 = *(int ***)(a1 + 32);
        if ( *(_DWORD *)v59 == 20 )
        {
          if ( (unsigned __int8)sub_11E2C0(v59, &v89, &v90, 1) )
          {
            v60 = v89 + v90;
            if ( (int)v89 + (int)v90 < *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL) )
            {
              LODWORD(v90) = v89 + v90;
              if ( sub_11CA80(v60) )
              {
                sub_123A40((__int64)v91, (unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 64LL), v61, v62);
                if ( (unsigned __int8)sub_1221A0(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v90, 273, 1) )
                {
                  sub_12B6F0(*(_QWORD *)(a1 + 32), *(unsigned __int64 **)(a1 + 40), 9, -1, 1, a3);
                  sub_125180((unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 64LL), (unsigned __int8 *)v91);
                  v63 = *(_QWORD *)(a1 + 16);
                  v64 = *(_DWORD *)(v63 + 24);
                  BYTE1(v64) &= ~2u;
                  LOBYTE(v64) = v64 | 0x80;
                  *(_DWORD *)(v63 + 24) = v64;
                  v65 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
                  if ( v65 )
                    *(_DWORD *)(v65 + 48) = 63;
                  *(_BYTE *)(a1 + 48) = 1;
                }
                sub_11CDA0((__int64)v91);
              }
            }
          }
        }
        return 0;
      }
      if ( !(unsigned __int8)sub_11FD80((char *)(v5 + 48), v91, 0) )
        goto LABEL_70;
      if ( (v91[0] & (v91[0] + 1)) != 0 )
        goto LABEL_70;
      v71 = bitcount();
      v86 = v71;
      LODWORD(v84) = v71 & 7;
      if ( (v71 & 7) != 0 )
        goto LABEL_70;
      v72 = v71 / 8;
      v12 = *(_BYTE *)(v5 + 32) == 4;
      v83 = v71 / 8;
      if ( v12 && (unsigned int)(**(_DWORD **)(v5 + 40) - 23) <= 1 )
      {
        v85 = *(_QWORD *)(v5 + 40);
        if ( !(unsigned __int8)sub_152630(v85, &v86) || (v86 & 7) != 0 )
          goto LABEL_70;
        LODWORD(v84) = v86 / 8;
        if ( v72 > v81.m128i_i32[0] - v86 / 8 )
        {
          if ( *(_DWORD *)v85 == 24 )
            goto LABEL_70;
          v83 = v81.m128i_i32[0] - v86 / 8;
        }
        v88 = (unsigned __int8 *)(v85 + 32);
      }
      v73 = sub_11CC50(v88, v13, 0, *(double *)a3.m128i_i64);
      v74 = v81.m128i_i32[0] - (v84 + v83);
      if ( !v73 )
        v74 = v84;
      LODWORD(v84) = v74;
LABEL_25:
      if ( !sub_11CA80(v83) )
        goto LABEL_70;
      v89 = 0;
      v90 = 0;
      if ( (unsigned __int8)sub_A8840(*(_QWORD *)(v10 + 64), (char *)v88, &v90, &v89, 0, *(double *)a3.m128i_i64) )
        goto LABEL_33;
      v91[0] = 0;
      v91[1] = 0;
      if ( (*v88 & 0xFB) != 1 )
        goto LABEL_69;
      if ( !(unsigned __int8)sub_1C5030((char *)v88, (__int64)v91) )
      {
        if ( !under_debugger )
          sub_383060(0xCAA7u, *(double *)a3.m128i_i64);
LABEL_119:
        BUG();
      }
      v22 = sub_1F06C0(
              (__int64 *)(*(_QWORD *)(v10 + 64) + 432LL),
              (int *)v91,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 64) + 1504LL) + 80LL),
              -1);
      if ( v22 == -1 )
      {
LABEL_69:
        cleanup_argloc();
        clear_tinfo_t();
        goto LABEL_70;
      }
      v23 = *(_QWORD *)(*(_QWORD *)(v10 + 64) + 432LL) + 104LL * v22;
      copy_tinfo_t();
      v24 = *(_DWORD *)(v23 + 24);
      if ( (v24 & 0x100) != 0 && (v24 & 2) != 0 && !(unsigned __int8)sub_1C3F00() )
      {
        cleanup_argloc();
        goto LABEL_34;
      }
      cleanup_argloc();
LABEL_33:
      if ( (get_tinfo_property() & 0x2F) != 0xD && (get_tinfo_property() & 0xF) != 0xB )
        goto LABEL_108;
LABEL_34:
      sub_123A40((__int64)v91, v88, v25, v26);
      if ( !(unsigned __int8)sub_126F10((int *)v91, v82, v84, v27, *(double *)a3.m128i_i64)
        || v83 != HIDWORD(v91[0]) && !(unsigned __int8)sub_1274C0((unsigned __int8 *)v91, v82, v83, 0, a3) )
      {
        sub_11CDA0((__int64)v91);
LABEL_108:
        clear_tinfo_t();
        goto LABEL_70;
      }
      sub_11CA10((char *)(v5 + 32), (char *)v91);
      sub_11CDA0(v5 + 48);
      v28 = 4;
      if ( *(_DWORD *)(v5 + 36) != *(_DWORD *)(v5 + 68) )
        v28 = (*(_DWORD *)v5 != 24) + 8;
      *(_DWORD *)v5 = v28;
      sub_11CDA0((__int64)v91);
      clear_tinfo_t();
      v29 = *(_QWORD *)(a1 + 16);
      v30 = *(_DWORD *)(v29 + 24);
      BYTE1(v30) &= ~2u;
      LOBYTE(v30) = v30 | 0x80;
      *(_DWORD *)(v29 + 24) = v30;
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
      if ( v31 )
        *(_DWORD *)(v31 + 48) = 63;
LABEL_5:
      *(_BYTE *)(a1 + 48) = 1;
      return 0;
    case 0x19:
      if ( !(unsigned __int8)sub_11FD80((char *)(v5 + 48), v91, 1) || v91[0] != -1 )
        return 0;
      **(_DWORD **)(a1 + 32) = 32;
      *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 16LL) = 0;
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_DWORD *)(v7 + 24);
      BYTE1(v8) &= ~2u;
      LOBYTE(v8) = v8 | 0x80;
      *(_DWORD *)(v7 + 24) = v8;
      goto LABEL_5;
    case 0x35:
      if ( (unsigned __int8)sub_1C1900(*(_QWORD **)(v5 + 56), *(double *)a3.m128i_i64, a4, a5) )
      {
        v34 = *(_QWORD *)(a1 + 16);
        v35 = nullptr;
        v36 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL);
        v37 = *(_QWORD *)(v36 + 32);
        v38 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
        if ( v37 )
        {
          v78 = 4 * v37;
          v81 = v38;
          v35 = (void *)qalloc_or_throw(4 * v37, a2, v32, v33);
          memcpy(v35, *(const void **)(v36 + 24), v78);
          v38 = _mm_load_si128(&v81);
        }
        v39 = *(_QWORD *)(v34 + 368);
        if ( v39 )
        {
          *(_QWORD *)(v34 + 376) = 0;
          v81 = v38;
          qfree(v39);
          v38 = _mm_load_si128(&v81);
        }
        *(_QWORD *)(v34 + 368) = v35;
        *(__m128i *)(v34 + 376) = v38;
      }
      return 0;
    case 0x36:
      v40 = *(_QWORD *)(a1 + 40);
      if ( *(_BYTE *)(v5 + 48) != 4 )
        goto LABEL_48;
      v75 = sub_1205A0(*(_BYTE **)(v5 + 56), v40, 0);
      v5 = *(_QWORD *)(a1 + 32);
      if ( !v75 )
        goto LABEL_94;
      if ( (unsigned __int8)sub_155CD0(*(_QWORD *)(a1 + 16), *(_BYTE **)(a1 + 24), v5 + 48, 0, v76, v77) )
        goto LABEL_51;
      v5 = *(_QWORD *)(a1 + 32);
LABEL_94:
      v40 = *(_QWORD *)(a1 + 40);
LABEL_48:
      if ( *(_BYTE *)(v5 + 64) == 4
        && (unsigned __int8)sub_1205A0(*(_BYTE **)(v5 + 72), v40, 0)
        && (unsigned __int8)sub_155CD0(
                              *(_QWORD *)(a1 + 16),
                              *(_BYTE **)(a1 + 24),
                              *(_QWORD *)(a1 + 32) + 64LL,
                              0,
                              v41,
                              v42) )
      {
LABEL_51:
        v43 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(a1 + 48) = 1;
        v44 = *(_DWORD *)(v43 + 24);
        BYTE1(v44) &= ~2u;
        LOBYTE(v44) = v44 | 0x80;
        *(_DWORD *)(v43 + 24) = v44;
        v45 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( v45 )
        {
          sub_167810(*(_QWORD *)(a1 + 16), v45, 6);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 4LL) |= 0x20000u;
        }
      }
      return 0;
    default:
      return 0;
  }
}

