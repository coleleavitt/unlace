unsigned __int64 __fastcall sub_3E3A0(__int64 *a1)
{
  char *v1; // r13
  __int16 v2; // si
  const char *v4; // rsi
  char *v5; // r12
  char v6; // al
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v10; // r10
  int v11; // r9d
  char *v12; // rbx
  char v13; // dl
  char v14; // r11
  char *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  int v18; // edi
  char v19; // bl
  __int64 v20; // rax
  char *v21; // rax
  char v22; // dl
  int v23; // r15d
  int v24; // eax
  int v25; // r15d
  char *v26; // rax
  __int16 v27; // ax
  __int16 v28; // cx
  char *v29; // rdx
  char v30; // cl
  int v31; // eax
  int v32; // eax
  char *v33; // rax
  char *v34; // rcx
  __int16 v35; // r8
  bool v36; // dl
  int v37; // edi
  char *v38; // rdi
  char v39; // r8
  char *v40; // rdi
  char v41; // al
  char *v42; // rax
  char v43; // di
  char v44; // al
  int v45; // eax
  int v46; // eax
  unsigned __int64 v47; // rax
  char *v48; // rax
  char v49; // si
  char v50; // dl
  char *v51; // r15
  char v52; // r8
  _BYTE *v53; // rax
  char v54; // r8
  char v55; // cl
  char v56; // r9
  __int64 v57; // rdi
  const char *v58; // rax
  char v59; // dl
  __int64 v60; // rdx
  const void *v61; // r14
  size_t v62; // rax
  _BYTE *v63; // rdi
  const char *v64; // rax
  char *v65; // rdi
  char v66; // r8
  __int64 v67; // r8
  __int64 v68; // rdx
  char v69; // dl
  char *v70; // rax
  int v71; // eax
  __int64 v72; // rax
  char v73; // dl
  char v74; // dl
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r8
  char v78; // dl
  size_t v79; // r15
  __int64 v80; // rdx
  __int64 v81; // r9
  __int64 v82; // r15
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // r15
  __int64 v86; // r8
  __int64 v87; // r15
  __int64 v88; // rdx
  _BYTE *v89; // rax
  __int64 v90; // rax
  _BYTE *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  char *v95; // [rsp+8h] [rbp-D0h]
  char v96; // [rsp+8h] [rbp-D0h]
  char v97; // [rsp+8h] [rbp-D0h]
  char v98; // [rsp+10h] [rbp-C8h]
  __int64 v99; // [rsp+10h] [rbp-C8h]
  __int64 v100; // [rsp+10h] [rbp-C8h]
  __int64 v101; // [rsp+10h] [rbp-C8h]
  char v102; // [rsp+18h] [rbp-C0h]
  char v103; // [rsp+20h] [rbp-B8h]
  __int64 v104; // [rsp+30h] [rbp-A8h]
  _BYTE *v105; // [rsp+30h] [rbp-A8h]
  __int128 v106; // [rsp+38h] [rbp-A0h]
  __int64 v107; // [rsp+50h] [rbp-88h] BYREF
  __int128 v108; // [rsp+58h] [rbp-80h]
  char v109; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v110[30]; // [rsp+71h] [rbp-67h] BYREF
  char v111; // [rsp+8Fh] [rbp-49h] BYREF
  char v112; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v113; // [rsp+98h] [rbp-40h]

  v2 = *((_WORD *)a1 + 124);
  v113 = __readfsqword(0x28u);
  if ( v2 == 278 )
  {
    v18 = *((char *)a1 + 257);
    v19 = *((_BYTE *)a1 + 256);
    if ( (*((_BYTE *)a1 + 257) & 1) != 0 )
    {
      LODWORD(v1) = 4;
      LOBYTE(v95) = v19 & 1;
    }
    else if ( (v18 & 2) != 0 )
    {
      LODWORD(v1) = 3;
      LOBYTE(v95) = v19 & 1;
    }
    else
    {
      if ( (v18 & 4) == 0 )
      {
        v109 = 32;
        v5 = v110;
LABEL_25:
        v7 = a1[77];
        v20 = a1[32] & 0xF;
        if ( (*(_BYTE *)(*(_QWORD *)(v7 + 24) + 4LL) & 1) != 0 )
          v21 = (&off_A0B20)[v20];
        else
          v21 = (char *)*(&off_A0BA0 + v20);
        for ( ; v5 != &v111; ++v5 )
        {
          v22 = *v21++;
          *v5 = v22;
          if ( !v22 )
            goto LABEL_31;
        }
        v111 = 0;
        goto LABEL_80;
      }
      LODWORD(v1) = 2;
      LOBYTE(v95) = v19 & 1;
    }
    v12 = &v109;
    v25 = 1;
    while ( 1 )
    {
      LOWORD(v4) = 69;
      if ( sub_1DCF0(v18, v25) == (_BYTE)v95 )
        LOWORD(v4) = 84;
      if ( v12 >= &v112 )
        goto LABEL_351;
      v26 = v12 + 1;
      *v12 = (char)v4;
      if ( v12 + 1 >= &v112 )
      {
        v111 = 0;
        v26 = &v111;
      }
      if ( ++v25 == (_DWORD)v1 )
        break;
      v18 = *((char *)a1 + 257);
      v12 = v26;
    }
    if ( v26 >= &v112 )
    {
      if ( !under_debugger )
        goto LABEL_184;
      goto LABEL_402;
    }
    v5 = v26 + 1;
    *v26 = 32;
    if ( v26 + 1 >= &v112 )
    {
      v111 = 0;
      v5 = &v111;
    }
    goto LABEL_25;
  }
  LOWORD(v4) = v2 - 1027;
  if ( ((unsigned __int16)v4 & 0xFFFD) == 0 )
  {
    LODWORD(v5) = (*((_DWORD *)a1 + 63) >> 19) & 0xF;
    if ( (*((_DWORD *)a1 + 63) & 0x80000) != 0 )
    {
      LODWORD(v1) = 4;
      goto LABEL_35;
    }
    if ( ((*((_DWORD *)a1 + 63) >> 19) & 2) != 0 )
      goto LABEL_34;
    if ( ((*((_DWORD *)a1 + 63) >> 19) & 4) != 0 )
    {
      LODWORD(v1) = 2;
      goto LABEL_35;
    }
    v6 = *((_BYTE *)a1 + 257);
    if ( v6 < 0 )
    {
      v12 = &v109;
      goto LABEL_71;
    }
    v109 = 32;
    v5 = v110;
LABEL_8:
    v7 = a1[77];
    goto LABEL_9;
  }
  if ( (*((_BYTE *)a1 + 258) & 4) != 0 )
  {
    v10 = a1[77];
    v11 = *((_DWORD *)a1 + 63);
    LOBYTE(v12) = 1;
    v13 = *((_BYTE *)a1 + 256);
    goto LABEL_12;
  }
  v27 = getinf();
  v11 = *((_DWORD *)a1 + 63);
  v13 = *((_BYTE *)a1 + 256);
  v10 = a1[77];
  v14 = v13 & 0xF;
  if ( (v27 & 0x1006) == 0x1002 )
  {
    LOBYTE(v12) = 1;
    goto LABEL_12;
  }
  LOBYTE(v12) = 0;
  v28 = *(_WORD *)(*(_QWORD *)(v10 + 24) + 4LL);
  if ( (v28 & 2) == 0 )
  {
LABEL_12:
    v14 = v13 & 0xF;
    LOBYTE(v1) = (v13 & 0xF) != 14;
    if ( (v11 & 0xC01) != 0 )
    {
      v109 = 83;
      v15 = v110;
      LOBYTE(v95) = 0;
      goto LABEL_14;
    }
    LOBYTE(v95) = 0;
    if ( (~(_WORD)v11 & 0x1002) == 0 )
    {
      v15 = &v109;
LABEL_161:
      if ( !(_BYTE)v12 )
        goto LABEL_322;
      LOWORD(v4) = 88;
      goto LABEL_163;
    }
    v16 = &v109;
LABEL_87:
    if ( (v11 & 0x402) == 0 )
      goto LABEL_246;
    if ( v16 >= &v112 )
    {
      if ( !under_debugger )
        goto LABEL_184;
      goto LABEL_402;
    }
    v34 = v16 + 1;
    *v16 = 66;
    if ( v16 + 1 >= &v112 )
    {
      LOWORD(v4) = *((_WORD *)a1 + 124);
      v17 = &v111;
LABEL_91:
      v111 = 0;
      v16 = &v111;
      if ( (v11 & 0x1800) != 0 )
        goto LABEL_19;
      goto LABEL_92;
    }
LABEL_301:
    v16 = v34;
    if ( (v11 & 0x1800) != 0 )
      goto LABEL_248;
    goto LABEL_273;
  }
  if ( v14 == 14 )
  {
    if ( (v11 & 0xC01) == 0 )
    {
      LOBYTE(v1) = 0;
      if ( (~(_WORD)v11 & 0x1002) != 0 )
        goto LABEL_244;
      LOWORD(v4) = *((_WORD *)a1 + 124);
      goto LABEL_332;
    }
    LOBYTE(v1) = 0;
LABEL_295:
    v109 = 83;
    if ( (~(_WORD)v11 & 0x1002) == 0 )
    {
      LOBYTE(v95) = 1;
      v15 = v110;
      LOBYTE(v12) = 0;
      LOBYTE(v4) = 68;
      goto LABEL_164;
    }
    if ( (~(_WORD)v11 & 0xC00) != 0 )
    {
      LOBYTE(v95) = 1;
      LOBYTE(v12) = 0;
      v16 = v110;
      goto LABEL_87;
    }
    LOBYTE(v95) = 1;
    LOBYTE(v12) = 0;
    v15 = v110;
    goto LABEL_17;
  }
  LOWORD(v4) = *((_WORD *)a1 + 124);
  if ( (unsigned __int16)v4 > 0x75u )
  {
    if ( (unsigned __int16)((_WORD)v4 - 139) > 2u )
      goto LABEL_62;
    goto LABEL_242;
  }
  if ( (unsigned __int16)v4 > 0x72u )
  {
LABEL_242:
    if ( (v11 & 0xC01) == 0 )
    {
      LOBYTE(v1) = 1;
      if ( (~(_WORD)v11 & 0x1002) != 0 )
      {
LABEL_244:
        if ( (v11 & 0x402) == 0 )
        {
          LOBYTE(v95) = 1;
          LOBYTE(v12) = 0;
          v16 = &v109;
          goto LABEL_246;
        }
        v109 = 66;
        LOBYTE(v12) = 0;
        v34 = v110;
        LOBYTE(v95) = 1;
        goto LABEL_301;
      }
LABEL_332:
      v109 = 68;
      LOBYTE(v12) = 0;
      v16 = v110;
      LOBYTE(v95) = 1;
      goto LABEL_165;
    }
    LOBYTE(v1) = 1;
    goto LABEL_295;
  }
LABEL_62:
  if ( (v28 & 1) != 0 )
    v29 = (&off_A0B20)[v14];
  else
    v29 = (char *)*(&off_A0BA0 + v14);
  v16 = &v109;
  do
  {
    v30 = *v29++;
    *v16 = v30;
    if ( !v30 )
    {
      if ( (v11 & 0xC01) == 0 )
      {
        if ( (~(_WORD)v11 & 0x1002) == 0 )
          goto LABEL_321;
        LOBYTE(v95) = 1;
        LOBYTE(v12) = 0;
        LOBYTE(v1) = 0;
        goto LABEL_87;
      }
      if ( v16 >= &v112 )
      {
        if ( !under_debugger )
          goto LABEL_184;
        goto LABEL_402;
      }
      v15 = v16 + 1;
      *v16 = 83;
      if ( v16 + 1 >= &v112 )
      {
        v111 = 0;
        LOBYTE(v12) = 0;
        LOBYTE(v1) = 0;
        v15 = &v111;
        LOBYTE(v95) = 1;
LABEL_14:
        if ( (~(_WORD)v11 & 0x1002) != 0 )
          goto LABEL_15;
        goto LABEL_161;
      }
      if ( (~(_WORD)v11 & 0x1002) == 0 )
      {
        LOBYTE(v95) = 1;
        LOBYTE(v1) = 0;
        LOBYTE(v12) = 0;
        LOWORD(v4) = 68;
        goto LABEL_163;
      }
      LOBYTE(v95) = 1;
      LOBYTE(v12) = 0;
      LOBYTE(v1) = 0;
LABEL_15:
      if ( (~(_WORD)v11 & 0xC00) != 0 )
      {
        v16 = v15;
        goto LABEL_87;
      }
      if ( v15 >= &v112 )
      {
        if ( !under_debugger )
          goto LABEL_184;
        goto LABEL_402;
      }
LABEL_17:
      v16 = v15 + 1;
      *v15 = 87;
      LOWORD(v4) = *((_WORD *)a1 + 124);
      if ( v15 + 1 < &v112 )
        goto LABEL_165;
      goto LABEL_18;
    }
    ++v16;
    v17 = &v111;
  }
  while ( v16 != &v111 );
  v111 = 0;
  if ( (v11 & 0xC01) != 0 )
  {
    if ( (~(_WORD)v11 & 0x1002) != 0 )
    {
      LOBYTE(v95) = 1;
      LOBYTE(v12) = 0;
      v15 = v16;
      LOBYTE(v1) = 0;
      goto LABEL_15;
    }
LABEL_321:
    LOBYTE(v95) = 1;
    v15 = v16;
    LOBYTE(v1) = 0;
    LOBYTE(v12) = 0;
LABEL_322:
    LOWORD(v4) = 68;
LABEL_163:
    if ( v15 < &v112 )
    {
LABEL_164:
      v16 = v15 + 1;
      *v15 = (char)v4;
      LOWORD(v4) = *((_WORD *)a1 + 124);
      if ( v15 + 1 < &v112 )
        goto LABEL_165;
LABEL_18:
      v17 = &v111;
LABEL_19:
      v111 = 0;
      if ( (unsigned __int16)((_WORD)v4 - 871) > 1u )
      {
        v16 = &v111;
        goto LABEL_93;
      }
LABEL_175:
      v111 = 0;
      if ( (v11 & 4) == 0 )
        goto LABEL_185;
LABEL_176:
      v111 = 0;
      v16 = &v111;
      if ( (v11 & 0x20000) == 0 )
        goto LABEL_181;
      goto LABEL_177;
    }
    if ( !under_debugger )
      goto LABEL_184;
LABEL_402:
    BUG();
  }
  if ( (~(_WORD)v11 & 0x1002) == 0 )
  {
    LOBYTE(v95) = 1;
    LOBYTE(v1) = 0;
    LOBYTE(v12) = 0;
    goto LABEL_19;
  }
  LOBYTE(v95) = 1;
  LOBYTE(v1) = 0;
  LOBYTE(v12) = 0;
  if ( (v11 & 0x402) != 0 )
    goto LABEL_91;
LABEL_246:
  if ( (v11 & 0x1800) != 0 )
  {
    if ( v16 >= &v112 )
      goto LABEL_391;
LABEL_248:
    *v16 = 72;
    if ( v16 + 1 >= &v112 )
    {
      LOWORD(v4) = *((_WORD *)a1 + 124);
      goto LABEL_18;
    }
    LOWORD(v4) = *((_WORD *)a1 + 124);
    ++v16;
LABEL_165:
    if ( (unsigned __int16)((_WORD)v4 - 871) <= 1u )
    {
LABEL_166:
      v17 = v16 + 1;
      *v16 = 68;
      if ( v16 + 1 >= &v112 )
      {
        v17 = &v111;
        goto LABEL_175;
      }
      if ( (v11 & 4) == 0 )
        goto LABEL_185;
      ++v16;
      goto LABEL_95;
    }
LABEL_93:
    if ( (v11 & 4) == 0 )
      goto LABEL_186;
    if ( v16 >= &v112 )
    {
      if ( !under_debugger )
        goto LABEL_184;
      goto LABEL_402;
    }
LABEL_95:
    *v16 = 84;
    if ( v16 + 1 < &v112 )
    {
      ++v16;
      if ( (v11 & 0x20000) != 0 )
        goto LABEL_97;
      goto LABEL_181;
    }
    v17 = &v111;
    goto LABEL_176;
  }
LABEL_273:
  LOWORD(v4) = *((_WORD *)a1 + 124);
LABEL_92:
  if ( (unsigned __int16)((_WORD)v4 - 871) > 1u )
    goto LABEL_93;
  if ( v16 < &v112 )
    goto LABEL_166;
  if ( under_debugger )
    goto LABEL_402;
LABEL_184:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            while ( 2 )
            {
              while ( 2 )
              {
                while ( 2 )
                {
                  interr();
LABEL_185:
                  v16 = v17;
LABEL_186:
                  if ( (v11 & 0x20000) == 0 )
                  {
LABEL_181:
                    if ( (v11 & 0x100) == 0 )
                      goto LABEL_191;
                    if ( v16 >= &v112 )
                    {
                      if ( under_debugger )
                        goto LABEL_402;
                      continue;
                    }
LABEL_101:
                    v17 = v16 + 1;
                    *v16 = 76;
                    if ( v16 + 1 < &v112 )
                    {
                      if ( (v11 & 0x2000) != 0 )
                      {
                        ++v16;
                        goto LABEL_104;
                      }
                      goto LABEL_180;
                    }
                    v17 = &v111;
LABEL_178:
                    v111 = 0;
                    if ( (v11 & 0x2000) == 0 )
                    {
LABEL_180:
                      v16 = v17;
                      goto LABEL_105;
                    }
LABEL_179:
                    v111 = 0;
                    goto LABEL_180;
                  }
                  break;
                }
                if ( v16 >= &v112 )
                {
                  if ( under_debugger )
                    goto LABEL_402;
                  continue;
                }
                break;
              }
LABEL_97:
              *v16 = 78;
              if ( v16 + 1 >= &v112 || (v17 = v16 + 2, v16[1] = 83, v16 + 2 >= &v112) )
              {
                v17 = &v111;
LABEL_177:
                v111 = 0;
                if ( (v11 & 0x100) == 0 )
                  goto LABEL_190;
                goto LABEL_178;
              }
              if ( (v11 & 0x100) != 0 )
              {
                v16 += 2;
                goto LABEL_101;
              }
LABEL_190:
              v16 = v17;
LABEL_191:
              if ( (v11 & 0x2000) != 0 )
              {
                if ( v16 >= &v112 )
                {
                  if ( under_debugger )
                    goto LABEL_402;
                  continue;
                }
LABEL_104:
                *v16++ = 80;
                if ( v16 >= &v112 )
                {
                  v17 = &v111;
                  goto LABEL_179;
                }
              }
              break;
            }
LABEL_105:
            if ( (unsigned __int16)((_WORD)v4 - 115) > 2u
              && (unsigned __int16)((_WORD)v4 - 33) > 1u
              && (_WORD)v4 != 214
              && (_WORD)v4 != 184
              && (_WORD)v4 != 343
              && (_WORD)v4 != 416
              && (unsigned __int16)((_WORD)v4 - 139) > 2u )
            {
              goto LABEL_121;
            }
            v35 = *((_WORD *)a1 + 135);
            v36 = !((unsigned __int8)v11 >> 7);
            v37 = v36;
            if ( (v11 & 0x10) == 0 )
            {
              v37 = v36 | 2;
              if ( v35 != 13 )
              {
                if ( (_BYTE)v95 || (v11 & 0x80u) == 0 )
                {
LABEL_109:
                  if ( v16 >= &v112 )
                    goto LABEL_395;
                  v38 = (char *)*(&off_A0740 + v37);
                  if ( v16 != &v111 )
                    goto LABEL_113;
                  goto LABEL_201;
                }
                if ( (_WORD)v4 == 141 || (v40 = v16, (_WORD)v4 == 117) )
                {
                  v37 = 2;
                  goto LABEL_109;
                }
                goto LABEL_122;
              }
              if ( (_WORD)v4 != 214 )
                goto LABEL_265;
              if ( !(_BYTE)v95 && (v11 & 0x80u) != 0 )
                goto LABEL_121;
              if ( v16 >= &v112 )
              {
LABEL_395:
                if ( under_debugger )
                  goto LABEL_402;
                interr();
LABEL_397:
                if ( under_debugger )
                  goto LABEL_402;
                continue;
              }
              v38 = (char *)*(&off_A0740 + v37);
              if ( v16 == &v111 )
              {
                v111 = 0;
                goto LABEL_203;
              }
LABEL_113:
              while ( 1 )
              {
                v39 = *v38++;
                *v16 = v39;
                if ( !v39 )
                  break;
                if ( ++v16 == &v111 )
                  goto LABEL_201;
              }
LABEL_114:
              if ( (_WORD)v4 == 141 || (_WORD)v4 == 117 )
              {
                if ( v16 >= &v112 )
                {
                  if ( under_debugger )
                    goto LABEL_402;
                  continue;
                }
                v40 = v16 + 1;
                *v16 = 88;
                if ( v16 + 1 >= &v112 )
                  goto LABEL_206;
                goto LABEL_122;
              }
LABEL_116:
              if ( (_BYTE)v95 )
              {
                if ( (_WORD)v4 == 140 || (_WORD)v4 == 116 )
                {
                  if ( v16 >= &v112 )
                    goto LABEL_388;
                  v40 = v16 + 1;
                  *v16 = 83;
                  if ( v16 + 1 >= &v112 )
                    goto LABEL_206;
                  goto LABEL_122;
                }
                if ( (_WORD)v4 == 115 || (_WORD)v4 == 139 )
                {
                  if ( v16 >= &v112 )
                  {
LABEL_388:
                    if ( under_debugger )
                      goto LABEL_402;
                    continue;
                  }
                  v40 = v16 + 1;
                  *v16 = 68;
                  if ( v16 + 1 >= &v112 )
                    goto LABEL_206;
                  goto LABEL_122;
                }
              }
LABEL_121:
              v40 = v16;
              goto LABEL_122;
            }
            break;
          }
          if ( v35 != 13 || (_WORD)v4 == 214 )
            goto LABEL_109;
