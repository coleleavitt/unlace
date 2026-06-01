__int64 __fastcall sub_1FAE0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, _QWORD *a6)
{
  int v6; // r13d
  __int64 v7; // rax
  char v8; // r12
  __int64 v9; // r15
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  unsigned int *v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  __int64 v22; // r14
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  bool v27; // r13
  char v28; // al
  __int64 v30; // rcx
  int v31; // r10d
  int v32; // eax
  __int64 v33; // rax
  int v34; // r8d
  int v35; // r9d
  unsigned int v36; // edi
  bool v37; // cl
  __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  int v40; // r8d
  int v41; // r9d
  unsigned int v42; // esi
  char v43; // cl
  __int64 v44; // rsi
  __int64 v45; // r12
  bool v46; // zf
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // r9d
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // eax
  char v54; // al
  int v55; // esi
  __int64 v56; // rsi
  unsigned int v57; // eax
  char v58; // [rsp+0h] [rbp-4D8h]
  unsigned int v60; // [rsp+10h] [rbp-4C8h]
  int v61; // [rsp+14h] [rbp-4C4h]
  __int64 v63; // [rsp+20h] [rbp-4B8h]
  __int64 v64; // [rsp+28h] [rbp-4B0h]
  unsigned __int8 v67; // [rsp+43h] [rbp-495h]
  unsigned int v68; // [rsp+44h] [rbp-494h]
  unsigned int v69; // [rsp+44h] [rbp-494h]
  __int64 v70; // [rsp+48h] [rbp-490h]
  bool v71; // [rsp+50h] [rbp-488h]
  char v72; // [rsp+54h] [rbp-484h]
  unsigned int v73; // [rsp+58h] [rbp-480h]
  unsigned int v74; // [rsp+5Ch] [rbp-47Ch]
  char v75; // [rsp+62h] [rbp-476h]
  bool v76; // [rsp+63h] [rbp-475h]
  unsigned int v77; // [rsp+64h] [rbp-474h]
  unsigned int v80; // [rsp+78h] [rbp-460h]
  _BYTE v81[10]; // [rsp+86h] [rbp-452h] BYREF
  _BYTE v82[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v83; // [rsp+498h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 332);
  v71 = v6 == 16777223 || ((v6 - 16777228) & 0xFEFFFFFF) == 0;
  if ( v71 )
    return sub_1EA70(a1, a2, a3);
  v7 = a4[1];
  v77 = *(_DWORD *)(a5 + 8);
  if ( (_DWORD)v7 )
  {
    v72 = 0;
    v76 = v6 == 12;
    v8 = 0;
    v9 = 0;
    v70 = 8LL * (unsigned int)v7;
    v63 = -1;
    v64 = -1;
    v68 = 0;
    v73 = 0;
    v60 = *(_DWORD *)(a2 + 332);
    while ( 1 )
    {
      v75 = callui(27);
      if ( v75 )
        sub_1A260((unsigned int)"Cancelled by user", (unsigned int)&callui, v10, v11, v12, v13);
      v14 = *(_QWORD *)(*a4 + v9);
      v82[0] = 0;
      v15 = *(unsigned int *)(a2 + 332);
      v16 = (unsigned int)v14;
      LODWORD(v17) = *(_DWORD *)(a2 + 332);
      if ( (int)v14 < 0 )
      {
        v30 = (unsigned __int64)v14 >> 28;
        v31 = BYTE3(v14) & 0xF;
        v61 = ((unsigned __int64)v14 >> 28) & 3;
        v20 = BYTE3(v14) & 0xF;
        v67 = (v14 & 0x40000000) != 0;
        if ( (int)v15 <= 18 )
        {
          if ( (int)v15 > 5 )
          {
            v30 = 325824;
            if ( _bittest64(&v30, v15) )
            {
              if ( v31 != 1 )
              {
                v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a3 + (v14 & 0xFFFFFF));
                v63 = v30;
                if ( (_DWORD)v15 == 12 )
                {
                  LODWORD(v30) = v31 - 8;
                  if ( (unsigned int)(v31 - 8) <= 1 )
                  {
LABEL_40:
                    if ( !v72 )
                    {
                      if ( v8 )
                      {
                        if ( (BYTE3(v14) & 0xF) != 1 )
                        {
                          sub_112F0(
                            (unsigned int)"%a: missing required PAIR relocation\n",
                            v63,
                            (_DWORD)v17,
                            v30,
                            v12,
                            v13);
                          sub_196C0((unsigned int)"missing required PAIR relocation", v63, v47, v48, v49, v50, v58);
                          goto LABEL_49;
                        }
                        sub_1E310(
                          a1,
                          a2,
                          v68,
                          v63,
                          v64,
                          v61,
                          v67,
                          (v14 & 0x800000000000000LL) != 0,
                          0,
                          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & ((v14 >> 32) + a3),
                          (unsigned __int16)v14);
                        v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v14 >> 32);
                        v20 = BYTE3(v14) & 0xF;
                        v31 = BYTE3(v14) & 0xF;
                        if ( v60 - 12 > 3 )
                        {
                          if ( v60 == 11 )
                          {
                            v16 = v14 & 0xFFFFFF;
                            LODWORD(v17) = *(_DWORD *)(a2 + 332);
                            goto LABEL_103;
                          }
                          LODWORD(v15) = *(_DWORD *)(a2 + 332);
                          goto LABEL_128;
                        }
                        v74 = v14 & 0xFFFFFF;
                        LODWORD(v17) = *(_DWORD *)(a2 + 332);
                        if ( v60 == 13 )
                          goto LABEL_121;
LABEL_207:
                        if ( v60 != 15 )
                          goto LABEL_215;
                      }
                      else
                      {
                        v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v14 >> 32);
                        if ( v60 - 12 > 3 )
                        {
                          if ( v60 == 11 )
                          {
                            LODWORD(v17) = *(_DWORD *)(a2 + 332);
                            if ( (BYTE3(v14) & 0xF) == 1 )
                              v16 = v14 & 0xFFFFFF;
                            else
                              v16 = 0xFFFFFFFFLL;
                            goto LABEL_103;
                          }
                          goto LABEL_128;
                        }
                        if ( (BYTE3(v14) & 0xF) == 1 )
                        {
                          v74 = v14 & 0xFFFFFF;
                          LODWORD(v17) = *(_DWORD *)(a2 + 332);
                          if ( v60 == 13 )
                          {
LABEL_121:
                            v16 = 0xFFFFFFFFLL;
                            goto LABEL_122;
                          }
                          goto LABEL_207;
                        }
                        if ( v60 == 13 )
                        {
                          if ( (BYTE3(v14) & 0xF) == 6 )
                          {
                            v68 = BYTE3(v14) & 0xF;
                            if ( (_DWORD)v15 == 12 && (unsigned int)(v31 - 8) <= 1 )
                            {
                              v75 = 0;
                              v16 = 0xFFFFFFFFLL;
                              v74 = -1;
                              v73 = BYTE3(v14) & 0xF;
                              v72 = 1;
LABEL_165:
                              v54 = v75;
                              v75 = 1;
                              v71 = v54;
LABEL_61:
                              sub_1E8D0(v60, v68, 0, v81, 10);
                              sub_112F0(
                                (unsigned int)"%8s %d %c %0*a %0*a %08X %08X %s baseea=%a\n",
                                (unsigned int)v81,
                                v61,
                                v67 == 0 ? 46 : 82,
                                8,
                                v63,
                                8,
                                v64,
                                v74,
                                v16,
                                v82,
                                a3);
                              sub_196C0(
                                (unsigned int)"Unhandled relocation type %s %a->%a",
                                (unsigned int)v81,
                                v63,
                                v64,
                                v34,
                                v35,
                                v58);
                              v8 = v75;
                              goto LABEL_49;
                            }
                            v73 = BYTE3(v14) & 0xF;
                            v16 = 0xFFFFFFFFLL;
                            v74 = -1;
                            v72 = 1;
                            goto LABEL_99;
                          }
LABEL_168:
                          v74 = -1;
                          v16 = 0xFFFFFFFFLL;
                          goto LABEL_122;
                        }
                        v74 = -1;
                        LODWORD(v17) = *(_DWORD *)(a2 + 332);
                        if ( v60 != 15 )
                          goto LABEL_215;
                      }
                      if ( (BYTE3(v14) & 0xF) != 0xD )
                        goto LABEL_121;
                      v68 = v31;
                      v57 = v31;
                      if ( (_DWORD)v17 == 12 )
                      {
                        if ( (unsigned int)(v31 - 8) <= 1 )
                        {
                          v72 = 1;
                          v16 = 0xFFFFFFFFLL;
                          v73 = v31;
                          goto LABEL_165;
                        }
                        v57 = v31;
                      }
                      v73 = v57;
                      v16 = 0xFFFFFFFFLL;
                      v71 = v75;
                      v27 = v57 != 0;
                      v72 = 1;
                      goto LABEL_60;
                    }
                    sub_1E790(
                      a1,
                      v63,
                      v64,
                      (v14 >> 32) & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
                      v73,
                      ((unsigned __int64)v14 >> 28) & 3);
                    v20 = BYTE3(v14) & 0xF;
                    v31 = BYTE3(v14) & 0xF;
                    v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v14 >> 32);
                    LODWORD(v17) = *(_DWORD *)(a2 + 332);
                    LODWORD(v15) = (_DWORD)v17;
                    if ( v60 == 11 )
                    {
                      v16 = v14 & 0xFFFFFF;
                      if ( v73 - 8 >= 2 )
                        v16 = 0xFFFFFFFFLL;
LABEL_103:
                      if ( (unsigned __int8)((BYTE3(v14) & 0xF) - 7) > 2u )
                      {
                        v68 = v31;
                        v71 = v75;
                        v72 = v75;
                        v74 = -1;
                      }
                      else
                      {
                        v73 = v31;
                        v68 = v31;
                        v71 = v75;
                        v74 = -1;
                        v72 = 1;
                      }
                      goto LABEL_22;
                    }
                    if ( v60 == 14 )
                    {
                      v74 = -1;
                      v16 = v14 & 0xFFFFFF;
                      if ( v73 - 7 >= 2 )
                        v16 = 0xFFFFFFFFLL;
LABEL_89:
                      if ( (BYTE3(v14) & 0xE) == 6 )
                      {
                        v68 = v31;
                        if ( (_DWORD)v17 == 12 )
                          goto LABEL_177;
LABEL_161:
                        v53 = v31;
LABEL_162:
                        v73 = v53;
                        v71 = v75;
                        v27 = v53 != 0;
                        v72 = 1;
                        goto LABEL_60;
                      }
                      v68 = v31;
                      if ( (BYTE3(v14) & 0xF) == 8 )
                      {
                        if ( (_DWORD)v17 != 12 )
                          goto LABEL_161;
LABEL_177:
                        if ( v68 - 8 <= 1 )
                        {
                          v72 = 1;
                          v73 = v68;
                          goto LABEL_165;
                        }
                        v53 = v68;
                        goto LABEL_162;
                      }
                      if ( (_DWORD)v17 == 12 )
                      {
                        if ( (unsigned int)(v31 - 8) <= 1 )
                        {
                          v72 = v75;
                          goto LABEL_165;
                        }
                        v71 = v75;
                        v72 = v75;
                        v27 = v31 != 0;
                      }
                      else
                      {
                        v71 = v75;
                        v72 = v75;
                        v27 = v31 != 0;
                      }
                      goto LABEL_60;
                    }
                    v51 = v60 & 0xFEFFFFFF;
                    if ( v60 == 255 || v51 == 18 )
                      goto LABEL_133;
LABEL_150:
                    if ( v60 == 6 )
                    {
                      if ( (((BYTE3(v14) & 0xF) - 2) & 0xFD) != 0 )
                        goto LABEL_168;
LABEL_152:
                      v68 = v31;
                      if ( (_DWORD)v15 == 12 )
                      {
                        if ( (unsigned int)(v31 - 8) <= 1 )
                        {
                          v74 = -1;
                          v16 = 0xFFFFFFFFLL;
                          v72 = 1;
                          v73 = v31;
                          goto LABEL_165;
                        }
                        v52 = v31;
                      }
                      else
                      {
                        v52 = v31;
                      }
                      v73 = v52;
                      v16 = 0xFFFFFFFFLL;
                      v71 = v75;
                      v27 = v52 != 0;
                      v74 = -1;
                      v72 = 1;
                      goto LABEL_60;
                    }
                    if ( v60 == 7 )
                    {
                      if ( (((BYTE3(v14) & 0xF) - 2) & 0xFD) != 0 )
                        goto LABEL_168;
                      goto LABEL_152;
                    }
                    LODWORD(v17) = v15;
                    if ( v60 == 13 )
                    {
                      if ( (BYTE3(v14) & 0xF) != 6 )
                        goto LABEL_168;
                      goto LABEL_152;
                    }
                    goto LABEL_205;
                  }
                }
              }
LABEL_65:
              if ( v8 == 1 || v61 != 3 )
                goto LABEL_40;
              switch ( v60 )
              {
                case 0x1000012u:
                  if ( !v72 )
                  {
                    v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v14 >> 32);
LABEL_128:
                    LODWORD(v17) = v15;
                    v36 = v60 & 0xFEFFFFFF;
                    v37 = (v60 & 0xFEFFFFFF) == 18;
                    if ( v60 == 255 || v36 == 18 )
                      goto LABEL_73;
                    goto LABEL_150;
                  }
                  break;
                case 0x12u:
                  if ( !v72 )
                  {
                    v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v14 >> 32);
                    goto LABEL_72;
                  }
                  break;
                case 0xFFu:
                  if ( !v72 )
                  {
                    v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v14 >> 32);
LABEL_72:
                    v36 = v60;
                    v37 = v60 == 18;
LABEL_73:
                    if ( (BYTE3(v14) & 0xF) == 1 )
                    {
                      v55 = -1;
                      if ( !v71 )
                        v55 = v14;
                      v74 = v55;
                      if ( v37 )
                      {
                        v16 = 0xFFFFFFFFLL;
                        goto LABEL_143;
                      }
                      LODWORD(v17) = v15;
                      v16 = 0xFFFFFFFFLL;
                      goto LABEL_190;
                    }
                    v16 = 0xFFFFFFFFLL;
                    if ( v36 == 18 )
                      goto LABEL_75;
LABEL_138:
                    LODWORD(v17) = v15;
                    if ( v60 == 255 )
                      goto LABEL_203;
                    v74 = -1;
                    goto LABEL_216;
                  }
                  break;
                default:
                  goto LABEL_83;
              }
              sub_1E790(a1, v63, v64, (v14 >> 32) & *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v73, 3);
              v20 = BYTE3(v14) & 0xF;
              v31 = BYTE3(v14) & 0xF;
              v51 = v60 & 0xFEFFFFFF;
              v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v14 >> 32);
              LODWORD(v15) = *(_DWORD *)(a2 + 332);
              LODWORD(v17) = v15;
              if ( (v60 & 0xFEFFFFFF) == 0x12 || v60 == 255 )
              {
LABEL_133:
                if ( v73 - 10 <= 2 || v73 == 14 )
                {
                  v16 = v14 & 0xFFFFFF;
                  if ( v51 == 18 )
                    goto LABEL_75;
                  goto LABEL_138;
                }
                if ( (v60 & 0xFEFFFFFF) == 0x12 )
                {
                  v16 = 0xFFFFFFFFLL;
LABEL_75:
                  v38 = 56576;
                  v74 = -1;
                  v39 = BYTE3(v14) & 0xF;
                  if ( _bittest64(&v38, v39) )
                    goto LABEL_76;
                  if ( (v60 & 0xFEFFFFFF) == 0x12 )
                    goto LABEL_143;
LABEL_190:
                  if ( v60 == 255 )
                    goto LABEL_191;
                  goto LABEL_122;
                }
                v16 = 0xFFFFFFFFLL;
                LODWORD(v17) = v15;
                if ( v60 == 255 )
                {
LABEL_203:
                  v56 = 56576;
                  v74 = -1;
                  v39 = BYTE3(v14) & 0xF;
                  if ( !_bittest64(&v56, v39) )
                  {
LABEL_191:
                    v68 = v31;
                    v72 = v75;
                    v8 = (BYTE3(v14) & 0xF) == 13;
                    if ( (_DWORD)v15 == 12 && (unsigned int)(v31 - 8) <= 1 )
                    {
                      v75 = (BYTE3(v14) & 0xF) == 13;
                      goto LABEL_165;
                    }
LABEL_99:
                    v71 = v8;
                    v27 = v31 != 0;
                    goto LABEL_60;
                  }
LABEL_76:
                  v73 = v31;
                  v72 = 1;
                  goto LABEL_77;
                }
                v74 = -1;
LABEL_215:
                v16 = 0xFFFFFFFFLL;
LABEL_216:
                if ( v60 != 14 )
                {
                  if ( v60 == 12 )
                  {
                    v68 = v31;
                    if ( (BYTE3(v14) & 0xE) == 2 )
                    {
                      if ( (_DWORD)v17 == 12 )
                      {
                        if ( (unsigned int)(v31 - 8) <= 1 )
                        {
                          v71 = v75;
                          v8 = 1;
                          v72 = 1;
                          v73 = v31;
                          goto LABEL_49;
                        }
                        v73 = v31;
                        v71 = v75;
                        v72 = 1;
                      }
                      else
                      {
                        v71 = v75;
                        v72 = 1;
                        v73 = v31;
                      }
                    }
                    else
                    {
                      v71 = v75;
                      v72 = v75;
                      if ( (_DWORD)v17 == 12 )
                      {
                        v8 = 1;
                        if ( (unsigned int)(v31 - 8) <= 1 )
                          goto LABEL_49;
                      }
                    }
                    goto LABEL_23;
                  }
                  if ( (v60 & 0xFEFFFFFF) != 0x12 )
                  {
LABEL_122:
                    v68 = v31;
                    v71 = v75;
                    v72 = v75;
                    goto LABEL_22;
                  }
LABEL_143:
                  v72 = v75;
                  LOBYTE(v39) = BYTE3(v14) & 0xF;
LABEL_77:
                  v68 = v31;
                  v71 = (_BYTE)v39 == 13;
                  if ( (_DWORD)v17 == 12 )
                  {
LABEL_78:
                    if ( v68 - 8 <= 1 )
                    {
                      v8 = 1;
                      if ( v60 == 12 )
                        goto LABEL_49;
                      v75 = v71;
                      goto LABEL_165;
                    }
                  }
LABEL_23:
                  v27 = (_DWORD)v20 != 0 && v76;
                  if ( v27 )
                  {
                    v8 = v75;
                    v80 = v20;
                    v28 = sub_1E310(a1, a2, v20, v63, v64, v61, v67, (v14 & 0x800000000000000LL) != 0, 0, -1, 0);
                    v20 = v80;
                    if ( v28 )
                      goto LABEL_49;
                  }
                  else
                  {
                    v27 = (_DWORD)v20 != 0;
                  }
                  goto LABEL_60;
                }
                goto LABEL_89;
              }
