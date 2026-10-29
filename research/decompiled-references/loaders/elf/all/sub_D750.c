const char *__fastcall sub_D750(__int64 a1, int *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11
  int v8; // r15d
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rax
  const char *result; // rax
  unsigned int v22; // r15d
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // rbp
  int v35; // r9d
  unsigned __int64 v36; // rcx
  int v37; // eax
  __int16 custom_fixup; // ax
  unsigned int v39; // r15d
  char v40; // al
  char v41; // dl
  unsigned __int32 v42; // eax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rbp
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  unsigned int dword; // r15d
  char v50; // dl
  unsigned __int32 v51; // eax
  unsigned __int64 qword; // rax
  int v53; // r13d
  int v54; // ebp
  bool v55; // r13
  int v56; // ebp
  unsigned int v57; // r15d
  char v58; // dl
  unsigned __int32 v59; // eax
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned int v62; // r15d
  char v63; // dl
  unsigned __int32 v64; // eax
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rax
  bool v67; // zf
  __int16 word; // ax
  int v69; // eax
  char v70; // al
  char v71; // al
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  int v74; // ebp
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  unsigned int v79; // r15d
  char v80; // al
  char v81; // dl
  unsigned __int32 v82; // eax
  unsigned int v83; // r15d
  char v84; // dl
  unsigned __int32 v85; // eax
  unsigned int v86; // r15d
  unsigned int v87; // r15d
  char v88; // dl
  unsigned __int32 v89; // eax
  unsigned int v90; // r15d
  __int64 v91; // rax
  __int64 v92; // rax
  unsigned int v93; // eax
  __int64 v94; // [rsp-10h] [rbp-98h]
  __int64 v95; // [rsp-10h] [rbp-98h]
  int v97; // [rsp+0h] [rbp-88h]
  __int64 v98; // [rsp+8h] [rbp-80h]
  __int64 v100; // [rsp+10h] [rbp-78h]
  __int64 v101; // [rsp+10h] [rbp-78h]
  __int64 v102; // [rsp+10h] [rbp-78h]
  __int64 v103; // [rsp+10h] [rbp-78h]
  __int64 v104; // [rsp+18h] [rbp-70h]
  __int64 v105; // [rsp+18h] [rbp-70h]
  __int64 v106; // [rsp+18h] [rbp-70h]
  unsigned __int64 v107; // [rsp+20h] [rbp-68h]
  __int64 v108; // [rsp+28h] [rbp-60h]
  __int64 v109; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v110[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = a4;
  v8 = a2[7];
  v9 = *(_QWORD *)(a2 + 1);
  v10 = *(_QWORD *)(a2 + 3);
  v110[1] = __readfsqword(0x28u);
  v11 = *a2;
  if ( v8 )
  {
    v12 = *(_QWORD *)(a4 + 16);
    v107 = v12;
    v98 = v10 + v12;
    goto LABEL_3;
  }
  v27 = (unsigned int)is_loaded(v9);
  result = "No addend for the REL relocation entry";
  if ( (_BYTE)v27 )
  {
    v5 = a4;
    if ( (unsigned __int16)v11 > 0x106u )
    {
      if ( (unsigned __int16)v11 <= 0x139u )
      {
        switch ( v11 )
        {
          case 263:
          case 264:
          case 265:
          case 266:
          case 267:
          case 268:
          case 269:
            v102 = a4;
            dword = get_dword(v9, a2, v27, v28, v29);
            v50 = getinf_flag(3, 32);
            v51 = _byteswap_ulong(dword);
            if ( v50 )
              dword = v51;
            qword = (unsigned __int64)(unsigned __int16)(dword >> 5) << (16 * ((dword >> 21) & 3));
            goto LABEL_70;
          case 274:
          case 275:
          case 276:
          case 311:
LABEL_83:
            v102 = a4;
            v57 = get_dword(v9, a2, v27, v28, v29);
            v58 = getinf_flag(3, 32);
            v59 = _byteswap_ulong(v57);
            if ( v58 )
              v57 = v59;
            v60 = 4LL * ((v57 >> 5) & 0x7FFFF);
            v61 = v60 | (v57 >> 29) & 3 | 0xFFFFFFFFFFE00000LL;
            if ( (v60 & 0x100000) == 0 )
              v61 = v60 | (v57 >> 29) & 3;
            qword = v61 << 12;
            if ( (v57 & 0x80000000) == 0 )
              qword = v61;
            goto LABEL_70;
          case 277:
LABEL_133:
            v79 = get_dword(v9, a2, v27, v28, v29);
            v80 = getinf_flag(3, 32);
            v5 = a4;
            v81 = v80;
            v82 = _byteswap_ulong(v79);
            if ( v81 )
              v79 = v82;
            v12 = (v79 >> 10) & 0xFFF;
            if ( (v79 & 0xC00000) == 0x400000 )
              v12 <<= 12;
            v107 = v12;
            v98 = v10 + v12;
            break;
          case 278:
          case 284:
          case 285:
          case 286:
          case 299:
          case 312:
          case 313:
LABEL_55:
            v39 = get_dword(v9, a2, v27, v28, v29);
            v40 = getinf_flag(3, 32);
            v5 = a4;
            v41 = v40;
            v42 = _byteswap_ulong(v39);
            if ( v41 )
              v39 = v42;
            v43 = v39 >> 30;
            if ( !(v39 >> 30) )
              v43 = (v39 >> 21) & 4;
            v107 = (unsigned __int64)((v39 >> 10) & 0xFFF) << v43;
            v12 = v107;
            v98 = v10 + v107;
            break;
          case 279:
LABEL_138:
            v103 = a4;
            v83 = get_dword(v9, a2, v27, v28, v29);
            v84 = getinf_flag(3, 32);
            v85 = _byteswap_ulong(v83);
            if ( v84 )
              v83 = v85;
            v86 = v83 >> 5;
            v65 = v86 & 0x3FFF;
            v66 = v86 | 0xFFFFFFFFFFFFC000LL;
            v67 = (v86 & 0x2000) == 0;
            goto LABEL_96;
          case 280:
LABEL_141:
            v103 = a4;
            v87 = get_dword(v9, a2, v27, v28, v29);
            v88 = getinf_flag(3, 32);
            v89 = _byteswap_ulong(v87);
            if ( v88 )
              v87 = v89;
            v90 = v87 >> 5;
            v65 = v90 & 0x7FFFF;
            v66 = v90 | 0xFFFFFFFFFFF80000LL;
            v67 = (v90 & 0x40000) == 0;
            goto LABEL_96;
          case 282:
          case 283:
LABEL_93:
            v103 = a4;
            v62 = get_dword(v9, a2, v27, v28, v29);
            v63 = getinf_flag(3, 32);
            v64 = _byteswap_ulong(v62);
            if ( v63 )
              v62 = v64;
            v65 = v62 & 0x3FFFFFF;
            v66 = v62 | 0xFFFFFFFFFC000000LL;
            v67 = (v62 & 0x2000000) == 0;
LABEL_96:
            if ( !v67 )
              v65 = v66;
            v5 = v103;
            v12 = 4 * v65;
            v107 = v12;
            v98 = v10 + v12;
            break;
          default:
            goto LABEL_54;
        }
LABEL_3:
        if ( word_8959C == (__int16)0x8000 )
        {
          v106 = v5;
          v101 = v12;
          word_8959C = find_custom_fixup("PAGE");
          word_8959A = find_custom_fixup("HI12");
          word_89598 = find_custom_fixup("PAGEOFF");
          word_89596 = find_custom_fixup("LO21");
          word_89594 = find_custom_fixup("BRANCH14");
          word_89592 = find_custom_fixup("BRANCH19");
          word_89590 = find_custom_fixup("BRANCH26");
          word_8958E = find_custom_fixup("MV16_00");
          word_8958C = find_custom_fixup("MV16_16");
          word_8958A = find_custom_fixup("MV16_32");
          custom_fixup = find_custom_fixup("MV16_48");
          v5 = v106;
          v12 = v101;
          word_89588 = custom_fixup;
        }
        v13 = *(_QWORD *)(a1 + 8);
        v100 = *(_QWORD *)(v13 + 328);
        v14 = *(_QWORD **)(a1 + 16);
        v15 = v14[36];
        if ( a3 && a3 >= v15 && v15 + 96LL * v14[37] >= a3 )
        {
          v16 = v14[39];
          v17 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a3 - v15) >> 5);
          v18 = 1;
          v19 = v17;
          if ( v17 >= v16 )
          {
            v19 = v17 - v16;
            if ( *(_DWORD *)(v13 + 320) != 2 )
              goto LABEL_16;
LABEL_10:
            if ( *(_DWORD *)(v13 + 324) == v19 )
            {
              v108 = v5;
              v104 = v12;
              v20 = sub_4A750(a5 + 16, *(_QWORD *)(a5 + 8), 1);
              v12 = v104;
              v5 = v108;
              v98 = v20;
              if ( !v20 )
                return nullptr;
            }
LABEL_16:
            v22 = (unsigned __int16)v11;
            v23 = (unsigned __int16)v11;
            v105 = v12;
            if ( !(unsigned __int8)sub_D5B0(a1, (unsigned __int16)v11, v9, v10, v12, a3, v5, a5) )
            {
              v26 = v105;
              switch ( (__int16)v11 )
              {
                case 0:
                case 256:
                  if ( get_cmt(0, v9, 0, v25, v105) <= 0 )
                    set_cmt(v9, "dependencies between sections in translation phase", 0);
                  return nullptr;
                case 1:
                case 3:
                case 258:
                case 261:
                  v55 = (_WORD)v11 == 3 || (_WORD)v11 == 261;
                  if ( v55 )
                  {
                    v56 = v98 - v9;
                    if ( (unsigned __int64)(v98 - v9 + 0x80000000LL) <= 0x17FFFFFFFLL )
                    {
                      sub_42050(a1, v9, v98, v56, 0, 4, v9, 4, 0);
                      goto LABEL_36;
                    }
                    v100 = v9;
                  }
                  else
                  {
                    v56 = v98 - v100;
                    if ( (unsigned __int64)(v98 - v100 + 0x80000000LL) <= 0x17FFFFFFFLL )
                    {
                      LODWORD(v36) = v98 - v100;
                      v35 = 4;
                      v37 = 0;
                      goto LABEL_35;
                    }
                  }
                  sub_40E00(v9, v98, 0x17FFFFFFFLL, v25, v105);
                  LODWORD(v36) = v56;
                  v37 = 4 * v55;
                  v35 = 4;
                  goto LABEL_35;
                case 2:
                case 4:
                case 259:
                case 262:
                  if ( (_WORD)v11 == 262 || (_WORD)v11 == 4 )
                    v100 = v9;
                  v53 = v98 - v100;
                  if ( v98 - v100 + 0x8000 > (unsigned __int64)&algn_17FF8[7] )
                  {
                    v23 = v98;
                    sub_40E00(v9, v98, v24, v25, v105);
                  }
                  v54 = get_dword(v9, v23, v24, v25, v26);
                  if ( (unsigned __int8)getinf_flag(3, 32) )
                  {
                    v35 = 1;
                    LODWORD(v36) = (v53 << 16) | (unsigned __int16)v54;
                    v37 = 4;
                  }
                  else
                  {
                    v35 = 1;
                    v37 = 4;
                    LODWORD(v36) = (unsigned __int16)v53 | v54 & 0xFFFF0000;
                  }
                  goto LABEL_35;
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 22:
                case 23:
                case 24:
                case 25:
                case 29:
                case 80:
                case 81:
                case 82:
                case 83:
                case 84:
                case 85:
                case 86:
                case 87:
                case 88:
                case 89:
                case 90:
                case 91:
                case 92:
                case 93:
                case 94:
                case 95:
                case 96:
                case 97:
                case 98:
                case 99:
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                case 106:
                case 107:
                case 108:
                case 109:
                case 110:
                case 111:
                case 112:
                case 113:
                case 114:
                case 115:
                case 116:
                case 117:
                case 118:
                case 119:
                case 120:
                case 121:
                case 122:
                case 123:
                case 124:
                case 125:
                case 126:
                case 127:
                case 184:
                case 185:
                case 187:
                case 270:
                case 271:
                case 272:
                case 273:
                case 287:
                case 288:
                case 289:
                case 290:
                case 291:
                case 292:
                case 293:
                case 300:
                case 301:
                case 302:
                case 303:
                case 304:
                case 305:
                case 306:
                case 307:
                case 308:
                case 309:
                  return (_BYTE *)(&dword_0 + 3);
                case 10:
                case 274:
                  if ( (unsigned __int64)(v98 - v9 + 0x100000) > 0x1FFFFF )
                    sub_40E00(v9, v98, v24, v25, v105);
                  sub_42050(a1, v9, v98, 0, 0, (unsigned __int16)word_89596, v9, 1342177280, 0);
                  goto LABEL_36;
                case 11:
                case 275:
                case 276:
                  if ( (_WORD)v11 == 275 || (_WORD)v11 == 11 )
                  {
                    v72 = v98 & 0xFFFFFFFFFFFFF000LL;
                    if ( ((v98 & 0xFFFFFFFFFFFFF000LL) + 0x100000000LL - (v9 & 0xFFFFFFFFFFFFF000LL)) >> 33 )
                      goto LABEL_123;
                  }
                  goto LABEL_92;
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 277:
                case 278:
                case 284:
                case 285:
                case 286:
                case 299:
                  goto LABEL_34;
                case 18:
                case 279:
                  if ( (unsigned __int64)(v98 - v9 + 0x8000) > 0xFFFF )
                    sub_40E00(v9, v98, v24, v25, v105);
                  sub_42050(a1, v9, v98, 0, 0, (unsigned __int16)word_89594, v9, 1342177280, 0);
                  goto LABEL_36;
                case 19:
                case 280:
                  if ( (unsigned __int64)(v98 - v9 + 0x100000) > 0x1FFFFF )
                    sub_40E00(v9, v98, v24, v25, v105);
                  sub_42050(a1, v9, v98, 0, 0, (unsigned __int16)word_89592, v9, 1342177280, 0);
                  goto LABEL_36;
                case 20:
                case 21:
                case 282:
                case 283:
                  if ( (unsigned __int64)(v98 - v9 + 0x8000000) > 0xFFFFFFF )
                    sub_40E00(v9, v98, v24, v25, v105);
                  sub_42050(a1, v9, v98, 0, 0, (unsigned __int16)word_89590, v9, 1342177280, 0);
                  goto LABEL_36;
                case 26:
                case 311:
                  result = &byte_5;
                  if ( !a3 )
                    return result;
                  if ( !(unsigned __int8)sub_43F30(v9, v105, 0)
                    || !(unsigned __int8)sub_54F40(a1, 0, (unsigned int)v110, v9, v10, a3, a5) )
                  {
                    return nullptr;
                  }
                  v98 = v110[0];
                  v72 = v9 & 0xFFFFFFFFFFFFF000LL;
                  if ( ((v110[0] & 0xFFFFFFFFFFFFF000LL) + 0x100000000LL - (v9 & 0xFFFFFFFFFFFFF000LL)) >> 33 )
LABEL_123:
                    sub_40E00(v9, v98, v72, v25, v26);
LABEL_92:
                  sub_42050(a1, v9, v98, 0, 0, (unsigned __int16)word_8959C, v9, 1342177280, 0);
                  goto LABEL_36;
                case 27:
                case 312:
                  result = &byte_5;
                  if ( !a3 )
                    return result;
                  if ( !(unsigned __int8)sub_43F30(v9, v105, 0) )
                    return nullptr;
                  v70 = sub_54F40(a1, 0, (unsigned int)v110, v9, v10, a3, a5);
                  v31 = v95;
                  if ( !v70 )
                    return nullptr;
                  v32 = v100;
                  v98 = v110[0];
                  v71 = LOBYTE(v110[0]) - v100;
                  if ( (_WORD)v11 == 312 )
                  {
                    if ( (v71 & 7) == 0 )
                      goto LABEL_34;
                  }
                  else if ( (v71 & 3) == 0 )
                  {
                    goto LABEL_34;
                  }
                  goto LABEL_33;
                case 28:
                case 310:
                case 313:
                  result = &byte_5;
                  if ( !a3 )
                    return result;
                  if ( !(unsigned __int8)sub_43F30(v9, v105, 0) )
                    return nullptr;
                  v30 = sub_54F40(a1, (unsigned int)&v109, (unsigned int)v110, v9, v10, a3, a5);
                  v33 = v94;
                  if ( !v30 )
                    return nullptr;
                  v98 = v110[0];
                  v100 = v109;
                  if ( (_WORD)v11 == 310 )
                  {
                    v34 = v110[0] - v109;
LABEL_31:
                    if ( (v34 & 7) == 0 )
                      goto LABEL_32;
                    goto LABEL_175;
                  }
                  v34 = v110[0] - (v109 & 0xFFFFFFFFFFFFF000LL);
                  if ( (_WORD)v11 != 28 )
                    goto LABEL_31;
                  if ( (v110[0] & 3) == 0 )
                    goto LABEL_32;
LABEL_175:
                  sub_40E00(v9, v110[0], v31, v32, v94);
LABEL_32:
                  if ( v34 > 0xFFE )
LABEL_33:
                    sub_40E00(v9, v98, v31, v32, v33);
LABEL_34:
                  v35 = (unsigned __int16)word_89598;
                  LODWORD(v36) = 0;
                  v37 = 0x40000000;
LABEL_35:
                  sub_42050(a1, v9, v98, v36, 0, v35, v100, v37, 0);
LABEL_36:
                  if ( v22 > 0x118 )
                  {
LABEL_42:
                    if ( v22 > 0x11B )
                    {
LABEL_43:
                      if ( v22 != 1026 )
                        return nullptr;
                    }
                    goto LABEL_40;
                  }
LABEL_37:
                  if ( v22 > 0x116 )
                    goto LABEL_40;
                  if ( v22 > 0x15 )
                  {
LABEL_45:
                    if ( v22 != 182 )
                      return nullptr;
                    goto LABEL_40;
                  }
                  if ( v22 > 0x11 )
                  {
LABEL_40:
                    create_insn(v9, 0);
                    return nullptr;
                  }
                  break;
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                case 35:
                case 36:
                case 37:
                case 38:
                case 39:
                case 40:
                case 41:
                case 42:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 59:
                case 60:
                case 61:
                case 62:
                case 63:
                case 64:
                case 65:
                case 66:
                case 67:
                case 68:
                case 69:
                case 70:
                case 71:
                case 72:
                case 73:
                case 74:
                case 75:
                case 76:
                case 77:
                case 78:
                case 79:
                case 128:
                case 129:
                case 130:
                case 131:
                case 132:
                case 133:
                case 134:
                case 135:
                case 136:
                case 137:
                case 138:
                case 139:
                case 140:
                case 141:
                case 142:
                case 143:
                case 144:
                case 145:
                case 146:
                case 147:
                case 148:
                case 149:
                case 150:
                case 151:
                case 152:
                case 153:
                case 154:
                case 155:
                case 156:
                case 157:
                case 158:
                case 159:
                case 160:
                case 161:
                case 162:
                case 163:
                case 164:
                case 165:
                case 166:
                case 167:
                case 168:
                case 169:
                case 170:
                case 171:
                case 172:
                case 173:
                case 174:
                case 175:
                case 176:
                case 177:
                case 178:
                case 179:
                case 186:
                case 189:
                case 190:
                case 191:
                case 192:
                case 193:
                case 194:
                case 195:
                case 196:
                case 197:
                case 198:
                case 199:
                case 200:
                case 201:
                case 202:
                case 203:
                case 204:
                case 205:
                case 206:
                case 207:
                case 208:
                case 209:
                case 210:
                case 211:
                case 212:
                case 213:
                case 214:
                case 215:
                case 216:
                case 217:
                case 218:
                case 219:
                case 220:
                case 221:
                case 222:
                case 223:
                case 224:
                case 225:
                case 226:
                case 227:
                case 228:
                case 229:
                case 230:
                case 231:
                case 232:
                case 233:
                case 234:
                case 235:
                case 236:
                case 237:
                case 238:
                case 239:
                case 240:
                case 241:
                case 242:
                case 243:
                case 244:
                case 245:
                case 246:
                case 247:
                case 248:
                case 249:
                case 250:
                case 251:
                case 252:
                case 253:
                case 254:
                case 255:
                case 281:
                case 294:
                case 295:
                case 296:
                case 297:
                case 298:
                  return (_BYTE *)(&dword_0 + 2);
                case 180:
LABEL_64:
                  sub_40E20(a1, v9, 2);
                  return nullptr;
                case 181:
                case 182:
                  v74 = v98 - v100;
                  sub_42050(a1, v9, v98, v98 - v100, 0, 4, v100, 0, 0);
                  goto LABEL_129;
                case 183:
                  LODWORD(v98) = v107;
                  v74 = v107 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL);
                  sub_42050(a1, v9, v107, v74, 0, 4, v100, 0, 0);
                  goto LABEL_129;
                case 188:
                  sub_40E20(a1, v9, 4);
                  LODWORD(v98) = v107;
                  v74 = v107 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL);
                  sub_42050(a1, v9, v107, v74, 0, 4, v100, 0x40000000, 0);
LABEL_129:
                  if ( (_WORD)v11 != 1032 && (_WORD)v11 != 188 )
                  {
                    if ( (unsigned __int16)v11 <= 0x118u )
                      goto LABEL_45;
                    goto LABEL_42;
                  }
                  sub_47DB0(a1, v74, v75, v76, v77, v78, a5, v98, v100);
                  if ( (unsigned __int16)v11 <= 0x118u )
                    goto LABEL_37;
                  goto LABEL_43;
                case 257:
                case 260:
                  v73 = v100;
                  if ( (_WORD)v11 == 260 )
                    v73 = v9;
                  v100 = v73;
                  LODWORD(v36) = v98 - v73;
                  if ( v10 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
                  {
LABEL_50:
                    v35 = 12;
                    v37 = 0;
                    goto LABEL_35;
                  }
                  sub_42050(a1, v9, v10, v36, v105, 12, v73, 0, 0);
                  goto LABEL_36;
                case 263:
                case 264:
                case 265:
                case 266:
                case 267:
                case 268:
                case 269:
                  if ( (unsigned __int16)(v11 - 263) <= 4u )
                  {
                    LOWORD(v35) = word_8958A;
                    v36 = (unsigned __int64)off_6BD00[(unsigned __int16)(v11 - 263)];
                    if ( (_WORD)v11 != 267 )
                    {
                      LOWORD(v35) = word_8958C;
                      if ( (unsigned __int16)(v11 - 265) >= 2u )
                        LOWORD(v35) = word_8958E;
                    }
                    v35 = (unsigned __int16)v35;
                    if ( v36 )
                    {
                      if ( v98 < 0 || v98 >= v36 )
                      {
                        v97 = (unsigned __int16)v35;
                        sub_40E00(v9, v98, off_6BD00, v36, v105);
                        v35 = v97;
                      }
                      LODWORD(v36) = 0;
                      v37 = 0x40000000;
                    }
                    else
                    {
                      v37 = 0x40000000;
                    }
                  }
                  else
                  {
                    if ( (_WORD)v11 == 269 )
                      v35 = (unsigned __int16)word_89588;
                    else
                      v35 = (unsigned __int16)word_8958A;
                    LODWORD(v36) = 0;
                    v37 = 0x40000000;
                  }
                  goto LABEL_35;
                default:
                  if ( (unsigned __int16)v11 > 0x23Du )
                  {
                    switch ( (__int16)v11 )
                    {
                      case 1024:
                        goto LABEL_64;
                      case 1025:
                      case 1026:
                        LODWORD(v36) = v98 - v100;
                        goto LABEL_50;
                      case 1027:
                        sub_42050(a1, v9, v107, v107 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL), 0, 12, v100, 0, 0);
                        goto LABEL_36;
                      case 1032:
                        sub_40E20(a1, v9, 4);
                        v44 = v107 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL);
                        sub_42050(
                          a1,
                          v9,
                          v107,
                          v107 + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 608LL),
                          0,
                          12,
                          v100,
                          0x40000000,
                          0);
                        sub_47DB0(a1, v44, v45, v46, v47, v48, a5, v98, v100);
                        return nullptr;
                      default:
                        return (_BYTE *)(&dword_0 + 2);
                    }
                  }
                  if ( (v11 & 0xFE00) == 0 )
                    return (_BYTE *)(&dword_0 + 2);
                  v91 = 0x3FE3FF5F9FFFFFFFLL;
                  return (const char *)(_bittest64(&v91, (unsigned __int16)v11) + 2LL);
              }
            }
            return nullptr;
          }
        }
        else
        {
          v19 = 0;
          v18 = 0;
        }
        if ( *(_DWORD *)(v13 + 320) != v18 )
          goto LABEL_16;
        goto LABEL_10;
      }
      if ( (v11 & 0xFFFD) != 0x401 )
        goto LABEL_54;
    }
    else
    {
      if ( (unsigned __int16)v11 <= 0x100u )
      {
        if ( (unsigned __int16)v11 <= 0x1Cu )
        {
          if ( (_WORD)v11 )
          {
            switch ( (__int16)v11 )
            {
              case 1:
              case 3:
                goto LABEL_101;
              case 2:
              case 4:
                goto LABEL_99;
              case 10:
              case 11:
              case 26:
                goto LABEL_83;
              case 12:
                goto LABEL_133;
              case 13:
              case 14:
              case 15:
              case 16:
              case 17:
              case 27:
              case 28:
                goto LABEL_55;
              case 18:
                goto LABEL_138;
              case 19:
                goto LABEL_141;
              case 20:
              case 21:
                goto LABEL_93;
              default:
                goto LABEL_54;
            }
          }
          goto LABEL_54;
        }
        if ( (v11 & 0xFFFD) == 0xB5 )
        {
LABEL_101:
          v69 = get_dword(v9, a2, v27, v28, v29);
          v5 = a4;
          v12 = v69;
          v107 = v69;
          v98 = v10 + v69;
          goto LABEL_3;
        }
LABEL_54:
        v98 = v10;
        v12 = 0;
        v107 = 0;
        goto LABEL_3;
      }
      v28 = (unsigned int)(v11 - 257);
      v92 = 1LL << ((unsigned __int8)v11 - 1);
      if ( (v92 & 0x24) != 0 )
      {
LABEL_99:
        word = get_word(v9);
        v5 = a4;
        v12 = word;
        v107 = word;
        v98 = v10 + word;
        goto LABEL_3;
      }
      if ( (v92 & 0x12) != 0 )
        goto LABEL_101;
      v93 = v92 & 9;
      v107 = v93;
      if ( !v93 )
      {
        v98 = v10;
        v12 = 0;
        goto LABEL_3;
      }
    }
    v102 = a4;
    qword = get_qword(v9);
LABEL_70:
    v107 = qword;
    v12 = qword;
    v5 = v102;
    v98 = v10 + qword;
    goto LABEL_3;
  }
  return result;
}
