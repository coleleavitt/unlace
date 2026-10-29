__int64 __fastcall sub_11720(
        __int64 *a1,
        unsigned __int8 *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int16 v13; // ax
  unsigned int v14; // eax
  char v15; // al
  unsigned __int16 v16; // ax
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // al
  __int64 v26; // rax
  char v27; // r13
  __int64 v28; // r8
  __int64 v29; // r9
  void (__fastcall *v30)(__int64 *, __int64); // rax
  __int64 v31; // r12
  unsigned __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rdx
  char v36; // al
  char v37; // al
  __int64 v38; // rsi
  double v39; // xmm0_8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  double v44; // xmm0_8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // r13
  _QWORD *v51; // rdx
  char v52; // r14
  int v53; // r12d
  char v54; // dl
  int v55; // r15d
  int v56; // r12d
  __int64 v57; // rax
  __int16 v58; // ax
  __int16 v59; // si
  __int64 v60; // rsi
  __int16 v61; // si
  unsigned int v62; // eax
  __int64 v63; // rsi
  __int64 v64; // r12
  char v65; // al
  void *v66; // rsi
  unsigned int v67; // eax
  __int16 v68; // ax
  __int64 v69; // rax
  __int16 v70; // [rsp+Ch] [rbp-9Ch]
  void *v71; // [rsp+10h] [rbp-98h] BYREF
  __int128 v72; // [rsp+18h] [rbp-90h]
  _BYTE v73[8]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v74; // [rsp+38h] [rbp-70h]
  _BYTE v75[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v76; // [rsp+68h] [rbp-40h]

  v7 = a2[1];
  v76 = __readfsqword(0x28u);
  switch ( (char)v7 )
  {
    case 0:
      return 0;
    case 1:
      goto LABEL_4;
    case 2:
      if ( (char)a2[32] <= 1 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
      v13 = *((_WORD *)a1 + 124);
      if ( v13 == 118 || v13 == 145 || !(unsigned int)sub_10E40(a1, a2) )
      {
        v14 = sub_11640(a1[77], (__int64)(a1 + 28), a2, 0);
        (*(void (__fastcall **)(__int64 *, unsigned __int8 *, _QWORD))(*a1 + 24))(a1, a2, v14);
      }
      v15 = a2[32];
      if ( v15 <= 1 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
        if ( (*(_BYTE *)(a1[79] + 4) & 1) != 0 )
        {
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 46);
          v63 = 119;
          if ( a2[32] )
            v63 = 108;
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, v63);
        }
      }
      else if ( v15 == 3 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 344LL),
          33);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
      }
      goto LABEL_5;
    case 3:
      if ( (*((_WORD *)a2 + 3) & 0x38) == 0x20 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
      v16 = *((_WORD *)a2 + 3) & 7 | 8;
      v17 = 8LL * v16;
      v18 = v16 == 15;
      v19 = 376;
      if ( !v18 )
        v19 = v17;
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + v19),
        33);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
      if ( (*((_WORD *)a2 + 3) & 0x38) == 0x18 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
      goto LABEL_28;
    case 4:
      v20 = a2[33];
      if ( (v20 & 0xC) != 0 )
      {
        (*(void (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, &unk_1661F, 0);
        v25 = a2[33];
        if ( v25 < 0 )
        {
          if ( (v25 & 0xC) != 0 )
            goto LABEL_34;
LABEL_101:
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
          v25 = a2[33];
          if ( (v25 & 0x20) == 0 )
            goto LABEL_35;
          goto LABEL_102;
        }
      }
      else if ( v20 < 0 )
      {
        goto LABEL_101;
      }
      v65 = is_off(a1[90], *a2);
      a3 = 0.0;
      v18 = *((_WORD *)a2 + 3) == 91;
      v71 = nullptr;
      v72 = 0;
      if ( v18 || (a2[33] & 0x33u) > 0x30 )
      {
        if ( !v65 )
        {
          if ( (unsigned int)sub_10E40(a1, a2) )
            goto LABEL_132;
          goto LABEL_142;
        }
      }
      else if ( !v65 )
      {
LABEL_142:
        v67 = sub_11640(a1[77], (__int64)(a1 + 28), a2, 0);
        (*(void (__fastcall **)(__int64 *, unsigned __int8 *, _QWORD))(*a1 + 24))(a1, a2, v67);
        goto LABEL_132;
      }
      if ( !(unsigned __int8)get_refinfo(v73, a1[30], *a2)
        || v74 == -1
        || !(unsigned int)get_offset_expression(
                            &v71,
                            a1[30],
                            *a2 | (2 * a2[33]) & 0x80u,
                            a1[30] + (char)a2[2],
                            *((_QWORD *)a2 + 2),
                            0) )
      {
        goto LABEL_142;
      }
      v66 = &unk_16EE8;
      if ( (_QWORD)v72 )
        v66 = v71;
      (*(void (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, v66, 0);
LABEL_132:
      if ( (a2[32] & 0x20) != 0 )
        (*(void (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, &unk_16EE9, 0);
      if ( v71 )
      {
        *(_QWORD *)&v72 = 0;
        qfree(v71);
      }
      v25 = a2[33];
      if ( (v25 & 0xC) == 0 )
        goto LABEL_101;
      v21 = v25 & 0x20;
      if ( v25 >= 0 )
      {
        if ( (_BYTE)v21 )
        {
LABEL_36:
          if ( (v25 & 4) == 0 )
          {
LABEL_38:
            if ( (v25 & 0x10) == 0 )
              goto LABEL_50;
            (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
LABEL_40:
            v26 = 8LL * (a2[32] & 0xF);
            if ( (~a2[32] & 0xF) == 0 )
              v26 = 376;
            (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
              a1,
              *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + v26),
              33);
            (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 46);
            (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 32))(a1, (a2[32] & 0x10) == 0 ? 108 : 119);
            v25 = a2[33];
            v27 = v25 & 3;
            if ( (v25 & 3) != 0 )
            {
              (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 9);
              v30 = *(void (__fastcall **)(__int64 *, __int64))(*a1 + 96);
              if ( (char *)v30 == (char *)sub_109F0 )
              {
                v31 = a1[4];
                if ( v31 )
                {
                  v32 = v31 + 1;
                  v33 = a1[4];
                  --v31;
                }
                else
                {
                  v33 = 1;
                  v32 = 2;
                }
                v34 = a1[3];
                if ( a1[5] < v32 )
                {
                  v69 = qvector_reserve(a1 + 3, v34, v32, 1, v28, v29);
                  a1[3] = v69;
                  v34 = v69;
                }
                a1[4] = v32;
                *(_BYTE *)(v34 + v31) = 42;
                *(_BYTE *)(a1[3] + v33) = 0;
              }
              else
              {
                v30(a1, 42);
              }
              (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 104))(a1, 1LL << v27, 10);
              (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 9);
              v25 = a2[33];
            }
LABEL_50:
            if ( (v25 & 8) == 0 )
            {
              if ( (v25 & 0x40) == 0 )
                goto LABEL_108;
LABEL_52:
              (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
              goto LABEL_106;
            }
LABEL_121:
            (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 93);
            if ( (a2[33] & 0x40) == 0 )
              goto LABEL_108;
            goto LABEL_52;
          }
LABEL_37:
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 93);
          v25 = a2[33];
          goto LABEL_38;
        }
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
LABEL_35:
        sub_10BE0(a1, *((unsigned __int16 *)a2 + 3), a3, v21, v22, v23, v24);
        v25 = a2[33];
        goto LABEL_36;
      }
LABEL_34:
      if ( (v25 & 0x20) == 0 )
        goto LABEL_35;
LABEL_102:
      if ( (v25 & 4) != 0 )
        goto LABEL_37;
      if ( (v25 & 0x10) != 0 )
        goto LABEL_40;
      if ( (v25 & 8) != 0 )
        goto LABEL_121;
      if ( (v25 & 0x40) == 0 )
        goto LABEL_108;
LABEL_106:
      v62 = sub_11640(a1[77], (__int64)(a1 + 28), a2, 1);
      (*(void (__fastcall **)(__int64 *, unsigned __int8 *, _QWORD))(*a1 + 24))(a1, a2, v62);
      if ( (a2[32] & 0x40) != 0 )
        (*(void (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, &unk_16EE9, 0);
LABEL_108:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
LABEL_28:
      if ( *((_BYTE *)a1 + 265) == 12 && *((char *)a1 + 296) < 0 )
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 38);
LABEL_5:
      if ( a2[5] == 12 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 123);
        v59 = (__int16)*((_QWORD *)a2 + 1) >> 6;
        if ( (*((_QWORD *)a2 + 1) & 0x800LL) != 0 )
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8LL * (v59 & 7)),
            33);
        else
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 112))(a1, v59 & 0x1F, 10);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 58);
        v60 = *((_QWORD *)a2 + 1);
        if ( (v60 & 0x20) == 0 )
        {
          v61 = v60 & 0x1F;
          if ( !v61 )
            v61 = 32;
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 112))(a1, v61, 10);
          goto LABEL_9;
        }
        goto LABEL_97;
      }
      if ( (a2[4] & 0x20) != 0 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 123);
        if ( (*((_QWORD *)a2 + 1) & 0x100LL) != 0 )
        {
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
          v11 = sub_11640(a1[77], (__int64)(a1 + 28), a2, 0);
          (*(void (__fastcall **)(__int64 *, unsigned __int8 *, _QWORD))(*a1 + 24))(a1, a2, v11);
LABEL_9:
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 125);
          return 1;
        }
