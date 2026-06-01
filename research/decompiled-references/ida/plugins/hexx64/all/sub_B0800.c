__int64 __fastcall sub_B0800(
        __int128 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        double a6,
        __int64 a7,
        int a8)
{
  int v8; // esi
  __int64 v9; // rax
  __int64 v11; // r14
  bool v12; // zf
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r14
  __int64 v20; // r13
  int v21; // ecx
  __m128i *v22; // rbx
  int v23; // esi
  int v24; // ecx
  __int64 v25; // r13
  __int64 v26; // rax
  char v27; // al
  char v28; // r9
  char v29; // al
  char v30; // r9
  char v31; // al
  char v32; // al
  int v33; // ecx
  __int64 v34; // rdx
  char v35; // al
  char v36; // al
  char v37; // al
  char v38; // al
  bool v39; // al
  char v40; // al
  __int64 v41; // r11
  char v42; // al
  char v43; // al
  int v44; // edx
  __int64 v45; // rsi
  char v46; // al
  unsigned __int64 *v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rdx
  _QWORD *v53; // rax
  unsigned __int8 *v54; // rsi
  unsigned __int8 *v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rsi
  char v59; // al
  int v60; // eax
  char v61; // al
  char v62; // al
  __int64 v63; // [rsp+8h] [rbp-D8h]
  __int64 v64; // [rsp+10h] [rbp-D0h]
  char v65; // [rsp+10h] [rbp-D0h]
  __int64 v66; // [rsp+10h] [rbp-D0h]
  char v67; // [rsp+10h] [rbp-D0h]
  unsigned __int8 *v68; // [rsp+10h] [rbp-D0h]
  __int64 v69; // [rsp+10h] [rbp-D0h]
  _DWORD *v70; // [rsp+18h] [rbp-C8h]
  __int64 v71; // [rsp+18h] [rbp-C8h]
  unsigned __int8 *v72; // [rsp+18h] [rbp-C8h]
  char v73; // [rsp+18h] [rbp-C8h]
  unsigned __int8 *v74; // [rsp+18h] [rbp-C8h]
  __int64 v75; // [rsp+18h] [rbp-C8h]
  unsigned __int8 *v76; // [rsp+18h] [rbp-C8h]
  __int64 v77; // [rsp+18h] [rbp-C8h]
  char v78; // [rsp+18h] [rbp-C8h]
  unsigned __int64 *v79; // [rsp+18h] [rbp-C8h]
  __int64 v80; // [rsp+18h] [rbp-C8h]
  _DWORD *v81; // [rsp+18h] [rbp-C8h]
  char v82; // [rsp+20h] [rbp-C0h]
  __int64 v83; // [rsp+20h] [rbp-C0h]
  _DWORD *v84; // [rsp+20h] [rbp-C0h]
  __int64 v85; // [rsp+20h] [rbp-C0h]
  __int64 v86; // [rsp+20h] [rbp-C0h]
  __int64 v87; // [rsp+20h] [rbp-C0h]
  char v88; // [rsp+20h] [rbp-C0h]
  unsigned __int64 *v89; // [rsp+20h] [rbp-C0h]
  __int64 v90; // [rsp+20h] [rbp-C0h]
  char v91; // [rsp+20h] [rbp-C0h]
  __int64 v92; // [rsp+20h] [rbp-C0h]
  __int64 v93; // [rsp+20h] [rbp-C0h]
  __int64 v94; // [rsp+28h] [rbp-B8h]
  __int64 v96; // [rsp+30h] [rbp-B0h]
  __int64 v97; // [rsp+30h] [rbp-B0h]
  __int64 v98; // [rsp+38h] [rbp-A8h]
  __int64 v99; // [rsp+38h] [rbp-A8h]
  char v100; // [rsp+46h] [rbp-9Ah]
  char v101; // [rsp+46h] [rbp-9Ah]
  unsigned __int8 v102; // [rsp+47h] [rbp-99h]
  int v104; // [rsp+54h] [rbp-8Ch] BYREF
  int v105; // [rsp+58h] [rbp-88h] BYREF
  int v106; // [rsp+5Ch] [rbp-84h] BYREF
  __int64 v107; // [rsp+60h] [rbp-80h] BYREF
  unsigned __int8 *v108; // [rsp+68h] [rbp-78h] BYREF
  unsigned __int64 v109; // [rsp+70h] [rbp-70h] BYREF
  _DWORD *v110; // [rsp+78h] [rbp-68h]
  unsigned __int64 *v111[2]; // [rsp+80h] [rbp-60h] BYREF
  unsigned __int64 *v112; // [rsp+90h] [rbp-50h] BYREF
  __int128 v113; // [rsp+98h] [rbp-48h]
  unsigned __int64 v114; // [rsp+A8h] [rbp-38h]

  v94 = *((_QWORD *)&a1 + 1);
  v8 = *(_DWORD *)(a4 + 4);
  v114 = __readfsqword(0x28u);
  if ( v8 != *(_DWORD *)(a7 + 4) )
  {
    if ( !under_debugger )
      sub_383060(0xC542u, a6);
    BUG();
  }
  v9 = *(_QWORD *)(a1 + 480);
  v11 = a5;
  v12 = *(_BYTE *)a7 == 2;
  v110 = nullptr;
  v98 = *(_QWORD *)(v9 + 112);
  v109 = 0xFFFFFFFF00000000LL;
  if ( v12 )
  {
    if ( *(_BYTE *)a4 == 2 && (unsigned __int64)v8 <= 7 )
    {
      v19 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 16LL), v8, 0);
      v20 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a7 + 8) + 16LL), *(_DWORD *)(a7 + 4), 0);
      sub_125180((__int64)&v109, (unsigned __int8 *)a4);
      sub_11CA10((char *)a2, (char *)&v109);
      v21 = *(_DWORD *)(a4 + 4);
      v22 = *(__m128i **)(a2 + 8);
      v23 = 2 * v21;
      v24 = (16 * v21) >> 1;
      *(_DWORD *)(a2 + 4) = v23;
      v25 = v20 << v24;
      if ( (unsigned __int64)v24 < 0x40 )
        v19 += v25;
      v26 = sub_32ABC0(v19, v23, 0);
      v22[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
      goto LABEL_15;
    }
    if ( (unsigned __int8)sub_11FD80((char *)a7, v111, 0) && !v111[0] )
    {
      sub_125180((__int64)&v109, (unsigned __int8 *)a4);
      sub_11CA10((char *)a2, (char *)&v109);
      v16 = -1;
      if ( v11 )
        v16 = *(_QWORD *)(v11 + 24);
      sub_1207E0((char *)a2, v98, 9, v16, 2 * *(_DWORD *)(a4 + 4));
      goto LABEL_15;
    }
  }
  v102 = sub_12CF30(*(_QWORD *)(a1 + 64), a4, (unsigned __int8 *)a7, a2, (a8 & 4) == 0, a5);
  if ( v102 )
  {
LABEL_15:
    v102 = 1;
    goto LABEL_9;
  }
  if ( (a8 & 1) == 0 )
  {
    *((_QWORD *)&a1 + 1) = a7;
    v107 = v11;
    v14 = sub_129440(a1, (__int64)&v107, 0);
    v15 = v14;
    if ( v14 )
    {
      switch ( *(_DWORD *)v14 )
      {
        case 4:
          if ( *(_BYTE *)(v14 + 64) == 14 )
            goto LABEL_16;
          if ( *(_DWORD *)(v14 + 68) != 2 * *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v87 = v14;
          v76 = (unsigned __int8 *)(v14 + 64);
          v37 = sub_1301F0((const __m128i *)a1, v11, a7, v107, v14 + 64);
          v15 = v87;
          if ( !v37 )
            goto LABEL_16;
          v38 = sub_1321C0((const __m128i *)a1, (__int64)a3, a4, v107, v87 + 32);
          v15 = v87;
          if ( !v38 )
            goto LABEL_16;
          sub_125180((__int64)&v109, v76);
          v15 = v87;
          goto LABEL_42;
        case 5:
          v85 = v14;
          sub_125180((__int64)&v109, (unsigned __int8 *)a4);
          v36 = sub_98090((const __m128i *)a1, v107, v85, (__int64)a3, (__int64)&v109);
          goto LABEL_56;
        case 0xA:
          if ( *(_BYTE *)a7 != 4 )
            goto LABEL_16;
          if ( *(_BYTE *)(v14 + 32) != 4 )
            goto LABEL_16;
          if ( (unsigned int)(**(_DWORD **)(v14 + 40) - 23) > 1 )
            goto LABEL_16;
          v75 = v14;
          v86 = *(_QWORD *)(v14 + 40);
          v32 = sub_152630(v86, v111);
          v15 = v75;
          if ( !v32 )
            goto LABEL_16;
          v33 = 8 * *(_DWORD *)(a7 + 4) - LODWORD(v111[0]);
          if ( v33 <= 0 || v33 >= 8 * *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v34 = 0;
          if ( (unsigned __int64)v33 <= 0x3F )
            v34 = 1LL << v33;
          *(_DWORD *)v86 = 14;
          **(_DWORD **)(a7 + 8) = 11;
          sub_120A10(v86 + 48, v98, v34, *(_DWORD *)(v86 + 36), *(_QWORD *)(v86 + 24), 0);
          v35 = sub_B0800(a1, v94, (__int64)&v109, (__int64)a3, a4, v11, a7, a8);
          v15 = v75;
          v30 = v35;
          v82 = 0;
          goto LABEL_38;
        case 0xB:
          if ( *(_DWORD *)(v14 + 36) != 2 * *(_DWORD *)(a4 + 4) )
            goto LABEL_16;
          v64 = v14;
          v74 = (unsigned __int8 *)(v14 + 32);
          v82 = sub_1321C0((const __m128i *)a1, (__int64)a3, a4, v107, v14 + 32);
          v15 = v64;
          if ( !v82 )
            goto LABEL_16;
          v96 = v64;
          sub_125180((__int64)&v109, v74);
          goto LABEL_23;
        case 0xC:
          if ( *(_DWORD *)(v14 + 68) != *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v85 = v14;
          sub_125180((__int64)&v109, (unsigned __int8 *)a4);
          *((_QWORD *)&a1 + 1) = v107;
          v31 = sub_95E10(a1, v85, (__int64)a3, (__int64)&v109);
          v15 = v85;
          if ( !v31 )
          {
            v36 = sub_95B90((const __m128i *)a1, v107, v85, a3, (__int64)&v109);
LABEL_56:
            v15 = v85;
            if ( !v36 )
            {
LABEL_16:
              v82 = 0;
              goto LABEL_17;
            }
          }
LABEL_42:
          v82 = 0;
          goto LABEL_24;
        case 0x17:
          goto LABEL_33;
        case 0x18:
          v83 = v14;
          v72 = (unsigned __int8 *)(v14 + 32);
          v27 = sub_12EA80(v98, (const __m128i *)a1, v107, v14 + 32, (__int64)a3, a4, 0);
          v15 = v83;
          if ( !v27 )
            goto LABEL_33;
          v40 = sub_152630(v83, v111);
          v15 = v83;
          v28 = v40;
          if ( v40 )
          {
            if ( 8 * *(_DWORD *)(a4 + 4) - 1 == LODWORD(v111[0]) )
            {
              v65 = v40;
              sub_125180((__int64)&v109, v72);
              sub_1207E0((char *)&v109, v98, 8, *(_QWORD *)(v83 + 24), 2 * HIDWORD(v109));
              v15 = v83;
              v28 = v65;
            }
            else
            {
LABEL_33:
              v28 = 0;
            }
          }
          v73 = v28;
          v84 = (_DWORD *)v15;
          v29 = sub_152630(v15, &v104);
          v15 = (__int64)v84;
          v30 = v73;
          if ( !v29 || v104 <= 0 || *(_BYTE *)a4 != 4 )
            goto LABEL_37;
          v41 = *(_QWORD *)(a4 + 8);
          if ( *(_DWORD *)v41 == 10 )
          {
            if ( *(_BYTE *)(v41 + 32) == 4 )
            {
              v57 = *(_QWORD *)(v41 + 40);
              if ( *(_DWORD *)v57 == 23
                || *(_DWORD *)v57 == 24 && v104 <= 8LL * (*(_DWORD *)(v41 + 36) - *(_DWORD *)(a4 + 4)) )
              {
                v58 = (__int64)(v84 + 12);
                v101 = v73;
                v69 = *(_QWORD *)(a4 + 8);
                v81 = v84;
                v93 = *(_QWORD *)(v41 + 40);
                v59 = sub_125B60((unsigned __int8 *)(v57 + 48), v58, 0);
                v15 = (__int64)v81;
                v30 = v101;
                if ( v59 )
                {
                  v60 = *(_DWORD *)(a4 + 4);
                  if ( v81[17] == v60 && *(_DWORD *)(v93 + 68) == 2 * v60 )
                  {
                    v61 = sub_1301F0((const __m128i *)a1, v107, (__int64)(v81 + 8), (__int64)a3, v93 + 32);
                    v15 = (__int64)v81;
                    v30 = v101;
                    if ( v61 )
                    {
                      sub_125180((__int64)&v109, (unsigned __int8 *)(v69 + 32));
                      v15 = (__int64)v81;
                      v82 = v101;
                      *v110 = *v81;
                      goto LABEL_24;
                    }
                  }
                }
              }
            }
          }
          else if ( *(_DWORD *)v41 == 19 )
          {
            v77 = (__int64)v84;
            v88 = v30;
            v42 = sub_B0740(&v108, &v105, v111, *(_QWORD *)(a4 + 8));
            v30 = v88;
            v15 = v77;
            if ( v42 )
            {
              if ( *(_DWORD *)v111[0] == 23 )
              {
                v66 = v77;
                v78 = v88;
                v89 = v111[0];
                v43 = sub_152630((__int64)v111[0], &v106);
                v30 = v78;
                v15 = v66;
                if ( v43 )
                {
                  if ( v106 == v104 )
                  {
                    v44 = *((_DWORD *)v108 + 1);
                    if ( 8 * v44 - v104 == v105 && v44 == *((_DWORD *)v89 + 9) )
                    {
                      v45 = v66 + 32;
                      v67 = v78;
                      v79 = v89;
                      v90 = v15;
                      v46 = sub_125B60(v108, v45, 0);
                      v15 = v90;
                      v47 = v79;
                      v30 = v67;
                      if ( v46 )
                      {
                        v80 = v90;
                        v48 = (__int64)(v47 + 4);
                        v91 = v67;
                        v68 = (unsigned __int8 *)(v47 + 4);
                        v100 = sub_157240(a1, (__int64)(v47 + 4), (__int64)v108);
                        v30 = v91;
                        v15 = v80;
                        if ( v100 )
                        {
                          v92 = j__qalloc_or_throw(80, v48, v49, v50);
                          v51 = *(_QWORD *)(v80 + 24);
                          *(_QWORD *)(v92 + 32) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v92 + 48) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v92 + 64) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v92 + 40) = 0;
                          *(_QWORD *)(v92 + 56) = 0;
                          *(_QWORD *)(v92 + 72) = 0;
                          sub_330970(v92, v51);
                          *(_DWORD *)v92 = *(_DWORD *)v80;
                          v53 = (_QWORD *)j__qalloc_or_throw(32, v51, v52, v92);
                          v53[1] = 0;
                          *v53 = 0xFFFFFFFF00000000LL;
                          v54 = v108;
                          v53[2] = 0xFFFFFFFF00000000LL;
                          v53[3] = 0;
                          v63 = (__int64)v53;
                          sub_125180((__int64)(v53 + 2), v54);
                          sub_125180(v63, v68);
                          v55 = v108;
                          *(_BYTE *)(v92 + 32) = 14;
                          *(_QWORD *)(v92 + 40) = v63;
                          *(_DWORD *)(v92 + 36) = 2 * *((_DWORD *)v55 + 1);
                          sub_125180(v92 + 48, (unsigned __int8 *)(v80 + 48));
                          *(_DWORD *)(v92 + 68) = *(_DWORD *)(v92 + 36);
                          sub_11CDA0((__int64)&v109);
                          LOBYTE(v109) = 4;
                          v30 = v100;
                          v15 = v80;
                          v56 = *(_DWORD *)(v92 + 68);
                          v110 = (_DWORD *)v92;
                          HIDWORD(v109) = v56;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_37:
          v82 = v30;
LABEL_38:
          if ( !v30 )
          {
LABEL_17:
            if ( *(_BYTE *)a4 != 4 )
              break;
            v17 = *(_QWORD *)(a4 + 8);
            if ( *(_DWORD *)v17 != 10 || *(_DWORD *)(v17 + 36) != 2 * *(_DWORD *)(a4 + 4) )
              break;
            v70 = (_DWORD *)v15;
            sub_125180((__int64)&v109, (unsigned __int8 *)(v17 + 32));
            v15 = (__int64)v70;
            if ( *v70 != 11
              || (v62 = sub_12EA80(v98, (const __m128i *)a1, v107, (__int64)(v70 + 8), (__int64)a3, (__int64)&v109, 0),
                  v15 = (__int64)v70,
                  !v62) )
            {
              v71 = v15;
              sub_1279B0((unsigned __int64)&v109, v98, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 24LL), *(_DWORD *)(a7 + 4));
              if ( !(unsigned __int8)sub_12EA80(v98, (const __m128i *)a1, v11, a7, (__int64)a3, (__int64)&v109, 2) )
                break;
              v96 = v71;
              sub_125180((__int64)&v109, (unsigned __int8 *)(*(_QWORD *)(a4 + 8) + 32LL));
LABEL_23:
              v15 = v96;
            }
          }
LABEL_24:
          *((_QWORD *)&a1 + 1) = v111;
          v113 = 0;
          v97 = v15;
          v111[0] = nullptr;
          v111[1] = nullptr;
          v112 = nullptr;
          sub_123EA0(a1, (__int64)&v109, 1, 0xFFFF0000);
          v18 = v97;
          if ( (a8 & 2) == 0 )
            goto LABEL_65;
          if ( !(unsigned __int8)sub_64780(v111, (_QWORD *)(v98 + 104))
            && !(unsigned __int8)sub_318470(&v112, v98 + 120) )
          {
            v18 = v97;
LABEL_65:
            if ( v11 )
            {
              v99 = v18;
              v39 = sub_122240(v94, *(_QWORD *)(v11 + 8), 0);
              v18 = v99;
              if ( v39 )
                v11 = v94;
            }
            if ( !v82 )
              v18 = *(_QWORD *)(v18 + 8);
            if ( !sub_A9AA0(a1, v111, v18, v11, 1u) )
            {
              sub_11CA10((char *)a2, (char *)&v109);
              v102 = 1;
            }
          }
          if ( v112 )
          {
            *(_QWORD *)&v113 = 0;
            qfree((__int64)v112);
          }
          qfree((__int64)v111[0]);
          break;
        default:
          goto LABEL_16;
      }
    }
  }
LABEL_9:
  sub_11CDA0((__int64)&v109);
  return v102;
}