LABEL_205:
              v16 = 0xFFFFFFFFLL;
              if ( (v60 & 0xFEFFFFFF) == 0x12 )
                goto LABEL_75;
              v74 = -1;
              LODWORD(v17) = v15;
              goto LABEL_207;
            }
          }
LABEL_64:
          v30 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a3 + (v14 & 0xFFFFFF));
          v63 = v30;
          goto LABEL_65;
        }
        if ( (_DWORD)v15 == 255 )
        {
          if ( v31 == 1 )
            goto LABEL_65;
          v44 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          if ( (_DWORD)v15 != 16777234 )
            goto LABEL_64;
          if ( v31 == 1 )
            goto LABEL_65;
          v44 = *(_QWORD *)(a1 + 8);
        }
        v30 = *(_QWORD *)(v44 + 16) & (a3 + (v14 & 0xFFFFFF));
        v63 = v30;
        goto LABEL_65;
      }
      v18 = (unsigned __int64)v14 >> 57;
      v19 = (unsigned __int64)v14 >> 60;
      v20 = (unsigned __int64)v14 >> 60;
      v67 = HIBYTE(v14) & 1;
      v61 = ((unsigned __int64)v14 >> 57) & 3;
      if ( (int)v15 > 18 )
        break;
      if ( (int)v15 <= 5 )
        goto LABEL_28;
      v18 = 325824;
      if ( !_bittest64((const __int64 *)&v18, v15) )
        goto LABEL_28;
      if ( (_DWORD)v19 == 1 )
      {
        v63 = -1;
        goto LABEL_29;
      }
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a3 + (int)v14);
      v63 = v18;
      if ( (_DWORD)v15 != 12 )
        goto LABEL_29;
      LODWORD(v18) = v19 - 8;
      if ( (unsigned int)(v19 - 8) > 1 )
        goto LABEL_29;
