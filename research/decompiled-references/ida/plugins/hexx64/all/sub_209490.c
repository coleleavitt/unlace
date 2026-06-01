__int64 __fastcall sub_209490(
        __int64 a1,
        unsigned __int8 *a2,
        _BYTE *a3,
        char a4,
        int a5,
        int a6,
        __m128i a7,
        __m128 a8)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax
  __int64 v14; // rdx
  unsigned __int8 **v15; // rax
  unsigned __int8 **v16; // rdx
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD **v21; // rdx
  _QWORD *v22; // rsi
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rdi
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdi
  int v33; // r12d
  int v34; // eax
  _QWORD *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rdi
  char v40; // al
  __int64 v41; // rdi
  unsigned int v42; // eax
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  signed int v45; // esi
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // r13
  __int64 v49; // rdx
  char v50; // dl
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 *v55; // r13
  int v56; // r12d
  char v57; // al
  unsigned __int64 v58; // rsi
  int v59; // edi
  __int64 v60; // rdx
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r8
  char v63; // dl
  unsigned __int64 v64; // rax
  char v65; // r9
  char v66; // r9
  __int64 v67; // rdi
  char v68; // al
  unsigned __int64 *v69; // rdi
  _QWORD *v70; // rbp
  int v71; // edx
  unsigned __int64 v72; // rsi
  char v73; // dl
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  char v76; // dl
  __int64 v77; // rcx
  signed int v78; // [rsp+8h] [rbp-E0h]
  _QWORD *v79; // [rsp+10h] [rbp-D8h]
  __int64 v80; // [rsp+18h] [rbp-D0h]
  char v81; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v82; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v83; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v84; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v85; // [rsp+38h] [rbp-B0h]
  _QWORD v86[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v87; // [rsp+70h] [rbp-78h] BYREF
  __int128 v88; // [rsp+78h] [rbp-70h] BYREF
  __int128 v89; // [rsp+88h] [rbp-60h]
  unsigned __int64 v90; // [rsp+98h] [rbp-50h]
  char v91; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v92; // [rsp+A8h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 200) != a4 )
    return 0;
  v9 = *a2;
  if ( (_BYTE)v9 == 9 )
  {
    v45 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 16LL);
    if ( v45 == *(_DWORD *)(*(_QWORD *)(a1 + 72) + 44LL)
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * v45 + 88) != *((_DWORD *)a2 + 1) )
    {
      return 0;
    }
    if ( (unsigned __int8)sub_207560(a1, v45, *(double *)a7.m128i_i64) )
      goto LABEL_66;
    v9 = *a2;
  }
  if ( (unsigned __int8)v9 > 0xFu )
    return 0;
  v14 = 32802;
  if ( !_bittest64(&v14, v9) )
    return 0;
  v15 = *(unsigned __int8 ***)(a1 + 80);
  v16 = &v15[*(_QWORD *)(a1 + 88)];
  if ( v15 != v16 )
  {
    while ( *v15 != a2 )
    {
      if ( v16 == ++v15 )
        goto LABEL_8;
    }
    if ( v15 != v16 )
    {
      sub_127FE0(*(_QWORD *)(a1 + 16), (__int64 *)(a1 + 104), (__int64)a2, 0, a5, a6, *(double *)a7.m128i_i64, a8);
      return 0;
    }
  }
