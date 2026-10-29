__int64 __fastcall sub_209850(__int64 a1, unsigned __int8 *a2, _BYTE *a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v10; // rdx
  unsigned __int8 **v11; // rax
  unsigned __int8 **v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD **v16; // rdx
  _QWORD *v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdi
  int v27; // r12d
  int v28; // eax
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rsi
  int v32; // eax
  __int128 v33; // rdi
  char v34; // al
  __int64 v35; // rdi
  unsigned int v36; // eax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  signed int v39; // esi
  char v40; // al
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rdx
  char v44; // dl
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 *v48; // r13
  int v49; // r12d
  unsigned __int8 v50; // al
  unsigned __int64 v51; // rsi
  int v52; // edi
  __int64 v53; // rdx
  unsigned __int64 v54; // r8
  __int64 v55; // rdi
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // r8
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  char v60; // r9
  char v61; // r9
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rdi
  char v65; // al
  unsigned __int64 *v66; // rdi
  __int64 v67; // rcx
  _QWORD *v68; // rbp
  __int64 v69; // r8
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  signed int v75; // [rsp+8h] [rbp-E0h]
  _QWORD *v76; // [rsp+10h] [rbp-D8h]
  __int64 v77; // [rsp+18h] [rbp-D0h]
  char v78; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v79; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v81; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v82; // [rsp+38h] [rbp-B0h]
  _QWORD v83[6]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v84; // [rsp+70h] [rbp-78h] BYREF
  __int128 v85; // [rsp+78h] [rbp-70h] BYREF
  __int128 v86; // [rsp+88h] [rbp-60h]
  unsigned __int64 v87; // [rsp+98h] [rbp-50h]
  char v88; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v89; // [rsp+A8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 200) != a4 )
    return 0;
  v5 = *a2;
  if ( (_BYTE)v5 == 9 )
  {
    v39 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 16LL);
    if ( v39 == *(_DWORD *)(*(_QWORD *)(a1 + 72) + 44LL)
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104LL * v39 + 88) != *((_DWORD *)a2 + 1) )
    {
      return 0;
    }
    if ( (unsigned __int8)sub_207920(a1, v39) )
      goto LABEL_66;
    v5 = *a2;
  }
  if ( (unsigned __int8)v5 > 0xFu )
    return 0;
  v10 = 32802;
  if ( !_bittest64(&v10, v5) )
    return 0;
  v11 = *(unsigned __int8 ***)(a1 + 80);
  v12 = &v11[*(_QWORD *)(a1 + 88)];
  if ( v11 != v12 )
  {
    while ( *v11 != a2 )
    {
      if ( v12 == ++v11 )
        goto LABEL_8;
    }
    if ( v11 != v12 )
    {
      sub_127A20(*(_QWORD *)(a1 + 16), (__int64 *)(a1 + 104), (__int64)a2, 0);
      return 0;
    }
  }
