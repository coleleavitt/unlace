__int64 __fastcall sub_83AA0(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  int v7; // edx
  __int64 v8; // r14
  int v9; // r12d
  __int16 v10; // ax
  char v11; // r11
  __int64 v12; // rdx
  int dtype_size; // eax
  unsigned __int8 v14; // cl
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v22; // r14d
  __int64 v23; // r13
  int v24; // r12d
  bool v25; // zf
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int tinfo_property; // eax
  unsigned __int16 v29; // ax
  __int64 v30; // rax
  __int64 v31; // rdx
  __m128i *v32; // r12
  __int8 v33; // cl
  char v34; // al
  __int16 v35; // cx
  __int64 v36; // rax
  char v37; // cl
  int v38; // ecx
  __int64 v39; // rax
  __int8 v40; // al
  unsigned __int16 v41; // r14
  _BOOL4 v42; // eax
  __m128i v43; // xmm0
  __m128i *v44; // rsi
  int v45; // eax
  int v46; // ebx
  __int64 v47; // rax
  __m128 *v48; // rsi
  __int64 name_ea; // rsi
  char v50; // al
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 (__fastcall *v55)(__int64, __int64); // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // r13d
  int v59; // r14d
  char v60; // al
  __m128i *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v66; // eax
  __m128i *v67; // rsi
  __m128i *v68; // r14
  __m128i *v69; // rt0
  __int16 v70; // ax
  __int8 v71; // r11
  __m128i *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rcx
  __int8 v78; // r8
  __int8 v79; // cl
  __int16 v80; // si
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int8 v83; // cl
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rcx
  __int64 *v88; // rsi
  __int64 (__fastcall *v89)(__int64, __int64); // rax
  __int8 v90; // r11
  __int64 v91; // rax
  __int64 v92; // rcx
  __int16 v93; // ax
  __int64 v94; // [rsp-8h] [rbp-C8h]
  char v95; // [rsp+Ch] [rbp-B4h]
  __int8 v96; // [rsp+Ch] [rbp-B4h]
  __int64 v97; // [rsp+18h] [rbp-A8h]
  char v98; // [rsp+18h] [rbp-A8h]
  char v99; // [rsp+18h] [rbp-A8h]
  char v100; // [rsp+18h] [rbp-A8h]
  __int8 v101; // [rsp+18h] [rbp-A8h]
  __int8 v102; // [rsp+18h] [rbp-A8h]
  __m128i v103; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v104; // [rsp+30h] [rbp-90h] BYREF
  __int128 v105; // [rsp+38h] [rbp-88h]
  __int64 v106; // [rsp+48h] [rbp-78h]
  int v107; // [rsp+50h] [rbp-70h]
  __m128i v108[2]; // [rsp+60h] [rbp-60h] BYREF
  int v109; // [rsp+80h] [rbp-40h]
  unsigned __int64 v110; // [rsp+88h] [rbp-38h]

  v103.m128i_i64[0] = a1;
  v7 = *a3;
  v110 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v7 >= 0 )
  {
    v9 = (unsigned __int16)v7;
    if ( sub_2C410(*(_QWORD *)(a1 + 8), a4, (unsigned __int16)v7, 1u) )
    {
      v10 = sub_81190(a4);
      if ( v10 == -1 )
      {
        if ( v9 == 13 )
        {
          v100 = v11;
          v60 = sub_819A0(v103.m128i_i64[0], a2, a4);
          v11 = v100;
          if ( v60 )
            return 1;
        }
        else if ( v9 == 4 && *(_WORD *)(a4 + 24) == 4 )
        {
          v98 = v11;
          v51 = sub_37FF0(v8, *(_QWORD *)(a4 + 56) + 16LL * *(_QWORD *)a4);
          v11 = v98;
          if ( v51 == 4 )
          {
            v52 = *(_QWORD *)(*(_QWORD *)(v103.m128i_i64[0] + 8) + 32LL);
            v53 = *(_QWORD *)(a4 + 16);
            memset(v108, 0, 25);
            v54 = *(_QWORD *)(v52 + 16) & v53;
            v55 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v103.m128i_i64[0] + 16LL);
            if ( v55 != sub_80020 )
            {
              ((void (__fastcall *)(__int64, __int64, _QWORD, __int64))v55)(v103.m128i_i64[0], v54, 0, -1);
              v11 = v98;
            }
            v99 = v11;
            reg_finder_find();
            v11 = v99;
          }
        }
        if ( *(_BYTE *)(a4 + 41) == 1 && v9 == *(unsigned __int16 *)(a4 + 46) )
        {
          v96 = v11;
          if ( (unsigned __int8)sub_81B20(v103.m128i_i64[0], a2, a4) )
            return 1;
          v29 = *(_WORD *)(a4 + 24);
          if ( v29 > 0x51u )
          {
            if ( v29 == 273 )
            {
              if ( *(_BYTE *)(a4 + 81) == 5 && *(_BYTE *)(a4 + 121) == 5 )
              {
                v63 = *(_QWORD *)(a4 + 88);
                v64 = *(_QWORD *)(a4 + 128);
                v108[0].m128i_i64[0] = 0;
                v109 = 0;
                v65 = *(_QWORD *)(v103.m128i_i64[0] + 8);
                v108[1] = 0;
                v66 = 0;
                if ( (unsigned __int64)(int)v64 <= 0x1F )
                  v66 = 1 << v64;
                v108[0].m128i_i8[1] = 5;
                v108[0].m128i_i64[1] = (unsigned int)((v66 - 1) << v63);
                v40 = 7;
                if ( *(_DWORD *)(*(_QWORD *)(v65 + 32) + 24LL) == 4 )
                  v40 = 2;
LABEL_130:
                v108[0].m128i_i8[5] = v40;
                reg_finder_emulate_binary_op();
                return 1;
              }
            }
            else
            {
              if ( v29 == 497 )
              {
LABEL_74:
                *(_BYTE *)(a2 + 24) = 10;
                *(_QWORD *)(a2 + 8) = 0;
                v108[1].m128i_i16[0] = *(_WORD *)(a4 + 24);
                v41 = v108[1].m128i_u16[0];
                v42 = 0;
                v25 = *(_BYTE *)(a4 + 81) == 5;
                v43 = (__m128i)_mm_loadh_ps((const double *)(a4 + 16));
                v108[0] = v43;
                if ( v25 )
                  v42 = *(_BYTE *)(a4 + 121) == 0;
                v44 = *(__m128i **)a2;
                v45 = v42 | 0x10;
                v108[1].m128i_i16[1] = v45;
                v46 = v45;
                v47 = *(_QWORD *)(a2 + 16);
                if ( v108 < v44 || v108 >= (__m128i *)((char *)v44 + 24 * v47) )
                {
                  if ( !v47 )
                  {
                    v74 = qvector_reserve(a2, (__int64)v44, 1, 24);
                    *(_QWORD *)a2 = v74;
                    v44 = (__m128i *)v74;
                  }
                  v67 = (__m128i *)((char *)v44 + 24 * *(_QWORD *)(a2 + 8));
                  *v67 = _mm_load_si128(v108);
                  v67[1].m128i_i64[0] = v108[1].m128i_i64[0];
                }
                else
                {
                  if ( !v47 )
                  {
                    v103 = v43;
                    v84 = qvector_reserve(a2, (__int64)v44, 1, 24);
                    v43 = _mm_load_si128(&v103);
                    *(_QWORD *)a2 = v84;
                    v44 = (__m128i *)v84;
                  }
                  v48 = (__m128 *)((char *)v44 + 24 * *(_QWORD *)(a2 + 8));
                  *v48 = (__m128)v43;
                  v48[1].m128_i32[0] = v41 | (v46 << 16);
                }
                goto LABEL_31;
              }
              if ( v29 == 269 && *(_BYTE *)(a4 + 81) == 5 )
              {
                reg_finder_emulate_binary_op();
                return 1;
              }
            }
          }
          else if ( v29 > 5u )
          {
            switch ( *(_WORD *)(a4 + 24) )
            {
              case 6:
              case 7:
              case 0xA:
              case 0xB:
              case 0xC:
              case 0xD:
              case 0xE:
              case 0x16:
              case 0x18:
                v32 = (__m128i *)(a4 + 80);
                if ( !*(_BYTE *)(a4 + 121) )
                  v32 = (__m128i *)(a4 + 40);
                v33 = v32[2].m128i_i8[9];
                if ( (v33 & 0xFB) == 1 )
                {
                  switch ( *(_WORD *)(a4 + 24) )
                  {
                    case 6:
                    case 7:
                    case 0xA:
                    case 0xB:
                    case 0xC:
                    case 0xD:
                    case 0xE:
                    case 0x16:
                    case 0x18:
LABEL_135:
                      memset(v108, 0, sizeof(v108));
                      v109 = 0;
                      if ( v33 == 5 )
                      {
                        v75 = v32[3].m128i_i64[0];
                        v76 = *(_QWORD *)(v103.m128i_i64[0] + 8);
                        if ( v75 )
                        {
                          v77 = v32[4].m128i_i64[0];
                          if ( v77 )
                          {
                            v78 = v32[4].m128i_i8[9];
                            if ( v78 )
                            {
                              if ( v78 == 5 )
                                v75 = ((v75 + 1) << v77) - 1;
                              else
                                v75 = 0;
                            }
                            else
                            {
                              v75 <<= v77;
                            }
                          }
                        }
                        v108[0].m128i_i8[1] = 5;
                        v79 = 7;
                        v108[0].m128i_i64[1] = v75;
                        if ( *(_DWORD *)(*(_QWORD *)(v76 + 32) + 24LL) == 4 )
                          v79 = 2;
                        v108[0].m128i_i8[5] = v79;
                        v68 = v108;
                      }
                      else if ( v33 == 8 )
                      {
LABEL_161:
                        v80 = v32[2].m128i_i16[7];
                        v108[0].m128i_i8[1] = 1;
                        v81 = *(_QWORD *)(v103.m128i_i64[0] + 8);
                        v108[0].m128i_i16[3] = v80;
                        v82 = *(_QWORD *)(v81 + 32);
                        v83 = 7;
                        if ( *(_DWORD *)(v82 + 24) == 4 )
                          v83 = 2;
                        v108[0].m128i_i8[5] = v83;
                        v68 = v108;
                      }
                      else
                      {
                        v68 = (__m128i *)((char *)v32 + 40);
                      }
                      if ( v29 != 13 )
                      {
                        v69 = v32;
                        v32 = v68;
                        v68 = v69;
                      }
                      reg_finder_emulate_binary_op();
                      if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) > 1u )
                        return 1;
                      v70 = *(_WORD *)(a4 + 24);
                      v71 = v96;
                      if ( v70 == 14 )
                      {
                        if ( (v68->m128i_i8[1] != 1 || v68->m128i_i16[3] != 15)
                          && (v32->m128i_i8[1] != 1 || v32->m128i_i16[3] != 15) )
                        {
                          return 1;
                        }
                      }
                      else
                      {
                        if ( v70 != 12 || v68->m128i_i8[1] != 1 || v68->m128i_i16[3] != 15 )
                          return 1;
                        if ( v32->m128i_i8[1] == 1 )
                        {
                          v85 = *(_QWORD *)(*(_QWORD *)(v103.m128i_i64[0] + 8) + 32LL);
                          LOBYTE(v106) = 0;
                          v86 = *(_QWORD *)(a4 + 16);
                          v104 = 0;
                          v87 = -1;
                          v105 = 0;
                          v88 = (__int64 *)(*(_QWORD *)(v85 + 16) & v86);
                          v89 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v103.m128i_i64[0] + 16LL);
                          if ( v89 != sub_80020 )
                            goto LABEL_181;
                          while ( 1 )
                          {
                            v101 = v71;
                            v88 = &v104;
                            reg_finder_find();
                            v90 = v101;
                            if ( (unsigned __int8)(v106 - 10) <= 1u )
                              break;
                            if ( under_debugger )
LABEL_189:
                              BUG();
                            v89 = (__int64 (__fastcall *)(__int64, __int64))interr(10498);
LABEL_181:
                            v102 = v71;
                            ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64))v89)(
                              v103.m128i_i64[0],
                              v88,
                              0,
                              v87);
                            v71 = v102;
                          }
                          v91 = v104;
                          while ( 1 )
                          {
                            v92 = v91;
                            if ( v91 == v104 + 24LL * (_QWORD)v105 )
                              break;
                            v91 += 24;
                            if ( (*(_BYTE *)(v92 + 18) & 0x10) != 0 )
                            {
                              if ( !v104 )
                                return 1;
                              goto LABEL_177;
                            }
                          }
                          v90 = 0;
                          if ( v104 )
                          {
LABEL_177:
                            v103.m128i_i8[0] = v90;
                            *(_QWORD *)&v105 = 0;
                            qfree(v104);
                            if ( v103.m128i_i8[0] )
                              return 1;
                          }
                        }
                      }
                      v72 = *(__m128i **)a2;
                      v73 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
                      while ( v72 != (__m128i *)v73 )
                      {
                        v72[1].m128i_i16[1] |= 0x10u;
                        v72 = (__m128i *)((char *)v72 + 24);
                      }
                      return 1;
                    default:
LABEL_150:
                      if ( !under_debugger )
                        interr(10455);
                      goto LABEL_189;
                  }
                }
                if ( v33 == 8 && (*(_BYTE *)(a4 + 28) & 8) == 0 && v32[4].m128i_i8[9] <= 1u )
                {
                  switch ( *(_WORD *)(a4 + 24) )
                  {
                    case 6:
                    case 7:
                    case 0xA:
                    case 0xB:
                    case 0xE:
                    case 0x16:
                    case 0x18:
                      goto LABEL_135;
                    case 0xC:
                    case 0xD:
                      v109 = 0;
                      memset(v108, 0, sizeof(v108));
                      goto LABEL_161;
                    default:
                      goto LABEL_150;
                  }
                }
                break;
              case 9:
                if ( *(_BYTE *)(a4 + 81) == 1 && !*(_BYTE *)(a4 + 121) )
                  goto LABEL_83;
                break;
              case 0x17:
              case 0x50:
                v34 = *(_BYTE *)(a4 + 81);
                if ( v34 == 5 )
                {
                  sub_80A20(a2, *(_QWORD *)(a4 + 88), a4, 0);
                  return 1;
                }
                if ( v34 != 8 || *(_BYTE *)(a4 + 113) > 1u )
                  break;
                v35 = *(_WORD *)(a4 + 86);
                v106 = 0;
                v36 = *(_QWORD *)(v103.m128i_i64[0] + 8);
                v107 = 0;
                v104 = 256;
                v105 = 0;
                HIWORD(v104) = v35;
                v37 = 7;
                if ( *(_DWORD *)(*(_QWORD *)(v36 + 32) + 24LL) == 4 )
                  v37 = 2;
                BYTE5(v104) = v37;
                memset(v108, 0, sizeof(v108));
                v109 = 0;
                v38 = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 24LL);
                if ( (*(_BYTE *)(a4 + 28) & 8) != 0 )
                {
                  v93 = *(unsigned __int8 *)(a4 + 112);
                  v108[0].m128i_i8[1] = 1;
                  v108[0].m128i_i16[3] = v93;
                  v40 = 7;
                  if ( v38 != 4 )
                    goto LABEL_130;
                }
                else
                {
                  v39 = *(_QWORD *)(a4 + 88);
                  v108[0].m128i_i8[1] = 5;
                  v108[0].m128i_i64[1] = v39;
                  v40 = 7;
                  if ( v38 != 4 )
                    goto LABEL_130;
                }
                v40 = 2;
                goto LABEL_130;
              case 0x19:
                v50 = *(_BYTE *)(a4 + 81);
                if ( v50 == 5 )
                {
                  sub_80A20(a2, ~*(_QWORD *)(a4 + 88), a4, 0);
                  return 1;
                }
                if ( v50 == 1 && !*(_BYTE *)(a4 + 121) )
                {
LABEL_83:
                  reg_finder_emulate_unary_op();
                  return 1;
                }
                break;
              case 0x1A:
                if ( *(_QWORD *)(a4 + 88) != 3 )
                  break;
                if ( *(_WORD *)(a4 + 126) != 13 )
                  break;
                if ( *(_WORD *)(a4 + 166) )
                  break;
                if ( *(_QWORD *)(a4 + 208) != 2 )
                  break;
                name_ea = get_name_ea();
                if ( name_ea == -1 )
                  break;
                sub_80A20(a2, name_ea, a4, 32);
                return 1;
              case 0x2C:
              case 0x51:
                goto LABEL_74;
              default:
                break;
            }
          }
        }
      }
      else
      {
        v12 = a4 + 120;
        if ( !*(_BYTE *)(a4 + 121) )
          v12 = a4 + 80;
        v95 = v10;
        v97 = v12;
        dtype_size = get_dtype_size();
        if ( (v95 & 1) == 0 && (v95 & 0x10) == 0 )
        {
          v14 = *(_BYTE *)(a4 + 85);
          if ( v14 <= 2u || v14 == 7 )
          {
            v15 = *(unsigned __int16 *)(a4 + 46);
            if ( v15 == v9 )
            {
              v17 = 0;
LABEL_17:
              memset(v108, 0, sizeof(v108));
              v109 = 0;
              if ( sub_816B0(v8, (__int64)v108, v97, a4, 1) )
              {
                reg_finder_calc_op_addr();
                v20 = v94;
                if ( (unsigned __int8)(*(_BYTE *)(a2 + 24) - 10) <= 3u && v17 )
                {
                  v61 = *(__m128i **)a2;
                  v62 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
                  if ( *(_QWORD *)a2 != v62 )
                  {
                    v20 = ((_BYTE)v62 - (_BYTE)v61) & 8;
                    if ( (((_BYTE)v62 - (_BYTE)v61) & 8) == 0
                      || (v61->m128i_i64[0] += v17, v61 = (__m128i *)((char *)v61 + 24), (__m128i *)v62 != v61) )
                    {
                      do
                      {
                        v61->m128i_i64[0] += v17;
                        v61[1].m128i_i64[1] += v17;
                        v61 += 3;
                      }
                      while ( (__m128i *)v62 != v61 );
                    }
                  }
                  sub_83300(a2, a2, v62, v20, v18, v19);
                }
                reg_finder_emulate_mem_read();
                return 1;
              }
              goto LABEL_24;
            }
            if ( (v95 & 8) != 0 )
            {
              v16 = v15 + 1;
              if ( *(_WORD *)(a4 + 24) != 871 )
                v16 = *(unsigned __int16 *)(a4 + 86);
              if ( dtype_size != -1 && v16 == v9 )
              {
                v17 = dtype_size;
                goto LABEL_17;
              }
            }
          }
        }
        if ( (*(_BYTE *)(a4 + 28) & 0xA0) != 0
          && (unsigned __int8)(*(_BYTE *)(v97 + 1) - 3) <= 1u
          && *(unsigned __int16 *)(v97 + 6) == v9 )
        {
          memset(v108, 0, sizeof(v108));
          v109 = 0;
          if ( sub_816B0(v8, (__int64)v108, v97, a4, 0) )
          {
            reg_finder_calc_op_addr();
            return 1;
          }
        }
      }
