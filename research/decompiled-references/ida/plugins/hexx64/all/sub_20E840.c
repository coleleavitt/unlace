__int64 __fastcall sub_20E840(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // r11
  bool v9; // r14
  bool v10; // r12
  int utf8_char; // r15d
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // r11
  __int64 v22; // rcx
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  int v25; // edx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // al
  char v30; // dl
  int v31; // eax
  int v32; // r10d
  void *v33; // r9
  _BYTE *v34; // rax
  __int64 v35; // r10
  __int64 v36; // rax
  __m128 v37; // xmm0
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // r10
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  unsigned __int64 v44; // r8
  __int64 v45; // r14
  unsigned int v46; // r12d
  int v47; // eax
  unsigned int v48; // eax
  int v49; // eax
  _BYTE *v50; // rcx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r15
  char v54; // al
  _BYTE *v55; // rcx
  int v56; // eax
  unsigned int v57; // eax
  int v58; // eax
  unsigned __int64 v59; // r15
  int dest; // [rsp+0h] [rbp-C8h]
  char destd; // [rsp+0h] [rbp-C8h]
  _BYTE *desta; // [rsp+0h] [rbp-C8h]
  void *destb; // [rsp+0h] [rbp-C8h]
  char *destc; // [rsp+0h] [rbp-C8h]
  void *destg; // [rsp+0h] [rbp-C8h]
  void *destf; // [rsp+0h] [rbp-C8h]
  void *deste; // [rsp+0h] [rbp-C8h]
  char c; // [rsp+8h] [rbp-C0h]
  int cd; // [rsp+8h] [rbp-C0h]
  int ca[2]; // [rsp+8h] [rbp-C0h]
  int cb; // [rsp+8h] [rbp-C0h]
  int cc[2]; // [rsp+8h] [rbp-C0h]
  int cf[2]; // [rsp+8h] [rbp-C0h]
  int ce[2]; // [rsp+8h] [rbp-C0h]
  char v75; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v76; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v77; // [rsp+10h] [rbp-B8h]
  __int64 v78; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v79; // [rsp+10h] [rbp-B8h]
  __int64 v80; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v81; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v82; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v83; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v84; // [rsp+10h] [rbp-B8h]
  __int64 v85; // [rsp+10h] [rbp-B8h]
  _BYTE *v86; // [rsp+10h] [rbp-B8h]
  _BYTE *v87; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v88; // [rsp+10h] [rbp-B8h]
  __int64 v89; // [rsp+18h] [rbp-B0h]
  __int64 v90; // [rsp+18h] [rbp-B0h]
  __int64 v91; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v92; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v93; // [rsp+18h] [rbp-B0h]
  __int64 v94; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v96; // [rsp+18h] [rbp-B0h]
  __int64 v97; // [rsp+20h] [rbp-A8h]
  __int64 v98; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+28h] [rbp-A0h]
  int v101; // [rsp+30h] [rbp-98h]
  unsigned __int64 v102; // [rsp+30h] [rbp-98h]
  __int64 v103; // [rsp+38h] [rbp-90h]
  __int64 v104; // [rsp+50h] [rbp-78h] BYREF
  __int128 v105; // [rsp+58h] [rbp-70h]
  __int64 v106; // [rsp+70h] [rbp-58h] BYREF
  __int128 v107; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v108; // [rsp+88h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 64 )
    return 0;
  v3 = sub_261AA0(a2, *(_QWORD *)(a3 + 24), 0);
  if ( !(_BYTE)v3 )
    return 0;
  v6 = *(_QWORD *)(a3 + 24);
  v105 = 0;
  v104 = 0;
  if ( (unsigned int)sub_261BF0(a2, &v104, v6, 0, nullptr) && (unsigned __int64)v105 > 1 )
  {
    v106 = 0;
    v107 = 0;
    v7 = getinf();
    v8 = v107;
    v9 = 0;
    v10 = 0;
    v101 = 2 * v7;
    if ( (_QWORD)v107 )
LABEL_8:
      --v8;
    if ( v8 < v101 )
    {
      while ( 1 )
      {
        utf8_char = get_utf8_char();
        if ( (unsigned int)(utf8_char - 1) > 0xFE )
          goto LABEL_25;
        v8 = v107;
        v12 = v107;
        if ( (unsigned __int64)v107 > 1 )
          break;
        if ( !sub_32E500(utf8_char) )
        {
          v41 = v107;
          v42 = 2;
          if ( (_QWORD)v107 )
          {
            v42 = v107 + 1;
            v41 = v107 - 1;
          }
          v43 = v106;
          if ( *((_QWORD *)&v107 + 1) < v42 )
          {
            v94 = v41;
            v83 = v42;
            v106 = qvector_reserve((__int64)&v106, v106, v42, 1);
            v41 = v94;
            v43 = v106;
            v42 = v83;
          }
          *(_QWORD *)&v107 = v42;
          *(_BYTE *)(v43 + v41) = 95;
          *(_BYTE *)(v106 + v41 + 1) = 0;
        }
        v8 = v107;
        v13 = v106;
        v17 = v107;
        v14 = v106;
        if ( (_QWORD)v107 )
        {
          if ( (_QWORD)v107 == 1 )
          {
            if ( (unsigned int)(char)utf8_char <= 0x7F )
            {
              v91 = v106;
              v80 = v106;
              v99 = v107;
              v39 = isalnum((char)utf8_char);
              v14 = v80;
              v13 = v91;
              if ( v39 )
              {
                v16 = 1;
                goto LABEL_16;
              }
              v17 = v99;
            }
            goto LABEL_64;
          }
          v12 = v107;
LABEL_13:
          v14 = v13;
          if ( (unsigned int)(char)utf8_char > 0x7F )
          {
            if ( *(_BYTE *)(v13 + v8 - 2) == 95 )
              goto LABEL_23;
          }
          else
          {
            v100 = v8;
            v75 = *(_BYTE *)(v13 + v8 - 2);
            v103 = v12;
            v15 = isalnum((char)utf8_char);
            v14 = v13;
            v8 = v100;
            if ( v15 )
            {
              v16 = v103;
LABEL_16:
              v17 = v16 - 1;
              v18 = v16 + 1;
LABEL_17:
              if ( *((_QWORD *)&v107 + 1) < v18 )
              {
                v92 = v17;
                v81 = v18;
                v106 = qvector_reserve((__int64)&v106, v13, v18, 1);
                v17 = v92;
                v14 = v106;
                v18 = v81;
              }
              *(_QWORD *)&v107 = v18;
              *(_BYTE *)(v14 + v17) = utf8_char;
              *(_BYTE *)(v106 + v17 + 1) = 0;
              if ( !v10 )
                goto LABEL_20;
              goto LABEL_55;
            }
            if ( v75 == 95 )
            {
              if ( v10 )
              {
                v10 = v9;
                if ( v9 )
                  goto LABEL_23;
LABEL_57:
                v10 = v3;
LABEL_22:
                v77 = v8;
                v20 = islower(utf8_char);
                v8 = v77;
                v9 = v20 != 0;
                goto LABEL_23;
              }
LABEL_21:
              v76 = v8;
              v19 = isupper(utf8_char);
              v8 = v76;
              v10 = v19 != 0;
              if ( !v9 )
                goto LABEL_22;
              goto LABEL_23;
            }
          }
          v17 = v8;
LABEL_64:
          v18 = v17-- + 1;
          goto LABEL_52;
        }
        if ( (unsigned int)(char)utf8_char > 0x7F )
        {
          v18 = 2;
        }
        else
        {
          v98 = v106;
          v90 = v106;
          v79 = v107;
          v38 = isalnum((char)utf8_char);
          v17 = v79;
          v14 = v90;
          v18 = 2;
          v13 = v98;
          if ( v38 )
            goto LABEL_17;
        }
LABEL_52:
        if ( *((_QWORD *)&v107 + 1) < v18 )
        {
          v93 = v17;
          v82 = v18;
          v106 = qvector_reserve((__int64)&v106, v13, v18, 1);
          v17 = v93;
          v14 = v106;
          v18 = v82;
        }
        *(_QWORD *)&v107 = v18;
        *(_BYTE *)(v14 + v17) = 95;
        *(_BYTE *)(v106 + v17 + 1) = 0;
        if ( !v10 )
        {
LABEL_20:
          v8 = v107;
          if ( (unsigned int)(char)utf8_char > 0x7F )
            goto LABEL_23;
          goto LABEL_21;
        }
LABEL_55:
        if ( v9 )
        {
          v8 = v107;
          v10 = v9;
          goto LABEL_23;
        }
        v8 = v107;
        if ( (unsigned int)(char)utf8_char <= 0x7F )
          goto LABEL_57;
LABEL_23:
        if ( v8 )
          goto LABEL_8;
      }
      v13 = v106;
      goto LABEL_13;
    }
LABEL_25:
    sub_20CA50(&v106);
    v21 = v107;
    v22 = v106;
    v23 = v107;
    v24 = v106;
    if ( !(_QWORD)v107 || (v25 = v107 - 1, (unsigned __int64)(v107 - 1) <= 1) )
    {
      v3 = 0;
LABEL_68:
      if ( v22 )
      {
        *(_QWORD *)&v107 = 0;
        qfree(v22);
      }
      goto LABEL_46;
    }
    if ( !a1 )
      goto LABEL_68;
    if ( v101 > v25 || (v26 = v107 - 2, (int)v107 - 2 <= 1) )
    {
      if ( v10 && v9 )
        goto LABEL_91;
      goto LABEL_74;
    }
    v27 = v26;
    v28 = v106 + (int)v107 - 3 - (__int64)v26;
    while ( 1 )
    {
      v29 = *(_BYTE *)(v28 + v27);
      if ( v29 != 95 )
      {
        v30 = *(_BYTE *)(v24 + v27);
        if ( v30 == 95 )
          goto LABEL_37;
        if ( (unsigned int)v29 > 0x7F )
        {
LABEL_70:
          if ( (unsigned __int8)(v30 - 48) <= 9u )
            goto LABEL_37;
          goto LABEL_71;
        }
        v102 = v21;
        v97 = v28;
        v89 = v22;
        v78 = v27;
        c = *(_BYTE *)(v24 + v27);
        dest = v29;
        v31 = islower(v29);
        v32 = dest;
        v30 = c;
        v27 = v78;
        v22 = v89;
        v28 = v97;
        v21 = v102;
        if ( v31 )
        {
          if ( (unsigned int)c > 0x7F )
          {
            if ( (unsigned int)(dest - 48) <= 9 )
              goto LABEL_37;
            goto LABEL_71;
          }
          cd = dest;
          destd = v30;
          v40 = isupper(v30);
          v30 = destd;
          v32 = cd;
          v27 = v78;
          v22 = v89;
          v28 = v97;
          v21 = v102;
          if ( v40 )
            goto LABEL_37;
        }
        if ( (unsigned int)(v32 - 48) > 9 )
          goto LABEL_70;
        if ( (unsigned __int8)(v30 - 48) > 9u )
        {
LABEL_37:
          v33 = (void *)(v27 + 1);
          if ( v21 < v27 + 1 )
          {
            if ( *((_QWORD *)&v107 + 1) < (unsigned __int64)v33 )
            {
              *(_QWORD *)ce = v27;
              destf = (void *)(v27 + 1);
              v106 = qvector_reserve((__int64)&v106, v24, v27 + 1, 1);
              v23 = v107;
              v22 = v106;
              v27 = *(_QWORD *)ce;
              v33 = destf;
            }
            destg = v33;
            *(_QWORD *)cf = v27;
            memset((void *)(v22 + v23), 0, (size_t)v33 - v23);
            v34 = (_BYTE *)(v106 + *(_QWORD *)cf);
            *(_QWORD *)&v107 = destg;
          }
          else
          {
            if ( v21 != v27 + 1 )
              *(_QWORD *)&v107 = v27 + 1;
            v34 = (_BYTE *)(v24 + v27);
          }
          *v34 = 0;
          v24 = v106;
          v35 = v106;
          if ( v10 && v9 )
          {
            v23 = v107;
            if ( !(_QWORD)v107 )
              goto LABEL_44;
LABEL_122:
            v25 = v23 - 1;
LABEL_91:
            v44 = (unsigned int)(v25 - 2);
            v35 = v24;
            if ( v25 - 2 <= 0 )
              goto LABEL_44;
            v45 = v25 - 3;
            while ( 2 )
            {
              if ( *(_BYTE *)(v35 + v44) == 95 )
              {
                if ( v23 || (_DWORD)v45 )
                {
                  v46 = *(char *)(v35 + v45);
                  desta = (_BYTE *)(v35 + v44);
                  if ( v46 <= 0x7F )
                  {
                    v84 = v44;
                    *(_QWORD *)ca = v35;
                    v47 = isalpha(v46);
                    v35 = *(_QWORD *)ca;
                    v44 = v84;
                    if ( v47 )
                    {
                      v48 = *(char *)(*(_QWORD *)ca + (int)v84 + 1);
                      if ( v48 <= 0x7F )
                      {
                        v95 = v84;
                        v85 = *(_QWORD *)ca;
                        cb = v48;
                        v49 = isalpha(v48);
                        v35 = v85;
                        v44 = v95;
                        if ( v49 )
                        {
                          v50 = desta;
                          if ( v23 )
                          {
                            v51 = v23 - 1;
                            if ( v95 < v23 - 1 )
                            {
                              v52 = v95 + 1;
                              v53 = v95;
                              if ( v95 + 1 < v51 )
                              {
                                v59 = v51 - v52;
                                memmove(desta, (const void *)(v85 + v52), v51 - v52);
                                v44 = v95;
                                v35 = v106;
                                v53 = v95 + v59;
                                v52 = v53 + 1;
                              }
                              if ( *((_QWORD *)&v107 + 1) < v52 )
                              {
                                v88 = v44;
                                deste = (void *)v52;
                                v106 = qvector_reserve((__int64)&v106, v35, v52, 1);
                                v44 = v88;
                                v35 = v106;
                                v52 = (unsigned __int64)deste;
                              }
                              *(_QWORD *)&v107 = v52;
                              *(_BYTE *)(v35 + v53) = 0;
                              v50 = (_BYTE *)(v44 + v106);
                            }
                          }
                          goto LABEL_108;
                        }
                      }
                    }
                  }
                }
                else
                {
                  v46 = byte_4EEA70;
                  if ( (unsigned int)byte_4EEA70 > 0x7F )
                    goto LABEL_44;
                  destc = (char *)v35;
                  v87 = (_BYTE *)(v35 + v44);
                  *(_QWORD *)cc = v44;
                  v56 = isalpha(byte_4EEA70);
                  v35 = (__int64)destc;
                  if ( !v56 )
                    goto LABEL_44;
                  v57 = destc[2];
                  v23 = 0;
                  v44 = *(_QWORD *)cc;
                  if ( v57 <= 0x7F )
                  {
                    v96 = *(_QWORD *)cc;
                    cb = destc[2];
                    v58 = isalpha(v57);
                    v35 = (__int64)destc;
                    v44 = v96;
                    v50 = v87;
                    if ( v58 )
                    {
LABEL_108:
                      v86 = v50;
                      destb = (void *)v44;
                      if ( isupper(v46) )
                      {
                        v54 = tolower(cb);
                        v55 = v86;
                        v44 = (unsigned __int64)destb;
                      }
                      else
                      {
                        v54 = toupper(cb);
                        v44 = (unsigned __int64)destb;
                        v55 = v86;
                      }
                      *v55 = v54;
                      v35 = v106;
                      v23 = v107;
                    }
                  }
                }
              }
              --v45;
              if ( !--v44 )
                goto LABEL_44;
              continue;
            }
          }
LABEL_74:
          qstrlwr();
          v35 = v106;
LABEL_44:
          v22 = *(_QWORD *)a1;
          v36 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)a1 = v35;
          v37 = _mm_loadh_ps((const double *)&v107 + 1);
          v106 = v22;
          *((_QWORD *)&v107 + 1) = v36;
          *(__m128 *)(a1 + 8) = v37;
          goto LABEL_68;
        }
      }
LABEL_71:
      if ( (int)--v27 <= 1 )
      {
        if ( v10 && v9 )
        {
          v23 = v21;
          goto LABEL_122;
        }
        goto LABEL_74;
      }
    }
  }
  v3 = 0;
LABEL_46:
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  return v3;
}