LABEL_8:
  v79 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL);
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 104)) || *(_QWORD *)(a1 + 128) )
  {
    v38 = sub_207610((__int64)a2, *(int ***)(a1 + 32));
    v39 = *(_QWORD *)(a1 + 16);
    a7 = 0;
    v87 = 0;
    v89 = 0;
    v88 = 0u;
    sub_123EA0(v39, &v87, (__int64)a2, 0, v38 << 19, 0.0);
    v40 = sub_64820(&v87, (_QWORD *)(a1 + 104));
    v41 = *((_QWORD *)&v88 + 1);
    if ( v40 )
    {
      v46 = sub_317F40((__int64 *)(a1 + 120), (__int64)&v88 + 8);
      v41 = *((_QWORD *)&v88 + 1);
      if ( v46 )
      {
        if ( *((_QWORD *)&v88 + 1) )
        {
          *(_QWORD *)&v89 = 0;
          qfree(*((__int64 *)&v88 + 1));
        }
        goto LABEL_58;
      }
    }
    if ( v41 )
    {
      *(_QWORD *)&v89 = 0;
      qfree(v41);
    }
    qfree(v87);
  }
  v18 = *(_QWORD *)(a1 + 16);
  v19 = *(_QWORD *)(a1 + 8);
  v86[0] = &off_4DED70;
  v86[2] = v18;
  v20 = *(_QWORD *)(a1 + 24);
  v86[1] = v19;
  v86[3] = v20;
  v86[4] = *(_QWORD *)(a1 + 32);
  v21 = *(_QWORD ***)(v19 + 800);
  if ( !v21 || (v22 = *v21) == nullptr )
  {
LABEL_46:
    v26 = *(_QWORD *)(a1 + 72);
    v27 = *(_QWORD *)(v19 + 432) + 104LL * *(int *)(v26 + 44);
    if ( (*(_BYTE *)(v27 + 27) & 2) != 0 )
      goto LABEL_18;
    goto LABEL_47;
  }
  v23 = 24;
  v24 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v24 )
  {
LABEL_61:
    v47 = *(_QWORD *)(v19 + 432);
    v78 = *(_DWORD *)(v23 + 24);
    v48 = 104LL * v78;
    if ( (*(_BYTE *)(v47 + v48 + 27) & 2) != 0
      || *a2 == 15
      && (v50 = sub_1C3110(*((_QWORD *)a2 + 1), 0, 0, *(double *)a7.m128i_i64),
          v19 = *(_QWORD *)(a1 + 8),
          v47 = *(_QWORD *)(v19 + 432),
          !v50) )
    {
      v26 = *(_QWORD *)(a1 + 72);
      v49 = *(int *)(v26 + 44);
      if ( v78 != (_DWORD)v49 && *(_DWORD *)(v47 + v48 + 88) == *((_DWORD *)a2 + 1) )
      {
        if ( (unsigned __int8)sub_207560(a1, v78, *(double *)a7.m128i_i64) )
          goto LABEL_66;
        v19 = *(_QWORD *)(a1 + 8);
        v26 = *(_QWORD *)(a1 + 72);
        v47 = *(_QWORD *)(v19 + 432);
        v49 = *(int *)(v26 + 44);
      }
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 72);
      v49 = *(int *)(v26 + 44);
    }
    v27 = v47 + 104 * v49;
    if ( (*(_BYTE *)(v27 + 27) & 2) == 0 )
      goto LABEL_23;