LABEL_12:
      v21 = HIBYTE(v14) & 1;
      if ( (v14 & 0x800000000000000LL) != 0 )
      {
        v22 = HIDWORD(v14) & 0xFFFFFF;
        if ( (unsigned int)v22 >= v77
          || (v23 = *(_QWORD **)(a5 + 24)) == 0
          || (v24 = v23[2]) == 0
          || (v17 = (unsigned int *)(*(_QWORD *)a5 + 16 * v22), *v17 >= (unsigned __int64)(v24 - 1))
          || (v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23)) == 0 )
        {
LABEL_46:
          if ( !byte_66C4A )
          {
            sub_112F0(
              (unsigned int)"%a: illegal symbol ref (this error will be reported only once)\n",
              v63,
              (_DWORD)v17,
              v18,
              v12,
              v21);
            byte_66C4A = 1;
          }
          v64 = -1;
          goto LABEL_49;
        }
        qstrncpy(v82, v25, 1024, v18, v12, v21);
        v26 = netnode_altval(*a6, HIDWORD(v14) & 0xFFFFFF, 65);
        LODWORD(v19) = (unsigned __int64)v14 >> 60;
        v64 = v26;
        v20 = (unsigned int)v19;
        if ( !(_DWORD)v19 )
        {
          v69 = (unsigned __int64)v14 >> 60;
          sub_1DF00(a1, a2, v63, v26, v61, HIBYTE(v14) & 1, 1, 0);
          goto LABEL_147;
        }