LABEL_265:
          if ( v16 >= &v112 )
            goto LABEL_395;
          v65 = (char *)*(&off_A0760 + (v37 | (4 * (((_WORD)v4 == 33) | (unsigned __int8)((_WORD)v4 == 184)))));
          if ( v16 != &v111 )
          {
            do
            {
              v66 = *v65++;
              *v16 = v66;
              if ( !v66 )
                goto LABEL_114;
            }
            while ( ++v16 != &v111 );
          }
LABEL_201:
          v111 = 0;
          if ( (_WORD)v4 != 141 && (_WORD)v4 != 117 )
          {
LABEL_203:
            v16 = &v111;
            goto LABEL_116;
          }
LABEL_206:
          v111 = 0;
          v40 = &v111;
LABEL_122:
          if ( (v11 & 0x180000) != 0 )
          {
            v41 = 84;
            if ( (v11 & 0x180000) != 0x180000 )
              v41 = 69;
            if ( v40 >= &v112 )
            {
LABEL_399:
              if ( under_debugger )
                goto LABEL_402;
              continue;
            }
            v5 = v40 + 1;
            *v40 = v41;
            if ( v40 + 1 >= &v112 )
            {
              v111 = 0;
              if ( (v11 & 0x200) == 0 )
                goto LABEL_128;
              goto LABEL_173;
            }
            if ( (v11 & 0x200) != 0 )
            {
              ++v40;
LABEL_172:
              v5 = v40 + 1;
              *v40 = 87;
              if ( v40 + 1 >= &v112 )
              {
LABEL_173:
                v111 = 0;
LABEL_128:
                v5 = &v111;
              }
            }
          }
          else
          {
            if ( (v11 & 0x200) != 0 )
            {
              if ( v40 >= &v112 )
                goto LABEL_399;
              goto LABEL_172;
            }
            v5 = v40;
          }
          break;
        }
        if ( !(_BYTE)v1 )
          goto LABEL_140;
        if ( (_BYTE)v12 )
        {
          if ( v5 >= &v112 )
            goto LABEL_397;
          *v5 = 46;
          if ( v5 + 1 < &v112 )
          {
            ++v5;
          }
          else
          {
            v111 = 0;
            v5 = &v111;
          }
        }
        else if ( v5 >= &v112 )
        {
          goto LABEL_395;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 24) + 4LL) & 1) != 0 )
          v42 = (&off_A0B20)[v14];
        else
          v42 = (char *)*(&off_A0BA0 + v14);
        if ( v5 != &v111 )
        {
          while ( 1 )
          {
            v43 = *v42++;
            *v5 = v43;
            if ( !v43 )
              break;
            if ( ++v5 == &v111 )
              goto LABEL_234;
          }
LABEL_140:
          if ( (v11 & 0x8000) == 0 )
            goto LABEL_145;
          if ( v5 >= &v112 )
          {
LABEL_351:
            if ( under_debugger )
              goto LABEL_402;
            continue;
          }
          goto LABEL_142;
        }
        break;
      }