LABEL_8:
  v76 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 1504LL);
  if ( !(unsigned __int8)sub_64280((_QWORD *)(a1 + 104)) || *(_QWORD *)(a1 + 128) )
  {
    v32 = sub_2079D0((__int64)a2, *(int ***)(a1 + 32));
    *(_QWORD *)&v33 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v33 + 1) = &v84;
    v84 = 0;
    v86 = 0;
    v85 = 0u;
    sub_1238E0(v33, (__int64)a2, 0, v32 << 19);
    v34 = sub_64220(&v84, (_QWORD *)(a1 + 104));
    v35 = *((_QWORD *)&v85 + 1);
    if ( v34 )
    {
      v40 = sub_318300(a1 + 120, (char *)&v85 + 8);
      v35 = *((_QWORD *)&v85 + 1);
      if ( v40 )
      {
        if ( *((_QWORD *)&v85 + 1) )
        {
          *(_QWORD *)&v86 = 0;
          qfree();
        }
        goto LABEL_58;
      }
    }
    if ( v35 )
    {
      *(_QWORD *)&v86 = 0;
      qfree();
    }
    qfree();
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(a1 + 8);
  v83[0] = off_4D9430;
  v83[2] = v13;
  v15 = *(_QWORD *)(a1 + 24);
  v83[1] = v14;
  v83[3] = v15;
  v83[4] = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD ***)(v14 + 800);
  if ( !v16 || (v17 = *v16) == nullptr )
  {
LABEL_46:
    v21 = *(_QWORD *)(a1 + 72);
    v22 = *(_QWORD *)(v14 + 432) + 104LL * *(int *)(v21 + 44);
    if ( (*(_BYTE *)(v22 + 27) & 2) != 0 )
      goto LABEL_18;
    goto LABEL_47;
  }
  v18 = 24;
  v19 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v19 )
  {
LABEL_61:
    v41 = *(_QWORD *)(v14 + 432);
    v75 = *(_DWORD *)(v18 + 24);
    v42 = 104LL * v75;
    if ( (*(_BYTE *)(v41 + v42 + 27) & 2) != 0
      || *a2 == 15
      && (v44 = sub_1C2B50(*((_QWORD *)a2 + 1), 0, 0), v14 = *(_QWORD *)(a1 + 8), v41 = *(_QWORD *)(v14 + 432), !v44) )
    {
      v43 = *(int *)(*(_QWORD *)(a1 + 72) + 44LL);
      if ( v75 != (_DWORD)v43 && *(_DWORD *)(v41 + v42 + 88) == *((_DWORD *)a2 + 1) )
      {
        if ( (unsigned __int8)sub_207920(a1, v75) )
          goto LABEL_66;
        v14 = *(_QWORD *)(a1 + 8);
        v41 = *(_QWORD *)(v14 + 432);
        v43 = *(int *)(*(_QWORD *)(a1 + 72) + 44LL);
      }
    }
    else
    {
      v43 = *(int *)(*(_QWORD *)(a1 + 72) + 44LL);
    }
    v22 = v41 + 104 * v43;
    if ( (*(_BYTE *)(v22 + 27) & 2) == 0 )
      goto LABEL_23;
LABEL_19:
    v23 = *(_QWORD *)(a1 + 16);
    v84 = 0;
    v85 = 0u;
    v86 = 0;
    sub_127A20(v23, &v84, (__int64)a2, 0);
    if ( (unsigned __int8)sub_64180((_QWORD *)(a1 + 144), &v84) )
    {
      if ( !*((_QWORD *)&v85 + 1) )
      {
LABEL_22:
        qfree();
        v14 = *(_QWORD *)(a1 + 8);
LABEL_23:
        if ( v75 == -1 )
        {
          v21 = *(_QWORD *)(a1 + 72);
          goto LABEL_47;
        }
        v24 = sub_1FC260(*(_QWORD *)(v14 + 1496), (__int64)a2, *(_QWORD *)(a1 + 32));
        v25 = sub_2014B0(*(_QWORD *)(a1 + 8), (__int64)a2, (int *)v22, v24, nullptr);
        if ( v25 )
        {
          if ( v25 != 1 )
            return 0;
LABEL_26:
          if ( *a2 == 15 )
          {
            v37 = (unsigned int)sub_209470((_QWORD *)a1, (unsigned __int64)a2, (__int64)v83, a4);
            v45 = 9;
            if ( _bittest64(&v45, v37) )
              goto LABEL_74;
            if ( (_DWORD)v37 == 4 )
            {
LABEL_50:
              ++*(_DWORD *)(a1 + 196);
              return 1;
            }
            if ( (_DWORD)v37 != 1 )
              return 0;
          }
          v26 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(v26 + 2) & 4) != 0 )
          {
            v27 = *(_DWORD *)(*(_QWORD *)(v26 + 1496) + 604LL) & 0x10;
            if ( ((unsigned __int8)sub_1EEE20((unsigned __int8 *)v26) || !(unsigned __int8)sub_1F1130((int *)v22, v76))
              && !v27 )
            {
              if ( !under_debugger )
                sub_3835A0(50358);
              goto LABEL_177;
            }
            if ( *a2 == 15 )
              sub_2051E0(a1, v22);
            goto LABEL_32;
          }
          v79 = -1;
          v47 = *(_QWORD *)(a1 + 72);
          v48 = (__int64 *)a2;
          v80 = 0;
          v49 = *(_DWORD *)(v47 + 40);
          v84 = 0xFFFFFFFF00000000LL;
          *(_QWORD *)&v85 = 0;
          v50 = *a2;
          if ( *a2 == 15 )
          {
            v77 = v47;
            if ( !(unsigned __int8)sub_1C2B50(*((_QWORD *)a2 + 1), 0, 0) )
              goto LABEL_114;
            v48 = &v84;
            sub_125E60(
              (__int64)&v84,
              *(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL),
              **(_QWORD **)(*((_QWORD *)a2 + 1) + 8LL),
              *(unsigned __int16 *)(**(_QWORD **)(*((_QWORD *)a2 + 1) + 8LL) + 18LL));
            v50 = v84;
            v47 = v77;
          }
          if ( v50 == 1 )
          {
            if ( *(_BYTE *)(v47 + 32) != 1 )
              goto LABEL_114;
            v51 = *((int *)v48 + 2);
          }
          else
          {
            if ( v50 != 5 )
            {
              if ( !under_debugger )
                sub_3835A0(51866);
              goto LABEL_177;
            }
            if ( *(_BYTE *)(v47 + 32) == 1 )
              goto LABEL_114;
            v51 = *(_QWORD *)(v48[1] + 8);
          }
          v52 = *((_DWORD *)v48 + 1);
          v53 = *(_DWORD *)(v47 + 40) + 1;
          if ( v52 != -1 && *(_DWORD *)(v47 + 40) != -1 )
          {
            v54 = *(_QWORD *)(v47 + 24);
            if ( v51 + v52 + 1 - 1 >= v54 && v53 + v54 - 1 >= v51 )
            {
              HIDWORD(v80) = *((_DWORD *)v48 + 1);
              v55 = (__int64)&v84;
              LOBYTE(v80) = v50;
              v79 = v51;
              sub_11C7E0((__int64)&v84);
              v57 = *(_QWORD *)(a1 + 72);
              v58 = *(unsigned __int8 *)(v57 + 32);
              if ( (_BYTE)v58 == 1 )
              {
                v59 = *(int *)(v57 + 24);
              }
              else
              {
                if ( (_BYTE)v58 != 5 )
                  goto LABEL_161;
                v59 = *(_QWORD *)(v57 + 24);
              }
              if ( (_BYTE)v80 == (_BYTE)v58 )
              {
                v58 = *(int *)(v57 + 40);
                v56 = v79;
                if ( *(_DWORD *)(v57 + 40) )
                {
                  if ( v79 >= v59 )
                  {
                    v56 = v79 + SHIDWORD(v80) - 1;
                    if ( v58 + v59 - 1 >= v56 )
                    {
LABEL_32:
                      if ( v75 != -1 )
                        return 0;
LABEL_33:
                      v28 = sub_208DA0(
                              (unsigned __int64)a2,
                              *(int *)(*(_QWORD *)(a1 + 72) + 44LL),
                              (__int64)v83,
                              *(__m128i **)(*(_QWORD *)(a1 + 8) + 800LL),
                              a4,
                              1u,
                              nullptr);
                      if ( !v28 )
                      {
                        ++*(_DWORD *)(a1 + 196);
                        goto LABEL_35;
                      }
                      if ( (**(_DWORD **)(a1 + 8) & 0x40000) == 0 )
                      {
                        if ( v28 != 4 )
                          return 0;
                        goto LABEL_50;
                      }
                      if ( !under_debugger )
                        sub_3835A0(50359);
LABEL_177:
                      BUG();
                    }
                  }
                }
              }
              v60 = *(_BYTE *)(a1 + 201);
              v81 = -1;
              v82 = 0;
              v61 = 2 * v60;
              if ( (a2[1] & 2) != 0 || *a2 == 15 )
              {
                v78 = v61;
                v65 = sub_1213F0((char *)a2, (__int64)&v81, v58, v56, v57);
                v61 = v78;
                if ( v65
                  && (v55 = (unsigned __int8)v82, (_BYTE)v82 == (_BYTE)v80)
                  && (v56 = v81, HIDWORD(v82))
                  && v79 >= v81 )
                {
                  v51 = SHIDWORD(v82) + v81 - 1;
                  v57 = *(_QWORD *)(a1 + 72);
                  if ( v51 >= v79 + SHIDWORD(v80) - 1 )
                  {
                    v58 = *(unsigned __int8 *)(v57 + 32);
                    if ( (_BYTE)v58 == 1 )
                    {
                      v71 = *(int *)(v57 + 24);
                    }
                    else
                    {
                      if ( (_BYTE)v58 != 5 )
                        goto LABEL_161;
                      v71 = *(_QWORD *)(v57 + 24);
                    }
                    if ( (_BYTE)v82 == (_BYTE)v58 && v71 >= v81 && v51 >= v71 + *(int *)(v57 + 40) - 1 )
                      v61 = v78 | 1;
                  }
                }
                else
                {
                  v57 = *(_QWORD *)(a1 + 72);
                }
              }
              if ( (unsigned int)sub_203060(
                                   *(_QWORD *)(a1 + 184),
                                   *(_QWORD **)(a1 + 48),
                                   *(__int64 **)(a1 + 56),
                                   *(__m128i **)(a1 + 64),
                                   v57,
                                   (__int64)&v79,
                                   v61) )
              {
                v66 = *(unsigned __int64 **)(a1 + 64);
                v84 = 0;
                *(_QWORD *)&v86 = v79;
                v88 = 1;
                BYTE8(v86) = v80;
                v85 = 0;
                v87 = 0xFFFFFFFF00000001LL;
                v68 = sub_104830(v66, (__int64)&v84);
                if ( v84 )
                {
                  *(_QWORD *)&v85 = 0;
                  qfree();
                }
                if ( !v68 )
                {
                  if ( !under_debugger )
                    sub_3835A0(51867);
                  goto LABEL_177;
                }
                v70 = *((unsigned int *)v68 + 10);
                if ( (int)v70 <= v49 )
                {
                  if ( !under_debugger )
                    sub_3835A0(52936);
                  goto LABEL_177;
                }
                if ( *((_BYTE *)v68 + 32) == 5 )
                  sub_232FC0(*(_QWORD *)(a1 + 8), v68[3], v70, v67, v69);
              }
              else if ( !sub_206E40(a1, a2, (__int64)v83, 1u) )
              {
                v64 = *(_QWORD *)(a1 + 8);
                if ( (*(_BYTE *)(*(_QWORD *)(v64 + 1496) + 604LL) & 0x10) == 0 )
                  return 4294967276LL;
                if ( (_BYTE)v80 != 5 )
                {
LABEL_107:
                  if ( (*(_WORD *)(v64 + 2) & 0x802) != 0 )
                    return 0;
                  sub_1F0C70(v64, -1, 20, v56, v62, v63);
                  *(_DWORD *)(v22 + 24) |= 0x400u;
                  if ( *((_DWORD *)a2 + 1) > v49
                    && !(unsigned __int8)sub_1EEE20(*(unsigned __int8 **)(a1 + 8))
                    && !(unsigned __int8)sub_1F1130((int *)v22, v76)
                    && *a2 != 15 )
                  {
                    if ( !under_debugger )
                      sub_3835A0(50360);
                    goto LABEL_177;
                  }
                  goto LABEL_32;
                }
                v55 = *(_QWORD *)(a1 + 16);
                v51 = v79;
                if ( !(unsigned __int8)sub_1F0FD0(v55, v79, SHIDWORD(v80)) )
                {
                  v64 = *(_QWORD *)(a1 + 8);
                  goto LABEL_107;
                }
                v72 = *(_QWORD *)(a1 + 72);
                v58 = *(unsigned __int8 *)(v72 + 32);
                if ( (_BYTE)v58 == 1 )
                {
                  v73 = *(int *)(v72 + 24);
                }
                else
                {
                  if ( (_BYTE)v58 != 5 )
                    goto LABEL_161;
                  v73 = *(_QWORD *)(v72 + 24);
                }
                LOBYTE(v85) = *(_BYTE *)(v72 + 32);
                v51 = (unsigned __int64)&v84;
                v84 = v73;
                DWORD1(v85) = *(_DWORD *)(v72 + 40);
                sub_32FC40(&v79, &v84);
                v55 = *(_QWORD *)(a1 + 8);
                v58 = HIDWORD(v80);
                if ( (_BYTE)v80 == 5 )
                {
                  if ( !(unsigned __int8)sub_232FC0(v55, v79, HIDWORD(v80), v56, v74) )
                    return 0;
                  return 4294967260LL;
                }
LABEL_161:
                sub_201700(v55, v51, v58, v56);
              }
              return 4294967260LL;
            }
          }
LABEL_114:
          sub_11C7E0((__int64)&v84);
          if ( sub_206E40(a1, a2, (__int64)v83, 1u) )
            return 3;
          if ( v75 != -1 )
          {
            sub_2051E0(a1, v22);
            return 0;
          }
          if ( (*(_BYTE *)(v22 + 27) & 2) != 0 )
            sub_2051E0(a1, v22);
          goto LABEL_33;
        }
LABEL_66:
        ++*(_DWORD *)(a1 + 196);
        return 0;
      }
