__int64 __fastcall sub_3F4C00(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  char v14; // al
  int v15; // r13d
  __int16 v16; // ax
  char **v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // ecx
  int v21; // r14d
  int v22; // r12d
  int v23; // ebp
  int v24; // r14d
  __int16 v25; // ax
  unsigned int v26; // ecx
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int16 v30; // ax
  __int64 result; // rax
  int v32; // eax
  int v33; // eax
  __m128i v34; // xmm0
  int v35; // eax
  __m128i v36; // xmm0
  int v37; // eax
  __m128i v38; // xmm0
  _QWORD *v39; // rdx
  int v40; // eax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128 v49; // xmm4
  __m128 v50; // xmm5
  int v51; // eax
  unsigned __int64 v52; // kr00_8
  __int64 v53; // rdx
  char v54; // al
  __int32 v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned int v60; // ecx
  char v61; // dl
  int v62; // eax
  __int64 v63; // rbx
  int v64; // eax
  __int64 v65; // r9
  __int64 v66; // rcx
  _DWORD *v67; // rcx
  int v68; // edx
  int v69; // edx
  int v70; // eax
  int v71; // [rsp+18h] [rbp-90h]
  int v72; // [rsp+1Ch] [rbp-8Ch]
  _QWORD v73[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v74; // [rsp+30h] [rbp-78h] BYREF
  int v75; // [rsp+38h] [rbp-70h]
  __int64 v76; // [rsp+40h] [rbp-68h] BYREF
  int v77; // [rsp+48h] [rbp-60h]
  __int64 v78; // [rsp+50h] [rbp-58h] BYREF
  int v79; // [rsp+58h] [rbp-50h]
  unsigned __int64 v80; // [rsp+68h] [rbp-40h]

  v14 = *(_BYTE *)(a1 + 384);
  v80 = __readfsqword(0x28u);
  v15 = a2;
  if ( v14 )
  {
    if ( v14 != 1 )
      return 0;
    a12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL);
    v16 = *(_WORD *)(a1 + 48);
    if ( v16 == 473 || v16 == 195 )
    {
      a2 = *(unsigned __int16 *)(a1 + 70);
      if ( (_DWORD)a2 == ((*(_BYTE *)(a1 + 57) & 4) == 0 ? 30 : 17) )
        goto LABEL_6;
    }
    else if ( (*(_BYTE *)(a12 + 64) & 2) == 0 && v16 == 544 )
    {
      v16 = 544;
      goto LABEL_6;
    }
    v39 = *(_QWORD **)(a12 + 96);
    a2 = *(_QWORD *)(a1 + 40);
    a12 = (__int64)&v39[*(_QWORD *)(a12 + 104)];
    if ( v39 == (_QWORD *)a12 )
      return 0;
    while ( a2 != *v39 )
    {
      if ( (_QWORD *)a12 == ++v39 )
        return 0;
    }
    if ( (_QWORD *)a12 == v39 )
      return 0;
  }
  else
  {
    v16 = *(_WORD *)(a1 + 48);
  }
  if ( *(_QWORD *)(a1 + 784) != -1 )
  {
    if ( ((v16 - 31) & 0xFFFD) != 0 )
    {
      if ( (unsigned __int16)(v16 - 131) > 1u && v16 != 126 )
        goto LABEL_6;
      a12 = 0x40000000000400LL;
      if ( (*(_QWORD *)(a1 + 104) & 0xFFFF00000000FF00LL) != 0x40000000000400LL )
        goto LABEL_6;
    }
    else
    {
      a12 = 0x40000000000100LL;
      if ( (*(_QWORD *)(a1 + 104) & 0xFFFF00000000FF00LL) != 0x40000000000100LL )
        goto LABEL_6;
    }
    a2 = *(_QWORD *)(a1 + 40);
    if ( sub_CBD70() == 1 && !sub_CBD70() )
      return 4294967264LL;
    v16 = *(_WORD *)(a1 + 48);
  }
LABEL_6:
  v17 = &off_4CA1C0;
  while ( *((_WORD *)v17 + 4) != v16 )
  {
    v17 += 2;
    if ( &unk_4CA400 == (_UNKNOWN *)v17 )
    {
      v17 = nullptr;
      if ( !(unsigned __int8)sub_3EA750(
                               a1,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10,
                               a2,
                               (__int64)&unk_4CA400,
                               (char *)a12,
                               a13,
                               a14) )
        goto LABEL_10;
      goto LABEL_40;
    }
  }
  if ( !(unsigned __int8)sub_3EA750(
                           a1,
                           a3,
                           a4,
                           a5,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10,
                           a2,
                           (__int64)&unk_4CA400,
                           (char *)a12,
                           a13,
                           a14) )
  {
LABEL_10:
    *(_WORD *)(a1 + 888) = 0;
    goto LABEL_11;
  }
LABEL_40:
  if ( *(_WORD *)(a1 + 888) )
  {
    if ( !*(_BYTE *)(a1 + 145) )
    {
      v32 = *(_DWORD *)(a1 + 892) & 0x38;
      if ( v32 == 8 )
        goto LABEL_48;
      if ( v32 == 24 )
      {
        a2 = *(_QWORD *)(a1 + 40);
        if ( sub_CBD70() != 1 || sub_CBD70() )
          goto LABEL_48;
        v32 = *(_DWORD *)(a1 + 892) & 0x38;
      }
      if ( v32 == 32 && sub_CBD70() == 2 )
      {
LABEL_48:
        v35 = *(_DWORD *)(a1 + 136);
        *(__m128i *)(a1 + 144) = _mm_loadu_si128((const __m128i *)(a1 + 104));
        v36 = _mm_loadu_si128((const __m128i *)(a1 + 120));
        *(_DWORD *)(a1 + 176) = v35;
        v37 = *(_DWORD *)(a1 + 96);
        *(__m128i *)(a1 + 160) = v36;
        v38 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        *(_DWORD *)(a1 + 136) = v37;
        *(__m128i *)(a1 + 104) = v38;
        a3 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
        *(__m128 *)(a1 + 120) = a3;
        goto LABEL_11;
      }
    }
    if ( !*(_BYTE *)(a1 + 185) && (*(_DWORD *)(a1 + 892) & 0x38) == 0x10 )
    {
      v33 = *(_DWORD *)(a1 + 176);
      *(__m128i *)(a1 + 184) = _mm_loadu_si128((const __m128i *)(a1 + 144));
      v34 = _mm_loadu_si128((const __m128i *)(a1 + 160));
      *(_DWORD *)(a1 + 216) = v33;
      *(__m128i *)(a1 + 200) = v34;
      goto LABEL_48;
    }
  }
LABEL_11:
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v19 = *(unsigned __int16 *)(a1 + 48);
  v20 = *(_DWORD *)(v18 + 104);
  if ( v19 >= v20 && v19 < *(_DWORD *)(v18 + 108) )
  {
    v71 = *(_DWORD *)(*(_QWORD *)(v18 + 112) + 16LL * (v19 - v20) + 8);
    v21 = v71 & 0x400;
    if ( (v71 & 0x100) != 0 || (v22 = -1, (*(_BYTE *)(a1 + 65) & 0xF7) == 1) )
    {
      a2 = 0;
      v22 = sub_3ED570(a1, 0, 0, *(double *)a3.m128_u64);
    }
    if ( (v71 & 0x200) != 0 )
      goto LABEL_15;
LABEL_14:
    if ( (*(_BYTE *)(a1 + 105) & 0xF7) == 1 )
      goto LABEL_15;
    goto LABEL_57;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xF7) == 1 )
  {
    a2 = 0;
    v21 = 0;
    v71 = 0;
    v22 = sub_3ED570(a1, 0, 0, *(double *)a3.m128_u64);
    goto LABEL_14;
  }
  v21 = 0;
  v71 = 0;
  v22 = -1;
  if ( (*(_BYTE *)(a1 + 105) & 0xF7) == 1 )
    goto LABEL_15;
