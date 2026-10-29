__int64 __fastcall sub_AA140(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // r14
  bool v12; // zf
  __int64 v14; // rax
  _DWORD *v15; // r10
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // r10
  __int64 v19; // r14
  __int64 v20; // r13
  int v21; // ecx
  __m128i *v22; // rbx
  __int64 v23; // rsi
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
  char v39; // al
  char v40; // al
  __int64 v41; // r11
  char v42; // al
  char v43; // al
  int v44; // edx
  _DWORD *v45; // rsi
  char v46; // al
  __int64 v47; // r8
  __int64 v48; // rsi
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // eax
  _DWORD *v52; // rcx
  _DWORD *v53; // rsi
  char v54; // al
  int v55; // eax
  char v56; // al
  char v57; // al
  _QWORD *v58; // [rsp+8h] [rbp-D8h]
  __int64 v59; // [rsp+10h] [rbp-D0h]
  char v60; // [rsp+10h] [rbp-D0h]
  _DWORD *v61; // [rsp+10h] [rbp-D0h]
  char v62; // [rsp+10h] [rbp-D0h]
  _DWORD *v63; // [rsp+18h] [rbp-C8h]
  _DWORD *v64; // [rsp+18h] [rbp-C8h]
  char v65; // [rsp+18h] [rbp-C8h]
  __int64 v66; // [rsp+18h] [rbp-C8h]
  _DWORD *v67; // [rsp+18h] [rbp-C8h]
  char v68; // [rsp+18h] [rbp-C8h]
  __int64 v69; // [rsp+18h] [rbp-C8h]
  _DWORD *v70; // [rsp+18h] [rbp-C8h]
  _DWORD *v71; // [rsp+18h] [rbp-C8h]
  char v72; // [rsp+20h] [rbp-C0h]
  __int64 v73; // [rsp+20h] [rbp-C0h]
  _DWORD *v74; // [rsp+20h] [rbp-C0h]
  __int64 v75; // [rsp+20h] [rbp-C0h]
  __int64 v76; // [rsp+20h] [rbp-C0h]
  __int64 v77; // [rsp+20h] [rbp-C0h]
  char v78; // [rsp+20h] [rbp-C0h]
  __int64 v79; // [rsp+20h] [rbp-C0h]
  _DWORD *v80; // [rsp+20h] [rbp-C0h]
  __int64 v81; // [rsp+20h] [rbp-C0h]
  __int64 v82; // [rsp+20h] [rbp-C0h]
  _DWORD *v85; // [rsp+30h] [rbp-B0h]
  __int64 v86; // [rsp+30h] [rbp-B0h]
  __int64 v87; // [rsp+38h] [rbp-A8h]
  __int64 v88; // [rsp+38h] [rbp-A8h]
  char v89; // [rsp+46h] [rbp-9Ah]
  char v90; // [rsp+46h] [rbp-9Ah]
  unsigned __int8 v91; // [rsp+47h] [rbp-99h]
  int v93; // [rsp+54h] [rbp-8Ch] BYREF
  int v94; // [rsp+58h] [rbp-88h] BYREF
  int v95; // [rsp+5Ch] [rbp-84h] BYREF
  __int64 v96; // [rsp+60h] [rbp-80h] BYREF
  __int64 v97; // [rsp+68h] [rbp-78h] BYREF
  unsigned __int64 v98; // [rsp+70h] [rbp-70h] BYREF
  _DWORD *v99; // [rsp+78h] [rbp-68h]
  _QWORD v100[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 v101; // [rsp+90h] [rbp-50h] BYREF
  __int128 v102; // [rsp+98h] [rbp-48h]
  unsigned __int64 v103; // [rsp+A8h] [rbp-38h]

  v8 = *(unsigned int *)(a5 + 4);
  v103 = __readfsqword(0x28u);
  if ( (_DWORD)v8 != *(_DWORD *)(a7 + 4) )
  {
    if ( !under_debugger )
      sub_37B760(50498);
    BUG();
  }
  v9 = *(_QWORD *)(a1 + 480);
  v11 = a6;
  v12 = *(_BYTE *)a7 == 2;
  v99 = nullptr;
  v87 = *(_QWORD *)(v9 + 112);
  v98 = 0xFFFFFFFF00000000LL;
  if ( v12 )
  {
    if ( *(_BYTE *)a5 == 2 && (unsigned __int64)(int)v8 <= 7 )
    {
      v19 = sub_323690(*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL), v8, 0);
      v20 = sub_323690(*(_QWORD *)(*(_QWORD *)(a7 + 8) + 16LL), *(unsigned int *)(a7 + 4), 0);
      sub_11EAC0(&v98);
      sub_116350(a3, &v98);
      v21 = *(_DWORD *)(a5 + 4);
      v22 = *(__m128i **)(a3 + 8);
      v23 = (unsigned int)(2 * v21);
      v24 = (16 * v21) >> 1;
      *(_DWORD *)(a3 + 4) = v23;
      v25 = v20 << v24;
      if ( (unsigned __int64)v24 < 0x40 )
        v19 += v25;
      v26 = sub_323690(v19, v23, 0);
      v22[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
      goto LABEL_15;
    }
    if ( (unsigned __int8)sub_1196C0(a7, v100, 0) && !v100[0] )
    {
      sub_11EAC0(&v98);
      sub_116350(a3, &v98);
      v16 = -1;
      if ( v11 )
        v16 = *(_QWORD *)(v11 + 24);
      sub_11A120(a3, v87, 9, v16, (unsigned int)(2 * *(_DWORD *)(a5 + 4)));
      goto LABEL_15;
    }
  }
  v91 = sub_126870(*(_QWORD *)(a1 + 64), a5, a7, a3, (a8 & 4) == 0, a6);
  if ( v91 )
  {
LABEL_15:
    v91 = 1;
    goto LABEL_9;
  }
  if ( (a8 & 1) == 0 )
  {
    v96 = v11;
    v14 = sub_122D80(a1, a7, &v96, 0);
    v15 = (_DWORD *)v14;
    if ( v14 )
    {
      switch ( *(_DWORD *)v14 )
      {
        case 4:
          if ( *(_BYTE *)(v14 + 64) == 14 )
            goto LABEL_16;
          if ( *(_DWORD *)(v14 + 68) != 2 * *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v77 = v14;
          v37 = sub_129B30(a1, v11, a7, v96, v14 + 64);
          v15 = (_DWORD *)v77;
          if ( !v37 )
            goto LABEL_16;
          v38 = sub_12BB00(a1, a4, a5, v96, v77 + 32);
          v15 = (_DWORD *)v77;
          if ( !v38 )
            goto LABEL_16;
          sub_11EAC0(&v98);
          v15 = (_DWORD *)v77;
          goto LABEL_42;
        case 5:
          v75 = v14;
          sub_11EAC0(&v98);
          v36 = sub_919D0(a1, v96, v75, a4, (__int64)&v98);
          goto LABEL_56;
        case 0xA:
          if ( *(_BYTE *)a7 != 4 )
            goto LABEL_16;
          if ( *(_BYTE *)(v14 + 32) != 4 )
            goto LABEL_16;
          if ( (unsigned int)(**(_DWORD **)(v14 + 40) - 23) > 1 )
            goto LABEL_16;
          v66 = v14;
          v76 = *(_QWORD *)(v14 + 40);
          v32 = sub_14BF70(v76, v100);
          v15 = (_DWORD *)v66;
          if ( !v32 )
            goto LABEL_16;
          v33 = 8 * *(_DWORD *)(a7 + 4) - LODWORD(v100[0]);
          if ( v33 <= 0 || v33 >= 8 * *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v34 = 0;
          if ( (unsigned __int64)v33 <= 0x3F )
            v34 = 1LL << v33;
          *(_DWORD *)v76 = 14;
          **(_DWORD **)(a7 + 8) = 11;
          sub_11A350(v76 + 48, v87, v34, *(unsigned int *)(v76 + 36), *(_QWORD *)(v76 + 24), 0);
          v35 = sub_AA140(a1, a2, (unsigned int)&v98, a4, a5, v11, a7, a8);
          v15 = (_DWORD *)v66;
          v30 = v35;
          v72 = 0;
          goto LABEL_38;
        case 0xB:
          if ( *(_DWORD *)(v14 + 36) != 2 * *(_DWORD *)(a5 + 4) )
            goto LABEL_16;
          v59 = v14;
          v72 = sub_12BB00(a1, a4, a5, v96, v14 + 32);
          v15 = (_DWORD *)v59;
          if ( !v72 )
            goto LABEL_16;
          v85 = (_DWORD *)v59;
          sub_11EAC0(&v98);
          goto LABEL_23;
        case 0xC:
          if ( *(_DWORD *)(v14 + 68) != *(_DWORD *)(a7 + 4) )
            goto LABEL_16;
          v75 = v14;
          sub_11EAC0(&v98);
          v31 = sub_8F750(a1, v96, v75, a4, (__int64)&v98);
          v15 = (_DWORD *)v75;
          if ( !v31 )
          {
            v36 = sub_8F4D0(a1, v96, v75, a4, (__int64)&v98);
LABEL_56:
            v15 = (_DWORD *)v75;
            if ( !v36 )
            {
LABEL_16:
              v72 = 0;
              goto LABEL_17;
            }
          }
LABEL_42:
          v72 = 0;
          goto LABEL_24;
        case 0x17:
          goto LABEL_33;
        case 0x18:
          v73 = v14;
          v27 = sub_1283C0(v87, a1, v96, (int)v14 + 32, a4, a5, 0);
          v15 = (_DWORD *)v73;
          if ( !v27 )
            goto LABEL_33;
          v40 = sub_14BF70(v73, v100);
          v15 = (_DWORD *)v73;
          v28 = v40;
          if ( v40 )
          {
            if ( 8 * *(_DWORD *)(a5 + 4) - 1 == LODWORD(v100[0]) )
            {
              v60 = v40;
              sub_11EAC0(&v98);
              sub_11A120(&v98, v87, 8, *(_QWORD *)(v73 + 24), (unsigned int)(2 * HIDWORD(v98)));
              v15 = (_DWORD *)v73;
              v28 = v60;
            }
            else
            {
LABEL_33:
              v28 = 0;
            }
          }
          v65 = v28;
          v74 = v15;
          v29 = sub_14BF70(v15, &v93);
          v15 = v74;
          v30 = v65;
          if ( !v29 || v93 <= 0 || *(_BYTE *)a5 != 4 )
            goto LABEL_37;
          v41 = *(_QWORD *)(a5 + 8);
          if ( *(_DWORD *)v41 == 10 )
          {
            if ( *(_BYTE *)(v41 + 32) == 4 )
            {
              v52 = *(_DWORD **)(v41 + 40);
              if ( *v52 == 23 || *v52 == 24 && v93 <= 8LL * (*(_DWORD *)(v41 + 36) - *(_DWORD *)(a5 + 4)) )
              {
                v53 = v74 + 12;
                v90 = v65;
                v71 = v74;
                v82 = *(_QWORD *)(v41 + 40);
                v54 = sub_11F4A0(v52 + 12, v53, 0);
                v15 = v71;
                v30 = v90;
                if ( v54 )
                {
                  v55 = *(_DWORD *)(a5 + 4);
                  if ( v71[17] == v55 && *(_DWORD *)(v82 + 68) == 2 * v55 )
                  {
                    v56 = sub_129B30(a1, v96, v71 + 8, a4, v82 + 32);
                    v15 = v71;
                    v30 = v90;
                    if ( v56 )
                    {
                      sub_11EAC0(&v98);
                      v15 = v71;
                      v72 = v90;
                      *v99 = *v71;
                      goto LABEL_24;
                    }
                  }
                }
              }
            }
          }
          else if ( *(_DWORD *)v41 == 19 )
          {
            v67 = v74;
            v78 = v30;
            v42 = sub_AA080((__int64)&v97, &v94, v100, *(_QWORD *)(a5 + 8));
            v30 = v78;
            v15 = v67;
            if ( v42 )
            {
              if ( *(_DWORD *)v100[0] == 23 )
              {
                v61 = v67;
                v68 = v78;
                v79 = v100[0];
                v43 = sub_14BF70(v100[0], &v95);
                v30 = v68;
                v15 = v61;
                if ( v43 )
                {
                  if ( v95 == v93 )
                  {
                    v44 = *(_DWORD *)(v97 + 4);
                    if ( 8 * v44 - v93 == v94 && v44 == *(_DWORD *)(v79 + 36) )
                    {
                      v45 = v61 + 8;
                      v62 = v68;
                      v69 = v79;
                      v80 = v15;
                      v46 = sub_11F4A0(v97, v45, 0);
                      v15 = v80;
                      v47 = v69;
                      v30 = v62;
                      if ( v46 )
                      {
                        v70 = v80;
                        v89 = sub_150B80(a1, v47 + 32, v97);
                        v30 = v62;
                        v15 = v80;
                        if ( v89 )
                        {
                          v81 = j__qalloc_or_throw();
                          v48 = *((_QWORD *)v70 + 3);
                          *(_QWORD *)(v81 + 32) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v81 + 48) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v81 + 64) = 0xFFFFFFFF00000000LL;
                          *(_QWORD *)(v81 + 40) = 0;
                          *(_QWORD *)(v81 + 56) = 0;
                          *(_QWORD *)(v81 + 72) = 0;
                          sub_329320(v81, v48);
                          *(_DWORD *)v81 = *v70;
                          v49 = (_QWORD *)j__qalloc_or_throw();
                          v49[1] = 0;
                          *v49 = 0xFFFFFFFF00000000LL;
                          v49[2] = 0xFFFFFFFF00000000LL;
                          v49[3] = 0;
                          v58 = v49;
                          sub_11EAC0(v49 + 2);
                          sub_11EAC0(v58);
                          v50 = v97;
                          *(_BYTE *)(v81 + 32) = 14;
                          *(_QWORD *)(v81 + 40) = v58;
                          *(_DWORD *)(v81 + 36) = 2 * *(_DWORD *)(v50 + 4);
                          sub_11EAC0(v81 + 48);
                          *(_DWORD *)(v81 + 68) = *(_DWORD *)(v81 + 36);
                          sub_1166E0(&v98);
                          LOBYTE(v98) = 4;
                          v30 = v89;
                          v15 = v70;
                          v51 = *(_DWORD *)(v81 + 68);
                          v99 = (_DWORD *)v81;
                          HIDWORD(v98) = v51;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_37:
          v72 = v30;
LABEL_38:
          if ( !v30 )
          {
LABEL_17:
            if ( *(_BYTE *)a5 != 4 )
              break;
            v17 = *(_DWORD **)(a5 + 8);
            if ( *v17 != 10 || v17[9] != 2 * *(_DWORD *)(a5 + 4) )
              break;
            v63 = v15;
            sub_11EAC0(&v98);
            v15 = v63;
            if ( *v63 != 11
              || (v57 = sub_1283C0(v87, a1, v96, (int)v63 + 32, a4, (unsigned int)&v98, 0), v15 = v63, !v57) )
            {
              v64 = v15;
              sub_1212F0(&v98, v87, *(_QWORD *)(*(_QWORD *)(a5 + 8) + 24LL), *(unsigned int *)(a7 + 4));
              if ( !(unsigned __int8)sub_1283C0(v87, a1, v11, a7, a4, (unsigned int)&v98, 2) )
                break;
              v85 = v64;
              sub_11EAC0(&v98);
LABEL_23:
              v15 = v85;
            }
          }
LABEL_24:
          v102 = 0;
          v86 = (__int64)v15;
          v100[0] = 0;
          v100[1] = 0;
          v101 = 0;
          sub_11D7E0(a1, v100, &v98, 1, 4294901760LL);
          v18 = v86;
          if ( (a8 & 2) == 0 )
            goto LABEL_65;
          if ( !(unsigned __int8)sub_5E200(v100, (_QWORD *)(v87 + 104))
            && !(unsigned __int8)sub_3110F0(&v101, v87 + 120) )
          {
            v18 = v86;
LABEL_65:
            if ( v11 )
            {
              v88 = v18;
              v39 = sub_11BB80(a2, *(_QWORD *)(v11 + 8), 0);
              v18 = v88;
              if ( v39 )
                v11 = a2;
            }
            if ( !v72 )
              v18 = *(_QWORD *)(v18 + 8);
            if ( !sub_A33E0(a1, v100, v18, v11, 1u) )
            {
              sub_116350(a3, &v98);
              v91 = 1;
            }
          }
          if ( v101 )
          {
            *(_QWORD *)&v102 = 0;
            qfree();
          }
          qfree();
          break;
        default:
          goto LABEL_16;
      }
    }
  }
LABEL_9:
  sub_1166E0(&v98);
  return v91;
}