LABEL_19:
        LODWORD(v17) = *(_DWORD *)(a2 + 332);
        if ( (v60 & 0xFEFFFFFF) != 0x12 && v60 != 255 )
        {
          v68 = v19;
          v16 = 0xFFFFFFFFLL;
          v71 = v75;
          v74 = -1;
          goto LABEL_22;
        }
        v74 = -1;
        v16 = 0xFFFFFFFFLL;
        v43 = HIBYTE(v14) & 0xF0;
LABEL_124:
        v68 = v19;
        v71 = v43 == -48;
LABEL_22:
        if ( (_DWORD)v17 == 12 )
          goto LABEL_78;
        goto LABEL_23;
      }
      if ( (v60 & 0xFFFFFFFD) == 0xD )
      {
        if ( (HIBYTE(v14) & 0xF0) != 0x10 )
          goto LABEL_53;
        v68 = (unsigned __int64)v14 >> 60;
        if ( (_DWORD)v15 == 12 )
        {
          if ( (unsigned int)(v19 - 8) <= 1 )
          {
            v74 = v14;
            v16 = 0xFFFFFFFFLL;
            v64 = -1;
            goto LABEL_165;
          }
          v46 = (_DWORD)v19 == 0;
        }
        else
        {
          v46 = (_DWORD)v19 == 0;
        }
        v74 = v14;
        v27 = !v46;
        v16 = 0xFFFFFFFFLL;
        v71 = v75;
        v64 = -1;
      }
      else if ( v60 == 14 || v60 == 11 )
      {
        if ( (HIBYTE(v14) & 0xF0) != 0x10 )
          goto LABEL_53;
        v68 = (unsigned __int64)v14 >> 60;
        if ( (_DWORD)v15 == 12 )
        {
          if ( (unsigned int)(v19 - 8) <= 1 )
          {
            v74 = -1;
            v64 = -1;
            goto LABEL_165;
          }
          v71 = v75;
          v74 = -1;
          v27 = (_DWORD)v19 != 0;
          v64 = -1;
        }
        else
        {
          v71 = v75;
          v74 = -1;
          v64 = -1;
          v27 = (_DWORD)v19 != 0;
        }
      }
      else
      {
        v42 = v60 & 0xFEFFFFFF;
        if ( v60 != 255 && v42 != 18 || (v43 = HIBYTE(v14) & 0xF0, (HIBYTE(v14) & 0xF0) != 0x10) )
        {
LABEL_53:
          v32 = HIDWORD(v14) & 0xFFFFFF;
          v18 = HIDWORD(v14) & 0xFFFFFF;
          v17 = (unsigned int *)(*(_QWORD *)(a2 + 264) + 1LL);
          if ( v18 >= (unsigned __int64)v17 )
            goto LABEL_46;
          if ( !v32 )
          {
            qstrncpy(v82, "[ABS]", 1024, v18, v12, v21);
            v20 = (unsigned __int64)v14 >> 60;
            LODWORD(v19) = (unsigned __int64)v14 >> 60;
            v64 = -1;
            goto LABEL_19;
          }
          v45 = 80LL * (v32 - 1);
          qsnprintf(v82, 1024, "(%.16s,%.16s)", v45 + *(_QWORD *)(a2 + 256) + 16);
          LODWORD(v19) = (unsigned __int64)v14 >> 60;
          v20 = (unsigned int)v19;
          v64 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & *(_QWORD *)(*(_QWORD *)(a2 + 256) + v45 + 32);
          if ( (_DWORD)v19 )
            goto LABEL_19;
          v69 = v19;
          sub_1DF00(a1, a2, v63, v64, v61, HIBYTE(v14) & 1, 0, 0);
LABEL_147:
          v20 = v69;
          LODWORD(v19) = 0;
          goto LABEL_19;
        }
        if ( v71 )
        {
          if ( v42 != 18 )
          {
            v74 = -1;
            v64 = -1;
            goto LABEL_124;
          }
          if ( (_DWORD)v15 != 12 )
          {
            v68 = (unsigned __int64)v14 >> 60;
            v71 = 0;
            v27 = (_DWORD)v19 != 0;
            v74 = -1;
            v64 = -1;
            goto LABEL_60;
          }
          v74 = -1;
        }
        else
        {
          if ( v42 != 18 )
          {
            v74 = v14;
            v16 = 0xFFFFFFFFLL;
            v64 = -1;
            goto LABEL_124;
          }
          if ( (_DWORD)v15 != 12 )
          {
            v68 = (unsigned __int64)v14 >> 60;
            v16 = 0xFFFFFFFFLL;
            v74 = v14;
            v27 = (_DWORD)v19 != 0;
            v64 = -1;
            goto LABEL_60;
          }
          v74 = v14;
          v16 = 0xFFFFFFFFLL;
        }
        v68 = (unsigned __int64)v14 >> 60;
        if ( (unsigned int)(v19 - 8) <= 1 )
        {
          v75 = 0;
          v64 = -1;
          goto LABEL_165;
        }
        v71 = 0;
        v64 = -1;
        v27 = (_DWORD)v19 != 0;
      }