LABEL_97:
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(
          a1,
          *(_QWORD *)(*(_QWORD *)(a1[78] + 56) + 8 * (*((_QWORD *)a2 + 1) & 7LL)),
          33);
        goto LABEL_9;
      }
      return 1;
    case 5:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 35);
      v35 = (unsigned int)sub_11640(a1[77], (__int64)(a1 + 28), a2, 0);
      v36 = a2[32];
      if ( v36 != 3 )
      {
        if ( v36 <= 3 )
        {
          if ( (unsigned __int8)v36 <= 1u )
            goto LABEL_69;
        }
        else if ( (unsigned __int8)(v36 - 4) <= 1u )
        {
          (*(void (__fastcall **)(__int64 *, unsigned __int8 *, __int64))(*a1 + 24))(a1, a2, v35);
          if ( a2[32] != 4 )
          {
            v9 = *a1;
            v10 = 44;
LABEL_3:
            a3 = (*(double (__fastcall **)(__int64 *, __int64))(v9 + 32))(a1, v10);
LABEL_4:
            sub_10BE0(a1, *((unsigned __int16 *)a2 + 3), a3, v7, a5, a6, a7);
          }
          goto LABEL_5;
        }
        sub_6C80((__int64)"out: %a: bad imm subtype %d", a3, a1[29]);
        goto LABEL_5;
      }
      if ( a2[5] == 6 )
        sub_10E90(a1, (char *)a2 + 8);
      else