LABEL_234:
      v111 = 0;
      v5 = &v111;
      if ( (v11 & 0x8000) == 0 )
      {
LABEL_144:
        v5 = &v111;
        goto LABEL_145;
      }
LABEL_142:
      *v5 = 46;
      if ( v5 + 1 >= &v112 || (v5[1] = 87, v5 + 2 >= &v112) )
      {
        v111 = 0;
        goto LABEL_144;
      }
      v5 += 2;
LABEL_145:
      if ( (v11 & 0x10000) != 0 )
      {
        v50 = *((_BYTE *)a1 + 257);
        v104 = 0;
        v106 = 0;
        switch ( v50 & 7 )
        {
          case 0:
            v1 = "A";
            v51 = "I";
            goto LABEL_209;
          case 1:
            v1 = "B";
            v51 = "I";
            goto LABEL_209;
          case 2:
            v1 = "A";
            v51 = "D";
            goto LABEL_209;
          case 3:
            v1 = "B";
            v51 = "D";
            goto LABEL_209;
          case 4:
            v1 = "A";
            v51 = "G";
LABEL_209:
            v52 = v50 & 0x18;
            if ( (unsigned __int16)v4 > 0x365u )
            {
              if ( (_WORD)v4 == 870 )
              {
                if ( v52 == 16 )
                {
                  strcpy((char *)qvector_reserve(), "LR");
                  v1 = (_BYTE *)(&dword_0 + 3);
                  v67 = 2;
                  v68 = 4;
                }
                else
                {
                  if ( v52 )
                    goto LABEL_299;
                  v67 = 0;
                  v1 = (_BYTE *)(&dword_0 + 1);
                  v68 = 2;
                }
                v99 = v67;
                v95 = (char *)v68;
                v104 = qvector_reserve();
                LOWORD(v4) = v104;
                *(_QWORD *)&v106 = v95;
                v69 = *v51;
                v1[v104] = 0;
                *(_BYTE *)(v104 + v99) = v69;
LABEL_218:
                if ( v5 >= &v112 )
                {
                  if ( under_debugger )
                    goto LABEL_402;
                  interr();
                  goto LABEL_370;
                }
                v57 = v104;
                v58 = (const char *)v104;
                if ( !(_QWORD)v106 )
                  v58 = &s1;
                if ( v5 == &v111 )
                {
LABEL_298:
                  v111 = 0;
                  v5 = &v111;
                }
                else
                {
                  while ( 1 )
                  {
                    v59 = *v58++;
                    *v5 = v59;
                    if ( !v59 )
                      break;
                    if ( ++v5 == &v111 )
                      goto LABEL_298;
                  }
                }
LABEL_225:
                if ( v57 )
                  qfree();
                break;
              }
            }
            else if ( (unsigned __int16)v4 > 0x363u )
            {
              LOWORD(v4) = 0;
              v98 = v50 & 0x60;
              v96 = v50 & 0x18;
              v53 = (_BYTE *)qvector_reserve();
              v54 = v96;
              v55 = *v51;
              v104 = (__int64)v53;
              *(_QWORD *)&v106 = 2;
              v56 = v98;
              v53[1] = 0;
              *v53 = v55;
              LOBYTE(v95) = (v96 - 8) & 0xF7;
              if ( (_BYTE)v95 )
              {
                if ( v54 )
                  goto LABEL_299;
              }
              else
              {
                v103 = v54;
                v104 = qvector_reserve();
                v56 = v98;
                LOWORD(v4) = v104;
                *(_QWORD *)&v106 = 3;
                v73 = *v1;
                *(_BYTE *)(v104 + 2) = 0;
                *(_BYTE *)(v104 + 1) = v73;
                if ( v103 == 8 )
                {
                  LOWORD(v4) = v104;
                  v93 = qvector_reserve();
                  v56 = v98;
                  v104 = v93;
                  *(_QWORD *)&v106 = 5;
                  strcpy((char *)(v93 + 2), "17");
                }
              }
              switch ( v56 )
              {
                case 96:
                  v83 = v106 + 1;
                  v84 = v106 + 2;
                  v85 = v106 - 1;
                  if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)(v106 + 2) )
                  {
                    LOWORD(v4) = v104;
                    v90 = qvector_reserve();
                    v83 = v106 + 1;
                    v84 = v106 + 2;
                    v104 = v90;
                  }
                  *(_QWORD *)&v106 = v84;
                  *(_BYTE *)(v104 + v83) = 0;
                  *(_WORD *)(v85 + v104) = 20563;
                  goto LABEL_217;
                case 32:
                  v80 = v106 + 1;
                  v81 = v106;
                  v82 = v106 - 1;
                  if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)(v106 + 1) )
                  {
                    LOWORD(v4) = v104;
                    v94 = qvector_reserve();
                    v81 = v106;
                    v80 = v106 + 1;
                    v104 = v94;
                  }
                  *(_QWORD *)&v106 = v80;
                  *(_BYTE *)(v104 + v81) = 0;
                  *(_BYTE *)(v82 + v104) = 90;
                  goto LABEL_217;
                case 64:
                  v86 = ((_QWORD)v106 == 0) + (_QWORD)v106 - 1LL;
                  v87 = v86 + 2;
                  v88 = v86 + 3;
                  if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)(v86 + 3) )
                  {
                    LOWORD(v4) = v104;
                    v101 = v86 + 3;
                    v92 = qvector_reserve();
                    v86 = ((_QWORD)v106 == 0) + (_QWORD)v106 - 1LL;
                    v88 = v101;
                    v104 = v92;
                  }
                  *(_QWORD *)&v106 = v88;
                  *(_BYTE *)(v104 + v87) = 0;
                  *(_WORD *)(v104 + v86) = 13873;
                  goto LABEL_217;
                case 0:
LABEL_217:
                  if ( (_BYTE)v95 )
                  {
                    v75 = v106;
                    if ( (_QWORD)v106 )
                    {
                      v76 = v106 + 1;
                      v77 = v106;
                      v75 = v106 - 1;
                    }
                    else
                    {
                      v76 = 2;
                      v77 = 1;
                    }
                    v4 = (const char *)v104;
                    if ( v76 )
                    {
                      v100 = v77;
                      v95 = (char *)v76;
                      v104 = qvector_reserve();
                      v77 = v100;
                      v4 = (const char *)v104;
                      v76 = (__int64)v95;
                    }
                    *(_QWORD *)&v106 = v76;
                    v78 = *v1;
                    v4[v77] = 0;
                    *(_BYTE *)(v104 + v75) = v78;
                  }
                  goto LABEL_218;
              }
LABEL_299:
              v4 = (const char *)a1[30];
              sub_22E50((__int64)"%a: bad PAC flags %02X", 0.0, (_DWORD)v4);
              v57 = v104;
              goto LABEL_225;
            }
            v97 = v50 & 0x60;
            v105 = (_BYTE *)qvector_reserve();
            v105[1] = 0;
            *v105 = 65;
            v102 = v97;
            LOBYTE(v95) = 3;
            v104 = qvector_reserve();
            LOWORD(v4) = v104;
            *(_QWORD *)&v106 = 3;
            v74 = *v1;
            *(_BYTE *)(v104 + 2) = 0;
            *(_BYTE *)(v104 + 1) = v74;
            if ( v102 == 32 )
            {
              LOBYTE(v95) = 3;
              v104 = qvector_reserve();
              LOWORD(v4) = v104;
              *(_QWORD *)&v106 = 4;
              *(_BYTE *)(v104 + 3) = 0;
              LOBYTE(v1) = v104 + 2;
              *(_BYTE *)(v104 + 2) = 90;
            }
            goto LABEL_218;
          default:
            goto LABEL_299;
        }
      }
      if ( *((_WORD *)a1 + 124) != 959 )
        goto LABEL_147;
      v60 = *((char *)a1 + 257);
      v107 = 0;
      v108 = 0;
      if ( (_DWORD)v60 == 17 )
      {
        v72 = a1[34];
        if ( v72 )
        {
          LOWORD(v4) = 0;
          if ( v72 == 1 )
          {
            v91 = (_BYTE *)qvector_reserve();
            v107 = (__int64)v91;
            *(_QWORD *)&v108 = 4;
            *(_WORD *)v91 = 19523;
            v91[2] = 82;
            *(_BYTE *)(v107 + 3) = 0;
          }
          else
          {
            v107 = qvector_reserve();
            *(_QWORD *)&v108 = 5;
            strcpy((char *)v107, "OP17");
          }
        }
        else
        {
          v89 = (_BYTE *)qvector_reserve();
          LOWORD(v4) = 17747;
          v107 = (__int64)v89;
          *(_QWORD *)&v108 = 4;
          *(_WORD *)v89 = 17747;
          v89[2] = 84;
          *(_BYTE *)(v107 + 3) = 0;
        }
      }
      else if ( (unsigned int)v60 > 0x16 )
      {
        v4 = "OP%d";
        sub_1CD20(&v107);
      }
      else
      {
        v61 = *(&off_A0A60 + v60);
        if ( !v61 || (v62 = strlen((const char *)*(&off_A0A60 + v60)), (v1 = (char *)v62) == nullptr) )
        {
          if ( v5 >= &v112 )
            goto LABEL_380;
          v63 = nullptr;
          v64 = &s1;
          if ( v5 != &v111 )
            goto LABEL_261;
          v111 = 0;
          goto LABEL_147;
        }
        v79 = v62 + 1;
        LOWORD(v4) = (_WORD)v61;
        v107 = qvector_reserve();
        *(_QWORD *)&v108 = v79;
        memmove((void *)v107, v61, (size_t)v1);
        v1[v107] = 0;
      }
      if ( v5 >= &v112 )
      {
LABEL_380:
        if ( !under_debugger )
          interr();
        goto LABEL_402;
      }
      v63 = (_BYTE *)v107;
      v64 = (const char *)v107;
      if ( !(_QWORD)v108 )
        v64 = &s1;
      if ( v5 == &v111 )
      {
LABEL_310:
        v111 = 0;
        v5 = &v111;
      }
      else
      {
LABEL_261:
        while ( 1 )
        {
          LOWORD(v4) = *(unsigned __int8 *)v64++;
          *v5 = (char)v4;
          if ( !(_BYTE)v4 )
            break;
          if ( ++v5 == &v111 )
            goto LABEL_310;
        }
      }
      if ( v63 )
      {
        *(_QWORD *)&v108 = 0;
        qfree();
      }