LABEL_57:
  if ( !sub_3EA630(*(unsigned __int16 *)(a1 + 48)) )
  {
    v23 = -1;
    goto LABEL_16;
  }
LABEL_15:
  a2 = 1;
  v23 = sub_3ED570(a1, 1, 0, *(double *)a3.m128_u64);
LABEL_16:
  if ( v21 || (v24 = -1, (*(_BYTE *)(a1 + 145) & 0xF7) == 1) )
  {
    a2 = 2;
    v24 = sub_3ED570(a1, 2, 0, *(double *)a3.m128_u64);
  }
  if ( v17 )
  {
    a2 = (__int64)v17;
    if ( (unsigned __int8)sub_3EE5C0(a1, (__int64)v17, v22, v23, v24) )
      return 0;
  }
  if ( !*(_WORD *)(a1 + 888) )
  {
    sub_3F46C0((_QWORD *)a1, v71, v22, v23, v24, v15);
    return 0;
  }
  v25 = *(_WORD *)(a1 + 48);
  if ( (v25 == 128 || v25 == 145) && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 4 && (*(_BYTE *)(a1 + 70) & 1) != 0 )
  {
    sub_3F46C0((_QWORD *)a1, v71, v22, v23, v24, v15);
    sub_32C190(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x31u, v46, v47, v48, a3, a4, a5, a6, v49, v50, a9, a10);
    return 0;
  }
  if ( !*(_BYTE *)(a1 + 145) )
  {
    if ( (*(_DWORD *)(a1 + 892) & 0x38) == 0x18 )
    {
      a2 = *(_QWORD *)(a1 + 40);
      if ( sub_CBD70() == 1 && !sub_CBD70() )
      {
        v24 = v23;
        v23 = v22;
        v22 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 452LL);
      }
      if ( *(_BYTE *)(a1 + 145) )
        goto LABEL_71;
      v25 = *(_WORD *)(a1 + 48);
    }
    if ( (unsigned __int16)(v25 - 178) <= 0xFu )
    {
      if ( v24 != -1 )
      {
        if ( !under_debugger )
          sub_37E160(0xCCBCu, *(double *)a3.m128_u64);
        goto LABEL_238;
      }
      v24 = v23;
      v23 = v22;
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 644LL);
      goto LABEL_29;
    }
  }