LABEL_69:
        (*(void (__fastcall **)(__int64 *, unsigned __int8 *, __int64))(*a1 + 24))(a1, a2, v35);
      goto LABEL_5;
    case 7:
      v38 = *(_QWORD *)(a1[79] + 184);
      if ( v38 && *((_QWORD *)a2 + 2) == a1[29] + *((unsigned __int16 *)a1 + 125) )
      {
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 56))(a1, v38, 9);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 43);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 112))(a1, *((unsigned __int16 *)a1 + 125), 10);
        goto LABEL_5;
      }
      if ( !(unsigned __int8)is_defarg(a1[90], *a2) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int8 *, __int64))(*a1 + 120))(
               a1,
               a2,
               *((_QWORD *)a2 + 2) + 16 * a1[28]) )
        {
          goto LABEL_5;
        }
        remember_problem(2, a1[30], 0);
      }
      v35 = (unsigned int)sub_11640(a1[77], (__int64)(a1 + 28), a2, 0);
      goto LABEL_69;
    case 8:
      sub_10BE0(a1, (char)a2[32], a3, v7, a5, a6, a7);
      v9 = *a1;
      v10 = 58;
      goto LABEL_3;
    case 9:
      v39 = (*(double (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 40);
      sub_10BE0(a1, (char)a2[32], v39, v40, v41, v42, v43);
      v44 = (*(double (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, &unk_165FB, 0);
      sub_10BE0(a1, *((unsigned __int16 *)a2 + 3), v44, v45, v46, v47, v48);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 41);
      goto LABEL_5;
    case 10:
      v49 = *((_QWORD *)a2 + 1);
      if ( !(_WORD)v49 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 48);
        goto LABEL_5;
      }
      v50 = *(_QWORD **)(a1[78] + 56);
      if ( (int)v49 >= 0 )
      {
        if ( (v49 & 0x60000000) == 0 )
        {
          v52 = 1;
          v53 = 1;
          goto LABEL_77;
        }
        v51 = v50 + 16;
        v52 = 1;
        v53 = 1;
      }
      else
      {
        if ( (v49 & 0x60000000) == 0 )
        {
          v52 = 0;
          v53 = 0x8000;
          goto LABEL_77;
        }
        v51 = v50 + 16;
        v52 = 0;
        v53 = 128;
      }
      if ( (v49 & 0x20000000) != 0 )
      {
        v50 += 40;
        v53 = 4;
      }
      else
      {
        v50 = v51;
      }
LABEL_77:
      v54 = 0;
      while ( 2 )
      {
        if ( v52 )
        {
          v55 = 2 * v53;
          if ( (v49 & v53) == 0 )
          {
            do
            {
              ++v50;
              if ( !(_WORD)v55 )
                goto LABEL_5;
              v56 = v55;
              v55 *= 2;
            }
            while ( (v49 & v56) == 0 );
          }
        }
        else
        {
          v55 = v53 >> 1;
          if ( (v49 & v53) == 0 )
          {
            do
            {
              ++v50;
              if ( !(_WORD)v55 )
                goto LABEL_5;
              v64 = v55;
              v55 >>= 1;
            }
            while ( (v49 & v64) == 0 );
          }
        }
        if ( v54 )
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 47);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(a1, *v50, 33);
        v57 = *((_QWORD *)a2 + 1);
        if ( (v57 & v55) != 0 && (v57 & 0x20000000) == 0 )
        {
          ++v50;
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 45);
          if ( v52 )
          {
            while ( 1 )
            {
              v53 = 2 * v55;
              if ( v55 == 128 )
                break;
              if ( (*((_QWORD *)a2 + 1) & v53) == 0 )
                goto LABEL_162;
              ++v50;
              v55 *= 2;
            }
            v68 = 256;
            v53 = 256;
          }
          else
          {
            while ( 1 )
            {
              v53 = v55 >> 1;
              if ( v55 == 256 )
              {
                v68 = 128;
                v53 = 128;
                goto LABEL_149;
              }
              if ( (*((_QWORD *)a2 + 1) & v53) == 0 )
                break;
              ++v50;
              v55 >>= 1;
            }
LABEL_162:
            v68 = v53;
          }
LABEL_149:
          v70 = v68;
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a1 + 56))(a1, *v50, 33);
          v58 = v70;
        }
        else
        {
          v58 = v55;
          v53 = v55;
        }
        ++v50;
        if ( !v58 )
          goto LABEL_5;
        v49 = *((_QWORD *)a2 + 1);
        v54 = 1;
        continue;
      }
    case 11:
      (*(void (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, off_1BCE0[*((unsigned __int16 *)a2 + 3)], 32);
      goto LABEL_5;
    case 12:
      sub_10DC0(a1, a2[6], a2[5] == 1);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
      sub_10DC0(a1, a2[32], a2[5] == 1);
      v37 = a2[32] & 0x60;
      if ( v37 == 96 )
      {
        (*(void (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, &unk_165E4, 0);
      }
      else if ( v37 == 32 )
      {
        (*(void (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, &unk_165EC, 0);
      }
      goto LABEL_5;
    case 13:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 33);
      (*(void (__fastcall **)(__int64 *, void *, _QWORD))(*a1 + 56))(a1, &unk_165F4, 0);
      qsnprintf(v75, 17, &unk_165F8, *((unsigned __int16 *)a2 + 3));
      (*(void (__fastcall **)(__int64 *, _BYTE *, _QWORD))(*a1 + 56))(a1, v75, 0);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 33);
      goto LABEL_5;
    default:
      sub_6C80((__int64)"out: %a: bad optype %d", a3, a1[29]);
      goto LABEL_5;
  }
}