LABEL_147:
      if ( (_BYTE)v12 )
        break;
      v44 = *((_BYTE *)a1 + 257);
      if ( v44 >= 0 )
        break;
      v45 = v44 & 0x7F;
      if ( !v45 )
        break;
      v46 = (char)v45 - 1;
      if ( v46 > 22 )
        goto LABEL_151;
      if ( v5 >= &v112 )
        goto LABEL_390;
      v70 = off_A0920[v46];
      if ( v5 == &v111 )
      {
LABEL_290:
        v71 = *((char *)a1 + 296);
        v111 = 0;
        if ( (_BYTE)v71 )
        {
          v5 = &v111;
          v47 = v71 - 1;
          if ( v47 <= 0x16 )
          {
LABEL_154:
            v48 = off_A0920[v47];
            if ( v5 == &v111 )
            {
LABEL_43:
              v111 = 0;
              v5 = &v111;
              goto LABEL_44;
            }
            while ( 1 )
            {
              v49 = *v48++;
              *v5 = v49;
              if ( !v49 )
                break;
              if ( ++v5 == &v111 )
                goto LABEL_43;
            }
          }
          break;
        }
        v7 = a1[77];
LABEL_80:
        v5 = &v111;
        goto LABEL_9;
      }
      while ( 1 )
      {
        LOWORD(v4) = (unsigned __int8)*v70++;
        *v5 = (char)v4;
        if ( !(_BYTE)v4 )
          break;
        if ( ++v5 == &v111 )
          goto LABEL_290;
      }