LABEL_19:
    v28 = *(_QWORD *)(a1 + 16);
    a7 = 0;
    v87 = 0;
    v88 = 0u;
    v89 = 0;
    sub_127FE0(v28, &v87, (__int64)a2, 0, v26, v17, 0.0, a8);
    if ( (unsigned __int8)sub_64780((_QWORD *)(a1 + 144), &v87) )
    {
      v29 = *((_QWORD *)&v88 + 1);
      if ( !*((_QWORD *)&v88 + 1) )
      {
LABEL_22:
        qfree(v87);
        v19 = *(_QWORD *)(a1 + 8);
LABEL_23:
        if ( v78 == -1 )
        {
          v26 = *(_QWORD *)(a1 + 72);
          goto LABEL_47;
        }
        v30 = sub_1FBEA0(*(_QWORD *)(v19 + 1496), (__int64)a2, *(int ***)(a1 + 32), *(double *)a7.m128i_i64);
        v31 = sub_2010F0(*(_QWORD *)(a1 + 8), (__int64)a2, (int *)v27, v30, nullptr, *(double *)a7.m128i_i64);
        if ( v31 )
        {
          if ( v31 != 1 )
            return 0;
LABEL_26:
          if ( *a2 == 15 )
          {
            v43 = (unsigned int)sub_2090B0((_QWORD *)a1, (unsigned __int64)a2, (__int64)v86, a4, a7, a8);
            v52 = 9;
            if ( _bittest64(&v52, v43) )
              goto LABEL_74;
            if ( (_DWORD)v43 == 4 )
            {
LABEL_50:
              ++*(_DWORD *)(a1 + 196);
              return 1;
            }
            if ( (_DWORD)v43 != 1 )
              return 0;
          }
          v32 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v32 + 2) & 4) != 0 )
          {
            v33 = *(_DWORD *)(*(_QWORD *)(v32 + 1496) + 604LL) & 0x10;
            if ( ((unsigned __int8)sub_1EEA60((unsigned __int8 *)v32) || !(unsigned __int8)sub_1F0D70((int *)v27, v79))
              && !v33 )
            {
              if ( !under_debugger )
                sub_383060(0xC4B6u, *(double *)a7.m128i_i64);
              goto LABEL_177;
            }
            if ( *a2 == 15 )
              sub_204E20(a1, v27);
            goto LABEL_32;
          }
          v82 = -1;
          v54 = *(_QWORD *)(a1 + 72);
          v55 = (__int64 *)a2;
          v83 = 0;
          v56 = *(_DWORD *)(v54 + 40);
          v87 = 0xFFFFFFFF00000000LL;
          *(_QWORD *)&v88 = 0;
          v57 = *a2;
          if ( *a2 == 15 )
          {
            v80 = v54;
            if ( !(unsigned __int8)sub_1C3110(*((_QWORD *)a2 + 1), 0, 0, *(double *)a7.m128i_i64) )
              goto LABEL_114;
            v55 = &v87;
            sub_126420(
              (__int64)&v87,
              *(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL),
              **(_QWORD **)(*((_QWORD *)a2 + 1) + 8LL),
              *(unsigned __int16 *)(**(_QWORD **)(*((_QWORD *)a2 + 1) + 8LL) + 18LL),
              *(double *)a7.m128i_i64);
            v57 = v87;
            v54 = v80;
          }
          if ( v57 == 1 )
          {
            if ( *(_BYTE *)(v54 + 32) != 1 )
              goto LABEL_114;
            v58 = *((int *)v55 + 2);
          }
          else
          {
            if ( v57 != 5 )
            {
              if ( !under_debugger )
                sub_383060(0xCA9Au, *(double *)a7.m128i_i64);
              goto LABEL_177;
            }
            if ( *(_BYTE *)(v54 + 32) == 1 )
              goto LABEL_114;
            v58 = *(_QWORD *)(v55[1] + 8);
          }
          v59 = *((_DWORD *)v55 + 1);
          v60 = *(_DWORD *)(v54 + 40) + 1;
          if ( v59 != -1 && *(_DWORD *)(v54 + 40) != -1 )
          {
            v61 = *(_QWORD *)(v54 + 24);
            if ( v58 + v59 + 1 - 1 >= v61 && v60 + v61 - 1 >= v58 )
            {
              HIDWORD(v83) = *((_DWORD *)v55 + 1);
              LOBYTE(v83) = v57;
              v82 = v58;
              sub_11CDA0((__int64)&v87);
              v62 = *(_QWORD *)(a1 + 72);
              v63 = *(_BYTE *)(v62 + 32);
              if ( v63 == 1 )
              {
                v64 = *(int *)(v62 + 24);
              }
              else
              {
                if ( v63 != 5 )
                  goto LABEL_161;
                v64 = *(_QWORD *)(v62 + 24);
              }
              if ( (_BYTE)v83 == v63
                && *(_DWORD *)(v62 + 40)
                && v82 >= v64
                && *(int *)(v62 + 40) + v64 - 1 >= v82 + SHIDWORD(v83) - 1 )
              {
LABEL_32:
                if ( v78 != -1 )
                  return 0;
LABEL_33:
                v34 = sub_2089E0(
                        (unsigned __int64)a2,
                        *(int *)(*(_QWORD *)(a1 + 72) + 44LL),
                        (__int64)v86,
                        *(__m128i **)(*(_QWORD *)(a1 + 8) + 800LL),
                        a4,
                        1u,
                        a7,
                        a8,
                        nullptr);
                if ( !v34 )
                {
                  ++*(_DWORD *)(a1 + 196);
                  goto LABEL_35;
                }
                if ( (**(_DWORD **)(a1 + 8) & 0x40000) == 0 )
                {
                  if ( v34 != 4 )
                    return 0;
                  goto LABEL_50;
                }
                if ( !under_debugger )
                  sub_383060(0xC4B7u, *(double *)a7.m128i_i64);
LABEL_177:
                BUG();
              }
              v65 = *(_BYTE *)(a1 + 201);
              v84 = -1;
              v85 = 0;
              v66 = 2 * v65;
              if ( (a2[1] & 2) != 0 || *a2 == 15 )
              {
                v81 = v66;
                v68 = sub_1219B0((char *)a2, (__int64)&v84);
                v66 = v81;
                if ( v68 && (_BYTE)v85 == (_BYTE)v83 && HIDWORD(v85) && v82 >= v84 )
                {
                  v72 = SHIDWORD(v85) + v84 - 1;
                  v62 = *(_QWORD *)(a1 + 72);
                  if ( v72 >= v82 + SHIDWORD(v83) - 1 )
                  {
                    v73 = *(_BYTE *)(v62 + 32);
                    if ( v73 == 1 )
                    {
                      v74 = *(int *)(v62 + 24);
                    }
                    else
                    {
                      if ( v73 != 5 )
                        goto LABEL_161;
                      v74 = *(_QWORD *)(v62 + 24);
                    }
                    if ( (_BYTE)v85 == v73 && v74 >= v84 && v72 >= v74 + *(int *)(v62 + 40) - 1 )
                      v66 = v81 | 1;
                  }
                }
                else
                {
                  v62 = *(_QWORD *)(a1 + 72);
                }
              }
              if ( (unsigned int)sub_202CA0(
                                   *(_QWORD *)(a1 + 184),
                                   *(_QWORD **)(a1 + 48),
                                   *(__int64 **)(a1 + 56),
                                   *(__m128i **)(a1 + 64),
                                   v62,
                                   (__int64)&v82,
                                   *(double *)a7.m128i_i64,
                                   v66) )
              {
                v69 = *(unsigned __int64 **)(a1 + 64);
                v87 = 0;
                *(_QWORD *)&v89 = v82;
                v91 = 1;
                BYTE8(v89) = v83;
                v88 = 0;
                v90 = 0xFFFFFFFF00000001LL;
                v70 = sub_104DF0(v69, (__int64)&v87);
                if ( v87 )
                {
                  *(_QWORD *)&v88 = 0;
                  qfree(v87);
                }
                if ( !v70 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCA9Bu, 0.0);
                  goto LABEL_177;
                }
                v71 = *((_DWORD *)v70 + 10);
                if ( v71 <= v56 )
                {
                  if ( !under_debugger )
                    sub_383060(0xCEC8u, 0.0);
                  goto LABEL_177;
                }
                if ( *((_BYTE *)v70 + 32) == 5 )
                  sub_232C00(*(_QWORD *)(a1 + 8), v70[3], v71);
              }
              else if ( !sub_206A80(a1, a2, (__int64)v86, 1u, *(double *)a7.m128i_i64, a8) )
              {
                v67 = *(_QWORD *)(a1 + 8);
                if ( (*(_BYTE *)(*(_QWORD *)(v67 + 1496) + 604LL) & 0x10) == 0 )
                  return 4294967276LL;
                if ( (_BYTE)v83 != 5 )
                {
LABEL_107:
                  if ( (*(_WORD *)(v67 + 2) & 0x802) != 0 )
                    return 0;
                  sub_1F08B0((_QWORD *)v67, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
                  *(_DWORD *)(v27 + 24) |= 0x400u;
                  if ( *((_DWORD *)a2 + 1) > v56
                    && !(unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(a1 + 8))
                    && !(unsigned __int8)sub_1F0D70((int *)v27, v79)
                    && *a2 != 15 )
                  {
                    if ( !under_debugger )
                      sub_383060(0xC4B8u, *(double *)a7.m128i_i64);
                    goto LABEL_177;
                  }
                  goto LABEL_32;
                }
                if ( !(unsigned __int8)sub_1F0C10(*(_QWORD *)(a1 + 16), v82, SHIDWORD(v83)) )
                {
                  v67 = *(_QWORD *)(a1 + 8);
                  goto LABEL_107;
                }
                v75 = *(_QWORD *)(a1 + 72);
                v76 = *(_BYTE *)(v75 + 32);
                if ( v76 == 1 )
                {
                  v77 = *(int *)(v75 + 24);
                }
                else
                {
                  if ( v76 != 5 )
                    goto LABEL_161;
                  v77 = *(_QWORD *)(v75 + 24);
                }
                LOBYTE(v88) = *(_BYTE *)(v75 + 32);
                v87 = v77;
                DWORD1(v88) = *(_DWORD *)(v75 + 40);
                sub_32F920((__int64 *)&v82, &v87);
                if ( (_BYTE)v83 == 5 )
                {
                  if ( !(unsigned __int8)sub_232C00(*(_QWORD *)(a1 + 8), v82, SHIDWORD(v83)) )
                    return 0;
                  return 4294967260LL;
                }
LABEL_161:
                sub_201340(*(double *)a7.m128i_i64);
              }
              return 4294967260LL;
            }
          }