LABEL_24:
      *(_BYTE *)(a2 + 24) = 4;
      v22 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v23 = *(_QWORD *)(a4 + 16);
      v24 = *(unsigned __int16 *)(a4 + 24);
      v25 = *(_BYTE *)(a4 + 81) == 5;
      v108[0].m128i_i64[0] = -1;
      v108[0].m128i_i64[1] = v23;
      v108[1].m128i_i16[0] = v24;
      if ( v25 )
        v22 = *(_BYTE *)(a4 + 121) == 0;
      v26 = *(_QWORD *)a2;
      v108[1].m128i_i16[1] = v22;
      v27 = *(_QWORD *)(a2 + 16);
      if ( (unsigned __int64)v108 >= v26 && (unsigned __int64)v108 < v26 + 24 * v27 )
      {
LABEL_28:
        if ( !v27 )
        {
          v56 = qvector_reserve(a2, v26, 1, 24);
          v57 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v56;
          v26 = v56 + 24 * v57;
        }
        *(_QWORD *)v26 = -1;
        *(_QWORD *)(v26 + 8) = v23;
        *(_DWORD *)(v26 + 16) = v24 | (v22 << 16);
LABEL_31:
        ++*(_QWORD *)(a2 + 8);
        return 1;
      }
LABEL_46:
      if ( !v27 )
      {
        v30 = qvector_reserve(a2, v26, 1, 24);
        v31 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v30;
        v26 = v30 + 24 * v31;
      }
      *(__m128i *)v26 = _mm_load_si128(v108);
      *(_QWORD *)(v26 + 16) = v108[1].m128i_i64[0];
      goto LABEL_31;
    }
    return 0;
  }
  if ( (unsigned __int8)reg_finder_may_modify_stkvar() )
    return 1;
  if ( sub_817D0(a1, a3, a4) )
    goto LABEL_42;
  if ( !*(_QWORD *)(v103.m128i_i64[0] + 24) )
    return 0;
  v108[0].m128i_i64[0] = 0;
  if ( !(unsigned __int8)get_tinfo() || (tinfo_property = get_tinfo_property(), tinfo_property <= 0x10) )
    tinfo_property = getinf(99);
  if ( tinfo_property != 256 && tinfo_property != 176 || !sub_2CF00(v8, a4) )
  {
    clear_tinfo_t();
    return 0;
  }
  if ( (*(_BYTE *)(a4 + 34) & 4) != 0 || (getinf(3) & 0x1006) == 0x1002 )
    v58 = 8;
  else
    v58 = 4;
  v59 = *a3;
  if ( (*a3 & 0x8000000) != 0 )
  {
    clear_tinfo_t();
    goto LABEL_42;
  }
  clear_tinfo_t();
  if ( 8 * v58 > (__int64)(v59 & 0x7FFFFFF) )
  {
LABEL_42:
    *(_BYTE *)(a2 + 24) = 4;
    v22 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v23 = *(_QWORD *)(a4 + 16);
    v24 = *(unsigned __int16 *)(a4 + 24);
    v25 = *(_BYTE *)(a4 + 81) == 5;
    v108[0].m128i_i64[0] = -1;
    v108[0].m128i_i64[1] = v23;
    v108[1].m128i_i16[0] = v24;
    if ( v25 )
      v22 = *(_BYTE *)(a4 + 121) == 0;
    v26 = *(_QWORD *)a2;
    v108[1].m128i_i16[1] = v22;
    v27 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int64)v108 >= v26 && (unsigned __int64)v108 < v26 + 24 * v27 )
      goto LABEL_28;
    goto LABEL_46;
  }
  return 0;
}
