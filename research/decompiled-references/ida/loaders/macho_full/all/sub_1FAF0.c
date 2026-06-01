__int64 __fastcall sub_1FAF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128i a8,
        double a9)
{
  int v9; // r13d
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // r12
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r11
  void *v22; // rcx
  __int64 v23; // r14
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  bool v27; // r13
  char v28; // al
  int v30; // r10d
  void *v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // edi
  bool v35; // cl
  __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  unsigned int v38; // esi
  char v39; // cl
  __int64 v40; // rsi
  __int64 v41; // r12
  bool v42; // zf
  unsigned int v43; // ecx
  int v44; // eax
  int v45; // eax
  char v46; // al
  int v47; // esi
  __int64 v48; // rsi
  int v49; // eax
  char v50; // [rsp+0h] [rbp-4D8h]
  int v52; // [rsp+10h] [rbp-4C8h]
  int v53; // [rsp+14h] [rbp-4C4h]
  __int64 v55; // [rsp+20h] [rbp-4B8h]
  __int64 v56; // [rsp+28h] [rbp-4B0h]
  unsigned __int8 v59; // [rsp+43h] [rbp-495h]
  unsigned int v60; // [rsp+44h] [rbp-494h]
  unsigned int v61; // [rsp+44h] [rbp-494h]
  __int64 v62; // [rsp+48h] [rbp-490h]
  bool v63; // [rsp+50h] [rbp-488h]
  char v64; // [rsp+54h] [rbp-484h]
  int v65; // [rsp+58h] [rbp-480h]
  unsigned int v66; // [rsp+5Ch] [rbp-47Ch]
  char v67; // [rsp+62h] [rbp-476h]
  bool v68; // [rsp+63h] [rbp-475h]
  unsigned int v69; // [rsp+64h] [rbp-474h]
  unsigned int v71; // [rsp+78h] [rbp-460h]
  char v72[1042]; // [rsp+86h] [rbp-452h] BYREF
  unsigned __int64 v73; // [rsp+498h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a2 + 332);
  v63 = v9 == 16777223 || ((v9 - 16777228) & 0xFEFFFFFF) == 0;
  if ( v63 )
    return sub_1EA80(a1, a2, a3, a4, a5, a6, a7, a8);
  v10 = *(unsigned int *)(a5 + 8);
  v11 = a4[1];
  v69 = *(_DWORD *)(a5 + 8);
  if ( (_DWORD)v11 )
  {
    v64 = 0;
    v68 = v9 == 12;
    v12 = 0;
    v13 = 0;
    v62 = 8LL * (unsigned int)v11;
    v55 = -1;
    v56 = -1;
    v60 = 0;
    v65 = 0;
    v52 = *(_DWORD *)(a2 + 332);
    while ( 1 )
    {
      v67 = callui(27, &callui, v10);
      if ( v67 )
        sub_1A260((__int64)"Cancelled by user", (__int64)&callui, v14, v15, v16, v17, v50);
      v18 = *(_QWORD *)(*a4 + v13);
      v72[10] = 0;
      v19 = *(unsigned int *)(a2 + 332);
      v10 = v19;
      if ( (int)v18 < 0 )
      {
        v30 = BYTE3(v18) & 0xF;
        v53 = ((unsigned __int64)v18 >> 28) & 3;
        v21 = BYTE3(v18) & 0xF;
        v59 = (v18 & 0x40000000) != 0;
        if ( (int)v19 <= 18 )
        {
          if ( (int)v19 > 5 )
          {
            v31 = &loc_4F8C0;
            if ( _bittest64((const __int64 *)&v31, v19) )
            {
              if ( v30 != 1 )
              {
                v55 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a3 + (v18 & 0xFFFFFF));
                if ( (_DWORD)v19 == 12 && (unsigned int)(v30 - 8) <= 1 )
                {
LABEL_40:
                  if ( v64 )
                  {
                    sub_1E7A0();
                    v21 = BYTE3(v18) & 0xF;
                    v30 = BYTE3(v18) & 0xF;
                    v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v18 >> 32);
                    v10 = *(unsigned int *)(a2 + 332);
                    LODWORD(v19) = *(_DWORD *)(a2 + 332);
                    if ( v52 == 11 )
                      goto LABEL_100;
                    if ( v52 == 14 )
                    {
                      v66 = -1;
LABEL_88:
                      if ( (BYTE3(v18) & 0xE) == 6 )
                      {
                        v60 = v30;
                        if ( (_DWORD)v10 == 12 )
                          goto LABEL_173;
LABEL_157:
                        v45 = v30;
LABEL_158:
                        v65 = v45;
                        v63 = v67;
                        v27 = v45 != 0;
                        v64 = 1;
                        goto LABEL_60;
                      }
                      v60 = v30;
                      if ( (BYTE3(v18) & 0xF) == 8 )
                      {
                        if ( (_DWORD)v10 != 12 )
                          goto LABEL_157;
LABEL_173:
                        if ( v60 - 8 <= 1 )
                        {
                          v64 = 1;
                          v65 = v60;
                          goto LABEL_161;
                        }
                        v45 = v60;
                        goto LABEL_158;
                      }
                      if ( (_DWORD)v10 == 12 )
                      {
                        if ( (unsigned int)(v30 - 8) <= 1 )
                        {
                          v64 = v67;
                          goto LABEL_161;
                        }
                        v63 = v67;
                        v64 = v67;
                        v27 = v30 != 0;
                      }
                      else
                      {
                        v63 = v67;
                        v64 = v67;
                        v27 = v30 != 0;
                      }
                      goto LABEL_60;
                    }
                    v43 = v52 & 0xFEFFFFFF;
                    if ( v52 == 255 || v43 == 18 )
                      goto LABEL_129;
                  }
                  else
                  {
                    if ( v12 )
                    {
                      if ( (BYTE3(v18) & 0xF) != 1 )
                      {
                        sub_112F0((__int64)"%a: missing required PAIR relocation\n", *(double *)a7.m128i_i64);
                        sub_196C0((__int64)"missing required PAIR relocation");
                        goto LABEL_49;
                      }
                      sub_1E310(
                        a1,
                        a2,
                        v60,
                        v55,
                        v56,
                        v53,
                        v59,
                        (v18 & 0x800000000000000LL) != 0,
                        0,
                        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & ((v18 >> 32) + a3));
                      v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v18 >> 32);
                      v21 = BYTE3(v18) & 0xF;
                      v30 = BYTE3(v18) & 0xF;
                      if ( (unsigned int)(v52 - 12) > 3 )
                      {
                        if ( v52 == 11 )
                        {
                          v10 = *(unsigned int *)(a2 + 332);
LABEL_100:
                          if ( (unsigned __int8)((BYTE3(v18) & 0xF) - 7) > 2u )
                          {
                            v60 = v30;
                            v63 = v67;
                            v64 = v67;
                            v66 = -1;
                          }
                          else
                          {
                            v65 = v30;
                            v60 = v30;
                            v63 = v67;
                            v66 = -1;
                            v64 = 1;
                          }
                          goto LABEL_22;
                        }
                        LODWORD(v19) = *(_DWORD *)(a2 + 332);
                        goto LABEL_124;
                      }
                      v66 = v18 & 0xFFFFFF;
                      v10 = *(unsigned int *)(a2 + 332);
                      if ( v52 == 13 )
                        goto LABEL_118;
LABEL_203:
                      if ( v52 != 15 )
                        goto LABEL_211;
                      goto LABEL_204;
                    }
                    v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v18 >> 32);
                    if ( (unsigned int)(v52 - 12) <= 3 )
                    {
                      if ( (BYTE3(v18) & 0xF) == 1 )
                      {
                        v66 = v18 & 0xFFFFFF;
                        v10 = (unsigned int)v19;
                        if ( v52 == 13 )
                          goto LABEL_118;
                        goto LABEL_203;
                      }
                      if ( v52 == 13 )
                      {
                        if ( (BYTE3(v18) & 0xF) == 6 )
                        {
                          v60 = BYTE3(v18) & 0xF;
                          if ( (_DWORD)v19 == 12 && (unsigned int)(v30 - 8) <= 1 )
                          {
                            v67 = 0;
                            v66 = -1;
                            v65 = BYTE3(v18) & 0xF;
                            v64 = 1;
LABEL_161:
                            v46 = v67;
                            v67 = 1;
                            v63 = v46;
LABEL_61:
                            sub_1E8E0(v52, v60, 0, v72);
                            sub_112F0(
                              (__int64)"%8s %d %c %0*a %0*a %08X %08X %s baseea=%a\n",
                              v72,
                              v53,
                              v59 == 0 ? 46 : 82,
                              8,
                              *(double *)a7.m128i_i64,
                              v55,
                              *(double *)a8.m128i_i64,
                              8,
                              v56,
                              (const char *)v66,
                              a9);
                            sub_196C0((__int64)"Unhandled relocation type %s %a->%a");
                            v12 = v67;
                            goto LABEL_49;
                          }
                          v65 = BYTE3(v18) & 0xF;
                          v66 = -1;
                          v64 = 1;
                          goto LABEL_98;
                        }
LABEL_164:
                        v66 = -1;
                        goto LABEL_118;
                      }
                      v66 = -1;
                      v10 = (unsigned int)v19;
                      if ( v52 != 15 )
                        goto LABEL_211;
LABEL_204:
                      if ( (BYTE3(v18) & 0xF) != 0xD )
                        goto LABEL_118;
                      v60 = v30;
                      v49 = v30;
                      if ( (_DWORD)v10 == 12 )
                      {
                        if ( (unsigned int)(v30 - 8) <= 1 )
                        {
                          v64 = 1;
                          v65 = v30;
                          goto LABEL_161;
                        }
                        v49 = v30;
                      }
                      v65 = v49;
                      v63 = v67;
                      v27 = v49 != 0;
                      v64 = 1;
                      goto LABEL_60;
                    }
                    if ( v52 == 11 )
                    {
                      v10 = (unsigned int)v19;
                      goto LABEL_100;
                    }
LABEL_124:
                    v10 = (unsigned int)v19;
                    v34 = v52 & 0xFEFFFFFF;
                    v35 = (v52 & 0xFEFFFFFF) == 18;
                    if ( v52 == 255 || v34 == 18 )
                      goto LABEL_73;
                  }
                  if ( v52 == 6 )
                  {
                    if ( (((BYTE3(v18) & 0xF) - 2) & 0xFD) != 0 )
                      goto LABEL_164;
LABEL_148:
                    v60 = v30;
                    if ( (_DWORD)v19 == 12 )
                    {
                      if ( (unsigned int)(v30 - 8) <= 1 )
                      {
                        v66 = -1;
                        v64 = 1;
                        v65 = v30;
                        goto LABEL_161;
                      }
                      v44 = v30;
                    }
                    else
                    {
                      v44 = v30;
                    }
                    v65 = v44;
                    v63 = v67;
                    v27 = v44 != 0;
                    v66 = -1;
                    v64 = 1;
                    goto LABEL_60;
                  }
                  if ( v52 == 7 )
                  {
                    if ( (((BYTE3(v18) & 0xF) - 2) & 0xFD) != 0 )
                      goto LABEL_164;
                    goto LABEL_148;
                  }
                  v10 = (unsigned int)v19;
                  if ( v52 == 13 )
                  {
                    if ( (BYTE3(v18) & 0xF) != 6 )
                      goto LABEL_164;
                    goto LABEL_148;
                  }
                  goto LABEL_201;
                }
              }
LABEL_65:
              if ( v12 == 1 || v53 != 3 )
                goto LABEL_40;
              switch ( v52 )
              {
                case 16777234:
                  if ( !v64 )
                  {
                    v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v18 >> 32);
                    goto LABEL_124;
                  }
                  break;
                case 18:
                  if ( !v64 )
                  {
                    v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v18 >> 32);
                    goto LABEL_72;
                  }
                  break;
                case 255:
                  if ( !v64 )
                  {
                    v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v18 >> 32);
LABEL_72:
                    v34 = v52;
                    v35 = v52 == 18;
LABEL_73:
                    if ( (BYTE3(v18) & 0xF) == 1 )
                    {
                      v47 = -1;
                      if ( !v63 )
                        v47 = v18;
                      v66 = v47;
                      if ( v35 )
                        goto LABEL_139;
                      v10 = (unsigned int)v19;
LABEL_186:
                      if ( v52 == 255 )
                        goto LABEL_187;
                      goto LABEL_118;
                    }
                    if ( v34 == 18 )
                      goto LABEL_75;
LABEL_134:
                    v10 = (unsigned int)v19;
                    if ( v52 == 255 )
                      goto LABEL_199;
                    v66 = -1;
                    goto LABEL_211;
                  }
                  break;
                default:
                  goto LABEL_83;
              }
              sub_1E7A0();
              v21 = BYTE3(v18) & 0xF;
              v30 = BYTE3(v18) & 0xF;
              v43 = v52 & 0xFEFFFFFF;
              v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (v18 >> 32);
              LODWORD(v19) = *(_DWORD *)(a2 + 332);
              v10 = (unsigned int)v19;
              if ( (v52 & 0xFEFFFFFF) == 0x12 || v52 == 255 )
              {
LABEL_129:
                if ( (unsigned int)(v65 - 10) <= 2 || v65 == 14 )
                {
                  if ( v43 == 18 )
                    goto LABEL_75;
                  goto LABEL_134;
                }
                if ( (v52 & 0xFEFFFFFF) == 0x12 )
                  goto LABEL_75;
                v10 = (unsigned int)v19;
                if ( v52 == 255 )
                {
LABEL_199:
                  v48 = 56576;
                  v66 = -1;
                  v37 = BYTE3(v18) & 0xF;
                  if ( !_bittest64(&v48, v37) )
                  {
LABEL_187:
                    v60 = v30;
                    v64 = v67;
                    v12 = (BYTE3(v18) & 0xF) == 13;
                    if ( (_DWORD)v19 == 12 && (unsigned int)(v30 - 8) <= 1 )
                    {
                      v67 = (BYTE3(v18) & 0xF) == 13;
                      goto LABEL_161;
                    }
LABEL_98:
                    v63 = v12;
                    v27 = v30 != 0;
                    goto LABEL_60;
                  }
LABEL_76:
                  v65 = v30;
                  v64 = 1;
LABEL_77:
                  v60 = v30;
                  v63 = (_BYTE)v37 == 13;
                  if ( (_DWORD)v10 == 12 )
                  {
LABEL_78:
                    if ( v60 - 8 <= 1 )
                    {
                      v12 = 1;
                      if ( v52 == 12 )
                        goto LABEL_49;
                      v67 = v63;
                      goto LABEL_161;
                    }
                  }
LABEL_23:
                  v27 = (_DWORD)v21 != 0 && v68;
                  if ( v27 )
                  {
                    v12 = v67;
                    v71 = v21;
                    v28 = sub_1E310(a1, a2, v21, v55, v56, v53, v59, (v18 & 0x800000000000000LL) != 0, 0, -1);
                    v21 = v71;
                    if ( v28 )
                      goto LABEL_49;
                  }
                  else
                  {
                    v27 = (_DWORD)v21 != 0;
                  }
                  goto LABEL_60;
                }
                v66 = -1;
LABEL_211:
                if ( v52 != 14 )
                {
                  if ( v52 == 12 )
                  {
                    v60 = v30;
                    if ( (BYTE3(v18) & 0xE) == 2 )
                    {
                      if ( (_DWORD)v10 == 12 )
                      {
                        if ( (unsigned int)(v30 - 8) <= 1 )
                        {
                          v63 = v67;
                          v12 = 1;
                          v64 = 1;
                          v65 = v30;
                          goto LABEL_49;
                        }
                        v65 = v30;
                        v63 = v67;
                        v64 = 1;
                      }
                      else
                      {
                        v63 = v67;
                        v64 = 1;
                        v65 = v30;
                      }
                    }
                    else
                    {
                      v63 = v67;
                      v64 = v67;
                      if ( (_DWORD)v10 == 12 )
                      {
                        v12 = 1;
                        if ( (unsigned int)(v30 - 8) <= 1 )
                          goto LABEL_49;
                      }
                    }
                    goto LABEL_23;
                  }
                  if ( (v52 & 0xFEFFFFFF) != 0x12 )
                  {
LABEL_118:
                    v60 = v30;
                    v63 = v67;
                    v64 = v67;
                    goto LABEL_22;
                  }
LABEL_139:
                  v64 = v67;
                  LOBYTE(v37) = BYTE3(v18) & 0xF;
                  goto LABEL_77;
                }
                goto LABEL_88;
              }