LABEL_114:
          sub_11CDA0((__int64)&v87);
          if ( sub_206A80(a1, a2, (__int64)v86, 1u, *(double *)a7.m128i_i64, a8) )
            return 3;
          if ( v78 != -1 )
          {
            sub_204E20(a1, v27);
            return 0;
          }
          if ( (*(_BYTE *)(v27 + 27) & 2) != 0 )
            sub_204E20(a1, v27);
          goto LABEL_33;
        }
LABEL_66:
        ++*(_DWORD *)(a1 + 196);
        return 0;
      }
LABEL_21:
      *(_QWORD *)&v89 = 0;
      qfree(v29);
      goto LABEL_22;
    }
    v51 = sub_318470((unsigned __int64 **)(a1 + 160), (__int64)&v88 + 8);
    v29 = *((_QWORD *)&v88 + 1);
    if ( v51 )
    {
      if ( !*((_QWORD *)&v88 + 1) )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( *((_QWORD *)&v88 + 1) )
    {
      *(_QWORD *)&v89 = 0;
      qfree(*((__int64 *)&v88 + 1));
    }
LABEL_58:
    qfree(v87);
    return 0;
  }
  if ( (*(_BYTE *)(*v22 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_46;
  while ( 1 )
  {
    v25 = *(_QWORD *)(v24 + 24);
    v23 = v24 + 24;
    if ( (unsigned __int64)a2 >= v25 )
      break;
    v24 = *(_QWORD *)(v24 + 8);
LABEL_16:
    if ( (*(_BYTE *)v24 & 2) != 0 )
      goto LABEL_17;
  }
  if ( v25 < (unsigned __int64)a2 )
  {
    v24 = *(_QWORD *)(v24 + 16);
    goto LABEL_16;
  }
  if ( (_QWORD *)v24 != v22 )
    goto LABEL_61;
LABEL_17:
  v26 = *(_QWORD *)(a1 + 72);
  v27 = *(_QWORD *)(v19 + 432) + 104LL * *(int *)(v26 + 44);
  if ( (*(_BYTE *)(v27 + 27) & 2) != 0 )
  {
LABEL_18:
    v78 = -1;
    goto LABEL_19;
  }
LABEL_47:
  v42 = sub_2089E0((unsigned __int64)a2, *(int *)(v26 + 44), (__int64)v86, *(__m128i **)(v19 + 800), a4, 0, a7, a8, a3);
  v43 = v42;
  if ( v42 == 1 )
  {
    v78 = -1;
    goto LABEL_26;
  }
  v44 = 9;
  if ( _bittest64(&v44, v43) )
  {
LABEL_74:
    ++*(_DWORD *)(a1 + 196);
    result = 4294967260LL;
    if ( (_DWORD)v43 == 3 )
      return result;
    if ( a3 && !*(_BYTE *)(v27 + 80) )
      sub_1EF8F0(v27, (__int64)v79, a3, 0, *(double *)a7.m128i_i64);
LABEL_35:
    v35 = *(_QWORD **)(a1 + 184);
    v36 = v35[12];
    v37 = v35[11];
    if ( v35[13] < (unsigned __int64)(v36 + 1) )
    {
      v53 = qvector_reserve((__int64)(v35 + 11), v37, v36 + 1, 8);
      v35[11] = v53;
      v37 = v53;
      v36 = v35[12];
    }
    *(_QWORD *)(v37 + 8 * v36) = a2;
    ++v35[12];
    return 0;
  }
  if ( (_DWORD)v43 == 4 )
    goto LABEL_50;
  return 0;
}