LABEL_71:
  if ( !*(_BYTE *)(a1 + 105) )
  {
    v40 = *(unsigned __int16 *)(a1 + 48);
    v41 = (unsigned int)(v40 - 83);
    if ( (unsigned __int16)(v40 - 83) > 0xCu )
    {
      if ( (unsigned __int16)(v40 - 536) <= 1u || (unsigned __int16)(v40 - 548) <= 3u )
      {
        a2 = *(_QWORD *)(a1 + 40);
        if ( sub_CBD70() == 1 && !sub_CBD70() )
        {
          if ( (v24 & v23) != 0xFFFFFFFF )
          {
            if ( !under_debugger )
              sub_37E160(0xCC65u, *(double *)a3.m128_u64);
            goto LABEL_238;
          }
          v23 = v22;
        }
      }
    }
    else
    {
      v42 = 4369;
      if ( _bittest64(&v42, v41) )
      {
        if ( v23 != -1 )
        {
          if ( !under_debugger )
            sub_37E160(0xCCBDu, *(double *)a3.m128_u64);
          goto LABEL_238;
        }
        v23 = v22;
        v22 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 644LL);
        if ( (unsigned __int8)sub_3EA990(a1) )
          goto LABEL_30;
LABEL_76:
        v43 = *(unsigned __int16 *)(a1 + 48);
        v44 = (unsigned int)(v43 - 83);
        if ( (unsigned __int16)(v43 - 83) <= 0xCu )
        {
          v45 = 4369;
          if ( _bittest64(&v45, v44) )
          {
            sub_3EB130(a1, v22, v15, *(double *)a3.m128_u64);
            return 0;
          }
          goto LABEL_78;
        }
        if ( (unsigned __int16)v43 > 0x241u )
        {
          if ( (unsigned __int16)v43 <= 0x341u )
          {
            if ( (unsigned __int16)v43 <= 0x33Du )
              goto LABEL_108;
            goto LABEL_78;
          }
          if ( (unsigned __int16)(v43 - 1743) <= 0xDu )
            goto LABEL_78;
          v44 = (unsigned int)(v43 - 1690);
          if ( (unsigned __int16)(v43 - 1690) > 1u )
            goto LABEL_108;
        }
        else
        {
          if ( (unsigned __int16)v43 > 0x23Du )
            goto LABEL_78;
          if ( (unsigned __int16)v43 <= 0xC9u )
          {
            if ( (unsigned __int16)v43 <= 0xC5u )
            {
              v44 = (unsigned int)(v43 - 82);
              if ( (unsigned __int16)(v43 - 82) > 0x1Fu )
              {
                if ( (unsigned __int16)v43 <= 0x2Cu )
                {
                  if ( (unsigned __int16)v43 <= 0x26u )
                  {
                    if ( !(_WORD)v43 )
                    {
LABEL_98:
                      if ( !(unsigned __int8)sub_3F17D0(
                                               a1,
                                               (unsigned int)v22,
                                               v23,
                                               (char *)*(unsigned __int16 *)(a1 + 890),
                                               0,
                                               v27,
                                               a3,
                                               a4,
                                               a5,
                                               a6,
                                               v28,
                                               v29,
                                               a9,
                                               a10) )
                      {
                        if ( !under_debugger )
                          sub_37E160(0xCC5Cu, *(double *)a3.m128_u64);
                        goto LABEL_238;
                      }
LABEL_99:
                      v51 = *(_DWORD *)(a1 + 892);
                      if ( (v51 & 2) != 0 )
                      {
                        sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), v22);
                      }
                      else if ( (v51 & 4) != 0
                             && *(_WORD *)(a1 + 890) == 4
                             && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
                      {
                        sub_1D1F50(a1, 0x3Du, 4, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v22 + 4, 0);
                      }
                      return 0;
                    }
                    goto LABEL_108;
                  }
                  return sub_3EBB00(a1, v22, v23, *(double *)a3.m128_u64);
                }
                v44 = (unsigned int)(v43 - 59);
                if ( (unsigned __int16)(v43 - 59) <= 5u )
                  return sub_3EBB00(a1, v22, v23, *(double *)a3.m128_u64);
LABEL_108:
                v52 = v44;
                v53 = (unsigned __int16)v43;
                switch ( (__int16)v43 )
                {
                  case 0:
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
                  case 55:
                  case 56:
                  case 58:
                  case 59:
                  case 60:
                  case 61:
                  case 62:
                  case 63:
                  case 64:
                  case 77:
                  case 78:
                  case 79:
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
                  case 119:
                  case 120:
                  case 121:
                  case 122:
                  case 123:
                  case 124:
                  case 125:
                  case 126:
                  case 127:
                  case 128:
                  case 129:
                  case 130:
                  case 131:
                  case 132:
                  case 133:
                  case 134:
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
                  case 162:
                  case 167:
                  case 169:
                  case 170:
                  case 171:
                  case 173:
                  case 174:
                  case 177:
                  case 198:
                  case 199:
                  case 200:
                  case 201:
                  case 206:
                  case 207:
                  case 208:
                  case 209:
                  case 210:
                  case 215:
                  case 216:
                  case 217:
                  case 218:
                  case 219:
                  case 220:
                  case 221:
                  case 222:
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
                  case 256:
                  case 257:
                  case 258:
                  case 259:
                  case 260:
                  case 261:
                  case 262:
                  case 263:
                  case 264:
                  case 265:
                  case 266:
                  case 267:
                  case 268:
                  case 269:
                  case 270:
                  case 271:
                  case 272:
                  case 273:
                  case 274:
                  case 275:
                  case 276:
                  case 277:
                  case 278:
                  case 279:
                  case 280:
                  case 281:
                  case 282:
                  case 283:
                  case 284:
                  case 285:
                  case 286:
                  case 287:
                  case 288:
                  case 289:
                  case 290:
                  case 291:
                  case 292:
                  case 293:
                  case 294:
                  case 295:
                  case 296:
                  case 297:
                  case 298:
                  case 299:
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
                  case 310:
                  case 311:
                  case 312:
                  case 313:
                  case 314:
                  case 315:
                  case 316:
                  case 317:
                  case 318:
                  case 319:
                  case 320:
                  case 321:
                  case 322:
                  case 323:
                  case 324:
                  case 325:
                  case 326:
                  case 327:
                  case 328:
                  case 329:
                  case 330:
                  case 331:
                  case 332:
                  case 333:
                  case 334:
                  case 335:
                  case 336:
                  case 337:
                  case 338:
                  case 339:
                  case 340:
                  case 341:
                  case 342:
                  case 343:
                  case 344:
                  case 345:
                  case 346:
                  case 347:
                  case 348:
                  case 349:
                  case 350:
                  case 351:
                  case 352:
                  case 353:
                  case 354:
                  case 355:
                  case 356:
                  case 357:
                  case 358:
                  case 359:
                  case 360:
                  case 361:
                  case 362:
                  case 363:
                  case 364:
                  case 365:
                  case 366:
                  case 367:
                  case 368:
                  case 369:
                  case 370:
                  case 371:
                  case 372:
                  case 373:
                  case 374:
                  case 375:
                  case 376:
                  case 377:
                  case 378:
                  case 379:
                  case 380:
                  case 381:
                  case 382:
                  case 383:
                  case 384:
                  case 385:
                  case 386:
                  case 387:
                  case 388:
                  case 389:
                  case 390:
                  case 391:
                  case 392:
                  case 393:
                  case 394:
                  case 395:
                  case 396:
                  case 397:
                  case 398:
                  case 399:
                  case 400:
                  case 401:
                  case 402:
                  case 403:
                  case 404:
                  case 405:
                  case 406:
                  case 407:
                  case 408:
                  case 409:
                  case 410:
                  case 411:
                  case 412:
                  case 413:
                  case 414:
                  case 415:
                  case 416:
                  case 417:
                  case 418:
                  case 419:
                  case 420:
                  case 421:
                  case 422:
                  case 423:
                  case 424:
                  case 425:
                  case 426:
                  case 427:
                  case 428:
                  case 429:
                  case 432:
                  case 433:
                  case 434:
                  case 435:
                  case 436:
                  case 437:
                  case 438:
                  case 439:
                  case 440:
                  case 443:
                  case 444:
                  case 445:
                  case 446:
                  case 447:
                  case 448:
                  case 449:
                  case 450:
                  case 451:
                  case 452:
                  case 453:
                  case 454:
                  case 455:
                  case 456:
                  case 457:
                  case 458:
                  case 459:
                  case 460:
                  case 461:
                  case 462:
                  case 463:
                  case 464:
                  case 465:
                  case 466:
                  case 467:
                  case 468:
                  case 469:
                  case 470:
                  case 471:
                  case 472:
                  case 474:
                  case 475:
                  case 476:
                  case 478:
                  case 479:
                  case 480:
                  case 481:
                  case 482:
                  case 483:
                  case 484:
                  case 485:
                  case 486:
                  case 487:
                  case 488:
                  case 489:
                  case 490:
                  case 491:
                  case 492:
                  case 493:
                  case 494:
                  case 496:
                  case 497:
                  case 498:
                  case 499:
                  case 505:
                  case 506:
                  case 507:
                  case 508:
                  case 509:
                  case 510:
                  case 511:
                  case 513:
                  case 514:
                  case 515:
                  case 519:
                  case 520:
                  case 522:
                  case 523:
                  case 525:
                  case 526:
                  case 527:
                  case 528:
                  case 529:
                  case 530:
                  case 531:
                  case 532:
                  case 533:
                  case 538:
                  case 539:
                  case 540:
                  case 541:
                  case 552:
                  case 557:
                  case 558:
                  case 559:
                  case 566:
                  case 567:
                  case 571:
                  case 572:
                  case 573:
                  case 574:
                  case 575:
                  case 576:
                  case 577:
                  case 581:
                  case 584:
                  case 585:
                  case 586:
                  case 587:
                  case 588:
                  case 589:
                  case 590:
                  case 591:
                  case 592:
                  case 597:
                  case 598:
                  case 599:
                  case 600:
                  case 601:
                  case 602:
                  case 603:
                  case 604:
                  case 605:
                  case 606:
                  case 607:
                  case 608:
                  case 609:
                  case 610:
                  case 611:
                  case 612:
                  case 613:
                  case 614:
                  case 615:
                  case 616:
                  case 617:
                  case 618:
                  case 619:
                  case 620:
                  case 621:
                  case 622:
                  case 623:
                  case 624:
                  case 625:
                  case 626:
                  case 627:
                  case 628:
                  case 629:
                  case 630:
                  case 631:
                  case 632:
                  case 633:
                  case 634:
                  case 635:
                  case 636:
                  case 637:
                  case 638:
                  case 639:
                  case 640:
                  case 641:
                  case 642:
                  case 643:
                  case 644:
                  case 645:
                  case 646:
                  case 647:
                  case 648:
                  case 649:
                  case 650:
                  case 651:
                  case 652:
                  case 653:
                  case 654:
                  case 655:
                  case 656:
                  case 657:
                  case 658:
                  case 659:
                  case 660:
                  case 661:
                  case 662:
                  case 663:
                  case 664:
                  case 665:
                  case 666:
                  case 667:
                  case 668:
                  case 669:
                  case 670:
                  case 671:
                  case 672:
                  case 673:
                  case 674:
                  case 675:
                  case 676:
                  case 677:
                  case 678:
                  case 679:
                  case 680:
                  case 681:
                  case 682:
                  case 683:
                  case 684:
                  case 685:
                  case 686:
                  case 687:
                  case 688:
                  case 689:
                  case 690:
                  case 691:
                  case 692:
                  case 693:
                  case 694:
                  case 695:
                  case 696:
                  case 697:
                  case 698:
                  case 699:
                  case 700:
                  case 701:
                  case 702:
                  case 703:
                  case 704:
                  case 705:
                  case 706:
                  case 707:
                  case 708:
                  case 709:
                  case 710:
                  case 711:
                  case 712:
                  case 713:
                  case 714:
                  case 715:
                  case 716:
                  case 717:
                  case 718:
                  case 719:
                  case 720:
                  case 721:
                  case 722:
                  case 723:
                  case 724:
                  case 725:
                  case 726:
                  case 727:
                  case 728:
                  case 729:
                  case 730:
                  case 731:
                  case 732:
                  case 733:
                  case 734:
                  case 735:
                  case 736:
                  case 737:
                  case 738:
                  case 739:
                  case 740:
                  case 741:
                  case 742:
                  case 743:
                  case 744:
                  case 745:
                  case 746:
                  case 747:
                  case 748:
                  case 749:
                  case 750:
                  case 751:
                  case 752:
                  case 753:
                  case 754:
                  case 755:
                  case 756:
                  case 757:
                  case 758:
                  case 759:
                  case 760:
                  case 761:
                  case 762:
                  case 763:
                  case 764:
                  case 765:
                  case 766:
                  case 767:
                  case 768:
                  case 769:
                  case 770:
                  case 771:
                  case 772:
                  case 773:
                  case 774:
                  case 775:
                  case 776:
                  case 777:
                  case 778:
                  case 779:
                  case 780:
                  case 781:
                  case 782:
                  case 783:
                  case 784:
                  case 785:
                  case 786:
                  case 787:
                  case 788:
                  case 789:
                  case 790:
                  case 791:
                  case 792:
                  case 793:
                  case 794:
                  case 795:
                  case 796:
                  case 797:
                  case 798:
                  case 799:
                  case 800:
                  case 801:
                  case 802:
                  case 803:
                  case 804:
                  case 805:
                  case 806:
                  case 807:
                  case 808:
                  case 809:
                  case 810:
                  case 811:
                  case 812:
                  case 813:
                  case 814:
                  case 815:
                  case 816:
                  case 817:
                  case 818:
                  case 819:
                  case 820:
                  case 822:
                  case 823:
                  case 826:
                  case 827:
                  case 830:
                  case 831:
                  case 832:
                  case 833:
                    goto LABEL_98;
                  case 1:
                  case 4:
                  case 30:
                  case 32:
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 4) == 0 )
                      goto LABEL_148;
                    sub_3EB640(a1, 0x1Au, v23, v24, *(double *)a3.m128_u64);
                    if ( ((*(_WORD *)(a1 + 48) - 30) & 0xFFFD) != 0 )
                      goto LABEL_148;
                    v54 = *(_BYTE *)(a1 + 145);
                    if ( v54 == 5 )
                    {
                      v55 = 2;
                    }
                    else if ( v54 || (v55 = 1, *(_BYTE *)(a1 + 105) != 5) )
                    {
                      if ( !under_debugger )
                        sub_37E160(0xCC5Du, *(double *)a3.m128_u64);
                      break;
                    }
                    if ( (unsigned __int8)sub_60860((_QWORD *)(*(_QWORD *)(a1 + 832) + 104LL), v24, 1) )
                    {
                      sub_3E8540(*(_QWORD *)(a1 + 832), v24);
                      v24 = sub_3ED570(a1, v55, 0, *(double *)a3.m128_u64);
LABEL_148:
                      sub_3EAB70(a1, 0xCu, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                      goto LABEL_99;
                    }
                    if ( !under_debugger )
                      sub_37E160(0xCC5Eu, *(double *)a3.m128_u64);
                    break;
                  case 2:
                  case 5:
                  case 31:
                  case 33:
                    goto LABEL_148;
                  case 3:
                  case 36:
                    sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    goto LABEL_99;
                  case 6:
                  case 12:
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 4) != 0 )
                      sub_3EB640(a1, 0x1Eu, v23, v24, *(double *)a3.m128_u64);
                    goto LABEL_137;
                  case 7:
                  case 13:
LABEL_137:
                    sub_3EAB70(a1, 0xDu, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    goto LABEL_99;
                  case 8:
                    sub_3EAB70(a1, 0x13u, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    sub_3EAB70(a1, 7u, *(unsigned __int16 *)(a1 + 890), v22, 0x3BEA45E214ADDC55LL, v22, 0);
                    goto LABEL_99;
                  case 9:
                  case 37:
                    sub_3EAB70(a1, 0x13u, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    goto LABEL_99;
                  case 10:
                  case 11:
                  case 34:
                  case 35:
                  case 593:
                  case 594:
                  case 595:
                  case 596:
                    sub_3EDE90(a1, v22, v23, v24, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 14:
                  case 38:
                  case 441:
                  case 442:
                    sub_3EAB70(a1, 0x15u, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    goto LABEL_99;
                  case 15:
                  case 16:
                  case 17:
                  case 18:
                  case 19:
                  case 20:
                  case 21:
                  case 22:
                  case 23:
                  case 24:
                  case 25:
                  case 26:
                  case 27:
                  case 28:
                  case 29:
                    sub_3EAC60(a1, v22, v23, v24, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 54:
                  case 57:
                  case 521:
                  case 524:
                  case 542:
                  case 543:
                    sub_3EAF50(a1, v22, v23, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 65:
                  case 66:
                  case 67:
                  case 68:
LABEL_189:
                    sub_3EE3A0(a1, v22, v23, v24, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 69:
                  case 70:
                  case 71:
                  case 72:
                  case 500:
                  case 501:
                  case 502:
                  case 503:
                    if ( *(_BYTE *)(a1 + 65) == 9 && *(_BYTE *)(a1 + 97) == 17 )
                      sub_3F0680(a1, v23, v24, *(unsigned __int16 *)(a1 + 70), *(double *)a3.m128_u64);
                    else
                      sub_3F0680(a1, v22, v23, 0, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 73:
                  case 74:
                  case 75:
                  case 76:
                    if ( *(_BYTE *)(a1 + 105) == 9 && *(_BYTE *)(a1 + 137) == 17 )
                    {
                      v67 = *(_DWORD **)(a1 + 832);
                      v68 = 2 * v67[20] * *(unsigned __int16 *)(a1 + 110);
                    }
                    else
                    {
                      v67 = *(_DWORD **)(a1 + 832);
                      v68 = 0;
                    }
                    if ( (_WORD)v43 == 75 )
                    {
                      v56 = v67[153] + v68;
                    }
                    else
                    {
                      if ( (_WORD)v43 != 76 )
                      {
                        if ( (_WORD)v43 == 73 )
                          v69 = v67[153] + v68;
                        else
                          v69 = v67[154] + v68;
                        sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v22, 0x3BEA45E214ADDC55LL, v69, 0);
                        goto LABEL_99;
                      }
                      v56 = v67[154] + v68;
                    }
LABEL_154:
                    sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v56, 0x3BEA45E214ADDC55LL, v22, 0);
                    goto LABEL_99;
                  case 114:
                  case 517:
                  case 546:
                  case 835:
                  case 836:
LABEL_158:
                    sub_3EAB70(
                      a1,
                      0x39u,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                      *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
                      v23,
                      0x3BEA45E214ADDC55LL,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
                    goto LABEL_99;
                  case 115:
                  case 202:
LABEL_157:
                    sub_3EAB70(
                      a1,
                      0x37u,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                      *(_QWORD *)(a1 + 80),
                      0x3BEA45E214ADDC55LL,
                      0x3BEA45E214ADDC55LL,
                      0);
                    goto LABEL_99;
                  case 116:
                  case 518:
                  case 547:
                    v66 = *(_QWORD *)(a1 + 832);
                    goto LABEL_176;
                  case 117:
                  case 118:
                  case 821:
                    goto LABEL_155;
                  case 135:
                  case 195:
                  case 204:
                  case 205:
                  case 473:
                  case 495:
                  case 838:
LABEL_153:
                    v56 = v23;
                    goto LABEL_154;
                  case 158:
                    sub_3EAB70(a1, 0x45u, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    goto LABEL_99;
                  case 159:
                    sub_3EAB70(a1, 0x46u, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    goto LABEL_99;
                  case 160:
                    sub_3EAB70(a1, 0x47u, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    goto LABEL_99;
                  case 161:
                    sub_3EAB70(a1, 0x48u, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    goto LABEL_99;
                  case 163:
                  case 164:
                  case 165:
                  case 166:
                  case 168:
                  case 172:
                    sub_3EB890(a1, v22, v23, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 175:
                  case 553:
                  case 554:
                    sub_3EAB70(a1, 0x43u, *(unsigned __int16 *)(a1 + 890), v23, 0x3BEA45E214ADDC55LL, v22, 0);
                    goto LABEL_99;
                  case 176:
                    sub_3EAB70(a1, 0x44u, *(unsigned __int16 *)(a1 + 890), v23, 0x3BEA45E214ADDC55LL, v22, 0);
                    goto LABEL_99;
                  case 178:
                  case 179:
                  case 180:
                  case 181:
                  case 182:
                  case 183:
                  case 184:
                  case 185:
                  case 186:
                  case 187:
                  case 188:
                  case 189:
                  case 190:
                  case 191:
                  case 192:
                  case 193:
                    sub_3EB3E0(a1, v22, v23, v24, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 194:
                    goto LABEL_99;
                  case 196:
                  case 555:
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 4) != 0 )
                      sub_3EB640(a1, 0x1Eu, **(_DWORD **)(*(_QWORD *)(a1 + 832) + 696LL), v23, *(double *)a3.m128_u64);
                    goto LABEL_140;
                  case 197:
                  case 556:
LABEL_140:
                    sub_3EAB70(a1, 5u, *(unsigned __int16 *)(a1 + 890), v23, 0x3BEA45E214ADDC55LL, v22, 0);
                    goto LABEL_99;
                  case 203:
LABEL_168:
                    if ( (unsigned __int8)sub_3E8360(a1 + 24, a2, v53, v26) )
                    {
                      v58 = *(_QWORD *)(a1 + 832);
LABEL_170:
                      sub_3ED470(a1, **(_DWORD **)(v58 + 728), *(double *)a3.m128_u64);
                    }
                    else
                    {
LABEL_155:
                      v57 = *(_QWORD *)(a1 + 80);
                      v58 = *(_QWORD *)(a1 + 832);
LABEL_156:
                      sub_3EAB70(a1, 0x38u, *(_DWORD *)(v58 + 84), v57, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
                    }
                    goto LABEL_99;
                  case 211:
                  case 212:
                  case 213:
                  case 214:
                  case 223:
                  case 224:
                  case 225:
                  case 226:
                    v70 = sub_3EDD30(a1, v71, 3, *(double *)a3.m128_u64);
                    sub_3EAD10(a1, v23, v24, v70, v22, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 430:
                  case 431:
                    sub_3F0680(a1, v23, v24, 0, *(double *)a3.m128_u64);
                    v56 = *(int *)(*(_QWORD *)(a1 + 832) + 616LL);
                    goto LABEL_154;
                  case 477:
                    sub_3EAB70(a1, 7u, *(unsigned __int16 *)(a1 + 890), v23, 0x3BEA45E214ADDC55LL, v22, 0);
                    goto LABEL_99;
                  case 504:
                  case 580:
                    sub_3EAB70(a1, 0xEu, *(unsigned __int16 *)(a1 + 890), v23, v24, v22, 0);
                    sub_1D1F50(
                      a1,
                      0x3Du,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                      0x3BEA45E214ADDC55LL,
                      0x3BEA45E214ADDC55LL,
                      *(int *)(*(_QWORD *)(a1 + 832) + 616LL),
                      0);
                    sub_1D1F50(
                      a1,
                      0x3Du,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                      0x3BEA45E214ADDC55LL,
                      0x3BEA45E214ADDC55LL,
                      *(int *)(*(_QWORD *)(a1 + 832) + 612LL),
                      0);
                    goto LABEL_99;
                  case 512:
                  case 560:
                  case 561:
                  case 562:
                    sub_3EC7E0(a1, v22, v23, v24, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 516:
                  case 563:
                  case 564:
                  case 565:
                    if ( !(unsigned __int8)sub_3F4960(
                                             a1,
                                             v22,
                                             v23,
                                             v24,
                                             a3,
                                             a4,
                                             a5,
                                             a6,
                                             *(double *)v28.m128_u64,
                                             *(double *)v29.m128_u64,
                                             a9,
                                             a10) )
                      return 0;
                    goto LABEL_99;
                  case 534:
                  case 535:
                  case 568:
                  case 569:
                  case 570:
                    sub_3EAA80(a1, v22, v23, v24, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 536:
                  case 537:
                  case 548:
                    sub_3EDDF0(
                      (_QWORD *)a1,
                      *(unsigned __int16 *)(a1 + 890),
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                      v23,
                      v22,
                      1u);
                    goto LABEL_99;
                  case 544:
                  case 545:
LABEL_201:
                    if ( (v22 & v24) == 0xFFFFFFFF )
                    {
                      sub_3F1DB0(a1, v23, *(double *)a3.m128_u64);
                      goto LABEL_99;
                    }
                    if ( !under_debugger )
                      sub_37E160(0xCCD3u, *(double *)a3.m128_u64);
                    return result;
                  case 549:
                  case 550:
                  case 551:
                    sub_3EDDF0(
                      (_QWORD *)a1,
                      *(unsigned __int16 *)(a1 + 890),
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                      v23,
                      v22,
                      0);
                    goto LABEL_99;
                  case 578:
                  case 579:
                    sub_3ECB40(a1, v22, v23, v24, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 582:
                  case 583:
                    sub_3EC960(a1, v22, v23, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 824:
                  case 825:
                  case 828:
                  case 829:
LABEL_204:
                    sub_3F0A50(a1, v22, v23, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 834:
                    v65 = *(int *)(*(_QWORD *)(a1 + 832) + 60LL);
                    sub_1D1F50(a1, 0xCu, 4, v65, v22, v65, 0);
                    sub_3EE280(a1, 4u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL));
                    sub_3E8540(*(_QWORD *)(a1 + 832), v22);
                    v66 = *(_QWORD *)(a1 + 832);
                    v22 = **(_DWORD **)(v66 + 728);
LABEL_176:
                    sub_3EAB70(
                      a1,
                      0x36u,
                      *(_DWORD *)(v66 + 84),
                      0x3BEA45E214ADDC55LL,
                      *(int *)(v66 + 64),
                      v22,
                      *(_DWORD *)(v66 + 84));
                    goto LABEL_99;
                  case 837:
                    sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v24, 0x3BEA45E214ADDC55LL, v22, 0);
                    v64 = sub_3EDD30(a1, v71, 3, *(double *)a3.m128_u64);
                    if ( v64 != -1 )
                    {
                      sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v64, 0x3BEA45E214ADDC55LL, v23, 0);
                      goto LABEL_99;
                    }
                    if ( !under_debugger )
                      sub_37E160(0xCCEEu, *(double *)a3.m128_u64);
                    break;
                  default:
                    v53 = v52;
                    LOWORD(v43) = v43 - 1672;
                    switch ( v43 )
                    {
                      case 0LL:
                        v62 = sub_3E85C0(*(_QWORD *)(a1 + 832), *(double *)a3.m128_u64);
                        v63 = v62;
                        sub_3EC710(a1, *(_QWORD *)(a1 + 192), 1, v62, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
                        sub_3EAB70(a1, 0x16u, *(unsigned __int16 *)(a1 + 890), v23, v63, v63, 0);
                        sub_3EAB70(a1, 0xCu, *(unsigned __int16 *)(a1 + 890), v24, v63, v22, 0);
                        goto LABEL_99;
                      case 22LL:
                      case 23LL:
                      case 24LL:
                        sub_3EDF90(a1, v23, v24, v22, *(double *)a3.m128_u64);
                        goto LABEL_99;
                      case 25LL:
                      case 26LL:
                        goto LABEL_189;
                      case 43LL:
                        if ( *(_BYTE *)(a1 + 185) == 5 )
                        {
                          if ( *(_WORD *)(a1 + 890) == 4 )
                          {
                            v73[0] = 0xFFFFFFFF00000000LL;
                            v73[1] = 0;
                            sub_1210A0((__int64)v73, v23, v24, 4);
                            v72 = sub_3E85C0(*(_QWORD *)(a1 + 832), *(double *)a3.m128_u64);
                            v75 = v72;
                            v74 = 0x800000001LL;
                            v77 = sub_3EDD30(a1, v71, 3, *(double *)a3.m128_u64);
                            v76 = 0x100000001LL;
                            v78 = 0x400000001LL;
                            v79 = v22;
                            sub_3EB6F0(
                              (_QWORD *)a1,
                              23,
                              (unsigned __int8 *)v73,
                              (unsigned __int8 *)&v76,
                              (unsigned __int8 *)&v74);
                            sub_3EB6F0((_QWORD *)a1, 10, (unsigned __int8 *)&v74, nullptr, (unsigned __int8 *)&v78);
                            sub_3E8540(*(_QWORD *)(a1 + 832), v72);
                            sub_118BA0((__int64)&v78);
                            sub_118BA0((__int64)&v76);
                            sub_118BA0((__int64)&v74);
                            sub_118BA0((__int64)v73);
                            goto LABEL_99;
                          }
                          if ( !under_debugger )
                            sub_37E160(0xCE2Au, *(double *)a3.m128_u64);
                        }
                        else if ( !under_debugger )
                        {
                          sub_37E160(0xCE29u, *(double *)a3.m128_u64);
                        }
                        return result;
                      case 56LL:
                      case 57LL:
                      case 92LL:
                      case 93LL:
                        goto LABEL_204;
                      case 64LL:
                        goto LABEL_157;
                      case 65LL:
                        goto LABEL_168;
                      case 66LL:
                        goto LABEL_201;
                      case 67LL:
                        sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v23, 0x3BEA45E214ADDC55LL, v22, 0);
                        v61 = sub_3E8360(a1 + 24, 4, v59, v60);
                        v58 = *(_QWORD *)(a1 + 832);
                        if ( v61 )
                          goto LABEL_170;
                        v57 = *(_QWORD *)(a1 + 160);
                        goto LABEL_156;
                      case 68LL:
                      case 70LL:
                        goto LABEL_153;
                      case 69LL:
                        goto LABEL_158;
                      default:
                        goto LABEL_98;
                    }
                    break;
                }
LABEL_238:
                BUG();
              }
            }
LABEL_78:
            sub_3ECDD0(a1, v22, v23, v15, *(double *)a3.m128_u64);
            return 0;
          }
          v44 = (unsigned int)(v43 - 439);
          if ( (unsigned __int16)(v43 - 439) <= 1u )
            goto LABEL_78;
          if ( (unsigned __int16)v43 > 0xDEu || (unsigned __int16)v43 <= 0xD6u )
            goto LABEL_108;
        }
        sub_3EC080(a1, v22, v23, v24, *(double *)a3.m128_u64);
        return 0;
      }
    }
  }
LABEL_29:
  if ( !(unsigned __int8)sub_3EA990(a1) )
    goto LABEL_76;
LABEL_30:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
  {
    v30 = *(_WORD *)(a1 + 48);
    if ( v30 != 202 && v30 != 115 )
      return 0;
    sub_3EAB70(a1, 0x3Au, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  }
  return 1;
}