LABEL_201:
              if ( (v52 & 0xFEFFFFFF) == 0x12 )
              {
LABEL_75:
                v36 = 56576;
                v66 = -1;
                v37 = BYTE3(v18) & 0xF;
                if ( _bittest64(&v36, v37) )
                  goto LABEL_76;
                if ( (v52 & 0xFEFFFFFF) == 0x12 )
                  goto LABEL_139;
                goto LABEL_186;
              }
              v66 = -1;
              v10 = (unsigned int)v19;
              goto LABEL_203;
            }
          }
LABEL_64:
          v55 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a3 + (v18 & 0xFFFFFF));
          goto LABEL_65;
        }
        if ( (_DWORD)v19 == 255 )
        {
          if ( v30 == 1 )
            goto LABEL_65;
          v40 = *(_QWORD *)(a1 + 8);
        }
        else
        {
          if ( (_DWORD)v19 != 16777234 )
            goto LABEL_64;
          if ( v30 == 1 )
            goto LABEL_65;
          v40 = *(_QWORD *)(a1 + 8);
        }
        v55 = *(_QWORD *)(v40 + 16) & (a3 + (v18 & 0xFFFFFF));
        goto LABEL_65;
      }
      v20 = (unsigned __int64)v18 >> 60;
      v21 = (unsigned __int64)v18 >> 60;
      v59 = HIBYTE(v18) & 1;
      v53 = ((unsigned __int64)v18 >> 57) & 3;
      if ( (int)v19 > 18 )
        break;
      if ( (int)v19 <= 5 )
        goto LABEL_28;
      v22 = &loc_4F8C0;
      if ( !_bittest64((const __int64 *)&v22, v19) )
        goto LABEL_28;
      if ( (_DWORD)v20 == 1 )
      {
        v55 = -1;
        goto LABEL_29;
      }
      v55 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a3 + (int)v18);
      if ( (_DWORD)v19 != 12 || (unsigned int)(v20 - 8) > 1 )
        goto LABEL_29;