LABEL_60:
      v33 = -23;
      v8 = v27 & _bittest64(&v33, v20);
      if ( v8 )
        goto LABEL_61;
LABEL_49:
      v9 += 8;
      if ( v9 == v70 )
        return v83 - __readfsqword(0x28u);
    }
    if ( (_DWORD)v15 != 255 && (_DWORD)v15 != 16777234 || (v63 = -1, (_DWORD)v19 != 1) )
    {
LABEL_28:
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a3 + (int)v14);
      v63 = v18;
    }
LABEL_29:
    if ( v8 != 1 && v61 == 3 )
    {
      if ( (v60 & 0xFEFFFFFF) == 0x12 || v60 == 255 )
        return v83 - __readfsqword(0x28u);
LABEL_83:
      sub_1E8D0(v60, (unsigned int)v20, 0, v81, 10);
      sub_112F0(
        (unsigned int)"%8s %d %c %0*a %0*a %08X %08X %s baseea=%a\n",
        (unsigned int)v81,
        3,
        v67 == 0 ? 46 : 82,
        8,
        v63,
        8,
        v64,
        -1,
        -1,
        v82,
        a3);
      sub_196C0((unsigned int)"illegal relocation length %s %a->%a", (unsigned int)v81, v63, v64, v40, v41, v58);
      goto LABEL_49;
    }
    goto LABEL_12;
  }
  return v83 - __readfsqword(0x28u);
}