LABEL_151:
      if ( *((_BYTE *)a1 + 296) )
      {
        v47 = *((char *)a1 + 296) - 1;
        if ( v47 <= 0x16 )
        {
          if ( v5 < &v112 )
            goto LABEL_154;
LABEL_390:
          sub_38570();
LABEL_391:
          if ( under_debugger )
            goto LABEL_402;
          continue;
        }
      }
      break;
    }
LABEL_31:
    if ( v5 < &v112 )
      goto LABEL_8;
    if ( under_debugger )
      goto LABEL_402;
    interr();
LABEL_34:
    LODWORD(v1) = 3;
LABEL_35:
    v23 = 1;
    v12 = &v109;
    v95 = &v111;
    do
    {
      LOWORD(v4) = v23;
      v24 = sub_1DD10((int)v5, v23) == 0 ? 69 : 84;
      if ( v12 >= &v112 )
      {
        if ( under_debugger )
          goto LABEL_402;
        goto LABEL_184;
      }
      *v12++ = v24;
      if ( v12 >= &v112 )
      {
        v111 = 0;
        v12 = &v111;
      }
      ++v23;
    }
    while ( v23 != (_DWORD)v1 );
    v6 = *((_BYTE *)a1 + 257);
    if ( v6 >= 0 )
      goto LABEL_41;
LABEL_71:
    v31 = v6 & 0x7F;
    if ( !v31 )
      goto LABEL_41;
    v32 = (char)v31 - 1;
    if ( v32 > 22 )
      goto LABEL_41;
    if ( v12 >= &v112 )
      goto LABEL_390;
    v33 = off_A0920[v32];
    if ( v12 == &v111 )
      goto LABEL_43;
    while ( 1 )
    {
      LOWORD(v4) = (unsigned __int8)*v33++;
      *v12 = (char)v4;
      if ( !(_BYTE)v4 )
        break;
      if ( ++v12 == &v111 )
        goto LABEL_43;
    }
LABEL_41:
    if ( v12 >= &v112 )
    {
LABEL_370:
      if ( under_debugger )
        goto LABEL_402;
      continue;
    }
    break;
  }
  v5 = v12 + 1;
  *v12 = 32;
  if ( v12 + 1 >= &v112 )
    goto LABEL_43;
LABEL_44:
  v7 = a1[77];
LABEL_9:
  v8 = *a1;
  *v5 = 0;
  (*(void (__fastcall **)(__int64 *, _QWORD, char *))(v8 + 280))(a1, *(unsigned int *)(v7 + 512), &v109);
  return v113 - __readfsqword(0x28u);
}