LABEL_12:
      if ( (v18 & 0x800000000000000LL) != 0 )
      {
        v23 = HIDWORD(v18) & 0xFFFFFF;
        if ( (unsigned int)v23 >= v69
          || (v24 = *(_QWORD **)(a5 + 24)) == nullptr
          || (v25 = v24[2]) == 0
          || (v10 = *(_QWORD *)a5 + 16 * v23, *(unsigned int *)v10 >= (unsigned __int64)(v25 - 1))
          || !(*(__int64 (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24) )
        {
LABEL_46:
          if ( !byte_66C4A )
          {
            sub_112F0(
              (__int64)"%a: illegal symbol ref (this error will be reported only once)\n",
              *(double *)a7.m128i_i64);
            byte_66C4A = 1;
          }
          v56 = -1;
          goto LABEL_49;
        }
        qstrncpy();
        v26 = netnode_altval();
        LODWORD(v20) = (unsigned __int64)v18 >> 60;
        v56 = v26;
        v21 = (unsigned int)v20;
        if ( !(_DWORD)v20 )
        {
          v61 = (unsigned __int64)v18 >> 60;
          sub_1DF00(a1, a2, v55, v26, v53, HIBYTE(v18) & 1, 1, 0);
          goto LABEL_143;
        }
LABEL_19:
        v10 = *(unsigned int *)(a2 + 332);
        if ( (v52 & 0xFEFFFFFF) != 0x12 && v52 != 255 )
        {
          v60 = v20;
          v63 = v67;
          v66 = -1;
          goto LABEL_22;
        }
        v66 = -1;
        v39 = HIBYTE(v18) & 0xF0;
LABEL_120:
        v60 = v20;
        v63 = v39 == -48;
LABEL_22:
        if ( (_DWORD)v10 == 12 )
          goto LABEL_78;
        goto LABEL_23;
      }
      if ( (v52 & 0xFFFFFFFD) == 0xD )
      {
        v10 = HIBYTE(v18) & 0xFFFFFFF0;
        if ( (HIBYTE(v18) & 0xF0) != 0x10 )
          goto LABEL_53;
        v60 = (unsigned __int64)v18 >> 60;
        if ( (_DWORD)v19 == 12 )
        {
          v10 = (unsigned int)v20;
          if ( (unsigned int)(v20 - 8) <= 1 )
          {
            v66 = v18;
            v56 = -1;
            goto LABEL_161;
          }
          v42 = (_DWORD)v20 == 0;
        }
        else
        {
          v42 = (_DWORD)v20 == 0;
        }
        v66 = v18;
        v27 = !v42;
        v63 = v67;
        v56 = -1;
      }
      else if ( v52 == 14 || v52 == 11 )
      {
        v10 = HIBYTE(v18) & 0xFFFFFFF0;
        if ( (HIBYTE(v18) & 0xF0) != 0x10 )
          goto LABEL_53;
        v60 = (unsigned __int64)v18 >> 60;
        if ( (_DWORD)v19 == 12 )
        {
          if ( (unsigned int)(v20 - 8) <= 1 )
          {
            v66 = -1;
            v56 = -1;
            goto LABEL_161;
          }
          v63 = v67;
          v66 = -1;
          v27 = (_DWORD)v20 != 0;
          v56 = -1;
        }
        else
        {
          v63 = v67;
          v66 = -1;
          v56 = -1;
          v27 = (_DWORD)v20 != 0;
        }
      }
      else
      {
        v38 = v52 & 0xFEFFFFFF;
        if ( v52 != 255 && v38 != 18 || (v39 = HIBYTE(v18) & 0xF0, (HIBYTE(v18) & 0xF0) != 0x10) )
        {
LABEL_53:
          v32 = HIDWORD(v18) & 0xFFFFFF;
          v10 = *(_QWORD *)(a2 + 264) + 1LL;
          if ( (HIDWORD(v18) & 0xFFFFFFu) >= v10 )
            goto LABEL_46;
          if ( !v32 )
          {
            qstrncpy();
            v21 = (unsigned __int64)v18 >> 60;
            LODWORD(v20) = (unsigned __int64)v18 >> 60;
            v56 = -1;
            goto LABEL_19;
          }
          v41 = 80LL * (v32 - 1);
          qsnprintf();
          LODWORD(v20) = (unsigned __int64)v18 >> 60;
          v21 = (unsigned int)v20;
          v56 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & *(_QWORD *)(*(_QWORD *)(a2 + 256) + v41 + 32);
          if ( (_DWORD)v20 )
            goto LABEL_19;
          v61 = v20;
          sub_1DF00(a1, a2, v55, v56, v53, HIBYTE(v18) & 1, 0, 0);
LABEL_143:
          v21 = v61;
          LODWORD(v20) = 0;
          goto LABEL_19;
        }
        if ( v63 )
        {
          if ( v38 != 18 )
          {
            v66 = -1;
            v56 = -1;
            goto LABEL_120;
          }
          if ( (_DWORD)v19 != 12 )
          {
            v60 = (unsigned __int64)v18 >> 60;
            v63 = 0;
            v27 = (_DWORD)v20 != 0;
            v66 = -1;
            v56 = -1;
            goto LABEL_60;
          }
          v66 = -1;
        }
        else
        {
          if ( v38 != 18 )
          {
            v66 = v18;
            v56 = -1;
            goto LABEL_120;
          }
          if ( (_DWORD)v19 != 12 )
          {
            v60 = (unsigned __int64)v18 >> 60;
            v66 = v18;
            v27 = (_DWORD)v20 != 0;
            v56 = -1;
            goto LABEL_60;
          }
          v66 = v18;
        }
        v60 = (unsigned __int64)v18 >> 60;
        if ( (unsigned int)(v20 - 8) <= 1 )
        {
          v67 = 0;
          v56 = -1;
          goto LABEL_161;
        }
        v63 = 0;
        v56 = -1;
        v27 = (_DWORD)v20 != 0;
      }
LABEL_60:
      v33 = -23;
      v12 = v27 & _bittest64(&v33, v21);
      if ( v12 )
        goto LABEL_61;
LABEL_49:
      v13 += 8;
      if ( v13 == v62 )
        return v73 - __readfsqword(0x28u);
    }
    if ( (_DWORD)v19 != 255 && (_DWORD)v19 != 16777234 || (v55 = -1, (_DWORD)v20 != 1) )
LABEL_28:
      v55 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (a3 + (int)v18);
LABEL_29:
    if ( v12 != 1 && v53 == 3 )
    {
      if ( (v52 & 0xFEFFFFFF) == 0x12 || v52 == 255 )
        return v73 - __readfsqword(0x28u);
LABEL_83:
      sub_1E8E0(v52, v21, 0, v72);
      sub_112F0(
        (__int64)"%8s %d %c %0*a %0*a %08X %08X %s baseea=%a\n",
        v72,
        3,
        v59 == 0 ? 46 : 82,
        8,
        *(double *)a7.m128i_i64,
        v55,
        *(double *)a8.m128i_i64,
        8,
        v56,
        (const char *)0xFFFFFFFFFFFFFFFFLL,
        a9);
      sub_196C0((__int64)"illegal relocation length %s %a->%a");
      goto LABEL_49;
    }
    goto LABEL_12;
  }
  return v73 - __readfsqword(0x28u);
}