LABEL_21:
      *(_QWORD *)&v86 = 0;
      qfree();
      goto LABEL_22;
    }
    if ( (unsigned __int8)sub_318830(a1 + 160, (char *)&v85 + 8) )
    {
      if ( !*((_QWORD *)&v85 + 1) )
        goto LABEL_22;
      goto LABEL_21;
    }
    if ( *((_QWORD *)&v85 + 1) )
    {
      *(_QWORD *)&v86 = 0;
      qfree();
    }
LABEL_58:
    qfree();
    return 0;
  }
  if ( (*(_BYTE *)(*v17 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_46;
  while ( 1 )
  {
    v20 = *(_QWORD *)(v19 + 24);
    v18 = v19 + 24;
    if ( (unsigned __int64)a2 >= v20 )
      break;
    v19 = *(_QWORD *)(v19 + 8);
LABEL_16:
    if ( (*(_BYTE *)v19 & 2) != 0 )
      goto LABEL_17;
  }
  if ( v20 < (unsigned __int64)a2 )
  {
    v19 = *(_QWORD *)(v19 + 16);
    goto LABEL_16;
  }
  if ( (_QWORD *)v19 != v17 )
    goto LABEL_61;
LABEL_17:
  v21 = *(_QWORD *)(a1 + 72);
  v22 = *(_QWORD *)(v14 + 432) + 104LL * *(int *)(v21 + 44);
  if ( (*(_BYTE *)(v22 + 27) & 2) != 0 )
  {
LABEL_18:
    v75 = -1;
    goto LABEL_19;
  }
LABEL_47:
  v36 = sub_208DA0((unsigned __int64)a2, *(int *)(v21 + 44), (__int64)v83, *(__m128i **)(v14 + 800), a4, 0, a3);
  v37 = v36;
  if ( v36 == 1 )
  {
    v75 = -1;
    goto LABEL_26;
  }
  v38 = 9;
  if ( _bittest64(&v38, v37) )
  {
LABEL_74:
    ++*(_DWORD *)(a1 + 196);
    result = 4294967260LL;
    if ( (_DWORD)v37 == 3 )
      return result;
    if ( a3 && !*(_BYTE *)(v22 + 80) )
      sub_1EFCB0(v22, (__int64)v76, a3, 0);
LABEL_35:
    v29 = *(_QWORD **)(a1 + 184);
    v30 = v29[12];
    v31 = v29[11];
    if ( v29[13] < (unsigned __int64)(v30 + 1) )
    {
      v46 = qvector_reserve();
      v29[11] = v46;
      v31 = v46;
      v30 = v29[12];
    }
    *(_QWORD *)(v31 + 8 * v30) = a2;
    ++v29[12];
    return 0;
  }
  if ( (_DWORD)v37 == 4 )
    goto LABEL_50;
  return 0;
}

