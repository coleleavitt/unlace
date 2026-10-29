void __fastcall sub_38090(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rsi

  v4 = *a1;
  switch ( a3 )
  {
    case 30000:
      if ( (unsigned __int64)a1[2] <= 7 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 8;
      *(_DWORD *)v4 = 1919232603;
      *(_DWORD *)(v4 + 3) = 1563062898;
      *(_BYTE *)(*a1 + 7) = 0;
      return;
    case 30001:
      if ( (unsigned __int64)a1[2] <= 7 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 8;
      *(_DWORD *)v4 = 1702111835;
      *(_DWORD *)(v4 + 3) = 1563058789;
      *(_BYTE *)(*a1 + 7) = 0;
      return;
    case 30002:
      if ( (unsigned __int64)a1[2] <= 9 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 10;
      *(_QWORD *)v4 = 0x2A72656D69742A5BLL;
      *(_BYTE *)(v4 + 8) = 93;
      *(_BYTE *)(*a1 + 9) = 0;
      return;
    case 30003:
      if ( (unsigned __int64)a1[2] <= 9 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 10;
      *(_QWORD *)v4 = 0x2A31646166652A5BLL;
      *(_BYTE *)(v4 + 8) = 93;
      *(_BYTE *)(*a1 + 9) = 0;
      return;
    case 30004:
      if ( (unsigned __int64)a1[2] <= 9 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 10;
      *(_QWORD *)v4 = 0x2A32646166652A5BLL;
      *(_BYTE *)(v4 + 8) = 93;
      *(_BYTE *)(*a1 + 9) = 0;
      return;
    case 30005:
      if ( (unsigned __int64)a1[2] <= 9 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 10;
      *(_QWORD *)v4 = 0x2A33646166652A5BLL;
      *(_BYTE *)(v4 + 8) = 93;
      *(_BYTE *)(*a1 + 9) = 0;
      return;
    case 30006:
      if ( (unsigned __int64)a1[2] <= 0xA )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 11;
      qmemcpy((void *)v4, "[*vframe*]", 10);
      *(_BYTE *)(*a1 + 10) = 0;
      return;
    case 30007:
      if ( (unsigned __int64)a1[2] <= 0xA )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 11;
      qmemcpy((void *)v4, "[*handle*]", 10);
      *(_BYTE *)(*a1 + 10) = 0;
      return;
    case 30008:
      if ( (unsigned __int64)a1[2] <= 0xA )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 11;
      qmemcpy((void *)v4, "[*params*]", 10);
      *(_BYTE *)(*a1 + 10) = 0;
      return;
    case 30009:
      if ( (unsigned __int64)a1[2] <= 0xA )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 11;
      qmemcpy((void *)v4, "[*locals*]", 10);
      *(_BYTE *)(*a1 + 10) = 0;
      return;
    case 30010:
      if ( (unsigned __int64)a1[2] <= 7 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 8;
      *(_DWORD *)v4 = 1769220699;
      *(_DWORD *)(v4 + 3) = 1563059305;
      *(_BYTE *)(*a1 + 7) = 0;
      return;
    case 30011:
      if ( (unsigned __int64)a1[2] <= 7 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 8;
      *(_DWORD *)v4 = 1852123739;
      *(_DWORD *)(v4 + 3) = 1563063918;
      *(_BYTE *)(*a1 + 7) = 0;
      return;
    case 30012:
      if ( (unsigned __int64)a1[2] <= 9 )
      {
        v4 = qvector_reserve();
        *a1 = v4;
      }
      a1[1] = 10;
      *(_QWORD *)v4 = 0x2A6E6C646D632A5BLL;
      *(_BYTE *)(v4 + 8) = 93;
      *(_BYTE *)(*a1 + 9) = 0;
      return;
    default:
      if ( (int)a2 <= 129 )
      {
        if ( (int)a2 >= 0 )
        {
          switch ( a2 )
          {
            case 0LL:
            case 1LL:
            case 2LL:
            case 3LL:
            case 4LL:
            case 5LL:
            case 6LL:
            case 7LL:
              switch ( a3 )
              {
                case 0:
                  sub_25AA0(a1, "none");
                  break;
                case 1:
                  goto LABEL_2537;
                case 2:
                  goto LABEL_2536;
                case 3:
                  goto LABEL_2541;
                case 4:
                  goto LABEL_2540;
                case 5:
                  goto LABEL_2539;
                case 6:
                  goto LABEL_2538;
                case 7:
                  goto LABEL_2245;
                case 8:
                  goto LABEL_2244;
                case 9:
                  goto LABEL_2243;
                case 10:
                  goto LABEL_2242;
                case 11:
                  goto LABEL_2241;
                case 12:
                  goto LABEL_2240;
                case 13:
                  goto LABEL_273;
                case 14:
                  goto LABEL_2239;
                case 15:
                  goto LABEL_2253;
                case 16:
                  goto LABEL_2252;
                case 17:
                  goto LABEL_2251;
                case 18:
                  goto LABEL_2250;
                case 19:
                  goto LABEL_2249;
                case 20:
                  goto LABEL_2248;
                case 21:
                  goto LABEL_2247;
                case 22:
                  goto LABEL_2246;
                case 23:
                  goto LABEL_469;
                case 24:
                  goto LABEL_468;
                case 25:
                  goto LABEL_467;
                case 26:
                  goto LABEL_466;
                case 27:
                  goto LABEL_465;
                case 28:
                  goto LABEL_464;
                case 29:
                  goto LABEL_463;
                case 30:
                  goto LABEL_462;
                case 31:
                  sub_25AA0(a1, "ip");
                  break;
                case 32:
                  goto LABEL_1061;
                case 33:
                  sub_25AA0(a1, "eip");
                  break;
                case 34:
                  goto LABEL_1059;
                case 40:
                  sub_25AA0(a1, "temp");
                  break;
                case 41:
                  sub_25AA0(a1, "temph");
                  break;
                case 42:
                  sub_25AA0(a1, "quote");
                  break;
                case 43:
                  sub_25AA0(a1, "pcdr3");
                  break;
                case 44:
                  sub_25AA0(a1, "pcdr4");
                  break;
                case 45:
                  sub_25AA0(a1, "pcdr5");
                  break;
                case 46:
                  sub_25AA0(a1, "pcdr6");
                  break;
                case 47:
                  sub_25AA0(a1, "pcdr7");
                  break;
                case 80:
                  goto LABEL_401;
                case 81:
                  goto LABEL_400;
                case 82:
                  goto LABEL_399;
                case 83:
                  goto LABEL_398;
                case 84:
                  goto LABEL_397;
                case 90:
                  goto LABEL_668;
                case 91:
                  goto LABEL_667;
                case 92:
                  goto LABEL_666;
                case 93:
                  goto LABEL_665;
                case 94:
                  goto LABEL_664;
                case 95:
                  goto LABEL_663;
                case 96:
                  goto LABEL_662;
                case 97:
                  goto LABEL_661;
                case 110:
                  goto LABEL_652;
                case 111:
                  goto LABEL_651;
                case 112:
                  goto LABEL_650;
                case 113:
                  goto LABEL_649;
                case 114:
                  goto LABEL_648;
                case 115:
                  goto LABEL_647;
                case 116:
                  sub_25AA0(a1, "pseudo1");
                  break;
                case 117:
                  sub_25AA0(a1, "pseudo2");
                  break;
                case 118:
                  sub_25AA0(a1, "pseudo3");
                  break;
                case 119:
                  sub_25AA0(a1, "pseudo4");
                  break;
                case 120:
                  sub_25AA0(a1, "pseudo5");
                  break;
                case 121:
                  sub_25AA0(a1, "pseudo6");
                  break;
                case 122:
                  sub_25AA0(a1, "pseudo7");
                  break;
                case 123:
                  sub_25AA0(a1, "pseudo8");
                  break;
                case 124:
                  sub_25AA0(a1, "pseudo9");
                  break;
                case 128:
                  goto LABEL_646;
                case 129:
                  goto LABEL_645;
                case 130:
                  goto LABEL_644;
                case 131:
                  goto LABEL_643;
                case 132:
                  goto LABEL_642;
                case 133:
                  goto LABEL_641;
                case 134:
                  goto LABEL_640;
                case 135:
                  goto LABEL_639;
                case 136:
                  goto LABEL_638;
                case 137:
                  goto LABEL_637;
                case 138:
                  goto LABEL_636;
                case 139:
                  goto LABEL_635;
                case 140:
                  goto LABEL_634;
                case 141:
                  goto LABEL_633;
                case 142:
                  goto LABEL_632;
                case 143:
                  goto LABEL_631;
                case 144:
                  goto LABEL_630;
                case 145:
                  goto LABEL_629;
                case 146:
                  goto LABEL_628;
                case 147:
                  goto LABEL_627;
                case 148:
                  goto LABEL_626;
                case 149:
                  goto LABEL_625;
                case 150:
                  goto LABEL_624;
                case 151:
                  goto LABEL_623;
                case 152:
                  goto LABEL_622;
                case 153:
                  goto LABEL_621;
                case 154:
                  goto LABEL_620;
                case 155:
                  goto LABEL_619;
                case 156:
                  goto LABEL_618;
                case 157:
                  goto LABEL_617;
                case 158:
                  goto LABEL_616;
                case 159:
                  goto LABEL_615;
                case 160:
                  goto LABEL_614;
                case 161:
                  goto LABEL_613;
                case 162:
                  sub_25AA0(a1, "xmm00");
                  break;
                case 163:
                  sub_25AA0(a1, "xmm01");
                  break;
                case 164:
                  sub_25AA0(a1, "xmm02");
                  break;
                case 165:
                  sub_25AA0(a1, "xmm03");
                  break;
                case 166:
                  goto LABEL_977;
                case 167:
                  goto LABEL_976;
                case 168:
                  goto LABEL_975;
                case 169:
                  goto LABEL_974;
                case 170:
                  goto LABEL_1429;
                case 171:
                  goto LABEL_1428;
                case 172:
                  goto LABEL_1427;
                case 173:
                  goto LABEL_1426;
                case 174:
                  goto LABEL_1419;
                case 175:
                  goto LABEL_1418;
                case 176:
                  sub_25AA0(a1, "xmm32");
                  break;
                case 177:
                  sub_25AA0(a1, "xmm33");
                  break;
                case 178:
                  sub_25AA0(a1, "xmm40");
                  break;
                case 179:
                  sub_25AA0(a1, "xmm41");
                  break;
                case 180:
                  sub_25AA0(a1, "xmm42");
                  break;
                case 181:
                  sub_25AA0(a1, "xmm43");
                  break;
                case 182:
                  sub_25AA0(a1, "xmm50");
                  break;
                case 183:
                  sub_25AA0(a1, "xmm51");
                  break;
                case 184:
                  sub_25AA0(a1, "xmm52");
                  break;
                case 185:
                  sub_25AA0(a1, "xmm53");
                  break;
                case 186:
                  sub_25AA0(a1, "xmm60");
                  break;
                case 187:
                  sub_25AA0(a1, "xmm61");
                  break;
                case 188:
                  sub_25AA0(a1, "xmm62");
                  break;
                case 189:
                  sub_25AA0(a1, "xmm63");
                  break;
                case 190:
                  sub_25AA0(a1, "xmm70");
                  break;
                case 191:
                  sub_25AA0(a1, "xmm71");
                  break;
                case 192:
                  sub_25AA0(a1, "xmm72");
                  break;
                case 193:
                  sub_25AA0(a1, "xmm73");
                  break;
                case 194:
                  goto LABEL_1028;
                case 195:
                  goto LABEL_1027;
                case 196:
                  goto LABEL_1026;
                case 197:
                  goto LABEL_1025;
                case 198:
                  goto LABEL_1024;
                case 199:
                  goto LABEL_1023;
                case 200:
                  goto LABEL_1022;
                case 201:
                  goto LABEL_1021;
                case 202:
                  goto LABEL_1020;
                case 203:
                  goto LABEL_1019;
                case 204:
                  goto LABEL_1018;
                case 205:
                  goto LABEL_1017;
                case 206:
                  goto LABEL_1016;
                case 207:
                  goto LABEL_1015;
                case 208:
                  goto LABEL_1014;
                case 209:
                  goto LABEL_1013;
                case 211:
                  goto LABEL_1012;
                case 212:
                  sub_25AA0(a1, "edxeax");
                  break;
                case 220:
                  goto LABEL_1011;
                case 221:
                  goto LABEL_1010;
                case 222:
                  goto LABEL_1009;
                case 223:
                  goto LABEL_1008;
                case 224:
                  goto LABEL_1007;
                case 225:
                  goto LABEL_1006;
                case 226:
                  goto LABEL_1005;
                case 227:
                  goto LABEL_1004;
                case 228:
                  goto LABEL_1003;
                case 229:
                  goto LABEL_1002;
                case 230:
                  goto LABEL_1001;
                case 231:
                  goto LABEL_1000;
                case 232:
                  goto LABEL_999;
                case 233:
                  goto LABEL_998;
                case 234:
                  goto LABEL_997;
                case 235:
                  goto LABEL_996;
                case 236:
                  goto LABEL_995;
                case 237:
                  goto LABEL_994;
                case 238:
                  goto LABEL_993;
                case 239:
                  goto LABEL_992;
                case 240:
                  goto LABEL_991;
                case 241:
                  goto LABEL_990;
                case 242:
                  goto LABEL_989;
                case 243:
                  goto LABEL_988;
                case 244:
                  goto LABEL_987;
                case 245:
                  goto LABEL_986;
                case 246:
                  goto LABEL_985;
                case 247:
                  goto LABEL_984;
                case 248:
                  goto LABEL_983;
                case 249:
                  goto LABEL_982;
                case 250:
                  goto LABEL_981;
                case 251:
                  goto LABEL_980;
                case 252:
                  goto LABEL_2543;
                case 253:
                  goto LABEL_2542;
                case 254:
                  goto LABEL_861;
                case 255:
                  goto LABEL_860;
                case 256:
                  goto LABEL_859;
                case 257:
                  goto LABEL_858;
                case 258:
                  goto LABEL_857;
                case 259:
                  goto LABEL_856;
                case 260:
                  goto LABEL_847;
                case 261:
                  goto LABEL_846;
                case 262:
                  goto LABEL_845;
                case 263:
                  goto LABEL_844;
                case 264:
                  goto LABEL_843;
                case 265:
                  goto LABEL_842;
                case 266:
                  goto LABEL_841;
                case 267:
                  goto LABEL_840;
                case 268:
                  goto LABEL_799;
                case 269:
                  goto LABEL_798;
                case 270:
                  goto LABEL_1821;
                case 271:
                  goto LABEL_1820;
                case 272:
                  goto LABEL_1819;
                case 273:
                  goto LABEL_1818;
                case 274:
                  goto LABEL_1817;
                case 275:
                  goto LABEL_1816;
                case 276:
                  goto LABEL_1815;
                case 277:
                  goto LABEL_1814;
                case 278:
                  goto LABEL_1813;
                case 279:
                  goto LABEL_1812;
                case 280:
                  goto LABEL_1811;
                case 281:
                  goto LABEL_1810;
                case 282:
                  goto LABEL_1809;
                case 283:
                  goto LABEL_1808;
                case 284:
                  goto LABEL_1807;
                case 285:
                  goto LABEL_1806;
                case 286:
                  goto LABEL_1805;
                case 287:
                  goto LABEL_1804;
                case 288:
                  goto LABEL_1803;
                case 289:
                  goto LABEL_1802;
                case 290:
                  goto LABEL_1801;
                case 291:
                  goto LABEL_1800;
                case 292:
                  goto LABEL_1799;
                case 293:
                  goto LABEL_1798;
                case 294:
                  goto LABEL_1797;
                case 295:
                  goto LABEL_1796;
                case 296:
                  goto LABEL_1795;
                case 297:
                  goto LABEL_1794;
                case 298:
                  goto LABEL_1793;
                case 299:
                  goto LABEL_1792;
                case 300:
                  goto LABEL_1759;
                case 301:
                  goto LABEL_1758;
                case 302:
                  goto LABEL_1757;
                case 303:
                  goto LABEL_1756;
                case 304:
                  goto LABEL_1755;
                case 305:
                  goto LABEL_1754;
                case 306:
                  goto LABEL_1753;
                case 307:
                  goto LABEL_1752;
                case 308:
                  goto LABEL_1751;
                case 309:
                  goto LABEL_1750;
                case 310:
                  goto LABEL_1749;
                case 311:
                  goto LABEL_1748;
                case 312:
                  goto LABEL_1747;
                case 313:
                  goto LABEL_1746;
                case 314:
                  goto LABEL_1745;
                case 315:
                  goto LABEL_1744;
                case 316:
                  goto LABEL_1743;
                case 317:
                  goto LABEL_1742;
                case 318:
                  goto LABEL_1741;
                case 319:
                  goto LABEL_1740;
                case 320:
                  goto LABEL_1739;
                case 321:
                  goto LABEL_1738;
                case 322:
                  goto LABEL_1737;
                case 323:
                  goto LABEL_1736;
                case 324:
                  goto LABEL_1735;
                case 325:
                  goto LABEL_1734;
                case 326:
                  goto LABEL_1733;
                case 327:
                  goto LABEL_1732;
                case 328:
                  goto LABEL_1731;
                case 329:
                  goto LABEL_1730;
                case 330:
                  goto LABEL_1729;
                case 331:
                  goto LABEL_1728;
                case 332:
                  goto LABEL_1727;
                case 333:
                  goto LABEL_1726;
                case 334:
                  goto LABEL_1725;
                case 335:
                  goto LABEL_1724;
                case 336:
                  goto LABEL_1723;
                case 337:
                  goto LABEL_1722;
                case 338:
                  goto LABEL_1721;
                case 339:
                  goto LABEL_1720;
                case 340:
                  goto LABEL_1719;
                case 341:
                  goto LABEL_1718;
                case 342:
                  goto LABEL_1717;
                case 343:
                  goto LABEL_1716;
                case 344:
                  goto LABEL_1715;
                case 345:
                  goto LABEL_1714;
                case 346:
                  goto LABEL_1713;
                case 347:
                  goto LABEL_1712;
                case 348:
                  goto LABEL_1711;
                case 349:
                  goto LABEL_1710;
                case 350:
                  goto LABEL_1709;
                case 351:
                  goto LABEL_1708;
                case 352:
                  goto LABEL_1707;
                case 353:
                  goto LABEL_1706;
                case 354:
                  goto LABEL_1705;
                case 355:
                  goto LABEL_1704;
                case 356:
                  goto LABEL_1703;
                case 357:
                  goto LABEL_1702;
                case 358:
                  goto LABEL_1701;
                case 359:
                  goto LABEL_1700;
                case 360:
                  goto LABEL_1699;
                case 361:
                  goto LABEL_1698;
                case 362:
                  goto LABEL_1697;
                case 363:
                  goto LABEL_1696;
                case 364:
                  sub_25AA0(a1, "YMM0D0");
                  break;
                case 365:
                  sub_25AA0(a1, "YMM0D1");
                  break;
                case 366:
                  sub_25AA0(a1, "YMM0D2");
                  break;
                case 367:
                  sub_25AA0(a1, "YMM0D3");
                  break;
                case 368:
                  sub_25AA0(a1, "YMM1D0");
                  break;
                case 369:
                  sub_25AA0(a1, "YMM1D1");
                  break;
                case 370:
                  sub_25AA0(a1, "YMM1D2");
                  break;
                case 371:
                  sub_25AA0(a1, "YMM1D3");
                  break;
                case 372:
                  sub_25AA0(a1, "YMM2D0");
                  break;
                case 373:
                  sub_25AA0(a1, "YMM2D1");
                  break;
                case 374:
                  sub_25AA0(a1, "YMM2D2");
                  break;
                case 375:
                  sub_25AA0(a1, "YMM2D3");
                  break;
                case 376:
                  sub_25AA0(a1, "YMM3D0");
                  break;
                case 377:
                  sub_25AA0(a1, "YMM3D1");
                  break;
                case 378:
                  sub_25AA0(a1, "YMM3D2");
                  break;
                case 379:
                  sub_25AA0(a1, "YMM3D3");
                  break;
                case 380:
                  sub_25AA0(a1, "YMM4D0");
                  break;
                case 381:
                  sub_25AA0(a1, "YMM4D1");
                  break;
                case 382:
                  sub_25AA0(a1, "YMM4D2");
                  break;
                case 383:
                  sub_25AA0(a1, "YMM4D3");
                  break;
                case 384:
                  sub_25AA0(a1, "YMM5D0");
                  break;
                case 385:
                  sub_25AA0(a1, "YMM5D1");
                  break;
                case 386:
                  sub_25AA0(a1, "YMM5D2");
                  break;
                case 387:
                  sub_25AA0(a1, "YMM5D3");
                  break;
                case 388:
                  sub_25AA0(a1, "YMM6D0");
                  break;
                case 389:
                  sub_25AA0(a1, "YMM6D1");
                  break;
                case 390:
                  sub_25AA0(a1, "YMM6D2");
                  break;
                case 391:
                  sub_25AA0(a1, "YMM6D3");
                  break;
                case 392:
                  sub_25AA0(a1, "YMM7D0");
                  break;
                case 393:
                  sub_25AA0(a1, "YMM7D1");
                  break;
                case 394:
                  sub_25AA0(a1, "YMM7D2");
                  break;
                case 395:
                  sub_25AA0(a1, "YMM7D3");
                  break;
                case 396:
                  goto LABEL_1439;
                case 397:
                  goto LABEL_1438;
                case 398:
                  goto LABEL_1437;
                case 399:
                  goto LABEL_1436;
                case 400:
                  goto LABEL_1435;
                case 401:
                  goto LABEL_1434;
                case 402:
                  goto LABEL_1401;
                case 403:
                  goto LABEL_1400;
                case 404:
                  goto LABEL_1399;
                case 405:
                  goto LABEL_1398;
                case 406:
                  goto LABEL_1397;
                case 407:
                  goto LABEL_1396;
                case 408:
                  goto LABEL_1395;
                case 409:
                  goto LABEL_1394;
                case 410:
                  goto LABEL_1361;
                case 411:
                  goto LABEL_1360;
                case 412:
                  goto LABEL_1359;
                case 413:
                  goto LABEL_1358;
                case 414:
                  goto LABEL_1357;
                case 415:
                  goto LABEL_1356;
                case 416:
                  goto LABEL_1355;
                case 417:
                  goto LABEL_1354;
                case 418:
                  goto LABEL_1369;
                case 419:
                  goto LABEL_1368;
                case 420:
                  goto LABEL_1367;
                case 421:
                  goto LABEL_1366;
                case 422:
                  goto LABEL_1365;
                case 423:
                  goto LABEL_1364;
                case 424:
                  goto LABEL_1363;
                case 425:
                  goto LABEL_1362;
                case 426:
                  goto LABEL_577;
                default:
                  goto LABEL_51;
              }
              return;
            case 16LL:
            case 17LL:
            case 18LL:
            case 19LL:
            case 20LL:
            case 21LL:
            case 22LL:
            case 23LL:
            case 24LL:
              switch ( a3 )
              {
                case 0:
                  goto LABEL_64;
                case 10:
                  goto LABEL_65;
                case 11:
                  goto LABEL_67;
                case 12:
                  goto LABEL_66;
                case 13:
                  sub_25AA0(a1, "IntV1");
                  break;
                case 14:
                  goto LABEL_70;
                case 15:
                  goto LABEL_69;
                case 16:
                  goto LABEL_68;
                case 17:
                  goto LABEL_79;
                case 18:
                  goto LABEL_78;
                case 19:
                  goto LABEL_77;
                case 20:
                  goto LABEL_76;
                case 21:
                  goto LABEL_75;
                case 22:
                  goto LABEL_74;
                case 23:
                  goto LABEL_73;
                case 24:
                  goto LABEL_72;
                case 25:
                  goto LABEL_103;
                case 26:
                  goto LABEL_102;
                case 27:
                  goto LABEL_101;
                case 28:
                  goto LABEL_100;
                case 29:
                  goto LABEL_99;
                case 30:
                  goto LABEL_98;
                case 31:
                  goto LABEL_97;
                case 32:
                  sub_25AA0(a1, "IntS6");
                  break;
                case 33:
                  sub_25AA0(a1, "IntS7");
                  break;
                case 34:
                  goto LABEL_94;
                case 35:
                  goto LABEL_93;
                case 36:
                  sub_25AA0(a1, "IntKT0");
                  break;
                case 37:
                  sub_25AA0(a1, "IntKT1");
                  break;
                case 38:
                  goto LABEL_90;
                case 39:
                  goto LABEL_89;
                case 40:
                  sub_25AA0(a1, "IntS8");
                  break;
                case 41:
                  goto LABEL_123;
                case 42:
                  sub_25AA0(a1, "IntLO");
                  break;
                case 43:
                  sub_25AA0(a1, "IntHI");
                  break;
                case 50:
                case 51:
                case 60:
                  goto LABEL_63;
                case 61:
                  goto LABEL_121;
                case 62:
                  goto LABEL_120;
                case 63:
                  goto LABEL_119;
                case 64:
                  goto LABEL_118;
                case 65:
                  goto LABEL_87;
                case 66:
                  goto LABEL_86;
                case 67:
                  goto LABEL_85;
                case 68:
                  goto LABEL_84;
                case 69:
                  goto LABEL_83;
                case 70:
                  goto LABEL_82;
                case 71:
                  goto LABEL_81;
                case 72:
                  goto LABEL_80;
                case 73:
                  goto LABEL_140;
                case 74:
                  goto LABEL_139;
                case 75:
                  goto LABEL_138;
                case 76:
                  goto LABEL_137;
                case 77:
                  goto LABEL_136;
                case 78:
                  goto LABEL_135;
                case 79:
                  goto LABEL_134;
                case 80:
                  goto LABEL_133;
                case 81:
                  goto LABEL_132;
                case 82:
                  goto LABEL_131;
                case 83:
                  goto LABEL_130;
                case 84:
                  goto LABEL_129;
                case 85:
                  goto LABEL_128;
                case 86:
                  goto LABEL_127;
                case 87:
                  goto LABEL_126;
                case 88:
                  goto LABEL_125;
                case 89:
                  goto LABEL_117;
                case 90:
                  goto LABEL_116;
                case 91:
                  goto LABEL_115;
                case 92:
                  goto LABEL_114;
                default:
                  goto LABEL_51;
              }
              return;
            case 32LL:
            case 33LL:
            case 34LL:
            case 35LL:
            case 36LL:
              switch ( a3 )
              {
                case 0:
                  sub_25AA0(a1, "D0");
                  break;
                case 1:
                  sub_25AA0(a1, "D1");
                  break;
                case 2:
                  sub_25AA0(a1, "D2");
                  break;
                case 3:
                  sub_25AA0(a1, "D3");
                  break;
                case 4:
                  sub_25AA0(a1, "D4");
                  break;
                case 5:
                  sub_25AA0(a1, "D5");
                  break;
                case 6:
                  sub_25AA0(a1, "D6");
                  break;
                case 7:
                  sub_25AA0(a1, "D7");
                  break;
                case 8:
                  sub_25AA0(a1, "A0");
                  break;
                case 9:
                  sub_25AA0(a1, "A1");
                  break;
                case 10:
                  sub_25AA0(a1, "A2");
                  break;
                case 11:
                  sub_25AA0(a1, "A3");
                  break;
                case 12:
                  sub_25AA0(a1, "A4");
                  break;
                case 13:
                  sub_25AA0(a1, "A5");
                  break;
                case 14:
                  sub_25AA0(a1, "A6");
                  break;
                case 15:
                  sub_25AA0(a1, "A7");
                  break;
                case 16:
                  sub_25AA0(a1, "CCR");
                  break;
                case 17:
                  sub_25AA0(a1, "SR");
                  break;
                case 18:
                  sub_25AA0(a1, "USP");
                  break;
                case 19:
                  sub_25AA0(a1, "MSP");
                  break;
                case 20:
                  sub_25AA0(a1, "SFC");
                  break;
                case 21:
                  sub_25AA0(a1, "DFC");
                  break;
                case 22:
                  sub_25AA0(a1, "CACR");
                  break;
                case 23:
                  sub_25AA0(a1, "VBR");
                  break;
                case 24:
                  sub_25AA0(a1, "CAAR");
                  break;
                case 25:
                  sub_25AA0(a1, "ISP");
                  break;
                case 26:
                  sub_25AA0(a1, "PC");
                  break;
                case 28:
                  sub_25AA0(a1, "FPCR");
                  break;
                case 29:
                  sub_25AA0(a1, "FPSR");
                  break;
                case 30:
                  sub_25AA0(a1, "FPIAR");
                  break;
                case 32:
                  sub_25AA0(a1, "FP0");
                  break;
                case 33:
                  sub_25AA0(a1, "FP1");
                  break;
                case 34:
                  sub_25AA0(a1, "FP2");
                  break;
                case 35:
                  sub_25AA0(a1, "FP3");
                  break;
                case 36:
                  sub_25AA0(a1, "FP4");
                  break;
                case 37:
                  sub_25AA0(a1, "FP5");
                  break;
                case 38:
                  sub_25AA0(a1, "FP6");
                  break;
                case 39:
                  sub_25AA0(a1, "FP7");
                  break;
                case 41:
                  sub_25AA0(a1, "MMUSR030");
                  break;
                case 42:
                  sub_25AA0(a1, "MMUSR");
                  break;
                case 43:
                  sub_25AA0(a1, "URP");
                  break;
                case 44:
                  sub_25AA0(a1, "DTT0");
                  break;
                case 45:
                  sub_25AA0(a1, "DTT1");
                  break;
                case 46:
                  sub_25AA0(a1, "ITT0");
                  break;
                case 47:
                  sub_25AA0(a1, "ITT1");
                  break;
                case 51:
                  sub_25AA0(a1, "PSR");
                  break;
                case 52:
                  sub_25AA0(a1, "PCSR");
                  break;
                case 53:
                  sub_25AA0(a1, "VAL");
                  break;
                case 54:
                  sub_25AA0(a1, "CRP");
                  break;
                case 55:
                  sub_25AA0(a1, "SRP");
                  break;
                case 56:
                  sub_25AA0(a1, "DRP");
                  break;
                case 57:
                  sub_25AA0(a1, "TC");
                  break;
                case 58:
                  sub_25AA0(a1, "AC");
                  break;
                case 59:
                  sub_25AA0(a1, "SCC");
                  break;
                case 60:
                  sub_25AA0(a1, "CAL");
                  break;
                case 61:
                  sub_25AA0(a1, "TT0");
                  break;
                case 62:
                  sub_25AA0(a1, "TT1");
                  break;
                case 64:
                  sub_25AA0(a1, "BAD0");
                  break;
                case 65:
                  sub_25AA0(a1, "BAD1");
                  break;
                case 66:
                  sub_25AA0(a1, "BAD2");
                  break;
                case 67:
                  sub_25AA0(a1, "BAD3");
                  break;
                case 68:
                  sub_25AA0(a1, "BAD4");
                  break;
                case 69:
                  sub_25AA0(a1, "BAD5");
                  break;
                case 70:
                  sub_25AA0(a1, "BAD6");
                  break;
                case 71:
                  sub_25AA0(a1, "BAD7");
                  break;
                case 72:
                  sub_25AA0(a1, "BAC0");
                  break;
                case 73:
                  sub_25AA0(a1, "BAC1");
                  break;
                case 74:
                  sub_25AA0(a1, "BAC2");
                  break;
                case 75:
                  sub_25AA0(a1, "BAC3");
                  break;
                case 76:
                  sub_25AA0(a1, "BAC4");
                  break;
                case 77:
                  sub_25AA0(a1, "BAC5");
                  break;
                case 78:
                  sub_25AA0(a1, "BAC6");
                  break;
                case 79:
                  sub_25AA0(a1, "BAC7");
                  break;
                default:
                  goto LABEL_51;
              }
              return;
            case 48LL:
            case 49LL:
            case 50LL:
            case 51LL:
            case 52LL:
              switch ( a3 )
              {
                case 0:
                  goto LABEL_64;
                case 10:
                  goto LABEL_63;
                case 11:
                  goto LABEL_121;
                case 12:
                  goto LABEL_120;
                case 13:
                  goto LABEL_119;
                case 14:
                  goto LABEL_118;
                case 15:
                  goto LABEL_87;
                case 16:
                  goto LABEL_86;
                case 17:
                  goto LABEL_85;
                case 18:
                  goto LABEL_84;
                case 19:
                  goto LABEL_83;
                case 20:
                  goto LABEL_82;
                case 21:
                  goto LABEL_81;
                case 22:
                  goto LABEL_80;
                case 23:
                  goto LABEL_140;
                case 24:
                  goto LABEL_139;
                case 25:
                  goto LABEL_138;
                case 26:
                  goto LABEL_137;
                case 27:
                  goto LABEL_136;
                case 28:
                  goto LABEL_135;
                case 29:
                  goto LABEL_134;
                case 30:
                  goto LABEL_133;
                case 31:
                  goto LABEL_132;
                case 32:
                  goto LABEL_131;
                case 33:
                  goto LABEL_130;
                case 34:
                  goto LABEL_129;
                case 35:
                  goto LABEL_128;
                case 36:
                  goto LABEL_127;
                case 37:
                  goto LABEL_126;
                case 38:
                  goto LABEL_125;
                case 39:
                  goto LABEL_117;
                case 40:
                  goto LABEL_116;
                case 41:
                  goto LABEL_115;
                case 42:
LABEL_66:
                  sub_25AA0(a1, "IntV0");
                  break;
                case 43:
LABEL_78:
                  sub_25AA0(a1, "IntT0");
                  break;
                case 44:
LABEL_77:
                  sub_25AA0(a1, "IntT1");
                  break;
                case 45:
LABEL_76:
                  sub_25AA0(a1, "IntT2");
                  break;
                case 46:
LABEL_75:
                  sub_25AA0(a1, "IntT3");
                  break;
                case 47:
LABEL_74:
                  sub_25AA0(a1, "IntT4");
                  break;
                case 48:
LABEL_73:
                  sub_25AA0(a1, "IntT5");
                  break;
                case 49:
LABEL_72:
                  sub_25AA0(a1, "IntT6");
                  break;
                case 50:
LABEL_103:
                  sub_25AA0(a1, "IntT7");
                  break;
                case 51:
LABEL_102:
                  sub_25AA0(a1, "IntS0");
                  break;
                case 52:
LABEL_101:
                  sub_25AA0(a1, "IntS1");
                  break;
                case 53:
LABEL_100:
                  sub_25AA0(a1, "IntS2");
                  break;
                case 54:
LABEL_99:
                  sub_25AA0(a1, "IntS3");
                  break;
                case 55:
LABEL_98:
                  sub_25AA0(a1, "IntS4");
                  break;
                case 56:
LABEL_97:
                  sub_25AA0(a1, "IntS5");
                  break;
                case 57:
                  sub_25AA0(a1, "IntFP");
                  break;
                case 58:
LABEL_70:
                  sub_25AA0(a1, "IntA0");
                  break;
                case 59:
LABEL_69:
                  sub_25AA0(a1, "IntA1");
                  break;
                case 60:
LABEL_68:
                  sub_25AA0(a1, "IntA2");
                  break;
                case 61:
LABEL_79:
                  sub_25AA0(a1, "IntA3");
                  break;
                case 62:
                  sub_25AA0(a1, "IntA4");
                  break;
                case 63:
                  sub_25AA0(a1, "IntA5");
                  break;
                case 64:
LABEL_94:
                  sub_25AA0(a1, "IntT8");
                  break;
                case 65:
LABEL_93:
                  sub_25AA0(a1, "IntT9");
                  break;
                case 66:
                  sub_25AA0(a1, "IntT10");
                  break;
                case 67:
                  sub_25AA0(a1, "IntT11");
                  break;
                case 68:
LABEL_123:
                  sub_25AA0(a1, "IntRA");
                  break;
                case 69:
                  sub_25AA0(a1, "IntT12");
                  break;
                case 70:
LABEL_67:
                  sub_25AA0(a1, "IntAT");
                  break;
                case 71:
LABEL_90:
                  sub_25AA0(a1, "IntGP");
                  break;
                case 72:
LABEL_89:
                  sub_25AA0(a1, "IntSP");
                  break;
                case 73:
LABEL_65:
                  sub_25AA0(a1, "IntZERO");
                  break;
                case 74:
                  sub_25AA0(a1, "Fpcr");
                  break;
                case 75:
                  sub_25AA0(a1, "Fir");
                  break;
                case 76:
                  goto LABEL_105;
                case 77:
LABEL_114:
                  sub_25AA0(a1, "FltFsr");
                  break;
                case 78:
                  sub_25AA0(a1, "SoftFpcr");
                  break;
                default:
                  goto LABEL_51;
              }
              return;
            case 64LL:
            case 65LL:
            case 66LL:
            case 67LL:
            case 68LL:
            case 69LL:
              switch ( a3 )
              {
                case 1:
                  sub_25AA0(a1, "gpr0");
                  break;
                case 2:
                  sub_25AA0(a1, "gpr1");
                  break;
                case 3:
                  sub_25AA0(a1, "gpr2");
                  break;
                case 4:
                  sub_25AA0(a1, "gpr3");
                  break;
                case 5:
                  sub_25AA0(a1, "gpr4");
                  break;
                case 6:
                  sub_25AA0(a1, "gpr5");
                  break;
                case 7:
                  sub_25AA0(a1, "gpr6");
                  break;
                case 8:
                  sub_25AA0(a1, "gpr7");
                  break;
                case 9:
                  sub_25AA0(a1, "gpr8");
                  break;
                case 10:
                  sub_25AA0(a1, "gpr9");
                  break;
                case 11:
                  sub_25AA0(a1, "gpr10");
                  break;
                case 12:
                  sub_25AA0(a1, "gpr11");
                  break;
                case 13:
                  sub_25AA0(a1, "gpr12");
                  break;
                case 14:
                  sub_25AA0(a1, "gpr13");
                  break;
                case 15:
                  sub_25AA0(a1, "gpr14");
                  break;
                case 16:
                  sub_25AA0(a1, "gpr15");
                  break;
                case 17:
                  sub_25AA0(a1, "gpr16");
                  break;
                case 18:
                  sub_25AA0(a1, "gpr17");
                  break;
                case 19:
                  sub_25AA0(a1, "gpr18");
                  break;
                case 20:
                  sub_25AA0(a1, "gpr19");
                  break;
                case 21:
                  sub_25AA0(a1, "gpr20");
                  break;
                case 22:
                  sub_25AA0(a1, "gpr21");
                  break;
                case 23:
                  sub_25AA0(a1, "gpr22");
                  break;
                case 24:
                  sub_25AA0(a1, "gpr23");
                  break;
                case 25:
                  sub_25AA0(a1, "gpr24");
                  break;
                case 26:
                  sub_25AA0(a1, "gpr25");
                  break;
                case 27:
                  sub_25AA0(a1, "gpr26");
                  break;
                case 28:
                  sub_25AA0(a1, "gpr27");
                  break;
                case 29:
                  sub_25AA0(a1, "gpr28");
                  break;
                case 30:
                  sub_25AA0(a1, "gpr29");
                  break;
                case 31:
                  sub_25AA0(a1, "gpr30");
                  break;
                case 32:
                  sub_25AA0(a1, "gpr31");
                  break;
                case 33:
                  sub_25AA0(a1, "cr");
                  break;
                case 34:
                  goto LABEL_401;
                case 35:
                  goto LABEL_400;
                case 36:
                  goto LABEL_399;
                case 37:
                  goto LABEL_398;
                case 38:
                  goto LABEL_397;
                case 39:
                  goto LABEL_404;
                case 40:
                  goto LABEL_403;
                case 41:
                  goto LABEL_402;
                case 42:
                  sub_25AA0(a1, "fpr0");
                  break;
                case 43:
                  sub_25AA0(a1, "fpr1");
                  break;
                case 44:
                  sub_25AA0(a1, "fpr2");
                  break;
                case 45:
                  sub_25AA0(a1, "fpr3");
                  break;
                case 46:
                  sub_25AA0(a1, "fpr4");
                  break;
                case 47:
                  sub_25AA0(a1, "fpr5");
                  break;
                case 48:
                  sub_25AA0(a1, "fpr6");
                  break;
                case 49:
                  sub_25AA0(a1, "fpr7");
                  break;
                case 50:
                  sub_25AA0(a1, "fpr8");
                  break;
                case 51:
                  sub_25AA0(a1, "fpr9");
                  break;
                case 52:
                  sub_25AA0(a1, "fpr10");
                  break;
                case 53:
                  sub_25AA0(a1, "fpr11");
                  break;
                case 54:
                  sub_25AA0(a1, "fpr12");
                  break;
                case 55:
                  sub_25AA0(a1, "fpr13");
                  break;
                case 56:
                  sub_25AA0(a1, "fpr14");
                  break;
                case 57:
                  sub_25AA0(a1, "fpr15");
                  break;
                case 58:
                  sub_25AA0(a1, "fpr16");
                  break;
                case 59:
                  sub_25AA0(a1, "fpr17");
                  break;
                case 60:
                  sub_25AA0(a1, "fpr18");
                  break;
                case 61:
                  sub_25AA0(a1, "fpr19");
                  break;
                case 62:
                  sub_25AA0(a1, "fpr20");
                  break;
                case 63:
                  sub_25AA0(a1, "fpr21");
                  break;
                case 64:
                  sub_25AA0(a1, "fpr22");
                  break;
                case 65:
                  sub_25AA0(a1, "fpr23");
                  break;
                case 66:
                  sub_25AA0(a1, "fpr24");
                  break;
                case 67:
                  sub_25AA0(a1, "fpr25");
                  break;
                case 68:
                  sub_25AA0(a1, "fpr26");
                  break;
                case 69:
                  sub_25AA0(a1, "fpr27");
                  break;
                case 70:
                  sub_25AA0(a1, "fpr28");
                  break;
                case 71:
                  sub_25AA0(a1, "fpr29");
                  break;
                case 72:
                  sub_25AA0(a1, "fpr30");
                  break;
                case 73:
                  sub_25AA0(a1, "fpr31");
                  break;
                case 74:
                  sub_25AA0(a1, "FPSCR");
                  break;
                case 75:
                  sub_25AA0(a1, "msr");
                  break;
                case 76:
                  sub_25AA0(a1, "sr0");
                  break;
                case 77:
                  sub_25AA0(a1, "sr1");
                  break;
                case 78:
                  sub_25AA0(a1, "sr2");
                  break;
                case 79:
                  sub_25AA0(a1, "sr3");
                  break;
                case 80:
                  sub_25AA0(a1, "sr4");
                  break;
                case 81:
                  sub_25AA0(a1, "sr5");
                  break;
                case 82:
                  sub_25AA0(a1, "sr6");
                  break;
                case 83:
                  sub_25AA0(a1, "sr7");
                  break;
                case 84:
                  sub_25AA0(a1, "sr8");
                  break;
                case 85:
                  sub_25AA0(a1, "sr9");
                  break;
                case 86:
                  sub_25AA0(a1, "sr10");
                  break;
                case 87:
                  sub_25AA0(a1, "sr11");
                  break;
                case 88:
                  sub_25AA0(a1, "sr12");
                  break;
                case 89:
                  sub_25AA0(a1, "sr13");
                  break;
                case 90:
                  sub_25AA0(a1, "sr14");
                  break;
                case 91:
                  sub_25AA0(a1, "sr15");
                  break;
                case 99:
                  goto LABEL_217;
                case 100:
                  sub_25AA0(a1, "mq");
                  break;
                case 101:
                  sub_25AA0(a1, "xer");
                  break;
                case 104:
                  sub_25AA0(a1, "rtcu");
                  break;
                case 105:
                  sub_25AA0(a1, "rtcl");
                  break;
                case 108:
                  goto LABEL_396;
                case 109:
                  sub_25AA0(a1, "ctr");
                  break;
                case 110:
                  sub_25AA0(a1, "compare");
                  break;
                case 111:
                  sub_25AA0(a1, "count");
                  break;
                case 118:
                  sub_25AA0(a1, "dsisr");
                  break;
                case 119:
                  sub_25AA0(a1, "dar");
                  break;
                case 122:
                  sub_25AA0(a1, "dec");
                  break;
                case 125:
                  sub_25AA0(a1, "sdr1");
                  break;
                case 126:
                  sub_25AA0(a1, "srr0");
                  break;
                case 127:
                  sub_25AA0(a1, "srr1");
                  break;
                case 280:
                  sub_25AA0(a1, "asr");
                  break;
                case 287:
                  sub_25AA0(a1, "pvr");
                  break;
                case 372:
                  sub_25AA0(a1, "sprg0");
                  break;
                case 373:
                  sub_25AA0(a1, "sprg1");
                  break;
                case 374:
                  sub_25AA0(a1, "sprg2");
                  break;
                case 375:
                  sub_25AA0(a1, "sprg3");
                  break;
                case 382:
                  sub_25AA0(a1, "ear");
                  break;
                case 628:
                  sub_25AA0(a1, "bat0u");
                  break;
                case 629:
                  sub_25AA0(a1, "bat0l");
                  break;
                case 630:
                  sub_25AA0(a1, "bat1u");
                  break;
                case 631:
                  sub_25AA0(a1, "bat1l");
                  break;
                case 632:
                  sub_25AA0(a1, "bat2u");
                  break;
                case 633:
                  sub_25AA0(a1, "bat2l");
                  break;
                case 634:
                  sub_25AA0(a1, "bat3u");
                  break;
                case 635:
                  sub_25AA0(a1, "bat3l");
                  break;
                case 636:
                  sub_25AA0(a1, "dbat0u");
                  break;
                case 637:
                  sub_25AA0(a1, "dbat0l");
                  break;
                case 638:
                  sub_25AA0(a1, "dbat1u");
                  break;
                case 639:
                  sub_25AA0(a1, "dbat1l");
                  break;
                case 640:
                  sub_25AA0(a1, "dbat2u");
                  break;
                case 641:
                  sub_25AA0(a1, "dbat2l");
                  break;
                case 642:
                  sub_25AA0(a1, "dbat3u");
                  break;
                case 643:
                  sub_25AA0(a1, "dbat3l");
                  break;
                case 1044:
                  sub_25AA0(a1, "pmr0");
                  break;
                case 1045:
                  sub_25AA0(a1, "pmr1");
                  break;
                case 1046:
                  sub_25AA0(a1, "pmr2");
                  break;
                case 1047:
                  sub_25AA0(a1, "pmr3");
                  break;
                case 1048:
                  sub_25AA0(a1, "pmr4");
                  break;
                case 1049:
                  sub_25AA0(a1, "pmr5");
                  break;
                case 1050:
                  sub_25AA0(a1, "pmr6");
                  break;
                case 1051:
                  sub_25AA0(a1, "pmr7");
                  break;
                case 1052:
                  sub_25AA0(a1, "pmr8");
                  break;
                case 1053:
                  sub_25AA0(a1, "pmr9");
                  break;
                case 1054:
                  sub_25AA0(a1, "pmr10");
                  break;
                case 1055:
                  sub_25AA0(a1, "pmr11");
                  break;
                case 1056:
                  sub_25AA0(a1, "pmr12");
                  break;
                case 1057:
                  sub_25AA0(a1, "pmr13");
                  break;
                case 1058:
                  sub_25AA0(a1, "pmr14");
                  break;
                case 1059:
                  sub_25AA0(a1, "pmr15");
                  break;
                case 1076:
                  sub_25AA0(a1, "dmiss");
                  break;
                case 1077:
                  sub_25AA0(a1, "dcmp");
                  break;
                case 1078:
                  sub_25AA0(a1, "hash1");
                  break;
                case 1079:
                  sub_25AA0(a1, "hash2");
                  break;
                case 1080:
                  sub_25AA0(a1, "imiss");
                  break;
                case 1081:
                  sub_25AA0(a1, "icmp");
                  break;
                case 1082:
                  sub_25AA0(a1, "rpa");
                  break;
                case 1108:
                  sub_25AA0(a1, "hid0");
                  break;
                case 1109:
                  sub_25AA0(a1, "hid1");
                  break;
                case 1110:
                  sub_25AA0(a1, "hid2");
                  break;
                case 1111:
                  sub_25AA0(a1, "hid3");
                  break;
                case 1112:
                  sub_25AA0(a1, "hid4");
                  break;
                case 1113:
                  sub_25AA0(a1, "hid5");
                  break;
                case 1114:
                  sub_25AA0(a1, "hid6");
                  break;
                case 1115:
                  sub_25AA0(a1, "hid7");
                  break;
                case 1116:
                  sub_25AA0(a1, "hid8");
                  break;
                case 1117:
                  sub_25AA0(a1, "hid9");
                  break;
                case 1118:
                  sub_25AA0(a1, "hid10");
                  break;
                case 1119:
                  sub_25AA0(a1, "hid11");
                  break;
                case 1120:
                  sub_25AA0(a1, "hid12");
                  break;
                case 1121:
                  sub_25AA0(a1, "hid13");
                  break;
                case 1122:
                  sub_25AA0(a1, "hid14");
                  break;
                case 1123:
                  sub_25AA0(a1, "hid15");
                  break;
                default:
                  goto LABEL_51;
              }
              return;
            case 80LL:
            case 81LL:
            case 82LL:
            case 83LL:
              switch ( a3 )
              {
                case 0:
LABEL_64:
                  sub_25AA0(a1, "NOREG");
                  break;
                case 10:
                  goto LABEL_383;
                case 11:
                  goto LABEL_382;
                case 12:
                  goto LABEL_381;
                case 13:
                  goto LABEL_380;
                case 14:
                  goto LABEL_379;
                case 15:
                  goto LABEL_378;
                case 16:
                  goto LABEL_377;
                case 17:
                  goto LABEL_376;
                case 18:
                  goto LABEL_389;
                case 19:
                  goto LABEL_388;
                case 20:
                  goto LABEL_387;
                case 21:
                  goto LABEL_386;
                case 22:
                  goto LABEL_375;
                case 23:
                  goto LABEL_374;
                case 24:
                  sub_25AA0(a1, "IntFp");
                  break;
                case 25:
                  sub_25AA0(a1, "IntSp");
                  break;
                case 38:
                  sub_25AA0(a1, "Gbr");
                  break;
                case 39:
                  sub_25AA0(a1, "Pr");
                  break;
                case 40:
                  sub_25AA0(a1, "Mach");
                  break;
                case 41:
                  sub_25AA0(a1, "Macl");
                  break;
                case 50:
                  sub_25AA0(a1, "Pc");
                  break;
                case 51:
                  sub_25AA0(a1, "Sr");
                  break;
                case 60:
                  sub_25AA0(a1, "BarA");
                  break;
                case 61:
                  sub_25AA0(a1, "BasrA");
                  break;
                case 62:
                  sub_25AA0(a1, "BamrA");
                  break;
                case 63:
                  sub_25AA0(a1, "BbrA");
                  break;
                case 64:
                  sub_25AA0(a1, "BarB");
                  break;
                case 65:
                  sub_25AA0(a1, "BasrB");
                  break;
                case 66:
                  sub_25AA0(a1, "BamrB");
                  break;
                case 67:
                  sub_25AA0(a1, "BbrB");
                  break;
                case 68:
                  sub_25AA0(a1, "BdrB");
                  break;
                case 69:
                  sub_25AA0(a1, "BdmrB");
                  break;
                case 70:
                  sub_25AA0(a1, "Brcr");
                  break;
                case 75:
                  sub_25AA0(a1, "Fpscr");
                  break;
                case 76:
                  sub_25AA0(a1, "Fpul");
                  break;
                case 80:
                  sub_25AA0(a1, "FpR0");
                  break;
                case 81:
                  sub_25AA0(a1, "FpR1");
                  break;
                case 82:
                  sub_25AA0(a1, "FpR2");
                  break;
                case 83:
                  sub_25AA0(a1, "FpR3");
                  break;
                case 84:
                  sub_25AA0(a1, "FpR4");
                  break;
                case 85:
                  sub_25AA0(a1, "FpR5");
                  break;
                case 86:
                  sub_25AA0(a1, "FpR6");
                  break;
                case 87:
                  sub_25AA0(a1, "FpR7");
                  break;
                case 88:
                  sub_25AA0(a1, "FpR8");
                  break;
                case 89:
                  sub_25AA0(a1, "FpR9");
                  break;
                case 90:
                  sub_25AA0(a1, "FpR10");
                  break;
                case 91:
                  sub_25AA0(a1, "FpR11");
                  break;
                case 92:
                  sub_25AA0(a1, "FpR12");
                  break;
                case 93:
                  sub_25AA0(a1, "FpR13");
                  break;
                case 94:
                  sub_25AA0(a1, "FpR14");
                  break;
                case 95:
                  sub_25AA0(a1, "FpR15");
                  break;
                case 96:
                  sub_25AA0(a1, "XFpR0");
                  break;
                case 97:
                  sub_25AA0(a1, "XFpR1");
                  break;
                case 98:
                  sub_25AA0(a1, "XFpR2");
                  break;
                case 99:
                  sub_25AA0(a1, "XFpR3");
                  break;
                case 100:
                  sub_25AA0(a1, "XFpR4");
                  break;
                case 101:
                  sub_25AA0(a1, "XFpR5");
                  break;
                case 102:
                  sub_25AA0(a1, "XFpR6");
                  break;
                case 103:
                  sub_25AA0(a1, "XFpR7");
                  break;
                case 104:
                  sub_25AA0(a1, "XFpR8");
                  break;
                case 105:
                  sub_25AA0(a1, "XFpR9");
                  break;
                case 106:
                  sub_25AA0(a1, "XFpR10");
                  break;
                case 107:
                  sub_25AA0(a1, "XFpR11");
                  break;
                case 108:
                  sub_25AA0(a1, "XFpR12");
                  break;
                case 109:
                  sub_25AA0(a1, "XFpR13");
                  break;
                case 110:
                  sub_25AA0(a1, "XFpR14");
                  break;
                case 111:
                  sub_25AA0(a1, "XFpR15");
                  break;
                default:
                  goto LABEL_51;
              }
              return;
            case 84LL:
              switch ( a3 )
              {
                case 0:
                  goto LABEL_218;
                case 10:
                  goto LABEL_229;
                case 11:
                  goto LABEL_232;
                case 12:
                  goto LABEL_228;
                case 13:
                  goto LABEL_231;
                case 14:
                  goto LABEL_230;
                case 15:
                  goto LABEL_225;
                case 16:
                  goto LABEL_224;
                case 17:
                  goto LABEL_223;
                case 18:
                  goto LABEL_222;
                case 19:
                  goto LABEL_241;
                case 20:
                  goto LABEL_221;
                case 21:
                  goto LABEL_220;
                case 22:
                  goto LABEL_219;
                case 23:
                  goto LABEL_227;
                case 24:
                  goto LABEL_226;
                case 25:
                  goto LABEL_242;
                case 26:
                  sub_25AA0(a1, "r16");
                  break;
                case 27:
                  sub_25AA0(a1, "r17");
                  break;
                case 28:
                  sub_25AA0(a1, "r18");
                  break;
                case 29:
                  sub_25AA0(a1, "r19");
                  break;
                case 30:
                  sub_25AA0(a1, "r20");
                  break;
                case 31:
                  sub_25AA0(a1, "r21");
                  break;
                case 32:
                  sub_25AA0(a1, "r22");
                  break;
                case 33:
                  sub_25AA0(a1, "r23");
                  break;
                case 34:
                  sub_25AA0(a1, "r24");
                  break;
                case 35:
                  sub_25AA0(a1, "r25");
                  break;
                case 36:
                  sub_25AA0(a1, "r26");
                  break;
                case 37:
                  sub_25AA0(a1, "r27");
                  break;
                case 38:
                  sub_25AA0(a1, "r28");
                  break;
                case 39:
                  sub_25AA0(a1, "r29");
                  break;
                case 40:
                  sub_25AA0(a1, "r30");
                  break;
                case 41:
                  sub_25AA0(a1, "r31");
                  break;
                case 42:
                  sub_25AA0(a1, "r32");
                  break;
                case 43:
                  sub_25AA0(a1, "r33");
                  break;
                case 44:
                  sub_25AA0(a1, "r34");
                  break;
                case 45:
                  sub_25AA0(a1, "r35");
                  break;
                case 46:
                  sub_25AA0(a1, "r36");
                  break;
                case 47:
                  sub_25AA0(a1, "r37");
                  break;
                case 48:
                  sub_25AA0(a1, "r38");
                  break;
                case 49:
                  sub_25AA0(a1, "r39");
                  break;
                case 50:
                  sub_25AA0(a1, "r40");
                  break;
                case 51:
                  sub_25AA0(a1, "r41");
                  break;
                case 52:
                  sub_25AA0(a1, "r42");
                  break;
                case 53:
                  sub_25AA0(a1, "r43");
                  break;
                case 54:
                  sub_25AA0(a1, "r44");
                  break;
                case 55:
                  sub_25AA0(a1, "r45");
                  break;
                case 56:
                  sub_25AA0(a1, "r46");
                  break;
                case 57:
                  sub_25AA0(a1, "r47");
                  break;
                case 58:
                  sub_25AA0(a1, "r48");
                  break;
                case 59:
                  sub_25AA0(a1, "r49");
                  break;
                case 60:
                  sub_25AA0(a1, "r50");
                  break;
                case 61:
                  sub_25AA0(a1, "r51");
                  break;
                case 62:
                  sub_25AA0(a1, "r52");
                  break;
                case 63:
                  sub_25AA0(a1, "r53");
                  break;
                case 64:
                  sub_25AA0(a1, "r54");
                  break;
                case 65:
                  sub_25AA0(a1, "r55");
                  break;
                case 66:
                  sub_25AA0(a1, "r56");
                  break;
                case 67:
                  sub_25AA0(a1, "r57");
                  break;
                case 68:
                  sub_25AA0(a1, "r58");
                  break;
                case 69:
                  sub_25AA0(a1, "r59");
                  break;
                case 70:
                  sub_25AA0(a1, "r60");
                  break;
                case 71:
                  sub_25AA0(a1, "r61");
                  break;
                case 72:
                  sub_25AA0(a1, "r62");
                  break;
                case 73:
                  sub_25AA0(a1, "r63");
                  break;
                case 74:
                  sub_25AA0(a1, "tr0");
                  break;
                case 75:
                  sub_25AA0(a1, "tr1");
                  break;
                case 76:
                  sub_25AA0(a1, "tr2");
                  break;
                case 77:
                  sub_25AA0(a1, "tr3");
                  break;
                case 78:
                  sub_25AA0(a1, "tr4");
                  break;
                case 79:
                  sub_25AA0(a1, "tr5");
                  break;
                case 80:
                  sub_25AA0(a1, "tr6");
                  break;
                case 81:
                  sub_25AA0(a1, "tr7");
                  break;
                case 82:
                  sub_25AA0(a1, "tr8");
                  break;
                case 83:
                  sub_25AA0(a1, "tr9");
                  break;
                case 84:
                  sub_25AA0(a1, "tr10");
                  break;
                case 85:
                  sub_25AA0(a1, "tr11");
                  break;
                case 86:
                  sub_25AA0(a1, "tr12");
                  break;
                case 87:
                  sub_25AA0(a1, "tr13");
                  break;
                case 88:
                  sub_25AA0(a1, "tr14");
                  break;
                case 89:
                  sub_25AA0(a1, "tr15");
                  break;
                case 90:
                  sub_25AA0(a1, "macl");
                  break;
                case 91:
                  sub_25AA0(a1, "mach");
                  break;
                case 92:
                  sub_25AA0(a1, "t");
                  break;
                case 93:
                  goto LABEL_217;
                case 128:
                  sub_25AA0(a1, "fr0");
                  break;
                case 129:
                  sub_25AA0(a1, "fr1");
                  break;
                case 130:
                  sub_25AA0(a1, "fr2");
                  break;
                case 131:
                  sub_25AA0(a1, "fr3");
                  break;
                case 132:
                  sub_25AA0(a1, "fr4");
                  break;
                case 133:
                  sub_25AA0(a1, "fr5");
                  break;
                case 134:
                  sub_25AA0(a1, "fr6");
                  break;
                case 135:
                  sub_25AA0(a1, "fr7");
                  break;
                case 136:
                  sub_25AA0(a1, "fr8");
                  break;
                case 137:
                  sub_25AA0(a1, "fr9");
                  break;
                case 138:
                  sub_25AA0(a1, "fr10");
                  break;
                case 139:
                  sub_25AA0(a1, "fr11");
                  break;
                case 140:
                  sub_25AA0(a1, "fr12");
                  break;
                case 141:
                  sub_25AA0(a1, "fr13");
                  break;
                case 142:
                  sub_25AA0(a1, "fr14");
                  break;
                case 143:
                  sub_25AA0(a1, "fr15");
                  break;
                case 144:
                  sub_25AA0(a1, "fr16");
                  break;
                case 145:
                  sub_25AA0(a1, "fr17");
                  break;
                case 146:
                  sub_25AA0(a1, "fr18");
                  break;
                case 147:
                  sub_25AA0(a1, "fr19");
                  break;
                case 148:
                  sub_25AA0(a1, "fr20");
                  break;
                case 149:
                  sub_25AA0(a1, "fr21");
                  break;
                case 150:
                  sub_25AA0(a1, "fr22");
                  break;
                case 151:
                  sub_25AA0(a1, "fr23");
                  break;
                case 152:
                  sub_25AA0(a1, "fr24");
                  break;
                case 153:
                  sub_25AA0(a1, "fr25");
                  break;
                case 154:
                  sub_25AA0(a1, "fr26");
                  break;
                case 155:
                  sub_25AA0(a1, "fr27");
                  break;
                case 156:
                  sub_25AA0(a1, "fr28");
                  break;
                case 157:
                  sub_25AA0(a1, "fr29");
                  break;
                case 158:
                  sub_25AA0(a1, "fr30");
                  break;
                case 159:
                  sub_25AA0(a1, "fr31");
                  break;
                case 160:
                  sub_25AA0(a1, "fr32");
                  break;
                case 161:
                  sub_25AA0(a1, "fr33");
                  break;
                case 162:
                  sub_25AA0(a1, "fr34");
                  break;
                case 163:
                  sub_25AA0(a1, "fr35");
                  break;
                case 164:
                  sub_25AA0(a1, "fr36");
                  break;
                case 165:
                  sub_25AA0(a1, "fr37");
                  break;
                case 166:
                  sub_25AA0(a1, "fr38");
                  break;
                case 167:
                  sub_25AA0(a1, "fr39");
                  break;
                case 168:
                  sub_25AA0(a1, "fr40");
                  break;
                case 169:
                  sub_25AA0(a1, "fr41");
                  break;
                case 170:
                  sub_25AA0(a1, "fr42");
                  break;
                case 171:
                  sub_25AA0(a1, "fr43");
                  break;
                case 172:
                  sub_25AA0(a1, "fr44");
                  break;
                case 173:
                  sub_25AA0(a1, "fr45");
                  break;
                case 174:
                  sub_25AA0(a1, "fr46");
                  break;
                case 175:
                  sub_25AA0(a1, "fr47");
                  break;
                case 176:
                  sub_25AA0(a1, "fr48");
                  break;
                case 177:
                  sub_25AA0(a1, "fr49");
                  break;
                case 178:
                  sub_25AA0(a1, "fr50");
                  break;
                case 179:
                  sub_25AA0(a1, "fr51");
                  break;
                case 180:
                  sub_25AA0(a1, "fr52");
                  break;
                case 181:
                  sub_25AA0(a1, "fr53");
                  break;
                case 182:
                  sub_25AA0(a1, "fr54");
                  break;
                case 183:
                  sub_25AA0(a1, "fr55");
                  break;
                case 184:
                  sub_25AA0(a1, "fr56");
                  break;
                case 185:
                  sub_25AA0(a1, "fr57");
                  break;
                case 186:
                  sub_25AA0(a1, "fr58");
                  break;
                case 187:
                  sub_25AA0(a1, "fr59");
                  break;
                case 188:
                  sub_25AA0(a1, "fr60");
                  break;
                case 189:
                  sub_25AA0(a1, "fr61");
                  break;
                case 190:
                  sub_25AA0(a1, "fr62");
                  break;
                case 191:
                  sub_25AA0(a1, "fr63");
                  break;
                case 256:
                  goto LABEL_668;
                case 258:
                  goto LABEL_666;
                case 260:
                  goto LABEL_664;
                case 262:
                  goto LABEL_662;
                case 264:
                  goto LABEL_660;
                case 266:
                  goto LABEL_658;
                case 268:
                  goto LABEL_656;
                case 270:
                  goto LABEL_654;
                case 272:
                  sub_25AA0(a1, "dr16");
                  break;
                case 274:
                  sub_25AA0(a1, "dr18");
                  break;
                case 276:
                  sub_25AA0(a1, "dr20");
                  break;
                case 278:
                  sub_25AA0(a1, "dr22");
                  break;
                case 280:
                  sub_25AA0(a1, "dr24");
                  break;
                case 282:
                  sub_25AA0(a1, "dr26");
                  break;
                case 284:
                  sub_25AA0(a1, "dr28");
                  break;
                case 286:
                  sub_25AA0(a1, "dr30");
                  break;
                case 288:
                  sub_25AA0(a1, "dr32");
                  break;
                case 290:
                  sub_25AA0(a1, "dr34");
                  break;
                case 292:
                  sub_25AA0(a1, "dr36");
                  break;
                case 294:
                  sub_25AA0(a1, "dr38");
                  break;
                case 296:
                  sub_25AA0(a1, "dr40");
                  break;
                case 298:
                  sub_25AA0(a1, "dr42");
                  break;
                case 300:
                  sub_25AA0(a1, "dr44");
                  break;
                case 302:
                  sub_25AA0(a1, "dr46");
                  break;
                case 304:
                  sub_25AA0(a1, "dr48");
                  break;
                case 306:
                  sub_25AA0(a1, "dr50");
                  break;
                case 308:
                  sub_25AA0(a1, "dr52");
                  break;
                case 310:
                  sub_25AA0(a1, "dr54");
                  break;
                case 312:
                  sub_25AA0(a1, "dr56");
                  break;
                case 314:
                  sub_25AA0(a1, "dr58");
                  break;
                case 316:
                  sub_25AA0(a1, "dr60");
                  break;
                case 318:
                  sub_25AA0(a1, "dr62");
                  break;
                case 512:
                  sub_25AA0(a1, "fv0");
                  break;
                case 516:
                  sub_25AA0(a1, "fv4");
                  break;
                case 520:
                  sub_25AA0(a1, "fv8");
                  break;
                case 524:
                  sub_25AA0(a1, "fv12");
                  break;
                case 528:
                  sub_25AA0(a1, "fv16");
                  break;
                case 532:
                  sub_25AA0(a1, "fv20");
                  break;
                case 536:
                  sub_25AA0(a1, "fv24");
                  break;
                case 540:
                  sub_25AA0(a1, "fv28");
                  break;
                case 544:
                  sub_25AA0(a1, "fv32");
                  break;
                case 548:
                  sub_25AA0(a1, "fv36");
                  break;
                case 552:
                  sub_25AA0(a1, "fv40");
                  break;
                case 556:
                  sub_25AA0(a1, "fv44");
                  break;
                case 560:
                  sub_25AA0(a1, "fv48");
                  break;
                case 564:
                  sub_25AA0(a1, "fv52");
                  break;
                case 568:
                  sub_25AA0(a1, "fv56");
                  break;
                case 572:
                  sub_25AA0(a1, "fv60");
                  break;
                case 1024:
                  sub_25AA0(a1, "mtrx0");
                  break;
                case 1040:
                  sub_25AA0(a1, "mtrx16");
                  break;
                case 1056:
                  sub_25AA0(a1, "mtrx32");
                  break;
                case 1072:
                  sub_25AA0(a1, "mtrx48");
                  break;
                case 2000:
                  goto LABEL_401;
                case 2001:
                  goto LABEL_400;
                case 2002:
                  goto LABEL_399;
                case 2003:
                  goto LABEL_398;
                case 2004:
                  goto LABEL_397;
                case 2005:
                  goto LABEL_404;
                case 2006:
                  goto LABEL_403;
                case 2007:
                  goto LABEL_402;
                case 2008:
                  goto LABEL_669;
                case 2009:
                  sub_25AA0(a1, "cr9");
                  break;
                case 2010:
                  goto LABEL_1209;
                case 2011:
                  goto LABEL_1208;
                case 2012:
                  goto LABEL_1207;
                case 2013:
                  goto LABEL_1206;
                case 2014:
                  goto LABEL_1205;
                case 2015:
                  goto LABEL_1204;
                case 2016:
                  sub_25AA0(a1, "cr16");
                  break;
                case 2017:
                  sub_25AA0(a1, "cr17");
                  break;
                case 2018:
                  goto LABEL_1201;
                case 2019:
                  sub_25AA0(a1, "cr19");
                  break;
                case 2020:
                  sub_25AA0(a1, "cr20");
                  break;
                case 2021:
                  sub_25AA0(a1, "cr21");
                  break;
                case 2022:
                  sub_25AA0(a1, "cr22");
                  break;
                case 2023:
                  sub_25AA0(a1, "cr23");
                  break;
                case 2024:
                  sub_25AA0(a1, "cr24");
                  break;
                case 2025:
                  sub_25AA0(a1, "cr25");
                  break;
                case 2026:
                  goto LABEL_1193;
                case 2027:
                  goto LABEL_1192;
                case 2028:
                  goto LABEL_1191;
                case 2029:
                  goto LABEL_1190;
                case 2030:
                  goto LABEL_1189;
                case 2031:
                  goto LABEL_1188;
                case 2032:
                  goto LABEL_1187;
                case 2033:
                  goto LABEL_1186;
                case 2034:
                  goto LABEL_1185;
                case 2035:
                  goto LABEL_1184;
                case 2036:
                  goto LABEL_1183;
                case 2037:
                  goto LABEL_1182;
                case 2038:
                  goto LABEL_1629;
                case 2039:
                  goto LABEL_1628;
                case 2040:
                  goto LABEL_1627;
                case 2041:
                  goto LABEL_1626;
                case 2042:
                  goto LABEL_1625;
                case 2043:
                  goto LABEL_1624;
                case 2044:
                  goto LABEL_1623;
                case 2045:
                  goto LABEL_1622;
                case 2046:
                  goto LABEL_1621;
                case 2047:
                  goto LABEL_1620;
                case 2048:
                  goto LABEL_1619;
                case 2049:
                  goto LABEL_1618;
                case 2050:
                  goto LABEL_1617;
                case 2051:
                  goto LABEL_1616;
                case 2052:
                  goto LABEL_1615;
                case 2053:
                  goto LABEL_1614;
                case 2054:
                  goto LABEL_1613;
                case 2055:
                  goto LABEL_1612;
                case 2056:
                  goto LABEL_1611;
                case 2057:
                  goto LABEL_1610;
                case 2058:
                  goto LABEL_1609;
                case 2059:
                  goto LABEL_1608;
                case 2060:
                  goto LABEL_1607;
                case 2061:
                  goto LABEL_1606;
                case 2062:
                  goto LABEL_1605;
                case 2063:
                  goto LABEL_1604;
                case 2064:
                  goto LABEL_1822;
                default:
                  goto LABEL_51;
              }
              return;
            case 96LL:
            case 97LL:
            case 98LL:
            case 99LL:
            case 100LL:
            case 101LL:
            case 102LL:
            case 103LL:
              goto LABEL_54;
            case 128LL:
            case 129LL:
              if ( a3 > 5135 )
              {
                if ( a3 > 7439 )
                {
                  if ( a3 > 8455 )
                  {
                    if ( (unsigned int)(a3 - 8576) > 7 )
                      goto LABEL_51;
                    switch ( a3 )
                    {
                      case 8577:
                        sub_25AA0(a1, "dbd1");
                        break;
                      case 8578:
                        sub_25AA0(a1, "dbd2");
                        break;
                      case 8579:
                        sub_25AA0(a1, "dbd3");
                        break;
                      case 8580:
                        sub_25AA0(a1, "dbd4");
                        break;
                      case 8581:
                        sub_25AA0(a1, "dbd5");
                        break;
                      case 8582:
                        sub_25AA0(a1, "dbd6");
                        break;
                      case 8583:
                        sub_25AA0(a1, "dbd7");
                        break;
                      default:
                        sub_25AA0(a1, "dbd0");
                        break;
                    }
                  }
                  else if ( a3 > 8447 )
                  {
                    switch ( a3 )
                    {
                      case 8449:
                        sub_25AA0(a1, "dbi1");
                        break;
                      case 8450:
                        sub_25AA0(a1, "dbi2");
                        break;
                      case 8451:
                        sub_25AA0(a1, "dbi3");
                        break;
                      case 8452:
                        sub_25AA0(a1, "dbi4");
                        break;
                      case 8453:
                        sub_25AA0(a1, "dbi5");
                        break;
                      case 8454:
                        sub_25AA0(a1, "dbi6");
                        break;
                      case 8455:
                        sub_25AA0(a1, "dbi7");
                        break;
                      default:
                        sub_25AA0(a1, "dbi0");
                        break;
                    }
                  }
                  else if ( a3 > 8199 )
                  {
                    if ( (unsigned int)(a3 - 8320) > 7 )
                      goto LABEL_51;
                    switch ( a3 )
                    {
                      case 8321:
                        sub_25AA0(a1, "trd1");
                        break;
                      case 8322:
                        sub_25AA0(a1, "trd2");
                        break;
                      case 8323:
                        sub_25AA0(a1, "trd3");
                        break;
                      case 8324:
                        sub_25AA0(a1, "trd4");
                        break;
                      case 8325:
                        sub_25AA0(a1, "trd5");
                        break;
                      case 8326:
                        sub_25AA0(a1, "trd6");
                        break;
                      case 8327:
                        sub_25AA0(a1, "trd7");
                        break;
                      default:
                        sub_25AA0(a1, "trd0");
                        break;
                    }
                  }
                  else
                  {
                    if ( a3 <= 0x1FFF )
                      goto LABEL_51;
                    switch ( a3 )
                    {
                      case 8193:
                        sub_25AA0(a1, "tri1");
                        break;
                      case 8194:
                        sub_25AA0(a1, "tri2");
                        break;
                      case 8195:
                        sub_25AA0(a1, "tri3");
                        break;
                      case 8196:
                        sub_25AA0(a1, "tri4");
                        break;
                      case 8197:
                        sub_25AA0(a1, "tri5");
                        break;
                      case 8198:
                        sub_25AA0(a1, "tri6");
                        break;
                      case 8199:
                        sub_25AA0(a1, "tri7");
                        break;
                      default:
                        sub_25AA0(a1, "tri0");
                        break;
                    }
                  }
                }
                else if ( a3 <= 7167 )
                {
                  if ( (unsigned int)(a3 - 6144) > 7 )
                    goto LABEL_51;
                  switch ( a3 )
                  {
                    case 6145:
                      sub_25AA0(a1, "rr1");
                      break;
                    case 6146:
                      sub_25AA0(a1, "rr2");
                      break;
                    case 6147:
                      sub_25AA0(a1, "rr3");
                      break;
                    case 6148:
                      sub_25AA0(a1, "rr4");
                      break;
                    case 6149:
                      sub_25AA0(a1, "rr5");
                      break;
                    case 6150:
                      sub_25AA0(a1, "rr6");
                      break;
                    case 6151:
                      sub_25AA0(a1, "rr7");
                      break;
                    default:
                      sub_25AA0(a1, "rr0");
                      break;
                  }
                }
                else
                {
                  switch ( a3 )
                  {
                    case 7168:
                      sub_25AA0(a1, "pfd0");
                      break;
                    case 7169:
                      sub_25AA0(a1, "pfd1");
                      break;
                    case 7170:
                      sub_25AA0(a1, "pfd2");
                      break;
                    case 7171:
                      sub_25AA0(a1, "pfd3");
                      break;
                    case 7172:
                      sub_25AA0(a1, "pfd4");
                      break;
                    case 7173:
                      sub_25AA0(a1, "pfd5");
                      break;
                    case 7174:
                      sub_25AA0(a1, "pfd6");
                      break;
                    case 7175:
                      sub_25AA0(a1, "pfd7");
                      break;
                    case 7176:
                      sub_25AA0(a1, "pfd8");
                      break;
                    case 7177:
                      sub_25AA0(a1, "pfd9");
                      break;
                    case 7178:
                      sub_25AA0(a1, "pfd10");
                      break;
                    case 7179:
                      sub_25AA0(a1, "pfd11");
                      break;
                    case 7180:
                      sub_25AA0(a1, "pfd12");
                      break;
                    case 7181:
                      sub_25AA0(a1, "pfd13");
                      break;
                    case 7182:
                      sub_25AA0(a1, "pfd14");
                      break;
                    case 7183:
                      sub_25AA0(a1, "pfd15");
                      break;
                    case 7184:
                      sub_25AA0(a1, "pfd16");
                      break;
                    case 7185:
                      sub_25AA0(a1, "pfd17");
                      break;
                    case 7424:
                      sub_25AA0(a1, "pfc0");
                      break;
                    case 7425:
                      sub_25AA0(a1, "pfc1");
                      break;
                    case 7426:
                      sub_25AA0(a1, "pfc2");
                      break;
                    case 7427:
                      sub_25AA0(a1, "pfc3");
                      break;
                    case 7428:
                      sub_25AA0(a1, "pfc4");
                      break;
                    case 7429:
                      sub_25AA0(a1, "pfc5");
                      break;
                    case 7430:
                      sub_25AA0(a1, "pfc6");
                      break;
                    case 7431:
                      sub_25AA0(a1, "pfc7");
                      break;
                    case 7432:
                      sub_25AA0(a1, "pfc8");
                      break;
                    case 7433:
                      sub_25AA0(a1, "pfc9");
                      break;
                    case 7434:
                      sub_25AA0(a1, "pfc10");
                      break;
                    case 7435:
                      sub_25AA0(a1, "pfc11");
                      break;
                    case 7436:
                      sub_25AA0(a1, "pfc12");
                      break;
                    case 7437:
                      sub_25AA0(a1, "pfc13");
                      break;
                    case 7438:
                      sub_25AA0(a1, "pfc14");
                      break;
                    case 7439:
                      sub_25AA0(a1, "pfc15");
                      break;
                    default:
                      goto LABEL_51;
                  }
                }
              }
              else if ( a3 <= 2047 )
              {
                switch ( a3 )
                {
                  case 0:
                    goto LABEL_218;
                  case 512:
                    sub_25AA0(a1, "br0");
                    break;
                  case 513:
                    sub_25AA0(a1, "br1");
                    break;
                  case 514:
                    sub_25AA0(a1, "br2");
                    break;
                  case 515:
                    sub_25AA0(a1, "br3");
                    break;
                  case 516:
                    sub_25AA0(a1, "br4");
                    break;
                  case 517:
                    sub_25AA0(a1, "br5");
                    break;
                  case 518:
                    sub_25AA0(a1, "br6");
                    break;
                  case 519:
                    sub_25AA0(a1, "br7");
                    break;
                  case 704:
                    goto LABEL_2015;
                  case 705:
                    goto LABEL_2014;
                  case 706:
                    goto LABEL_1965;
                  case 707:
                    goto LABEL_1964;
                  case 708:
                    goto LABEL_1963;
                  case 709:
                    goto LABEL_1962;
                  case 710:
                    goto LABEL_1961;
                  case 711:
                    goto LABEL_1960;
                  case 712:
                    goto LABEL_1959;
                  case 713:
                    goto LABEL_1958;
                  case 714:
                    goto LABEL_1957;
                  case 715:
                    goto LABEL_1956;
                  case 716:
                    goto LABEL_1955;
                  case 717:
                    goto LABEL_1954;
                  case 718:
                    goto LABEL_1953;
                  case 719:
                    goto LABEL_1952;
                  case 720:
                    sub_25AA0(a1, "p16");
                    break;
                  case 721:
                    sub_25AA0(a1, "p17");
                    break;
                  case 722:
                    sub_25AA0(a1, "p18");
                    break;
                  case 723:
                    sub_25AA0(a1, "p19");
                    break;
                  case 724:
                    sub_25AA0(a1, "p20");
                    break;
                  case 725:
                    sub_25AA0(a1, "p21");
                    break;
                  case 726:
                    sub_25AA0(a1, "p22");
                    break;
                  case 727:
                    sub_25AA0(a1, "p23");
                    break;
                  case 728:
                    sub_25AA0(a1, "p24");
                    break;
                  case 729:
                    sub_25AA0(a1, "p25");
                    break;
                  case 730:
                    sub_25AA0(a1, "p26");
                    break;
                  case 731:
                    sub_25AA0(a1, "p27");
                    break;
                  case 732:
                    sub_25AA0(a1, "p28");
                    break;
                  case 733:
                    sub_25AA0(a1, "p29");
                    break;
                  case 734:
                    sub_25AA0(a1, "p30");
                    break;
                  case 735:
                    sub_25AA0(a1, "p31");
                    break;
                  case 736:
                    sub_25AA0(a1, "p32");
                    break;
                  case 737:
                    sub_25AA0(a1, "p33");
                    break;
                  case 738:
                    sub_25AA0(a1, "p34");
                    break;
                  case 739:
                    sub_25AA0(a1, "p35");
                    break;
                  case 740:
                    sub_25AA0(a1, "p36");
                    break;
                  case 741:
                    sub_25AA0(a1, "p37");
                    break;
                  case 742:
                    sub_25AA0(a1, "p38");
                    break;
                  case 743:
                    sub_25AA0(a1, "p39");
                    break;
                  case 744:
                    sub_25AA0(a1, "p40");
                    break;
                  case 745:
                    sub_25AA0(a1, "p41");
                    break;
                  case 746:
                    sub_25AA0(a1, "p42");
                    break;
                  case 747:
                    sub_25AA0(a1, "p43");
                    break;
                  case 748:
                    sub_25AA0(a1, "p44");
                    break;
                  case 749:
                    sub_25AA0(a1, "p45");
                    break;
                  case 750:
                    sub_25AA0(a1, "p46");
                    break;
                  case 751:
                    sub_25AA0(a1, "p47");
                    break;
                  case 752:
                    sub_25AA0(a1, "p48");
                    break;
                  case 753:
                    sub_25AA0(a1, "p49");
                    break;
                  case 754:
                    sub_25AA0(a1, "p50");
                    break;
                  case 755:
                    sub_25AA0(a1, "p51");
                    break;
                  case 756:
                    sub_25AA0(a1, "p52");
                    break;
                  case 757:
                    sub_25AA0(a1, "p53");
                    break;
                  case 758:
                    sub_25AA0(a1, "p54");
                    break;
                  case 759:
                    sub_25AA0(a1, "p55");
                    break;
                  case 760:
                    sub_25AA0(a1, "p56");
                    break;
                  case 761:
                    sub_25AA0(a1, "p57");
                    break;
                  case 762:
                    sub_25AA0(a1, "p58");
                    break;
                  case 763:
                    sub_25AA0(a1, "p59");
                    break;
                  case 764:
                    sub_25AA0(a1, "p60");
                    break;
                  case 765:
                    sub_25AA0(a1, "p61");
                    break;
                  case 766:
                    sub_25AA0(a1, "p62");
                    break;
                  case 767:
                    sub_25AA0(a1, "p63");
                    break;
                  case 768:
                    sub_25AA0(a1, "Preds");
                    break;
                  case 832:
                    sub_25AA0(a1, "IntH0");
                    break;
                  case 833:
                    sub_25AA0(a1, "IntH1");
                    break;
                  case 834:
                    sub_25AA0(a1, "IntH2");
                    break;
                  case 835:
                    sub_25AA0(a1, "IntH3");
                    break;
                  case 836:
                    sub_25AA0(a1, "IntH4");
                    break;
                  case 837:
                    sub_25AA0(a1, "IntH5");
                    break;
                  case 838:
                    sub_25AA0(a1, "IntH6");
                    break;
                  case 839:
                    sub_25AA0(a1, "IntH7");
                    break;
                  case 840:
                    sub_25AA0(a1, "IntH8");
                    break;
                  case 841:
                    sub_25AA0(a1, "IntH9");
                    break;
                  case 842:
                    sub_25AA0(a1, "IntH10");
                    break;
                  case 843:
                    sub_25AA0(a1, "IntH11");
                    break;
                  case 844:
                    sub_25AA0(a1, "IntH12");
                    break;
                  case 845:
                    sub_25AA0(a1, "IntH13");
                    break;
                  case 846:
                    sub_25AA0(a1, "IntH14");
                    break;
                  case 847:
                    sub_25AA0(a1, "IntH15");
                    break;
                  case 1016:
                    sub_25AA0(a1, "Ip");
                    break;
                  case 1017:
                    sub_25AA0(a1, "Umask");
                    break;
                  case 1018:
                    sub_25AA0(a1, "Cfm");
                    break;
                  case 1019:
LABEL_105:
                    sub_25AA0(a1, "Psr");
                    break;
                  case 1020:
                    sub_25AA0(a1, "Nats");
                    break;
                  case 1021:
                    sub_25AA0(a1, "Nats2");
                    break;
                  case 1022:
                    sub_25AA0(a1, "Nats3");
                    break;
                  case 1024:
LABEL_383:
                    sub_25AA0(a1, "IntR0");
                    break;
                  case 1025:
LABEL_382:
                    sub_25AA0(a1, "IntR1");
                    break;
                  case 1026:
LABEL_381:
                    sub_25AA0(a1, "IntR2");
                    break;
                  case 1027:
LABEL_380:
                    sub_25AA0(a1, "IntR3");
                    break;
                  case 1028:
LABEL_379:
                    sub_25AA0(a1, "IntR4");
                    break;
                  case 1029:
LABEL_378:
                    sub_25AA0(a1, "IntR5");
                    break;
                  case 1030:
LABEL_377:
                    sub_25AA0(a1, "IntR6");
                    break;
                  case 1031:
LABEL_376:
                    sub_25AA0(a1, "IntR7");
                    break;
                  case 1032:
LABEL_389:
                    sub_25AA0(a1, "IntR8");
                    break;
                  case 1033:
LABEL_388:
                    sub_25AA0(a1, "IntR9");
                    break;
                  case 1034:
LABEL_387:
                    sub_25AA0(a1, "IntR10");
                    break;
                  case 1035:
LABEL_386:
                    sub_25AA0(a1, "IntR11");
                    break;
                  case 1036:
LABEL_375:
                    sub_25AA0(a1, "IntR12");
                    break;
                  case 1037:
LABEL_374:
                    sub_25AA0(a1, "IntR13");
                    break;
                  case 1038:
                    sub_25AA0(a1, "IntR14");
                    break;
                  case 1039:
                    sub_25AA0(a1, "IntR15");
                    break;
                  case 1040:
                    sub_25AA0(a1, "IntR16");
                    break;
                  case 1041:
                    sub_25AA0(a1, "IntR17");
                    break;
                  case 1042:
                    sub_25AA0(a1, "IntR18");
                    break;
                  case 1043:
                    sub_25AA0(a1, "IntR19");
                    break;
                  case 1044:
                    sub_25AA0(a1, "IntR20");
                    break;
                  case 1045:
                    sub_25AA0(a1, "IntR21");
                    break;
                  case 1046:
                    sub_25AA0(a1, "IntR22");
                    break;
                  case 1047:
                    sub_25AA0(a1, "IntR23");
                    break;
                  case 1048:
                    sub_25AA0(a1, "IntR24");
                    break;
                  case 1049:
                    sub_25AA0(a1, "IntR25");
                    break;
                  case 1050:
                    sub_25AA0(a1, "IntR26");
                    break;
                  case 1051:
                    sub_25AA0(a1, "IntR27");
                    break;
                  case 1052:
                    sub_25AA0(a1, "IntR28");
                    break;
                  case 1053:
                    sub_25AA0(a1, "IntR29");
                    break;
                  case 1054:
                    sub_25AA0(a1, "IntR30");
                    break;
                  case 1055:
                    sub_25AA0(a1, "IntR31");
                    break;
                  case 1056:
                    sub_25AA0(a1, "IntR32");
                    break;
                  case 1057:
                    sub_25AA0(a1, "IntR33");
                    break;
                  case 1058:
                    sub_25AA0(a1, "IntR34");
                    break;
                  case 1059:
                    sub_25AA0(a1, "IntR35");
                    break;
                  case 1060:
                    sub_25AA0(a1, "IntR36");
                    break;
                  case 1061:
                    sub_25AA0(a1, "IntR37");
                    break;
                  case 1062:
                    sub_25AA0(a1, "IntR38");
                    break;
                  case 1063:
                    sub_25AA0(a1, "IntR39");
                    break;
                  case 1064:
                    sub_25AA0(a1, "IntR40");
                    break;
                  case 1065:
                    sub_25AA0(a1, "IntR41");
                    break;
                  case 1066:
                    sub_25AA0(a1, "IntR42");
                    break;
                  case 1067:
                    sub_25AA0(a1, "IntR43");
                    break;
                  case 1068:
                    sub_25AA0(a1, "IntR44");
                    break;
                  case 1069:
                    sub_25AA0(a1, "IntR45");
                    break;
                  case 1070:
                    sub_25AA0(a1, "IntR46");
                    break;
                  case 1071:
                    sub_25AA0(a1, "IntR47");
                    break;
                  case 1072:
                    sub_25AA0(a1, "IntR48");
                    break;
                  case 1073:
                    sub_25AA0(a1, "IntR49");
                    break;
                  case 1074:
                    sub_25AA0(a1, "IntR50");
                    break;
                  case 1075:
                    sub_25AA0(a1, "IntR51");
                    break;
                  case 1076:
                    sub_25AA0(a1, "IntR52");
                    break;
                  case 1077:
                    sub_25AA0(a1, "IntR53");
                    break;
                  case 1078:
                    sub_25AA0(a1, "IntR54");
                    break;
                  case 1079:
                    sub_25AA0(a1, "IntR55");
                    break;
                  case 1080:
                    sub_25AA0(a1, "IntR56");
                    break;
                  case 1081:
                    sub_25AA0(a1, "IntR57");
                    break;
                  case 1082:
                    sub_25AA0(a1, "IntR58");
                    break;
                  case 1083:
                    sub_25AA0(a1, "IntR59");
                    break;
                  case 1084:
                    sub_25AA0(a1, "IntR60");
                    break;
                  case 1085:
                    sub_25AA0(a1, "IntR61");
                    break;
                  case 1086:
                    sub_25AA0(a1, "IntR62");
                    break;
                  case 1087:
                    sub_25AA0(a1, "IntR63");
                    break;
                  case 1088:
                    sub_25AA0(a1, "IntR64");
                    break;
                  case 1089:
                    sub_25AA0(a1, "IntR65");
                    break;
                  case 1090:
                    sub_25AA0(a1, "IntR66");
                    break;
                  case 1091:
                    sub_25AA0(a1, "IntR67");
                    break;
                  case 1092:
                    sub_25AA0(a1, "IntR68");
                    break;
                  case 1093:
                    sub_25AA0(a1, "IntR69");
                    break;
                  case 1094:
                    sub_25AA0(a1, "IntR70");
                    break;
                  case 1095:
                    sub_25AA0(a1, "IntR71");
                    break;
                  case 1096:
                    sub_25AA0(a1, "IntR72");
                    break;
                  case 1097:
                    sub_25AA0(a1, "IntR73");
                    break;
                  case 1098:
                    sub_25AA0(a1, "IntR74");
                    break;
                  case 1099:
                    sub_25AA0(a1, "IntR75");
                    break;
                  case 1100:
                    sub_25AA0(a1, "IntR76");
                    break;
                  case 1101:
                    sub_25AA0(a1, "IntR77");
                    break;
                  case 1102:
                    sub_25AA0(a1, "IntR78");
                    break;
                  case 1103:
                    sub_25AA0(a1, "IntR79");
                    break;
                  case 1104:
                    sub_25AA0(a1, "IntR80");
                    break;
                  case 1105:
                    sub_25AA0(a1, "IntR81");
                    break;
                  case 1106:
                    sub_25AA0(a1, "IntR82");
                    break;
                  case 1107:
                    sub_25AA0(a1, "IntR83");
                    break;
                  case 1108:
                    sub_25AA0(a1, "IntR84");
                    break;
                  case 1109:
                    sub_25AA0(a1, "IntR85");
                    break;
                  case 1110:
                    sub_25AA0(a1, "IntR86");
                    break;
                  case 1111:
                    sub_25AA0(a1, "IntR87");
                    break;
                  case 1112:
                    sub_25AA0(a1, "IntR88");
                    break;
                  case 1113:
                    sub_25AA0(a1, "IntR89");
                    break;
                  case 1114:
                    sub_25AA0(a1, "IntR90");
                    break;
                  case 1115:
                    sub_25AA0(a1, "IntR91");
                    break;
                  case 1116:
                    sub_25AA0(a1, "IntR92");
                    break;
                  case 1117:
                    sub_25AA0(a1, "IntR93");
                    break;
                  case 1118:
                    sub_25AA0(a1, "IntR94");
                    break;
                  case 1119:
                    sub_25AA0(a1, "IntR95");
                    break;
                  case 1120:
                    sub_25AA0(a1, "IntR96");
                    break;
                  case 1121:
                    sub_25AA0(a1, "IntR97");
                    break;
                  case 1122:
                    sub_25AA0(a1, "IntR98");
                    break;
                  case 1123:
                    sub_25AA0(a1, "IntR99");
                    break;
                  case 1124:
                    sub_25AA0(a1, "IntR100");
                    break;
                  case 1125:
                    sub_25AA0(a1, "IntR101");
                    break;
                  case 1126:
                    sub_25AA0(a1, "IntR102");
                    break;
                  case 1127:
                    sub_25AA0(a1, "IntR103");
                    break;
                  case 1128:
                    sub_25AA0(a1, "IntR104");
                    break;
                  case 1129:
                    sub_25AA0(a1, "IntR105");
                    break;
                  case 1130:
                    sub_25AA0(a1, "IntR106");
                    break;
                  case 1131:
                    sub_25AA0(a1, "IntR107");
                    break;
                  case 1132:
                    sub_25AA0(a1, "IntR108");
                    break;
                  case 1133:
                    sub_25AA0(a1, "IntR109");
                    break;
                  case 1134:
                    sub_25AA0(a1, "IntR110");
                    break;
                  case 1135:
                    sub_25AA0(a1, "IntR111");
                    break;
                  case 1136:
                    sub_25AA0(a1, "IntR112");
                    break;
                  case 1137:
                    sub_25AA0(a1, "IntR113");
                    break;
                  case 1138:
                    sub_25AA0(a1, "IntR114");
                    break;
                  case 1139:
                    sub_25AA0(a1, "IntR115");
                    break;
                  case 1140:
                    sub_25AA0(a1, "IntR116");
                    break;
                  case 1141:
                    sub_25AA0(a1, "IntR117");
                    break;
                  case 1142:
                    sub_25AA0(a1, "IntR118");
                    break;
                  case 1143:
                    sub_25AA0(a1, "IntR119");
                    break;
                  case 1144:
                    sub_25AA0(a1, "IntR120");
                    break;
                  case 1145:
                    sub_25AA0(a1, "IntR121");
                    break;
                  case 1146:
                    sub_25AA0(a1, "IntR122");
                    break;
                  case 1147:
                    sub_25AA0(a1, "IntR123");
                    break;
                  case 1148:
                    sub_25AA0(a1, "IntR124");
                    break;
                  case 1149:
                    sub_25AA0(a1, "IntR125");
                    break;
                  case 1150:
                    sub_25AA0(a1, "IntR126");
                    break;
                  case 1151:
                    sub_25AA0(a1, "IntR127");
                    break;
                  default:
                    goto LABEL_51;
                }
              }
              else
              {
                switch ( a3 )
                {
                  case 2048:
LABEL_63:
                    sub_25AA0(a1, "FltF0");
                    break;
                  case 2049:
LABEL_121:
                    sub_25AA0(a1, "FltF1");
                    break;
                  case 2050:
LABEL_120:
                    sub_25AA0(a1, "FltF2");
                    break;
                  case 2051:
LABEL_119:
                    sub_25AA0(a1, "FltF3");
                    break;
                  case 2052:
LABEL_118:
                    sub_25AA0(a1, "FltF4");
                    break;
                  case 2053:
LABEL_87:
                    sub_25AA0(a1, "FltF5");
                    break;
                  case 2054:
LABEL_86:
                    sub_25AA0(a1, "FltF6");
                    break;
                  case 2055:
LABEL_85:
                    sub_25AA0(a1, "FltF7");
                    break;
                  case 2056:
LABEL_84:
                    sub_25AA0(a1, "FltF8");
                    break;
                  case 2057:
LABEL_83:
                    sub_25AA0(a1, "FltF9");
                    break;
                  case 2058:
LABEL_82:
                    sub_25AA0(a1, "FltF10");
                    break;
                  case 2059:
LABEL_81:
                    sub_25AA0(a1, "FltF11");
                    break;
                  case 2060:
LABEL_80:
                    sub_25AA0(a1, "FltF12");
                    break;
                  case 2061:
LABEL_140:
                    sub_25AA0(a1, "FltF13");
                    break;
                  case 2062:
LABEL_139:
                    sub_25AA0(a1, "FltF14");
                    break;
                  case 2063:
LABEL_138:
                    sub_25AA0(a1, "FltF15");
                    break;
                  case 2064:
LABEL_137:
                    sub_25AA0(a1, "FltF16");
                    break;
                  case 2065:
LABEL_136:
                    sub_25AA0(a1, "FltF17");
                    break;
                  case 2066:
LABEL_135:
                    sub_25AA0(a1, "FltF18");
                    break;
                  case 2067:
LABEL_134:
                    sub_25AA0(a1, "FltF19");
                    break;
                  case 2068:
LABEL_133:
                    sub_25AA0(a1, "FltF20");
                    break;
                  case 2069:
LABEL_132:
                    sub_25AA0(a1, "FltF21");
                    break;
                  case 2070:
LABEL_131:
                    sub_25AA0(a1, "FltF22");
                    break;
                  case 2071:
LABEL_130:
                    sub_25AA0(a1, "FltF23");
                    break;
                  case 2072:
LABEL_129:
                    sub_25AA0(a1, "FltF24");
                    break;
                  case 2073:
LABEL_128:
                    sub_25AA0(a1, "FltF25");
                    break;
                  case 2074:
LABEL_127:
                    sub_25AA0(a1, "FltF26");
                    break;
                  case 2075:
LABEL_126:
                    sub_25AA0(a1, "FltF27");
                    break;
                  case 2076:
LABEL_125:
                    sub_25AA0(a1, "FltF28");
                    break;
                  case 2077:
LABEL_117:
                    sub_25AA0(a1, "FltF29");
                    break;
                  case 2078:
LABEL_116:
                    sub_25AA0(a1, "FltF30");
                    break;
                  case 2079:
LABEL_115:
                    sub_25AA0(a1, "FltF31");
                    break;
                  case 2080:
                    sub_25AA0(a1, "FltF32");
                    break;
                  case 2081:
                    sub_25AA0(a1, "FltF33");
                    break;
                  case 2082:
                    sub_25AA0(a1, "FltF34");
                    break;
                  case 2083:
                    sub_25AA0(a1, "FltF35");
                    break;
                  case 2084:
                    sub_25AA0(a1, "FltF36");
                    break;
                  case 2085:
                    sub_25AA0(a1, "FltF37");
                    break;
                  case 2086:
                    sub_25AA0(a1, "FltF38");
                    break;
                  case 2087:
                    sub_25AA0(a1, "FltF39");
                    break;
                  case 2088:
                    sub_25AA0(a1, "FltF40");
                    break;
                  case 2089:
                    sub_25AA0(a1, "FltF41");
                    break;
                  case 2090:
                    sub_25AA0(a1, "FltF42");
                    break;
                  case 2091:
                    sub_25AA0(a1, "FltF43");
                    break;
                  case 2092:
                    sub_25AA0(a1, "FltF44");
                    break;
                  case 2093:
                    sub_25AA0(a1, "FltF45");
                    break;
                  case 2094:
                    sub_25AA0(a1, "FltF46");
                    break;
                  case 2095:
                    sub_25AA0(a1, "FltF47");
                    break;
                  case 2096:
                    sub_25AA0(a1, "FltF48");
                    break;
                  case 2097:
                    sub_25AA0(a1, "FltF49");
                    break;
                  case 2098:
                    sub_25AA0(a1, "FltF50");
                    break;
                  case 2099:
                    sub_25AA0(a1, "FltF51");
                    break;
                  case 2100:
                    sub_25AA0(a1, "FltF52");
                    break;
                  case 2101:
                    sub_25AA0(a1, "FltF53");
                    break;
                  case 2102:
                    sub_25AA0(a1, "FltF54");
                    break;
                  case 2103:
                    sub_25AA0(a1, "FltF55");
                    break;
                  case 2104:
                    sub_25AA0(a1, "FltF56");
                    break;
                  case 2105:
                    sub_25AA0(a1, "FltF57");
                    break;
                  case 2106:
                    sub_25AA0(a1, "FltF58");
                    break;
                  case 2107:
                    sub_25AA0(a1, "FltF59");
                    break;
                  case 2108:
                    sub_25AA0(a1, "FltF60");
                    break;
                  case 2109:
                    sub_25AA0(a1, "FltF61");
                    break;
                  case 2110:
                    sub_25AA0(a1, "FltF62");
                    break;
                  case 2111:
                    sub_25AA0(a1, "FltF63");
                    break;
                  case 2112:
                    sub_25AA0(a1, "FltF64");
                    break;
                  case 2113:
                    sub_25AA0(a1, "FltF65");
                    break;
                  case 2114:
                    sub_25AA0(a1, "FltF66");
                    break;
                  case 2115:
                    sub_25AA0(a1, "FltF67");
                    break;
                  case 2116:
                    sub_25AA0(a1, "FltF68");
                    break;
                  case 2117:
                    sub_25AA0(a1, "FltF69");
                    break;
                  case 2118:
                    sub_25AA0(a1, "FltF70");
                    break;
                  case 2119:
                    sub_25AA0(a1, "FltF71");
                    break;
                  case 2120:
                    sub_25AA0(a1, "FltF72");
                    break;
                  case 2121:
                    sub_25AA0(a1, "FltF73");
                    break;
                  case 2122:
                    sub_25AA0(a1, "FltF74");
                    break;
                  case 2123:
                    sub_25AA0(a1, "FltF75");
                    break;
                  case 2124:
                    sub_25AA0(a1, "FltF76");
                    break;
                  case 2125:
                    sub_25AA0(a1, "FltF77");
                    break;
                  case 2126:
                    sub_25AA0(a1, "FltF78");
                    break;
                  case 2127:
                    sub_25AA0(a1, "FltF79");
                    break;
                  case 2128:
                    sub_25AA0(a1, "FltF80");
                    break;
                  case 2129:
                    sub_25AA0(a1, "FltF81");
                    break;
                  case 2130:
                    sub_25AA0(a1, "FltF82");
                    break;
                  case 2131:
                    sub_25AA0(a1, "FltF83");
                    break;
                  case 2132:
                    sub_25AA0(a1, "FltF84");
                    break;
                  case 2133:
                    sub_25AA0(a1, "FltF85");
                    break;
                  case 2134:
                    sub_25AA0(a1, "FltF86");
                    break;
                  case 2135:
                    sub_25AA0(a1, "FltF87");
                    break;
                  case 2136:
                    sub_25AA0(a1, "FltF88");
                    break;
                  case 2137:
                    sub_25AA0(a1, "FltF89");
                    break;
                  case 2138:
                    sub_25AA0(a1, "FltF90");
                    break;
                  case 2139:
                    sub_25AA0(a1, "FltF91");
                    break;
                  case 2140:
                    sub_25AA0(a1, "FltF92");
                    break;
                  case 2141:
                    sub_25AA0(a1, "FltF93");
                    break;
                  case 2142:
                    sub_25AA0(a1, "FltF94");
                    break;
                  case 2143:
                    sub_25AA0(a1, "FltF95");
                    break;
                  case 2144:
                    sub_25AA0(a1, "FltF96");
                    break;
                  case 2145:
                    sub_25AA0(a1, "FltF97");
                    break;
                  case 2146:
                    sub_25AA0(a1, "FltF98");
                    break;
                  case 2147:
                    sub_25AA0(a1, "FltF99");
                    break;
                  case 2148:
                    sub_25AA0(a1, "FltF100");
                    break;
                  case 2149:
                    sub_25AA0(a1, "FltF101");
                    break;
                  case 2150:
                    sub_25AA0(a1, "FltF102");
                    break;
                  case 2151:
                    sub_25AA0(a1, "FltF103");
                    break;
                  case 2152:
                    sub_25AA0(a1, "FltF104");
                    break;
                  case 2153:
                    sub_25AA0(a1, "FltF105");
                    break;
                  case 2154:
                    sub_25AA0(a1, "FltF106");
                    break;
                  case 2155:
                    sub_25AA0(a1, "FltF107");
                    break;
                  case 2156:
                    sub_25AA0(a1, "FltF108");
                    break;
                  case 2157:
                    sub_25AA0(a1, "FltF109");
                    break;
                  case 2158:
                    sub_25AA0(a1, "FltF110");
                    break;
                  case 2159:
                    sub_25AA0(a1, "FltF111");
                    break;
                  case 2160:
                    sub_25AA0(a1, "FltF112");
                    break;
                  case 2161:
                    sub_25AA0(a1, "FltF113");
                    break;
                  case 2162:
                    sub_25AA0(a1, "FltF114");
                    break;
                  case 2163:
                    sub_25AA0(a1, "FltF115");
                    break;
                  case 2164:
                    sub_25AA0(a1, "FltF116");
                    break;
                  case 2165:
                    sub_25AA0(a1, "FltF117");
                    break;
                  case 2166:
                    sub_25AA0(a1, "FltF118");
                    break;
                  case 2167:
                    sub_25AA0(a1, "FltF119");
                    break;
                  case 2168:
                    sub_25AA0(a1, "FltF120");
                    break;
                  case 2169:
                    sub_25AA0(a1, "FltF121");
                    break;
                  case 2170:
                    sub_25AA0(a1, "FltF122");
                    break;
                  case 2171:
                    sub_25AA0(a1, "FltF123");
                    break;
                  case 2172:
                    sub_25AA0(a1, "FltF124");
                    break;
                  case 2173:
                    sub_25AA0(a1, "FltF125");
                    break;
                  case 2174:
                    sub_25AA0(a1, "FltF126");
                    break;
                  case 2175:
                    sub_25AA0(a1, "FltF127");
                    break;
                  case 3072:
                    sub_25AA0(a1, "ApKR0");
                    break;
                  case 3073:
                    sub_25AA0(a1, "ApKR1");
                    break;
                  case 3074:
                    sub_25AA0(a1, "ApKR2");
                    break;
                  case 3075:
                    sub_25AA0(a1, "ApKR3");
                    break;
                  case 3076:
                    sub_25AA0(a1, "ApKR4");
                    break;
                  case 3077:
                    sub_25AA0(a1, "ApKR5");
                    break;
                  case 3078:
                    sub_25AA0(a1, "ApKR6");
                    break;
                  case 3079:
                    sub_25AA0(a1, "ApKR7");
                    break;
                  case 3080:
                    sub_25AA0(a1, "AR8");
                    break;
                  case 3081:
                    sub_25AA0(a1, "AR9");
                    break;
                  case 3082:
                    sub_25AA0(a1, "AR10");
                    break;
                  case 3083:
                    sub_25AA0(a1, "AR11");
                    break;
                  case 3084:
                    sub_25AA0(a1, "AR12");
                    break;
                  case 3085:
                    sub_25AA0(a1, "AR13");
                    break;
                  case 3086:
                    sub_25AA0(a1, "AR14");
                    break;
                  case 3087:
                    sub_25AA0(a1, "AR15");
                    break;
                  case 3088:
                    sub_25AA0(a1, "RsRSC");
                    break;
                  case 3089:
                    sub_25AA0(a1, "RsBSP");
                    break;
                  case 3090:
                    sub_25AA0(a1, "RsBSPSTORE");
                    break;
                  case 3091:
                    sub_25AA0(a1, "rsrnat");
                    break;
                  case 3092:
                    sub_25AA0(a1, "ar20");
                    break;
                  case 3093:
                    sub_25AA0(a1, "stfcr");
                    break;
                  case 3094:
                    sub_25AA0(a1, "ar22");
                    break;
                  case 3095:
                    sub_25AA0(a1, "ar23");
                    break;
                  case 3096:
                    sub_25AA0(a1, "eflag");
                    break;
                  case 3097:
                    sub_25AA0(a1, "csd");
                    break;
                  case 3098:
                    sub_25AA0(a1, "ssd");
                    break;
                  case 3099:
                    sub_25AA0(a1, "cflg");
                    break;
                  case 3100:
                    sub_25AA0(a1, "stfsr");
                    break;
                  case 3101:
                    sub_25AA0(a1, "stfir");
                    break;
                  case 3102:
                    sub_25AA0(a1, "stfdr");
                    break;
                  case 3103:
                    sub_25AA0(a1, "ar31");
                    break;
                  case 3104:
                    sub_25AA0(a1, "apccv");
                    break;
                  case 3105:
                    sub_25AA0(a1, "ar33");
                    break;
                  case 3106:
                    sub_25AA0(a1, "ar34");
                    break;
                  case 3107:
                    sub_25AA0(a1, "ar35");
                    break;
                  case 3108:
                    sub_25AA0(a1, "apunat");
                    break;
                  case 3109:
                    sub_25AA0(a1, "ar37");
                    break;
                  case 3110:
                    sub_25AA0(a1, "ar38");
                    break;
                  case 3111:
                    sub_25AA0(a1, "ar39");
                    break;
                  case 3112:
                    sub_25AA0(a1, "stfpsr");
                    break;
                  case 3113:
                    sub_25AA0(a1, "ar41");
                    break;
                  case 3114:
                    sub_25AA0(a1, "ar42");
                    break;
                  case 3115:
                    sub_25AA0(a1, "ar43");
                    break;
                  case 3116:
                    sub_25AA0(a1, "apitc");
                    break;
                  case 3117:
                    sub_25AA0(a1, "ar45");
                    break;
                  case 3118:
                    sub_25AA0(a1, "ar46");
                    break;
                  case 3119:
                    sub_25AA0(a1, "ar47");
                    break;
                  case 3120:
                    sub_25AA0(a1, "ar48");
                    break;
                  case 3121:
                    sub_25AA0(a1, "ar49");
                    break;
                  case 3122:
                    sub_25AA0(a1, "ar50");
                    break;
                  case 3123:
                    sub_25AA0(a1, "ar51");
                    break;
                  case 3124:
                    sub_25AA0(a1, "ar52");
                    break;
                  case 3125:
                    sub_25AA0(a1, "ar53");
                    break;
                  case 3126:
                    sub_25AA0(a1, "ar54");
                    break;
                  case 3127:
                    sub_25AA0(a1, "ar55");
                    break;
                  case 3128:
                    sub_25AA0(a1, "ar56");
                    break;
                  case 3129:
                    sub_25AA0(a1, "ar57");
                    break;
                  case 3130:
                    sub_25AA0(a1, "ar58");
                    break;
                  case 3131:
                    sub_25AA0(a1, "ar59");
                    break;
                  case 3132:
                    sub_25AA0(a1, "ar60");
                    break;
                  case 3133:
                    sub_25AA0(a1, "ar61");
                    break;
                  case 3134:
                    sub_25AA0(a1, "ar62");
                    break;
                  case 3135:
                    sub_25AA0(a1, "ar63");
                    break;
                  case 3136:
                    sub_25AA0(a1, "rspfs");
                    break;
                  case 3137:
                    sub_25AA0(a1, "aplc");
                    break;
                  case 3138:
                    sub_25AA0(a1, "apec");
                    break;
                  case 3139:
                    sub_25AA0(a1, "ar67");
                    break;
                  case 3140:
                    sub_25AA0(a1, "ar68");
                    break;
                  case 3141:
                    sub_25AA0(a1, "ar69");
                    break;
                  case 3142:
                    sub_25AA0(a1, "ar70");
                    break;
                  case 3143:
                    sub_25AA0(a1, "ar71");
                    break;
                  case 3144:
                    sub_25AA0(a1, "ar72");
                    break;
                  case 3145:
                    sub_25AA0(a1, "ar73");
                    break;
                  case 3146:
                    sub_25AA0(a1, "ar74");
                    break;
                  case 3147:
                    sub_25AA0(a1, "ar75");
                    break;
                  case 3148:
                    sub_25AA0(a1, "ar76");
                    break;
                  case 3149:
                    sub_25AA0(a1, "ar77");
                    break;
                  case 3150:
                    sub_25AA0(a1, "ar78");
                    break;
                  case 3151:
                    sub_25AA0(a1, "ar79");
                    break;
                  case 3152:
                    sub_25AA0(a1, "ar80");
                    break;
                  case 3153:
                    sub_25AA0(a1, "ar81");
                    break;
                  case 3154:
                    sub_25AA0(a1, "ar82");
                    break;
                  case 3155:
                    sub_25AA0(a1, "ar83");
                    break;
                  case 3156:
                    sub_25AA0(a1, "ar84");
                    break;
                  case 3157:
                    sub_25AA0(a1, "ar85");
                    break;
                  case 3158:
                    sub_25AA0(a1, "ar86");
                    break;
                  case 3159:
                    sub_25AA0(a1, "ar87");
                    break;
                  case 3160:
                    sub_25AA0(a1, "ar88");
                    break;
                  case 3161:
                    sub_25AA0(a1, "ar89");
                    break;
                  case 3162:
                    sub_25AA0(a1, "ar90");
                    break;
                  case 3163:
                    sub_25AA0(a1, "ar91");
                    break;
                  case 3164:
                    sub_25AA0(a1, "ar92");
                    break;
                  case 3165:
                    sub_25AA0(a1, "ar93");
                    break;
                  case 3166:
                    sub_25AA0(a1, "ar94");
                    break;
                  case 3167:
                    sub_25AA0(a1, "ar95");
                    break;
                  case 3168:
                    sub_25AA0(a1, "ar96");
                    break;
                  case 3169:
                    sub_25AA0(a1, "ar97");
                    break;
                  case 3170:
                    sub_25AA0(a1, "ar98");
                    break;
                  case 3171:
                    sub_25AA0(a1, "ar99");
                    break;
                  case 3172:
                    sub_25AA0(a1, "ar100");
                    break;
                  case 3173:
                    sub_25AA0(a1, "ar101");
                    break;
                  case 3174:
                    sub_25AA0(a1, "ar102");
                    break;
                  case 3175:
                    sub_25AA0(a1, "ar103");
                    break;
                  case 3176:
                    sub_25AA0(a1, "ar104");
                    break;
                  case 3177:
                    sub_25AA0(a1, "ar105");
                    break;
                  case 3178:
                    sub_25AA0(a1, "ar106");
                    break;
                  case 3179:
                    sub_25AA0(a1, "ar107");
                    break;
                  case 3180:
                    sub_25AA0(a1, "ar108");
                    break;
                  case 3181:
                    sub_25AA0(a1, "ar109");
                    break;
                  case 3182:
                    sub_25AA0(a1, "ar110");
                    break;
                  case 3183:
                    sub_25AA0(a1, "ar111");
                    break;
                  case 3184:
                    sub_25AA0(a1, "ar112");
                    break;
                  case 3185:
                    sub_25AA0(a1, "ar113");
                    break;
                  case 3186:
                    sub_25AA0(a1, "ar114");
                    break;
                  case 3187:
                    sub_25AA0(a1, "ar115");
                    break;
                  case 3188:
                    sub_25AA0(a1, "ar116");
                    break;
                  case 3189:
                    sub_25AA0(a1, "ar117");
                    break;
                  case 3190:
                    sub_25AA0(a1, "ar118");
                    break;
                  case 3191:
                    sub_25AA0(a1, "ar119");
                    break;
                  case 3192:
                    sub_25AA0(a1, "ar120");
                    break;
                  case 3193:
                    sub_25AA0(a1, "ar121");
                    break;
                  case 3194:
                    sub_25AA0(a1, "ar122");
                    break;
                  case 3195:
                    sub_25AA0(a1, "ar123");
                    break;
                  case 3196:
                    sub_25AA0(a1, "ar124");
                    break;
                  case 3197:
                    sub_25AA0(a1, "ar125");
                    break;
                  case 3198:
                    sub_25AA0(a1, "ar126");
                    break;
                  case 3199:
                    sub_25AA0(a1, "ar127");
                    break;
                  case 3328:
                    sub_25AA0(a1, "cpuid0");
                    break;
                  case 3329:
                    sub_25AA0(a1, "cpuid1");
                    break;
                  case 3330:
                    sub_25AA0(a1, "cpuid2");
                    break;
                  case 3331:
                    sub_25AA0(a1, "cpuid3");
                    break;
                  case 3332:
                    sub_25AA0(a1, "cpuid4");
                    break;
                  case 4096:
                    sub_25AA0(a1, "apdcr");
                    break;
                  case 4097:
                    sub_25AA0(a1, "apitm");
                    break;
                  case 4098:
                    sub_25AA0(a1, "apiva");
                    break;
                  case 4099:
                    goto LABEL_398;
                  case 4100:
                    goto LABEL_397;
                  case 4101:
LABEL_404:
                    sub_25AA0(a1, "cr5");
                    break;
                  case 4102:
LABEL_403:
                    sub_25AA0(a1, "cr6");
                    break;
                  case 4103:
LABEL_402:
                    sub_25AA0(a1, "cr7");
                    break;
                  case 4104:
                    sub_25AA0(a1, "appta");
                    break;
                  case 4105:
                    sub_25AA0(a1, "apgpta");
                    break;
                  case 4106:
LABEL_1209:
                    sub_25AA0(a1, "cr10");
                    break;
                  case 4107:
LABEL_1208:
                    sub_25AA0(a1, "cr11");
                    break;
                  case 4108:
LABEL_1207:
                    sub_25AA0(a1, "cr12");
                    break;
                  case 4109:
LABEL_1206:
                    sub_25AA0(a1, "cr13");
                    break;
                  case 4110:
LABEL_1205:
                    sub_25AA0(a1, "cr14");
                    break;
                  case 4111:
LABEL_1204:
                    sub_25AA0(a1, "cr15");
                    break;
                  case 4112:
                    sub_25AA0(a1, "stipsr");
                    break;
                  case 4113:
                    sub_25AA0(a1, "stisr");
                    break;
                  case 4114:
LABEL_1201:
                    sub_25AA0(a1, "cr18");
                    break;
                  case 4115:
                    sub_25AA0(a1, "stiip");
                    break;
                  case 4116:
                    sub_25AA0(a1, "stifa");
                    break;
                  case 4117:
                    sub_25AA0(a1, "stitir");
                    break;
                  case 4118:
                    sub_25AA0(a1, "stiipa");
                    break;
                  case 4119:
                    sub_25AA0(a1, "stifs");
                    break;
                  case 4120:
                    sub_25AA0(a1, "stiim");
                    break;
                  case 4121:
                    sub_25AA0(a1, "stiha");
                    break;
                  case 4122:
LABEL_1193:
                    sub_25AA0(a1, "cr26");
                    break;
                  case 4123:
LABEL_1192:
                    sub_25AA0(a1, "cr27");
                    break;
                  case 4124:
LABEL_1191:
                    sub_25AA0(a1, "cr28");
                    break;
                  case 4125:
LABEL_1190:
                    sub_25AA0(a1, "cr29");
                    break;
                  case 4126:
LABEL_1189:
                    sub_25AA0(a1, "cr30");
                    break;
                  case 4127:
LABEL_1188:
                    sub_25AA0(a1, "cr31");
                    break;
                  case 4128:
LABEL_1187:
                    sub_25AA0(a1, "cr32");
                    break;
                  case 4129:
LABEL_1186:
                    sub_25AA0(a1, "cr33");
                    break;
                  case 4130:
LABEL_1185:
                    sub_25AA0(a1, "cr34");
                    break;
                  case 4131:
LABEL_1184:
                    sub_25AA0(a1, "cr35");
                    break;
                  case 4132:
LABEL_1183:
                    sub_25AA0(a1, "cr36");
                    break;
                  case 4133:
LABEL_1182:
                    sub_25AA0(a1, "cr37");
                    break;
                  case 4134:
LABEL_1629:
                    sub_25AA0(a1, "cr38");
                    break;
                  case 4135:
LABEL_1628:
                    sub_25AA0(a1, "cr39");
                    break;
                  case 4136:
LABEL_1627:
                    sub_25AA0(a1, "cr40");
                    break;
                  case 4137:
LABEL_1626:
                    sub_25AA0(a1, "cr41");
                    break;
                  case 4138:
LABEL_1625:
                    sub_25AA0(a1, "cr42");
                    break;
                  case 4139:
LABEL_1624:
                    sub_25AA0(a1, "cr43");
                    break;
                  case 4140:
LABEL_1623:
                    sub_25AA0(a1, "cr44");
                    break;
                  case 4141:
LABEL_1622:
                    sub_25AA0(a1, "cr45");
                    break;
                  case 4142:
LABEL_1621:
                    sub_25AA0(a1, "cr46");
                    break;
                  case 4143:
LABEL_1620:
                    sub_25AA0(a1, "cr47");
                    break;
                  case 4144:
LABEL_1619:
                    sub_25AA0(a1, "cr48");
                    break;
                  case 4145:
LABEL_1618:
                    sub_25AA0(a1, "cr49");
                    break;
                  case 4146:
LABEL_1617:
                    sub_25AA0(a1, "cr50");
                    break;
                  case 4147:
LABEL_1616:
                    sub_25AA0(a1, "cr51");
                    break;
                  case 4148:
LABEL_1615:
                    sub_25AA0(a1, "cr52");
                    break;
                  case 4149:
LABEL_1614:
                    sub_25AA0(a1, "cr53");
                    break;
                  case 4150:
LABEL_1613:
                    sub_25AA0(a1, "cr54");
                    break;
                  case 4151:
LABEL_1612:
                    sub_25AA0(a1, "cr55");
                    break;
                  case 4152:
LABEL_1611:
                    sub_25AA0(a1, "cr56");
                    break;
                  case 4153:
LABEL_1610:
                    sub_25AA0(a1, "cr57");
                    break;
                  case 4154:
LABEL_1609:
                    sub_25AA0(a1, "cr58");
                    break;
                  case 4155:
LABEL_1608:
                    sub_25AA0(a1, "cr59");
                    break;
                  case 4156:
LABEL_1607:
                    sub_25AA0(a1, "cr60");
                    break;
                  case 4157:
LABEL_1606:
                    sub_25AA0(a1, "cr61");
                    break;
                  case 4158:
LABEL_1605:
                    sub_25AA0(a1, "cr62");
                    break;
                  case 4159:
LABEL_1604:
                    sub_25AA0(a1, "cr63");
                    break;
                  case 4160:
                    sub_25AA0(a1, "salid");
                    break;
                  case 4161:
                    sub_25AA0(a1, "saivr");
                    break;
                  case 4162:
                    sub_25AA0(a1, "satpr");
                    break;
                  case 4163:
                    sub_25AA0(a1, "saeoi");
                    break;
                  case 4164:
                    sub_25AA0(a1, "sairr0");
                    break;
                  case 4165:
                    sub_25AA0(a1, "sairr1");
                    break;
                  case 4166:
                    sub_25AA0(a1, "sairr2");
                    break;
                  case 4167:
                    sub_25AA0(a1, "sairr3");
                    break;
                  case 4168:
                    sub_25AA0(a1, "saitv");
                    break;
                  case 4169:
                    sub_25AA0(a1, "sapmv");
                    break;
                  case 4170:
                    sub_25AA0(a1, "sacmcv");
                    break;
                  case 4171:
                    sub_25AA0(a1, "cr75");
                    break;
                  case 4172:
                    sub_25AA0(a1, "cr76");
                    break;
                  case 4173:
                    sub_25AA0(a1, "cr77");
                    break;
                  case 4174:
                    sub_25AA0(a1, "cr78");
                    break;
                  case 4175:
                    sub_25AA0(a1, "cr79");
                    break;
                  case 4176:
                    sub_25AA0(a1, "salrr0");
                    break;
                  case 4177:
                    sub_25AA0(a1, "salrr1");
                    break;
                  case 4178:
                    sub_25AA0(a1, "cr82");
                    break;
                  case 4179:
                    sub_25AA0(a1, "cr83");
                    break;
                  case 4180:
                    sub_25AA0(a1, "cr84");
                    break;
                  case 4181:
                    sub_25AA0(a1, "cr85");
                    break;
                  case 4182:
                    sub_25AA0(a1, "cr86");
                    break;
                  case 4183:
                    sub_25AA0(a1, "cr87");
                    break;
                  case 4184:
                    sub_25AA0(a1, "cr88");
                    break;
                  case 4185:
                    sub_25AA0(a1, "cr89");
                    break;
                  case 4186:
                    sub_25AA0(a1, "cr90");
                    break;
                  case 4187:
                    sub_25AA0(a1, "cr91");
                    break;
                  case 4188:
                    sub_25AA0(a1, "cr92");
                    break;
                  case 4189:
                    sub_25AA0(a1, "cr93");
                    break;
                  case 4190:
                    sub_25AA0(a1, "cr94");
                    break;
                  case 4191:
                    sub_25AA0(a1, "cr95");
                    break;
                  case 4192:
                    sub_25AA0(a1, "cr96");
                    break;
                  case 4193:
                    sub_25AA0(a1, "cr97");
                    break;
                  case 4194:
                    sub_25AA0(a1, "cr98");
                    break;
                  case 4195:
                    sub_25AA0(a1, "cr99");
                    break;
                  case 4196:
                    sub_25AA0(a1, "cr100");
                    break;
                  case 4197:
                    sub_25AA0(a1, "cr101");
                    break;
                  case 4198:
                    sub_25AA0(a1, "cr102");
                    break;
                  case 4199:
                    sub_25AA0(a1, "cr103");
                    break;
                  case 4200:
                    sub_25AA0(a1, "cr104");
                    break;
                  case 4201:
                    sub_25AA0(a1, "cr105");
                    break;
                  case 4202:
                    sub_25AA0(a1, "cr106");
                    break;
                  case 4203:
                    sub_25AA0(a1, "cr107");
                    break;
                  case 4204:
                    sub_25AA0(a1, "cr108");
                    break;
                  case 4205:
                    sub_25AA0(a1, "cr109");
                    break;
                  case 4206:
                    sub_25AA0(a1, "cr110");
                    break;
                  case 4207:
                    sub_25AA0(a1, "cr111");
                    break;
                  case 4208:
                    sub_25AA0(a1, "cr112");
                    break;
                  case 4209:
                    sub_25AA0(a1, "cr113");
                    break;
                  case 4210:
                    sub_25AA0(a1, "cr114");
                    break;
                  case 4211:
                    sub_25AA0(a1, "cr115");
                    break;
                  case 4212:
                    sub_25AA0(a1, "cr116");
                    break;
                  case 4213:
                    sub_25AA0(a1, "cr117");
                    break;
                  case 4214:
                    sub_25AA0(a1, "cr118");
                    break;
                  case 4215:
                    sub_25AA0(a1, "cr119");
                    break;
                  case 4216:
                    sub_25AA0(a1, "cr120");
                    break;
                  case 4217:
                    sub_25AA0(a1, "cr121");
                    break;
                  case 4218:
                    sub_25AA0(a1, "cr122");
                    break;
                  case 4219:
                    sub_25AA0(a1, "cr123");
                    break;
                  case 4220:
                    sub_25AA0(a1, "cr124");
                    break;
                  case 4221:
                    sub_25AA0(a1, "cr125");
                    break;
                  case 4222:
                    sub_25AA0(a1, "cr126");
                    break;
                  case 4223:
                    sub_25AA0(a1, "cr127");
                    break;
                  case 5120:
                    sub_25AA0(a1, "pkr0");
                    break;
                  case 5121:
                    sub_25AA0(a1, "pkr1");
                    break;
                  case 5122:
                    sub_25AA0(a1, "pkr2");
                    break;
                  case 5123:
                    sub_25AA0(a1, "pkr3");
                    break;
                  case 5124:
                    sub_25AA0(a1, "pkr4");
                    break;
                  case 5125:
                    sub_25AA0(a1, "pkr5");
                    break;
                  case 5126:
                    sub_25AA0(a1, "pkr6");
                    break;
                  case 5127:
                    sub_25AA0(a1, "pkr7");
                    break;
                  case 5128:
                    sub_25AA0(a1, "pkr8");
                    break;
                  case 5129:
                    sub_25AA0(a1, "pkr9");
                    break;
                  case 5130:
                    sub_25AA0(a1, "pkr10");
                    break;
                  case 5131:
                    sub_25AA0(a1, "pkr11");
                    break;
                  case 5132:
                    sub_25AA0(a1, "pkr12");
                    break;
                  case 5133:
                    sub_25AA0(a1, "pkr13");
                    break;
                  case 5134:
                    sub_25AA0(a1, "pkr14");
                    break;
                  case 5135:
                    sub_25AA0(a1, "pkr15");
                    break;
                  default:
                    goto LABEL_51;
                }
              }
              break;
            default:
              goto LABEL_51;
          }
          return;
        }
LABEL_51:
        sub_37FD0(a1, (__int64)"reg %d", a3);
        return;
      }
      if ( (_DWORD)a2 == 192 )
      {
        switch ( a3 )
        {
          case 0:
LABEL_218:
            sub_25AA0(a1, "noreg");
            break;
          case 10:
LABEL_248:
            sub_25AA0(a1, "d0");
            break;
          case 11:
LABEL_249:
            sub_25AA0(a1, "d1");
            break;
          case 12:
LABEL_247:
            sub_25AA0(a1, "d2");
            break;
          case 13:
LABEL_246:
            sub_25AA0(a1, "d3");
            break;
          case 14:
LABEL_361:
            sub_25AA0(a1, "d4");
            break;
          case 15:
LABEL_362:
            sub_25AA0(a1, "d5");
            break;
          case 16:
LABEL_360:
            sub_25AA0(a1, "d6");
            break;
          case 17:
LABEL_359:
            sub_25AA0(a1, "d7");
            break;
          case 18:
LABEL_358:
            sub_25AA0(a1, "d8");
            break;
          case 19:
LABEL_352:
            sub_25AA0(a1, "d9");
            break;
          case 20:
LABEL_357:
            sub_25AA0(a1, "d10");
            break;
          case 21:
LABEL_356:
            sub_25AA0(a1, "d11");
            break;
          case 22:
LABEL_355:
            sub_25AA0(a1, "d12");
            break;
          case 23:
LABEL_354:
            sub_25AA0(a1, "d13");
            break;
          case 24:
LABEL_353:
            sub_25AA0(a1, "d14");
            break;
          case 25:
LABEL_363:
            sub_25AA0(a1, "d15");
            break;
          case 26:
LABEL_262:
            sub_25AA0(a1, "a0");
            break;
          case 27:
LABEL_261:
            sub_25AA0(a1, "a1");
            break;
          case 28:
LABEL_260:
            sub_25AA0(a1, "a2");
            break;
          case 29:
LABEL_259:
            sub_25AA0(a1, "a3");
            break;
          case 30:
            sub_25AA0(a1, "a4");
            break;
          case 31:
            sub_25AA0(a1, "a5");
            break;
          case 32:
            sub_25AA0(a1, "a6");
            break;
          case 33:
            sub_25AA0(a1, "a7");
            break;
          case 34:
            sub_25AA0(a1, "a8");
            break;
          case 35:
            sub_25AA0(a1, "a9");
            break;
          case 36:
            sub_25AA0(a1, "a10");
            break;
          case 37:
            sub_25AA0(a1, "a11");
            break;
          case 38:
            sub_25AA0(a1, "a12");
            break;
          case 39:
            sub_25AA0(a1, "a13");
            break;
          case 40:
            sub_25AA0(a1, "a14");
            break;
          case 41:
            sub_25AA0(a1, "a15");
            break;
          case 42:
LABEL_270:
            sub_25AA0(a1, "e0");
            break;
          case 43:
LABEL_268:
            sub_25AA0(a1, "e2");
            break;
          case 44:
LABEL_266:
            sub_25AA0(a1, "e4");
            break;
          case 45:
LABEL_264:
            sub_25AA0(a1, "e6");
            break;
          case 46:
            sub_25AA0(a1, "e8");
            break;
          case 47:
            sub_25AA0(a1, "e10");
            break;
          case 48:
            sub_25AA0(a1, "e12");
            break;
          case 49:
            sub_25AA0(a1, "e14");
            break;
          case 50:
            sub_25AA0(a1, "ea0");
            break;
          case 51:
            sub_25AA0(a1, "ea2");
            break;
          case 52:
            sub_25AA0(a1, "ea4");
            break;
          case 53:
            sub_25AA0(a1, "ea6");
            break;
          case 54:
            sub_25AA0(a1, "ea8");
            break;
          case 55:
            sub_25AA0(a1, "ea10");
            break;
          case 56:
            sub_25AA0(a1, "ea12");
            break;
          case 57:
            sub_25AA0(a1, "ea14");
            break;
          case 58:
LABEL_240:
            sub_25AA0(a1, "psw");
            break;
          case 59:
            sub_25AA0(a1, "pcxi");
            break;
          case 60:
LABEL_217:
            sub_25AA0(a1, "pc");
            break;
          case 61:
            sub_25AA0(a1, "fcx");
            break;
          case 62:
            sub_25AA0(a1, "lcx");
            break;
          case 63:
            sub_25AA0(a1, "isp");
            break;
          case 64:
            sub_25AA0(a1, "icr");
            break;
          case 65:
            sub_25AA0(a1, "biv");
            break;
          case 66:
            sub_25AA0(a1, "btv");
            break;
          case 67:
            sub_25AA0(a1, "syscon");
            break;
          case 68:
            sub_25AA0(a1, "dprx_0");
            break;
          case 69:
            sub_25AA0(a1, "dprx_1");
            break;
          case 70:
            sub_25AA0(a1, "dprx_2");
            break;
          case 71:
            sub_25AA0(a1, "dprx_3");
            break;
          case 72:
            sub_25AA0(a1, "dbgssr");
            break;
          case 73:
            sub_25AA0(a1, "exevt");
            break;
          case 74:
            sub_25AA0(a1, "swevt");
            break;
          case 75:
            sub_25AA0(a1, "crevt");
            break;
          case 76:
            sub_25AA0(a1, "trnevt");
            break;
          case 77:
            sub_25AA0(a1, "mmucon");
            break;
          case 78:
            sub_25AA0(a1, "asi");
            break;
          case 79:
            sub_25AA0(a1, "tva");
            break;
          case 80:
            sub_25AA0(a1, "tpa");
            break;
          case 81:
            sub_25AA0(a1, "tpx");
            break;
          case 82:
            sub_25AA0(a1, "tfa");
            break;
          default:
            goto LABEL_51;
        }
      }
      else if ( (int)a2 <= 192 )
      {
        if ( (_DWORD)a2 == 160 )
        {
          switch ( a3 )
          {
            case 0:
              goto LABEL_218;
            case 10:
              goto LABEL_270;
            case 11:
              sub_25AA0(a1, "e1");
              break;
            case 12:
              goto LABEL_268;
            case 13:
              sub_25AA0(a1, "e3");
              break;
            case 14:
              goto LABEL_266;
            case 15:
              sub_25AA0(a1, "e5");
              break;
            case 16:
              goto LABEL_264;
            case 17:
              sub_25AA0(a1, "e7");
              break;
            case 20:
              goto LABEL_262;
            case 21:
              goto LABEL_261;
            case 22:
              goto LABEL_260;
            case 23:
              goto LABEL_259;
            case 30:
              goto LABEL_248;
            case 31:
              goto LABEL_249;
            case 32:
              goto LABEL_247;
            case 33:
              goto LABEL_246;
            case 40:
LABEL_272:
              sub_25AA0(a1, "fs0");
              break;
            case 41:
LABEL_302:
              sub_25AA0(a1, "fs1");
              break;
            case 42:
LABEL_301:
              sub_25AA0(a1, "fs2");
              break;
            case 43:
LABEL_300:
              sub_25AA0(a1, "fs3");
              break;
            case 44:
LABEL_299:
              sub_25AA0(a1, "fs4");
              break;
            case 45:
LABEL_298:
              sub_25AA0(a1, "fs5");
              break;
            case 46:
LABEL_297:
              sub_25AA0(a1, "fs6");
              break;
            case 47:
LABEL_295:
              sub_25AA0(a1, "fs7");
              break;
            case 48:
LABEL_296:
              sub_25AA0(a1, "fs8");
              break;
            case 49:
LABEL_294:
              sub_25AA0(a1, "fs9");
              break;
            case 50:
LABEL_293:
              sub_25AA0(a1, "fs10");
              break;
            case 51:
LABEL_292:
              sub_25AA0(a1, "fs11");
              break;
            case 52:
LABEL_291:
              sub_25AA0(a1, "fs12");
              break;
            case 53:
LABEL_290:
              sub_25AA0(a1, "fs13");
              break;
            case 54:
LABEL_289:
              sub_25AA0(a1, "fs14");
              break;
            case 55:
LABEL_288:
              sub_25AA0(a1, "fs15");
              break;
            case 56:
LABEL_303:
              sub_25AA0(a1, "fs16");
              break;
            case 57:
LABEL_287:
              sub_25AA0(a1, "fs17");
              break;
            case 58:
LABEL_286:
              sub_25AA0(a1, "fs18");
              break;
            case 59:
LABEL_285:
              sub_25AA0(a1, "fs19");
              break;
            case 60:
LABEL_284:
              sub_25AA0(a1, "fs20");
              break;
            case 61:
LABEL_283:
              sub_25AA0(a1, "fs21");
              break;
            case 62:
LABEL_282:
              sub_25AA0(a1, "fs22");
              break;
            case 63:
LABEL_280:
              sub_25AA0(a1, "fs23");
              break;
            case 64:
LABEL_281:
              sub_25AA0(a1, "fs24");
              break;
            case 65:
LABEL_279:
              sub_25AA0(a1, "fs25");
              break;
            case 66:
LABEL_277:
              sub_25AA0(a1, "fs26");
              break;
            case 67:
LABEL_276:
              sub_25AA0(a1, "fs27");
              break;
            case 68:
LABEL_275:
              sub_25AA0(a1, "fs28");
              break;
            case 69:
LABEL_274:
              sub_25AA0(a1, "fs29");
              break;
            case 70:
LABEL_271:
              sub_25AA0(a1, "fs30");
              break;
            case 71:
LABEL_278:
              sub_25AA0(a1, "fs31");
              break;
            case 80:
LABEL_273:
              sub_25AA0(a1, "sp");
              break;
            case 81:
              goto LABEL_217;
            case 82:
              sub_25AA0(a1, "mdr");
              break;
            case 83:
              sub_25AA0(a1, "mdrq");
              break;
            case 84:
              sub_25AA0(a1, "mcrh");
              break;
            case 85:
              sub_25AA0(a1, "mcrl");
              break;
            case 86:
              sub_25AA0(a1, "mcvf");
              break;
            case 87:
              sub_25AA0(a1, "epsw");
              break;
            case 88:
              sub_25AA0(a1, "fpcr");
              break;
            case 89:
              sub_25AA0(a1, "lir");
              break;
            case 90:
              sub_25AA0(a1, "lar");
              break;
            default:
              goto LABEL_51;
          }
        }
        else
        {
          if ( (_DWORD)a2 != 176 )
            goto LABEL_51;
          switch ( a3 )
          {
            case 0:
              goto LABEL_218;
            case 10:
LABEL_229:
              sub_25AA0(a1, "r0");
              break;
            case 11:
LABEL_232:
              sub_25AA0(a1, "r1");
              break;
            case 12:
LABEL_228:
              sub_25AA0(a1, "r2");
              break;
            case 13:
LABEL_231:
              sub_25AA0(a1, "r3");
              break;
            case 14:
LABEL_230:
              sub_25AA0(a1, "r4");
              break;
            case 15:
LABEL_225:
              sub_25AA0(a1, "r5");
              break;
            case 16:
LABEL_224:
              sub_25AA0(a1, "r6");
              break;
            case 17:
LABEL_223:
              sub_25AA0(a1, "r7");
              break;
            case 18:
LABEL_222:
              sub_25AA0(a1, "r8");
              break;
            case 19:
LABEL_241:
              sub_25AA0(a1, "r9");
              break;
            case 20:
LABEL_221:
              sub_25AA0(a1, "r10");
              break;
            case 21:
LABEL_220:
              sub_25AA0(a1, "r11");
              break;
            case 22:
LABEL_219:
              sub_25AA0(a1, "r12");
              break;
            case 23:
LABEL_227:
              sub_25AA0(a1, "r13");
              break;
            case 24:
LABEL_226:
              sub_25AA0(a1, "r14");
              break;
            case 25:
LABEL_242:
              sub_25AA0(a1, "r15");
              break;
            case 26:
              goto LABEL_240;
            case 27:
              sub_25AA0(a1, "cbr");
              break;
            case 28:
              sub_25AA0(a1, "spi");
              break;
            case 29:
              sub_25AA0(a1, "spu");
              break;
            case 30:
              sub_25AA0(a1, "spo");
              break;
            case 31:
              sub_25AA0(a1, "bpc");
              break;
            case 32:
              sub_25AA0(a1, "achi");
              break;
            case 33:
              sub_25AA0(a1, "aclo");
              break;
            case 34:
              goto LABEL_217;
            default:
              goto LABEL_51;
          }
        }
      }
      else
      {
        if ( (_DWORD)a2 == 244 )
          goto LABEL_54;
        if ( (int)a2 <= 244 )
        {
          if ( (_DWORD)a2 == 208 )
          {
            switch ( a3 )
            {
              case 1:
LABEL_2537:
                sub_25AA0(a1, "al");
                break;
              case 2:
LABEL_2536:
                sub_25AA0(a1, "cl");
                break;
              case 3:
LABEL_2541:
                sub_25AA0(a1, "dl");
                break;
              case 4:
LABEL_2540:
                sub_25AA0(a1, "bl");
                break;
              case 5:
LABEL_2539:
                sub_25AA0(a1, "ah");
                break;
              case 6:
LABEL_2538:
                sub_25AA0(a1, "ch");
                break;
              case 7:
LABEL_2245:
                sub_25AA0(a1, "dh");
                break;
              case 8:
LABEL_2244:
                sub_25AA0(a1, "bh");
                break;
              case 9:
LABEL_2243:
                sub_25AA0(a1, "ax");
                break;
              case 10:
LABEL_2242:
                sub_25AA0(a1, "cx");
                break;
              case 11:
LABEL_2241:
                sub_25AA0(a1, "dx");
                break;
              case 12:
LABEL_2240:
                sub_25AA0(a1, "bx");
                break;
              case 13:
                goto LABEL_273;
              case 14:
LABEL_2239:
                sub_25AA0(a1, "bp");
                break;
              case 15:
LABEL_2253:
                sub_25AA0(a1, "si");
                break;
              case 16:
LABEL_2252:
                sub_25AA0(a1, "di");
                break;
              case 17:
LABEL_2251:
                sub_25AA0(a1, "eax");
                break;
              case 18:
LABEL_2250:
                sub_25AA0(a1, "ecx");
                break;
              case 19:
LABEL_2249:
                sub_25AA0(a1, "edx");
                break;
              case 20:
LABEL_2248:
                sub_25AA0(a1, "ebx");
                break;
              case 21:
LABEL_2247:
                sub_25AA0(a1, "esp");
                break;
              case 22:
LABEL_2246:
                sub_25AA0(a1, "ebp");
                break;
              case 23:
LABEL_469:
                sub_25AA0(a1, "esi");
                break;
              case 24:
LABEL_468:
                sub_25AA0(a1, "edi");
                break;
              case 25:
LABEL_467:
                sub_25AA0(a1, "es");
                break;
              case 26:
LABEL_466:
                sub_25AA0(a1, "cs");
                break;
              case 27:
LABEL_465:
                sub_25AA0(a1, "ss");
                break;
              case 28:
LABEL_464:
                sub_25AA0(a1, "ds");
                break;
              case 29:
LABEL_463:
                sub_25AA0(a1, "fs");
                break;
              case 30:
LABEL_462:
                sub_25AA0(a1, "gs");
                break;
              case 32:
LABEL_1061:
                sub_25AA0(a1, "flags");
                break;
              case 33:
                sub_25AA0(a1, "rip");
                break;
              case 34:
LABEL_1059:
                sub_25AA0(a1, "eflags");
                break;
              case 80:
LABEL_401:
                sub_25AA0(a1, "cr0");
                break;
              case 81:
LABEL_400:
                sub_25AA0(a1, "cr1");
                break;
              case 82:
LABEL_399:
                sub_25AA0(a1, "cr2");
                break;
              case 83:
LABEL_398:
                sub_25AA0(a1, "cr3");
                break;
              case 84:
LABEL_397:
                sub_25AA0(a1, "cr4");
                break;
              case 88:
LABEL_669:
                sub_25AA0(a1, "cr8");
                break;
              case 90:
LABEL_668:
                sub_25AA0(a1, "dr0");
                break;
              case 91:
LABEL_667:
                sub_25AA0(a1, "dr1");
                break;
              case 92:
LABEL_666:
                sub_25AA0(a1, "dr2");
                break;
              case 93:
LABEL_665:
                sub_25AA0(a1, "dr3");
                break;
              case 94:
LABEL_664:
                sub_25AA0(a1, "dr4");
                break;
              case 95:
LABEL_663:
                sub_25AA0(a1, "dr5");
                break;
              case 96:
LABEL_662:
                sub_25AA0(a1, "dr6");
                break;
              case 97:
LABEL_661:
                sub_25AA0(a1, "dr7");
                break;
              case 98:
LABEL_660:
                sub_25AA0(a1, "dr8");
                break;
              case 99:
                sub_25AA0(a1, "dr9");
                break;
              case 100:
LABEL_658:
                sub_25AA0(a1, "dr10");
                break;
              case 101:
                sub_25AA0(a1, "dr11");
                break;
              case 102:
LABEL_656:
                sub_25AA0(a1, "dr12");
                break;
              case 103:
                sub_25AA0(a1, "dr13");
                break;
              case 104:
LABEL_654:
                sub_25AA0(a1, "dr14");
                break;
              case 105:
                sub_25AA0(a1, "dr15");
                break;
              case 110:
LABEL_652:
                sub_25AA0(a1, "gdtr");
                break;
              case 111:
LABEL_651:
                sub_25AA0(a1, "gdtl");
                break;
              case 112:
LABEL_650:
                sub_25AA0(a1, "idtr");
                break;
              case 113:
LABEL_649:
                sub_25AA0(a1, "idtl");
                break;
              case 114:
LABEL_648:
                sub_25AA0(a1, "ldtr");
                break;
              case 115:
LABEL_647:
                sub_25AA0(a1, "tr");
                break;
              case 128:
LABEL_646:
                sub_25AA0(a1, "st0");
                break;
              case 129:
LABEL_645:
                sub_25AA0(a1, "st1");
                break;
              case 130:
LABEL_644:
                sub_25AA0(a1, "st2");
                break;
              case 131:
LABEL_643:
                sub_25AA0(a1, "st3");
                break;
              case 132:
LABEL_642:
                sub_25AA0(a1, "st4");
                break;
              case 133:
LABEL_641:
                sub_25AA0(a1, "st5");
                break;
              case 134:
LABEL_640:
                sub_25AA0(a1, "st6");
                break;
              case 135:
LABEL_639:
                sub_25AA0(a1, "st7");
                break;
              case 136:
LABEL_638:
                sub_25AA0(a1, "ctrl");
                break;
              case 137:
LABEL_637:
                sub_25AA0(a1, "stat");
                break;
              case 138:
LABEL_636:
                sub_25AA0(a1, "tag");
                break;
              case 139:
LABEL_635:
                sub_25AA0(a1, "fpip");
                break;
              case 140:
LABEL_634:
                sub_25AA0(a1, "fpcs");
                break;
              case 141:
LABEL_633:
                sub_25AA0(a1, "fpdo");
                break;
              case 142:
LABEL_632:
                sub_25AA0(a1, "fpds");
                break;
              case 143:
LABEL_631:
                sub_25AA0(a1, "isem");
                break;
              case 144:
LABEL_630:
                sub_25AA0(a1, "fpeip");
                break;
              case 145:
LABEL_629:
                sub_25AA0(a1, "fpedo");
                break;
              case 146:
LABEL_628:
                sub_25AA0(a1, "mm0");
                break;
              case 147:
LABEL_627:
                sub_25AA0(a1, "mm1");
                break;
              case 148:
LABEL_626:
                sub_25AA0(a1, "mm2");
                break;
              case 149:
LABEL_625:
                sub_25AA0(a1, "mm3");
                break;
              case 150:
LABEL_624:
                sub_25AA0(a1, "mm4");
                break;
              case 151:
LABEL_623:
                sub_25AA0(a1, "mm5");
                break;
              case 152:
LABEL_622:
                sub_25AA0(a1, "mm6");
                break;
              case 153:
LABEL_621:
                sub_25AA0(a1, "mm7");
                break;
              case 154:
LABEL_620:
                sub_25AA0(a1, "xmm0");
                break;
              case 155:
LABEL_619:
                sub_25AA0(a1, "xmm1");
                break;
              case 156:
LABEL_618:
                sub_25AA0(a1, "xmm2");
                break;
              case 157:
LABEL_617:
                sub_25AA0(a1, "xmm3");
                break;
              case 158:
LABEL_616:
                sub_25AA0(a1, "xmm4");
                break;
              case 159:
LABEL_615:
                sub_25AA0(a1, "xmm5");
                break;
              case 160:
LABEL_614:
                sub_25AA0(a1, "xmm6");
                break;
              case 161:
LABEL_613:
                sub_25AA0(a1, "xmm7");
                break;
              case 162:
                sub_25AA0(a1, "xmm0_0");
                break;
              case 163:
                sub_25AA0(a1, "xmm0_1");
                break;
              case 164:
                sub_25AA0(a1, "xmm0_2");
                break;
              case 165:
                sub_25AA0(a1, "xmm0_3");
                break;
              case 166:
                sub_25AA0(a1, "xmm1_0");
                break;
              case 167:
                sub_25AA0(a1, "xmm1_1");
                break;
              case 168:
                sub_25AA0(a1, "xmm1_2");
                break;
              case 169:
                sub_25AA0(a1, "xmm1_3");
                break;
              case 170:
                sub_25AA0(a1, "xmm2_0");
                break;
              case 171:
                sub_25AA0(a1, "xmm2_1");
                break;
              case 172:
                sub_25AA0(a1, "xmm2_2");
                break;
              case 173:
                sub_25AA0(a1, "xmm2_3");
                break;
              case 174:
                sub_25AA0(a1, "xmm3_0");
                break;
              case 175:
                sub_25AA0(a1, "xmm3_1");
                break;
              case 176:
                sub_25AA0(a1, "xmm3_2");
                break;
              case 177:
                sub_25AA0(a1, "xmm3_3");
                break;
              case 178:
                sub_25AA0(a1, "xmm4_0");
                break;
              case 179:
                sub_25AA0(a1, "xmm4_1");
                break;
              case 180:
                sub_25AA0(a1, "xmm4_2");
                break;
              case 181:
                sub_25AA0(a1, "xmm4_3");
                break;
              case 182:
                sub_25AA0(a1, "xmm5_0");
                break;
              case 183:
                sub_25AA0(a1, "xmm5_1");
                break;
              case 184:
                sub_25AA0(a1, "xmm5_2");
                break;
              case 185:
                sub_25AA0(a1, "xmm5_3");
                break;
              case 186:
                sub_25AA0(a1, "xmm6_0");
                break;
              case 187:
                sub_25AA0(a1, "xmm6_1");
                break;
              case 188:
                sub_25AA0(a1, "xmm6_2");
                break;
              case 189:
                sub_25AA0(a1, "xmm6_3");
                break;
              case 190:
                sub_25AA0(a1, "xmm7_0");
                break;
              case 191:
                sub_25AA0(a1, "xmm7_1");
                break;
              case 192:
                sub_25AA0(a1, "xmm7_2");
                break;
              case 193:
                sub_25AA0(a1, "xmm7_3");
                break;
              case 194:
LABEL_1028:
                sub_25AA0(a1, "xmm0l");
                break;
              case 195:
LABEL_1027:
                sub_25AA0(a1, "xmm1l");
                break;
              case 196:
LABEL_1026:
                sub_25AA0(a1, "xmm2l");
                break;
              case 197:
LABEL_1025:
                sub_25AA0(a1, "xmm3l");
                break;
              case 198:
LABEL_1024:
                sub_25AA0(a1, "xmm4l");
                break;
              case 199:
LABEL_1023:
                sub_25AA0(a1, "xmm5l");
                break;
              case 200:
LABEL_1022:
                sub_25AA0(a1, "xmm6l");
                break;
              case 201:
LABEL_1021:
                sub_25AA0(a1, "xmm7l");
                break;
              case 202:
LABEL_1020:
                sub_25AA0(a1, "xmm0h");
                break;
              case 203:
LABEL_1019:
                sub_25AA0(a1, "xmm1h");
                break;
              case 204:
LABEL_1018:
                sub_25AA0(a1, "xmm2h");
                break;
              case 205:
LABEL_1017:
                sub_25AA0(a1, "xmm3h");
                break;
              case 206:
LABEL_1016:
                sub_25AA0(a1, "xmm4h");
                break;
              case 207:
LABEL_1015:
                sub_25AA0(a1, "xmm5h");
                break;
              case 208:
LABEL_1014:
                sub_25AA0(a1, "xmm6h");
                break;
              case 209:
LABEL_1013:
                sub_25AA0(a1, "xmm7h");
                break;
              case 211:
LABEL_1012:
                sub_25AA0(a1, "mxcsr");
                break;
              case 220:
LABEL_1011:
                sub_25AA0(a1, "emm0l");
                break;
              case 221:
LABEL_1010:
                sub_25AA0(a1, "emm1l");
                break;
              case 222:
LABEL_1009:
                sub_25AA0(a1, "emm2l");
                break;
              case 223:
LABEL_1008:
                sub_25AA0(a1, "emm3l");
                break;
              case 224:
LABEL_1007:
                sub_25AA0(a1, "emm4l");
                break;
              case 225:
LABEL_1006:
                sub_25AA0(a1, "emm5l");
                break;
              case 226:
LABEL_1005:
                sub_25AA0(a1, "emm6l");
                break;
              case 227:
LABEL_1004:
                sub_25AA0(a1, "emm7l");
                break;
              case 228:
LABEL_1003:
                sub_25AA0(a1, "emm0h");
                break;
              case 229:
LABEL_1002:
                sub_25AA0(a1, "emm1h");
                break;
              case 230:
LABEL_1001:
                sub_25AA0(a1, "emm2h");
                break;
              case 231:
LABEL_1000:
                sub_25AA0(a1, "emm3h");
                break;
              case 232:
LABEL_999:
                sub_25AA0(a1, "emm4h");
                break;
              case 233:
LABEL_998:
                sub_25AA0(a1, "emm5h");
                break;
              case 234:
LABEL_997:
                sub_25AA0(a1, "emm6h");
                break;
              case 235:
LABEL_996:
                sub_25AA0(a1, "emm7h");
                break;
              case 236:
LABEL_995:
                sub_25AA0(a1, "mm00");
                break;
              case 237:
LABEL_994:
                sub_25AA0(a1, "mm01");
                break;
              case 238:
LABEL_993:
                sub_25AA0(a1, "mm10");
                break;
              case 239:
LABEL_992:
                sub_25AA0(a1, "mm11");
                break;
              case 240:
LABEL_991:
                sub_25AA0(a1, "mm20");
                break;
              case 241:
LABEL_990:
                sub_25AA0(a1, "mm21");
                break;
              case 242:
LABEL_989:
                sub_25AA0(a1, "mm30");
                break;
              case 243:
LABEL_988:
                sub_25AA0(a1, "mm31");
                break;
              case 244:
LABEL_987:
                sub_25AA0(a1, "mm40");
                break;
              case 245:
LABEL_986:
                sub_25AA0(a1, "mm41");
                break;
              case 246:
LABEL_985:
                sub_25AA0(a1, "mm50");
                break;
              case 247:
LABEL_984:
                sub_25AA0(a1, "mm51");
                break;
              case 248:
LABEL_983:
                sub_25AA0(a1, "mm60");
                break;
              case 249:
LABEL_982:
                sub_25AA0(a1, "mm61");
                break;
              case 250:
LABEL_981:
                sub_25AA0(a1, "mm70");
                break;
              case 251:
LABEL_980:
                sub_25AA0(a1, "mm71");
                break;
              case 252:
                sub_25AA0(a1, "xmm8");
                break;
              case 253:
                sub_25AA0(a1, "xmm9");
                break;
              case 254:
LABEL_977:
                sub_25AA0(a1, "xmm10");
                break;
              case 255:
LABEL_976:
                sub_25AA0(a1, "xmm11");
                break;
              case 256:
LABEL_975:
                sub_25AA0(a1, "xmm12");
                break;
              case 257:
LABEL_974:
                sub_25AA0(a1, "xmm13");
                break;
              case 258:
                sub_25AA0(a1, "xmm14");
                break;
              case 259:
                sub_25AA0(a1, "xmm15");
                break;
              case 260:
                sub_25AA0(a1, "xmm8_0");
                break;
              case 261:
                sub_25AA0(a1, "xmm8_1");
                break;
              case 262:
                sub_25AA0(a1, "xmm8_2");
                break;
              case 263:
                sub_25AA0(a1, "xmm8_3");
                break;
              case 264:
                sub_25AA0(a1, "xmm9_0");
                break;
              case 265:
                sub_25AA0(a1, "xmm9_1");
                break;
              case 266:
                sub_25AA0(a1, "xmm9_2");
                break;
              case 267:
                sub_25AA0(a1, "xmm9_3");
                break;
              case 268:
                sub_25AA0(a1, "xmm10_0");
                break;
              case 269:
                sub_25AA0(a1, "xmm10_1");
                break;
              case 270:
                sub_25AA0(a1, "xmm10_2");
                break;
              case 271:
                sub_25AA0(a1, "xmm10_3");
                break;
              case 272:
                sub_25AA0(a1, "xmm11_0");
                break;
              case 273:
                sub_25AA0(a1, "xmm11_1");
                break;
              case 274:
                sub_25AA0(a1, "xmm11_2");
                break;
              case 275:
                sub_25AA0(a1, "xmm11_3");
                break;
              case 276:
                sub_25AA0(a1, "xmm12_0");
                break;
              case 277:
                sub_25AA0(a1, "xmm12_1");
                break;
              case 278:
                sub_25AA0(a1, "xmm12_2");
                break;
              case 279:
                sub_25AA0(a1, "xmm12_3");
                break;
              case 280:
                sub_25AA0(a1, "xmm13_0");
                break;
              case 281:
                sub_25AA0(a1, "xmm13_1");
                break;
              case 282:
                sub_25AA0(a1, "xmm13_2");
                break;
              case 283:
                sub_25AA0(a1, "xmm13_3");
                break;
              case 284:
                sub_25AA0(a1, "xmm14_0");
                break;
              case 285:
                sub_25AA0(a1, "xmm14_1");
                break;
              case 286:
                sub_25AA0(a1, "xmm14_2");
                break;
              case 287:
                sub_25AA0(a1, "xmm14_3");
                break;
              case 288:
                sub_25AA0(a1, "xmm15_0");
                break;
              case 289:
                sub_25AA0(a1, "xmm15_1");
                break;
              case 290:
                sub_25AA0(a1, "xmm15_2");
                break;
              case 291:
                sub_25AA0(a1, "xmm15_3");
                break;
              case 292:
                sub_25AA0(a1, "xmm8l");
                break;
              case 293:
                sub_25AA0(a1, "xmm9l");
                break;
              case 294:
                sub_25AA0(a1, "xmm10l");
                break;
              case 295:
                sub_25AA0(a1, "xmm11l");
                break;
              case 296:
                sub_25AA0(a1, "xmm12l");
                break;
              case 297:
                sub_25AA0(a1, "xmm13l");
                break;
              case 298:
                sub_25AA0(a1, "xmm14l");
                break;
              case 299:
                sub_25AA0(a1, "xmm15l");
                break;
              case 300:
                sub_25AA0(a1, "xmm8h");
                break;
              case 301:
                sub_25AA0(a1, "xmm9h");
                break;
              case 302:
                sub_25AA0(a1, "xmm10h");
                break;
              case 303:
                sub_25AA0(a1, "xmm11h");
                break;
              case 304:
                sub_25AA0(a1, "xmm12h");
                break;
              case 305:
                sub_25AA0(a1, "xmm13h");
                break;
              case 306:
                sub_25AA0(a1, "xmm14h");
                break;
              case 307:
                sub_25AA0(a1, "xmm15h");
                break;
              case 308:
                sub_25AA0(a1, "emm8l");
                break;
              case 309:
                sub_25AA0(a1, "emm9l");
                break;
              case 310:
                sub_25AA0(a1, "emm10l");
                break;
              case 311:
                sub_25AA0(a1, "emm11l");
                break;
              case 312:
                sub_25AA0(a1, "emm12l");
                break;
              case 313:
                sub_25AA0(a1, "emm13l");
                break;
              case 314:
                sub_25AA0(a1, "emm14l");
                break;
              case 315:
                sub_25AA0(a1, "emm15l");
                break;
              case 316:
                sub_25AA0(a1, "emm8h");
                break;
              case 317:
                sub_25AA0(a1, "emm9h");
                break;
              case 318:
                sub_25AA0(a1, "emm10h");
                break;
              case 319:
                sub_25AA0(a1, "emm11h");
                break;
              case 320:
                sub_25AA0(a1, "emm12h");
                break;
              case 321:
                sub_25AA0(a1, "emm13h");
                break;
              case 322:
                sub_25AA0(a1, "emm14h");
                break;
              case 323:
                sub_25AA0(a1, "emm15h");
                break;
              case 324:
                sub_25AA0(a1, "sil");
                break;
              case 325:
                sub_25AA0(a1, "dil");
                break;
              case 326:
                sub_25AA0(a1, "bpl");
                break;
              case 327:
                sub_25AA0(a1, "spl");
                break;
              case 328:
                sub_25AA0(a1, "rax");
                break;
              case 329:
                sub_25AA0(a1, "rbx");
                break;
              case 330:
                sub_25AA0(a1, "rcx");
                break;
              case 331:
                sub_25AA0(a1, "rdx");
                break;
              case 332:
                sub_25AA0(a1, "rsi");
                break;
              case 333:
                sub_25AA0(a1, "rdi");
                break;
              case 334:
                sub_25AA0(a1, "rbp");
                break;
              case 335:
                sub_25AA0(a1, "rsp");
                break;
              case 336:
                goto LABEL_222;
              case 337:
                goto LABEL_241;
              case 338:
                goto LABEL_221;
              case 339:
                goto LABEL_220;
              case 340:
                goto LABEL_219;
              case 341:
                goto LABEL_227;
              case 342:
                goto LABEL_226;
              case 343:
                goto LABEL_242;
              case 344:
                sub_25AA0(a1, "r8b");
                break;
              case 345:
                sub_25AA0(a1, "r9b");
                break;
              case 346:
                sub_25AA0(a1, "r10b");
                break;
              case 347:
                sub_25AA0(a1, "r11b");
                break;
              case 348:
                sub_25AA0(a1, "r12b");
                break;
              case 349:
                sub_25AA0(a1, "r13b");
                break;
              case 350:
                sub_25AA0(a1, "r14b");
                break;
              case 351:
                sub_25AA0(a1, "r15b");
                break;
              case 352:
                sub_25AA0(a1, "r8w");
                break;
              case 353:
                sub_25AA0(a1, "r9w");
                break;
              case 354:
                sub_25AA0(a1, "r10w");
                break;
              case 355:
                sub_25AA0(a1, "r11w");
                break;
              case 356:
                sub_25AA0(a1, "r12w");
                break;
              case 357:
                sub_25AA0(a1, "r13w");
                break;
              case 358:
                sub_25AA0(a1, "r14w");
                break;
              case 359:
                sub_25AA0(a1, "r15w");
                break;
              case 360:
                sub_25AA0(a1, "r8d");
                break;
              case 361:
                sub_25AA0(a1, "r9d");
                break;
              case 362:
                sub_25AA0(a1, "r10d");
                break;
              case 363:
                sub_25AA0(a1, "r11d");
                break;
              case 364:
                sub_25AA0(a1, "r12d");
                break;
              case 365:
                sub_25AA0(a1, "r13d");
                break;
              case 366:
                sub_25AA0(a1, "r14d");
                break;
              case 367:
                sub_25AA0(a1, "r15d");
                break;
              case 368:
LABEL_2543:
                sub_25AA0(a1, "ymm0");
                break;
              case 369:
LABEL_2542:
                sub_25AA0(a1, "ymm1");
                break;
              case 370:
LABEL_861:
                sub_25AA0(a1, "ymm2");
                break;
              case 371:
LABEL_860:
                sub_25AA0(a1, "ymm3");
                break;
              case 372:
LABEL_859:
                sub_25AA0(a1, "ymm4");
                break;
              case 373:
LABEL_858:
                sub_25AA0(a1, "ymm5");
                break;
              case 374:
LABEL_857:
                sub_25AA0(a1, "ymm6");
                break;
              case 375:
LABEL_856:
                sub_25AA0(a1, "ymm7");
                break;
              case 376:
                sub_25AA0(a1, "ymm8");
                break;
              case 377:
                sub_25AA0(a1, "ymm9");
                break;
              case 378:
                sub_25AA0(a1, "ymm10");
                break;
              case 379:
                sub_25AA0(a1, "ymm11");
                break;
              case 380:
                sub_25AA0(a1, "ymm12");
                break;
              case 381:
                sub_25AA0(a1, "ymm13");
                break;
              case 382:
                sub_25AA0(a1, "ymm14");
                break;
              case 383:
                sub_25AA0(a1, "ymm15");
                break;
              case 384:
LABEL_847:
                sub_25AA0(a1, "ymm0h");
                break;
              case 385:
LABEL_846:
                sub_25AA0(a1, "ymm1h");
                break;
              case 386:
LABEL_845:
                sub_25AA0(a1, "ymm2h");
                break;
              case 387:
LABEL_844:
                sub_25AA0(a1, "ymm3h");
                break;
              case 388:
LABEL_843:
                sub_25AA0(a1, "ymm4h");
                break;
              case 389:
LABEL_842:
                sub_25AA0(a1, "ymm5h");
                break;
              case 390:
LABEL_841:
                sub_25AA0(a1, "ymm6h");
                break;
              case 391:
LABEL_840:
                sub_25AA0(a1, "ymm7h");
                break;
              case 392:
                sub_25AA0(a1, "ymm8h");
                break;
              case 393:
                sub_25AA0(a1, "ymm9h");
                break;
              case 394:
                sub_25AA0(a1, "ymm10h");
                break;
              case 395:
                sub_25AA0(a1, "ymm11h");
                break;
              case 396:
                sub_25AA0(a1, "ymm12h");
                break;
              case 397:
                sub_25AA0(a1, "ymm13h");
                break;
              case 398:
                sub_25AA0(a1, "ymm14h");
                break;
              case 399:
                sub_25AA0(a1, "ymm15h");
                break;
              case 400:
                sub_25AA0(a1, "xmm0il");
                break;
              case 401:
                sub_25AA0(a1, "xmm1il");
                break;
              case 402:
                sub_25AA0(a1, "xmm2il");
                break;
              case 403:
                sub_25AA0(a1, "xmm3il");
                break;
              case 404:
                sub_25AA0(a1, "xmm4il");
                break;
              case 405:
                sub_25AA0(a1, "xmm5il");
                break;
              case 406:
                sub_25AA0(a1, "xmm6il");
                break;
              case 407:
                sub_25AA0(a1, "xmm7il");
                break;
              case 408:
                sub_25AA0(a1, "xmm8il");
                break;
              case 409:
                sub_25AA0(a1, "xmm9il");
                break;
              case 410:
                sub_25AA0(a1, "xmm10il");
                break;
              case 411:
                sub_25AA0(a1, "xmm11il");
                break;
              case 412:
                sub_25AA0(a1, "xmm12il");
                break;
              case 413:
                sub_25AA0(a1, "xmm13il");
                break;
              case 414:
                sub_25AA0(a1, "xmm14il");
                break;
              case 415:
                sub_25AA0(a1, "xmm15il");
                break;
              case 416:
                sub_25AA0(a1, "xmm0ih");
                break;
              case 417:
                sub_25AA0(a1, "xmm1ih");
                break;
              case 418:
                sub_25AA0(a1, "xmm2ih");
                break;
              case 419:
                sub_25AA0(a1, "xmm3ih");
                break;
              case 420:
                sub_25AA0(a1, "xmm4ih");
                break;
              case 421:
                sub_25AA0(a1, "xmm5ih");
                break;
              case 422:
                sub_25AA0(a1, "xmm6ih");
                break;
              case 423:
                sub_25AA0(a1, "xmm7ih");
                break;
              case 424:
                sub_25AA0(a1, "xmm8ih");
                break;
              case 425:
                sub_25AA0(a1, "xmm9ih");
                break;
              case 426:
                sub_25AA0(a1, "xmm10ih");
                break;
              case 427:
                sub_25AA0(a1, "xmm11ih");
                break;
              case 428:
                sub_25AA0(a1, "xmm12ih");
                break;
              case 429:
                sub_25AA0(a1, "xmm13ih");
                break;
              case 430:
                sub_25AA0(a1, "xmm14ih");
                break;
              case 431:
                sub_25AA0(a1, "xmm15ih");
                break;
              case 432:
LABEL_799:
                sub_25AA0(a1, "ymm0i0");
                break;
              case 433:
LABEL_798:
                sub_25AA0(a1, "ymm0i1");
                break;
              case 434:
LABEL_1821:
                sub_25AA0(a1, "ymm0i2");
                break;
              case 435:
LABEL_1820:
                sub_25AA0(a1, "ymm0i3");
                break;
              case 436:
LABEL_1819:
                sub_25AA0(a1, "ymm1i0");
                break;
              case 437:
LABEL_1818:
                sub_25AA0(a1, "ymm1i1");
                break;
              case 438:
LABEL_1817:
                sub_25AA0(a1, "ymm1i2");
                break;
              case 439:
LABEL_1816:
                sub_25AA0(a1, "ymm1i3");
                break;
              case 440:
LABEL_1815:
                sub_25AA0(a1, "ymm2i0");
                break;
              case 441:
LABEL_1814:
                sub_25AA0(a1, "ymm2i1");
                break;
              case 442:
LABEL_1813:
                sub_25AA0(a1, "ymm2i2");
                break;
              case 443:
LABEL_1812:
                sub_25AA0(a1, "ymm2i3");
                break;
              case 444:
LABEL_1811:
                sub_25AA0(a1, "ymm3i0");
                break;
              case 445:
LABEL_1810:
                sub_25AA0(a1, "ymm3i1");
                break;
              case 446:
LABEL_1809:
                sub_25AA0(a1, "ymm3i2");
                break;
              case 447:
LABEL_1808:
                sub_25AA0(a1, "ymm3i3");
                break;
              case 448:
LABEL_1807:
                sub_25AA0(a1, "ymm4i0");
                break;
              case 449:
LABEL_1806:
                sub_25AA0(a1, "ymm4i1");
                break;
              case 450:
LABEL_1805:
                sub_25AA0(a1, "ymm4i2");
                break;
              case 451:
LABEL_1804:
                sub_25AA0(a1, "ymm4i3");
                break;
              case 452:
LABEL_1803:
                sub_25AA0(a1, "ymm5i0");
                break;
              case 453:
LABEL_1802:
                sub_25AA0(a1, "ymm5i1");
                break;
              case 454:
LABEL_1801:
                sub_25AA0(a1, "ymm5i2");
                break;
              case 455:
LABEL_1800:
                sub_25AA0(a1, "ymm5i3");
                break;
              case 456:
LABEL_1799:
                sub_25AA0(a1, "ymm6i0");
                break;
              case 457:
LABEL_1798:
                sub_25AA0(a1, "ymm6i1");
                break;
              case 458:
LABEL_1797:
                sub_25AA0(a1, "ymm6i2");
                break;
              case 459:
LABEL_1796:
                sub_25AA0(a1, "ymm6i3");
                break;
              case 460:
LABEL_1795:
                sub_25AA0(a1, "ymm7i0");
                break;
              case 461:
LABEL_1794:
                sub_25AA0(a1, "ymm7i1");
                break;
              case 462:
LABEL_1793:
                sub_25AA0(a1, "ymm7i2");
                break;
              case 463:
LABEL_1792:
                sub_25AA0(a1, "ymm7i3");
                break;
              case 464:
                sub_25AA0(a1, "ymm8i0");
                break;
              case 465:
                sub_25AA0(a1, "ymm8i1");
                break;
              case 466:
                sub_25AA0(a1, "ymm8i2");
                break;
              case 467:
                sub_25AA0(a1, "ymm8i3");
                break;
              case 468:
                sub_25AA0(a1, "ymm9i0");
                break;
              case 469:
                sub_25AA0(a1, "ymm9i1");
                break;
              case 470:
                sub_25AA0(a1, "ymm9i2");
                break;
              case 471:
                sub_25AA0(a1, "ymm9i3");
                break;
              case 472:
                sub_25AA0(a1, "ymm10i0");
                break;
              case 473:
                sub_25AA0(a1, "ymm10i1");
                break;
              case 474:
                sub_25AA0(a1, "ymm10i2");
                break;
              case 475:
                sub_25AA0(a1, "ymm10i3");
                break;
              case 476:
                sub_25AA0(a1, "ymm11i0");
                break;
              case 477:
                sub_25AA0(a1, "ymm11i1");
                break;
              case 478:
                sub_25AA0(a1, "ymm11i2");
                break;
              case 479:
                sub_25AA0(a1, "ymm11i3");
                break;
              case 480:
                sub_25AA0(a1, "ymm12i0");
                break;
              case 481:
                sub_25AA0(a1, "ymm12i1");
                break;
              case 482:
                sub_25AA0(a1, "ymm12i2");
                break;
              case 483:
                sub_25AA0(a1, "ymm12i3");
                break;
              case 484:
                sub_25AA0(a1, "ymm13i0");
                break;
              case 485:
                sub_25AA0(a1, "ymm13i1");
                break;
              case 486:
                sub_25AA0(a1, "ymm13i2");
                break;
              case 487:
                sub_25AA0(a1, "ymm13i3");
                break;
              case 488:
                sub_25AA0(a1, "ymm14i0");
                break;
              case 489:
                sub_25AA0(a1, "ymm14i1");
                break;
              case 490:
                sub_25AA0(a1, "ymm14i2");
                break;
              case 491:
                sub_25AA0(a1, "ymm14i3");
                break;
              case 492:
                sub_25AA0(a1, "ymm15i0");
                break;
              case 493:
                sub_25AA0(a1, "ymm15i1");
                break;
              case 494:
                sub_25AA0(a1, "ymm15i2");
                break;
              case 495:
                sub_25AA0(a1, "ymm15i3");
                break;
              case 496:
LABEL_1759:
                sub_25AA0(a1, "ymm0f0");
                break;
              case 497:
LABEL_1758:
                sub_25AA0(a1, "ymm0f1");
                break;
              case 498:
LABEL_1757:
                sub_25AA0(a1, "ymm0f2");
                break;
              case 499:
LABEL_1756:
                sub_25AA0(a1, "ymm0f3");
                break;
              case 500:
LABEL_1755:
                sub_25AA0(a1, "ymm0f4");
                break;
              case 501:
LABEL_1754:
                sub_25AA0(a1, "ymm0f5");
                break;
              case 502:
LABEL_1753:
                sub_25AA0(a1, "ymm0f6");
                break;
              case 503:
LABEL_1752:
                sub_25AA0(a1, "ymm0f7");
                break;
              case 504:
LABEL_1751:
                sub_25AA0(a1, "ymm1f0");
                break;
              case 505:
LABEL_1750:
                sub_25AA0(a1, "ymm1f1");
                break;
              case 506:
LABEL_1749:
                sub_25AA0(a1, "ymm1f2");
                break;
              case 507:
LABEL_1748:
                sub_25AA0(a1, "ymm1f3");
                break;
              case 508:
LABEL_1747:
                sub_25AA0(a1, "ymm1f4");
                break;
              case 509:
LABEL_1746:
                sub_25AA0(a1, "ymm1f5");
                break;
              case 510:
LABEL_1745:
                sub_25AA0(a1, "ymm1f6");
                break;
              case 511:
LABEL_1744:
                sub_25AA0(a1, "ymm1f7");
                break;
              case 512:
LABEL_1743:
                sub_25AA0(a1, "ymm2f0");
                break;
              case 513:
LABEL_1742:
                sub_25AA0(a1, "ymm2f1");
                break;
              case 514:
LABEL_1741:
                sub_25AA0(a1, "ymm2f2");
                break;
              case 515:
LABEL_1740:
                sub_25AA0(a1, "ymm2f3");
                break;
              case 516:
LABEL_1739:
                sub_25AA0(a1, "ymm2f4");
                break;
              case 517:
LABEL_1738:
                sub_25AA0(a1, "ymm2f5");
                break;
              case 518:
LABEL_1737:
                sub_25AA0(a1, "ymm2f6");
                break;
              case 519:
LABEL_1736:
                sub_25AA0(a1, "ymm2f7");
                break;
              case 520:
LABEL_1735:
                sub_25AA0(a1, "ymm3f0");
                break;
              case 521:
LABEL_1734:
                sub_25AA0(a1, "ymm3f1");
                break;
              case 522:
LABEL_1733:
                sub_25AA0(a1, "ymm3f2");
                break;
              case 523:
LABEL_1732:
                sub_25AA0(a1, "ymm3f3");
                break;
              case 524:
LABEL_1731:
                sub_25AA0(a1, "ymm3f4");
                break;
              case 525:
LABEL_1730:
                sub_25AA0(a1, "ymm3f5");
                break;
              case 526:
LABEL_1729:
                sub_25AA0(a1, "ymm3f6");
                break;
              case 527:
LABEL_1728:
                sub_25AA0(a1, "ymm3f7");
                break;
              case 528:
LABEL_1727:
                sub_25AA0(a1, "ymm4f0");
                break;
              case 529:
LABEL_1726:
                sub_25AA0(a1, "ymm4f1");
                break;
              case 530:
LABEL_1725:
                sub_25AA0(a1, "ymm4f2");
                break;
              case 531:
LABEL_1724:
                sub_25AA0(a1, "ymm4f3");
                break;
              case 532:
LABEL_1723:
                sub_25AA0(a1, "ymm4f4");
                break;
              case 533:
LABEL_1722:
                sub_25AA0(a1, "ymm4f5");
                break;
              case 534:
LABEL_1721:
                sub_25AA0(a1, "ymm4f6");
                break;
              case 535:
LABEL_1720:
                sub_25AA0(a1, "ymm4f7");
                break;
              case 536:
LABEL_1719:
                sub_25AA0(a1, "ymm5f0");
                break;
              case 537:
LABEL_1718:
                sub_25AA0(a1, "ymm5f1");
                break;
              case 538:
LABEL_1717:
                sub_25AA0(a1, "ymm5f2");
                break;
              case 539:
LABEL_1716:
                sub_25AA0(a1, "ymm5f3");
                break;
              case 540:
LABEL_1715:
                sub_25AA0(a1, "ymm5f4");
                break;
              case 541:
LABEL_1714:
                sub_25AA0(a1, "ymm5f5");
                break;
              case 542:
LABEL_1713:
                sub_25AA0(a1, "ymm5f6");
                break;
              case 543:
LABEL_1712:
                sub_25AA0(a1, "ymm5f7");
                break;
              case 544:
LABEL_1711:
                sub_25AA0(a1, "ymm6f0");
                break;
              case 545:
LABEL_1710:
                sub_25AA0(a1, "ymm6f1");
                break;
              case 546:
LABEL_1709:
                sub_25AA0(a1, "ymm6f2");
                break;
              case 547:
LABEL_1708:
                sub_25AA0(a1, "ymm6f3");
                break;
              case 548:
LABEL_1707:
                sub_25AA0(a1, "ymm6f4");
                break;
              case 549:
LABEL_1706:
                sub_25AA0(a1, "ymm6f5");
                break;
              case 550:
LABEL_1705:
                sub_25AA0(a1, "ymm6f6");
                break;
              case 551:
LABEL_1704:
                sub_25AA0(a1, "ymm6f7");
                break;
              case 552:
LABEL_1703:
                sub_25AA0(a1, "ymm7f0");
                break;
              case 553:
LABEL_1702:
                sub_25AA0(a1, "ymm7f1");
                break;
              case 554:
LABEL_1701:
                sub_25AA0(a1, "ymm7f2");
                break;
              case 555:
LABEL_1700:
                sub_25AA0(a1, "ymm7f3");
                break;
              case 556:
LABEL_1699:
                sub_25AA0(a1, "ymm7f4");
                break;
              case 557:
LABEL_1698:
                sub_25AA0(a1, "ymm7f5");
                break;
              case 558:
LABEL_1697:
                sub_25AA0(a1, "ymm7f6");
                break;
              case 559:
LABEL_1696:
                sub_25AA0(a1, "ymm7f7");
                break;
              case 560:
                sub_25AA0(a1, "ymm8f0");
                break;
              case 561:
                sub_25AA0(a1, "ymm8f1");
                break;
              case 562:
                sub_25AA0(a1, "ymm8f2");
                break;
              case 563:
                sub_25AA0(a1, "ymm8f3");
                break;
              case 564:
                sub_25AA0(a1, "ymm8f4");
                break;
              case 565:
                sub_25AA0(a1, "ymm8f5");
                break;
              case 566:
                sub_25AA0(a1, "ymm8f6");
                break;
              case 567:
                sub_25AA0(a1, "ymm8f7");
                break;
              case 568:
                sub_25AA0(a1, "ymm9f0");
                break;
              case 569:
                sub_25AA0(a1, "ymm9f1");
                break;
              case 570:
                sub_25AA0(a1, "ymm9f2");
                break;
              case 571:
                sub_25AA0(a1, "ymm9f3");
                break;
              case 572:
                sub_25AA0(a1, "ymm9f4");
                break;
              case 573:
                sub_25AA0(a1, "ymm9f5");
                break;
              case 574:
                sub_25AA0(a1, "ymm9f6");
                break;
              case 575:
                sub_25AA0(a1, "ymm9f7");
                break;
              case 576:
                sub_25AA0(a1, "ymm10f0");
                break;
              case 577:
                sub_25AA0(a1, "ymm10f1");
                break;
              case 578:
                sub_25AA0(a1, "ymm10f2");
                break;
              case 579:
                sub_25AA0(a1, "ymm10f3");
                break;
              case 580:
                sub_25AA0(a1, "ymm10f4");
                break;
              case 581:
                sub_25AA0(a1, "ymm10f5");
                break;
              case 582:
                sub_25AA0(a1, "ymm10f6");
                break;
              case 583:
                sub_25AA0(a1, "ymm10f7");
                break;
              case 584:
                sub_25AA0(a1, "ymm11f0");
                break;
              case 585:
                sub_25AA0(a1, "ymm11f1");
                break;
              case 586:
                sub_25AA0(a1, "ymm11f2");
                break;
              case 587:
                sub_25AA0(a1, "ymm11f3");
                break;
              case 588:
                sub_25AA0(a1, "ymm11f4");
                break;
              case 589:
                sub_25AA0(a1, "ymm11f5");
                break;
              case 590:
                sub_25AA0(a1, "ymm11f6");
                break;
              case 591:
                sub_25AA0(a1, "ymm11f7");
                break;
              case 592:
                sub_25AA0(a1, "ymm12f0");
                break;
              case 593:
                sub_25AA0(a1, "ymm12f1");
                break;
              case 594:
                sub_25AA0(a1, "ymm12f2");
                break;
              case 595:
                sub_25AA0(a1, "ymm12f3");
                break;
              case 596:
                sub_25AA0(a1, "ymm12f4");
                break;
              case 597:
                sub_25AA0(a1, "ymm12f5");
                break;
              case 598:
                sub_25AA0(a1, "ymm12f6");
                break;
              case 599:
                sub_25AA0(a1, "ymm12f7");
                break;
              case 600:
                sub_25AA0(a1, "ymm13f0");
                break;
              case 601:
                sub_25AA0(a1, "ymm13f1");
                break;
              case 602:
                sub_25AA0(a1, "ymm13f2");
                break;
              case 603:
                sub_25AA0(a1, "ymm13f3");
                break;
              case 604:
                sub_25AA0(a1, "ymm13f4");
                break;
              case 605:
                sub_25AA0(a1, "ymm13f5");
                break;
              case 606:
                sub_25AA0(a1, "ymm13f6");
                break;
              case 607:
                sub_25AA0(a1, "ymm13f7");
                break;
              case 608:
                sub_25AA0(a1, "ymm14f0");
                break;
              case 609:
                sub_25AA0(a1, "ymm14f1");
                break;
              case 610:
                sub_25AA0(a1, "ymm14f2");
                break;
              case 611:
                sub_25AA0(a1, "ymm14f3");
                break;
              case 612:
                sub_25AA0(a1, "ymm14f4");
                break;
              case 613:
                sub_25AA0(a1, "ymm14f5");
                break;
              case 614:
                sub_25AA0(a1, "ymm14f6");
                break;
              case 615:
                sub_25AA0(a1, "ymm14f7");
                break;
              case 616:
                sub_25AA0(a1, "ymm15f0");
                break;
              case 617:
                sub_25AA0(a1, "ymm15f1");
                break;
              case 618:
                sub_25AA0(a1, "ymm15f2");
                break;
              case 619:
                sub_25AA0(a1, "ymm15f3");
                break;
              case 620:
                sub_25AA0(a1, "ymm15f4");
                break;
              case 621:
                sub_25AA0(a1, "ymm15f5");
                break;
              case 622:
                sub_25AA0(a1, "ymm15f6");
                break;
              case 623:
                sub_25AA0(a1, "ymm15f7");
                break;
              case 624:
                sub_25AA0(a1, "ymm0d0");
                break;
              case 625:
                sub_25AA0(a1, "ymm0d1");
                break;
              case 626:
                sub_25AA0(a1, "ymm0d2");
                break;
              case 627:
                sub_25AA0(a1, "ymm0d3");
                break;
              case 628:
                sub_25AA0(a1, "ymm1d0");
                break;
              case 629:
                sub_25AA0(a1, "ymm1d1");
                break;
              case 630:
                sub_25AA0(a1, "ymm1d2");
                break;
              case 631:
                sub_25AA0(a1, "ymm1d3");
                break;
              case 632:
                sub_25AA0(a1, "ymm2d0");
                break;
              case 633:
                sub_25AA0(a1, "ymm2d1");
                break;
              case 634:
                sub_25AA0(a1, "ymm2d2");
                break;
              case 635:
                sub_25AA0(a1, "ymm2d3");
                break;
              case 636:
                sub_25AA0(a1, "ymm3d0");
                break;
              case 637:
                sub_25AA0(a1, "ymm3d1");
                break;
              case 638:
                sub_25AA0(a1, "ymm3d2");
                break;
              case 639:
                sub_25AA0(a1, "ymm3d3");
                break;
              case 640:
                sub_25AA0(a1, "ymm4d0");
                break;
              case 641:
                sub_25AA0(a1, "ymm4d1");
                break;
              case 642:
                sub_25AA0(a1, "ymm4d2");
                break;
              case 643:
                sub_25AA0(a1, "ymm4d3");
                break;
              case 644:
                sub_25AA0(a1, "ymm5d0");
                break;
              case 645:
                sub_25AA0(a1, "ymm5d1");
                break;
              case 646:
                sub_25AA0(a1, "ymm5d2");
                break;
              case 647:
                sub_25AA0(a1, "ymm5d3");
                break;
              case 648:
                sub_25AA0(a1, "ymm6d0");
                break;
              case 649:
                sub_25AA0(a1, "ymm6d1");
                break;
              case 650:
                sub_25AA0(a1, "ymm6d2");
                break;
              case 651:
                sub_25AA0(a1, "ymm6d3");
                break;
              case 652:
                sub_25AA0(a1, "ymm7d0");
                break;
              case 653:
                sub_25AA0(a1, "ymm7d1");
                break;
              case 654:
                sub_25AA0(a1, "ymm7d2");
                break;
              case 655:
                sub_25AA0(a1, "ymm7d3");
                break;
              case 656:
                sub_25AA0(a1, "ymm8d0");
                break;
              case 657:
                sub_25AA0(a1, "ymm8d1");
                break;
              case 658:
                sub_25AA0(a1, "ymm8d2");
                break;
              case 659:
                sub_25AA0(a1, "ymm8d3");
                break;
              case 660:
                sub_25AA0(a1, "ymm9d0");
                break;
              case 661:
                sub_25AA0(a1, "ymm9d1");
                break;
              case 662:
                sub_25AA0(a1, "ymm9d2");
                break;
              case 663:
                sub_25AA0(a1, "ymm9d3");
                break;
              case 664:
                sub_25AA0(a1, "ymm10d0");
                break;
              case 665:
                sub_25AA0(a1, "ymm10d1");
                break;
              case 666:
                sub_25AA0(a1, "ymm10d2");
                break;
              case 667:
                sub_25AA0(a1, "ymm10d3");
                break;
              case 668:
                sub_25AA0(a1, "ymm11d0");
                break;
              case 669:
                sub_25AA0(a1, "ymm11d1");
                break;
              case 670:
                sub_25AA0(a1, "ymm11d2");
                break;
              case 671:
                sub_25AA0(a1, "ymm11d3");
                break;
              case 672:
                sub_25AA0(a1, "ymm12d0");
                break;
              case 673:
                sub_25AA0(a1, "ymm12d1");
                break;
              case 674:
                sub_25AA0(a1, "ymm12d2");
                break;
              case 675:
                sub_25AA0(a1, "ymm12d3");
                break;
              case 676:
                sub_25AA0(a1, "ymm13d0");
                break;
              case 677:
                sub_25AA0(a1, "ymm13d1");
                break;
              case 678:
                sub_25AA0(a1, "ymm13d2");
                break;
              case 679:
                sub_25AA0(a1, "ymm13d3");
                break;
              case 680:
                sub_25AA0(a1, "ymm14d0");
                break;
              case 681:
                sub_25AA0(a1, "ymm14d1");
                break;
              case 682:
                sub_25AA0(a1, "ymm14d2");
                break;
              case 683:
                sub_25AA0(a1, "ymm14d3");
                break;
              case 684:
                sub_25AA0(a1, "ymm15d0");
                break;
              case 685:
                sub_25AA0(a1, "ymm15d1");
                break;
              case 686:
                sub_25AA0(a1, "ymm15d2");
                break;
              case 687:
                sub_25AA0(a1, "ymm15d3");
                break;
              case 688:
LABEL_1439:
                sub_25AA0(a1, "bnd0");
                break;
              case 689:
LABEL_1438:
                sub_25AA0(a1, "bnd1");
                break;
              case 690:
LABEL_1437:
                sub_25AA0(a1, "bnd2");
                break;
              case 691:
LABEL_1436:
                sub_25AA0(a1, "bnd3");
                break;
              case 692:
LABEL_1435:
                sub_25AA0(a1, "bndcfgu");
                break;
              case 693:
LABEL_1434:
                sub_25AA0(a1, "bndstatus");
                break;
              case 694:
                sub_25AA0(a1, "xmm16");
                break;
              case 695:
                sub_25AA0(a1, "xmm17");
                break;
              case 696:
                sub_25AA0(a1, "xmm18");
                break;
              case 697:
                sub_25AA0(a1, "xmm19");
                break;
              case 698:
LABEL_1429:
                sub_25AA0(a1, "xmm20");
                break;
              case 699:
LABEL_1428:
                sub_25AA0(a1, "xmm21");
                break;
              case 700:
LABEL_1427:
                sub_25AA0(a1, "xmm22");
                break;
              case 701:
LABEL_1426:
                sub_25AA0(a1, "xmm23");
                break;
              case 702:
                sub_25AA0(a1, "xmm24");
                break;
              case 703:
                sub_25AA0(a1, "xmm25");
                break;
              case 704:
                sub_25AA0(a1, "xmm26");
                break;
              case 705:
                sub_25AA0(a1, "xmm27");
                break;
              case 706:
                sub_25AA0(a1, "xmm28");
                break;
              case 707:
                sub_25AA0(a1, "xmm29");
                break;
              case 708:
LABEL_1419:
                sub_25AA0(a1, "xmm30");
                break;
              case 709:
LABEL_1418:
                sub_25AA0(a1, "xmm31");
                break;
              case 710:
                sub_25AA0(a1, "ymm16");
                break;
              case 711:
                sub_25AA0(a1, "ymm17");
                break;
              case 712:
                sub_25AA0(a1, "ymm18");
                break;
              case 713:
                sub_25AA0(a1, "ymm19");
                break;
              case 714:
                sub_25AA0(a1, "ymm20");
                break;
              case 715:
                sub_25AA0(a1, "ymm21");
                break;
              case 716:
                sub_25AA0(a1, "ymm22");
                break;
              case 717:
                sub_25AA0(a1, "ymm23");
                break;
              case 718:
                sub_25AA0(a1, "ymm24");
                break;
              case 719:
                sub_25AA0(a1, "ymm25");
                break;
              case 720:
                sub_25AA0(a1, "ymm26");
                break;
              case 721:
                sub_25AA0(a1, "ymm27");
                break;
              case 722:
                sub_25AA0(a1, "ymm28");
                break;
              case 723:
                sub_25AA0(a1, "ymm29");
                break;
              case 724:
                sub_25AA0(a1, "ymm30");
                break;
              case 725:
                sub_25AA0(a1, "ymm31");
                break;
              case 726:
LABEL_1401:
                sub_25AA0(a1, "zmm0");
                break;
              case 727:
LABEL_1400:
                sub_25AA0(a1, "zmm1");
                break;
              case 728:
LABEL_1399:
                sub_25AA0(a1, "zmm2");
                break;
              case 729:
LABEL_1398:
                sub_25AA0(a1, "zmm3");
                break;
              case 730:
LABEL_1397:
                sub_25AA0(a1, "zmm4");
                break;
              case 731:
LABEL_1396:
                sub_25AA0(a1, "zmm5");
                break;
              case 732:
LABEL_1395:
                sub_25AA0(a1, "zmm6");
                break;
              case 733:
LABEL_1394:
                sub_25AA0(a1, "zmm7");
                break;
              case 734:
                sub_25AA0(a1, "zmm8");
                break;
              case 735:
                sub_25AA0(a1, "zmm9");
                break;
              case 736:
                sub_25AA0(a1, "zmm10");
                break;
              case 737:
                sub_25AA0(a1, "zmm11");
                break;
              case 738:
                sub_25AA0(a1, "zmm12");
                break;
              case 739:
                sub_25AA0(a1, "zmm13");
                break;
              case 740:
                sub_25AA0(a1, "zmm14");
                break;
              case 741:
                sub_25AA0(a1, "zmm15");
                break;
              case 742:
                sub_25AA0(a1, "zmm16");
                break;
              case 743:
                sub_25AA0(a1, "zmm17");
                break;
              case 744:
                sub_25AA0(a1, "zmm18");
                break;
              case 745:
                sub_25AA0(a1, "zmm19");
                break;
              case 746:
                sub_25AA0(a1, "zmm20");
                break;
              case 747:
                sub_25AA0(a1, "zmm21");
                break;
              case 748:
                sub_25AA0(a1, "zmm22");
                break;
              case 749:
                sub_25AA0(a1, "zmm23");
                break;
              case 750:
                sub_25AA0(a1, "zmm24");
                break;
              case 751:
                sub_25AA0(a1, "zmm25");
                break;
              case 752:
                sub_25AA0(a1, "zmm26");
                break;
              case 753:
                sub_25AA0(a1, "zmm27");
                break;
              case 754:
                sub_25AA0(a1, "zmm28");
                break;
              case 755:
                sub_25AA0(a1, "zmm29");
                break;
              case 756:
                sub_25AA0(a1, "zmm30");
                break;
              case 757:
                sub_25AA0(a1, "zmm31");
                break;
              case 758:
LABEL_1369:
                sub_25AA0(a1, "k0");
                break;
              case 759:
LABEL_1368:
                sub_25AA0(a1, "k1");
                break;
              case 760:
LABEL_1367:
                sub_25AA0(a1, "k2");
                break;
              case 761:
LABEL_1366:
                sub_25AA0(a1, "k3");
                break;
              case 762:
LABEL_1365:
                sub_25AA0(a1, "k4");
                break;
              case 763:
LABEL_1364:
                sub_25AA0(a1, "k5");
                break;
              case 764:
LABEL_1363:
                sub_25AA0(a1, "k6");
                break;
              case 765:
LABEL_1362:
                sub_25AA0(a1, "k7");
                break;
              case 766:
LABEL_1361:
                sub_25AA0(a1, "zmm0h");
                break;
              case 767:
LABEL_1360:
                sub_25AA0(a1, "zmm1h");
                break;
              case 768:
LABEL_1359:
                sub_25AA0(a1, "zmm2h");
                break;
              case 769:
LABEL_1358:
                sub_25AA0(a1, "zmm3h");
                break;
              case 770:
LABEL_1357:
                sub_25AA0(a1, "zmm4h");
                break;
              case 771:
LABEL_1356:
                sub_25AA0(a1, "zmm5h");
                break;
              case 772:
LABEL_1355:
                sub_25AA0(a1, "zmm6h");
                break;
              case 773:
LABEL_1354:
                sub_25AA0(a1, "zmm7h");
                break;
              case 774:
                sub_25AA0(a1, "zmm8h");
                break;
              case 775:
                sub_25AA0(a1, "zmm9h");
                break;
              case 776:
                sub_25AA0(a1, "zmm10h");
                break;
              case 777:
                sub_25AA0(a1, "zmm11h");
                break;
              case 778:
                sub_25AA0(a1, "zmm12h");
                break;
              case 779:
                sub_25AA0(a1, "zmm13h");
                break;
              case 780:
                sub_25AA0(a1, "zmm14h");
                break;
              case 781:
                sub_25AA0(a1, "zmm15h");
                break;
              case 782:
                sub_25AA0(a1, "xmm16l");
                break;
              case 783:
                sub_25AA0(a1, "xmm17l");
                break;
              case 784:
                sub_25AA0(a1, "xmm18l");
                break;
              case 785:
                sub_25AA0(a1, "xmm19l");
                break;
              case 786:
                sub_25AA0(a1, "xmm20l");
                break;
              case 787:
                sub_25AA0(a1, "xmm21l");
                break;
              case 788:
                sub_25AA0(a1, "xmm22l");
                break;
              case 789:
                sub_25AA0(a1, "xmm23l");
                break;
              case 790:
                sub_25AA0(a1, "xmm24l");
                break;
              case 791:
                sub_25AA0(a1, "xmm25l");
                break;
              case 792:
                sub_25AA0(a1, "xmm26l");
                break;
              case 793:
                sub_25AA0(a1, "xmm27l");
                break;
              case 794:
                sub_25AA0(a1, "xmm28l");
                break;
              case 795:
                sub_25AA0(a1, "xmm29l");
                break;
              case 796:
                sub_25AA0(a1, "xmm30l");
                break;
              case 797:
                sub_25AA0(a1, "xmm31l");
                break;
              case 798:
                sub_25AA0(a1, "xmm16_0");
                break;
              case 799:
                sub_25AA0(a1, "xmm17_0");
                break;
              case 800:
                sub_25AA0(a1, "xmm18_0");
                break;
              case 801:
                sub_25AA0(a1, "xmm19_0");
                break;
              case 802:
                sub_25AA0(a1, "xmm20_0");
                break;
              case 803:
                sub_25AA0(a1, "xmm21_0");
                break;
              case 804:
                sub_25AA0(a1, "xmm22_0");
                break;
              case 805:
                sub_25AA0(a1, "xmm23_0");
                break;
              case 806:
                sub_25AA0(a1, "xmm24_0");
                break;
              case 807:
                sub_25AA0(a1, "xmm25_0");
                break;
              case 808:
                sub_25AA0(a1, "xmm26_0");
                break;
              case 809:
                sub_25AA0(a1, "xmm27_0");
                break;
              case 810:
                sub_25AA0(a1, "xmm28_0");
                break;
              case 811:
                sub_25AA0(a1, "xmm29_0");
                break;
              case 812:
                sub_25AA0(a1, "xmm30_0");
                break;
              case 813:
                sub_25AA0(a1, "xmm31_0");
                break;
              case 814:
                sub_25AA0(a1, "xmm16h");
                break;
              case 815:
                sub_25AA0(a1, "xmm17h");
                break;
              case 816:
                sub_25AA0(a1, "xmm18h");
                break;
              case 817:
                sub_25AA0(a1, "xmm19h");
                break;
              case 818:
                sub_25AA0(a1, "xmm20h");
                break;
              case 819:
                sub_25AA0(a1, "xmm21h");
                break;
              case 820:
                sub_25AA0(a1, "xmm22h");
                break;
              case 821:
                sub_25AA0(a1, "xmm23h");
                break;
              case 822:
                sub_25AA0(a1, "xmm24h");
                break;
              case 823:
                sub_25AA0(a1, "xmm25h");
                break;
              case 824:
                sub_25AA0(a1, "xmm26h");
                break;
              case 825:
                sub_25AA0(a1, "xmm27h");
                break;
              case 826:
                sub_25AA0(a1, "xmm28h");
                break;
              case 827:
                sub_25AA0(a1, "xmm29h");
                break;
              case 828:
                sub_25AA0(a1, "xmm30h");
                break;
              case 829:
                sub_25AA0(a1, "xmm31h");
                break;
              case 830:
                sub_25AA0(a1, "emm16h");
                break;
              case 831:
                sub_25AA0(a1, "emm17h");
                break;
              case 832:
                sub_25AA0(a1, "emm18h");
                break;
              case 833:
                sub_25AA0(a1, "emm19h");
                break;
              case 834:
                sub_25AA0(a1, "emm20h");
                break;
              case 835:
                sub_25AA0(a1, "emm21h");
                break;
              case 836:
                sub_25AA0(a1, "emm22h");
                break;
              case 837:
                sub_25AA0(a1, "emm23h");
                break;
              case 838:
                sub_25AA0(a1, "emm24h");
                break;
              case 839:
                sub_25AA0(a1, "emm25h");
                break;
              case 840:
                sub_25AA0(a1, "emm26h");
                break;
              case 841:
                sub_25AA0(a1, "emm27h");
                break;
              case 842:
                sub_25AA0(a1, "emm28h");
                break;
              case 843:
                sub_25AA0(a1, "emm29h");
                break;
              case 844:
                sub_25AA0(a1, "emm30h");
                break;
              case 845:
                sub_25AA0(a1, "emm31h");
                break;
              case 846:
LABEL_577:
                sub_25AA0(a1, "ssp");
                break;
              case 847:
                sub_25AA0(a1, "tmm0");
                break;
              case 848:
                sub_25AA0(a1, "tmm1");
                break;
              case 849:
                sub_25AA0(a1, "tmm2");
                break;
              case 850:
                sub_25AA0(a1, "tmm3");
                break;
              case 851:
                sub_25AA0(a1, "tmm4");
                break;
              case 852:
                sub_25AA0(a1, "tmm5");
                break;
              case 853:
                sub_25AA0(a1, "tmm6");
                break;
              case 854:
                sub_25AA0(a1, "tmm7");
                break;
              case 855:
                sub_25AA0(a1, "tilecfg");
                break;
              default:
                goto LABEL_51;
            }
            return;
          }
          if ( (_DWORD)a2 != 240 )
            goto LABEL_51;
LABEL_54:
          switch ( a3 )
          {
            case 0:
              goto LABEL_218;
            case 10:
              goto LABEL_229;
            case 11:
              goto LABEL_232;
            case 12:
              goto LABEL_228;
            case 13:
              goto LABEL_231;
            case 14:
              goto LABEL_230;
            case 15:
              goto LABEL_225;
            case 16:
              goto LABEL_224;
            case 17:
              goto LABEL_223;
            case 18:
              goto LABEL_222;
            case 19:
              goto LABEL_241;
            case 20:
              goto LABEL_221;
            case 21:
              goto LABEL_220;
            case 22:
              goto LABEL_219;
            case 23:
              goto LABEL_273;
            case 24:
              goto LABEL_396;
            case 25:
              goto LABEL_217;
            case 26:
              sub_25AA0(a1, "cpsr");
              break;
            case 27:
              sub_25AA0(a1, "acc0");
              break;
            case 40:
LABEL_1822:
              sub_25AA0(a1, "fpscr");
              break;
            case 41:
              sub_25AA0(a1, "fpexc");
              break;
            case 50:
              goto LABEL_272;
            case 51:
              goto LABEL_302;
            case 52:
              goto LABEL_301;
            case 53:
              goto LABEL_300;
            case 54:
              goto LABEL_299;
            case 55:
              goto LABEL_298;
            case 56:
              goto LABEL_297;
            case 57:
              goto LABEL_295;
            case 58:
              goto LABEL_296;
            case 59:
              goto LABEL_294;
            case 60:
              goto LABEL_293;
            case 61:
              goto LABEL_292;
            case 62:
              goto LABEL_291;
            case 63:
              goto LABEL_290;
            case 64:
              goto LABEL_289;
            case 65:
              goto LABEL_288;
            case 66:
              goto LABEL_303;
            case 67:
              goto LABEL_287;
            case 68:
              goto LABEL_286;
            case 69:
              goto LABEL_285;
            case 70:
              goto LABEL_284;
            case 71:
              goto LABEL_283;
            case 72:
              goto LABEL_282;
            case 73:
              goto LABEL_280;
            case 74:
              goto LABEL_281;
            case 75:
              goto LABEL_279;
            case 76:
              goto LABEL_277;
            case 77:
              goto LABEL_276;
            case 78:
              goto LABEL_275;
            case 79:
              goto LABEL_274;
            case 80:
              goto LABEL_271;
            case 81:
              goto LABEL_278;
            case 90:
              sub_25AA0(a1, "fpextra0");
              break;
            case 91:
              sub_25AA0(a1, "fpextra1");
              break;
            case 92:
              sub_25AA0(a1, "fpextra2");
              break;
            case 93:
              sub_25AA0(a1, "fpextra3");
              break;
            case 94:
              sub_25AA0(a1, "fpextra4");
              break;
            case 95:
              sub_25AA0(a1, "fpextra5");
              break;
            case 96:
              sub_25AA0(a1, "fpextra6");
              break;
            case 97:
              sub_25AA0(a1, "fpextra7");
              break;
            case 128:
              sub_25AA0(a1, "wr0");
              break;
            case 129:
              sub_25AA0(a1, "wr1");
              break;
            case 130:
              sub_25AA0(a1, "wr2");
              break;
            case 131:
              sub_25AA0(a1, "wr3");
              break;
            case 132:
              sub_25AA0(a1, "wr4");
              break;
            case 133:
              sub_25AA0(a1, "wr5");
              break;
            case 134:
              sub_25AA0(a1, "wr6");
              break;
            case 135:
              sub_25AA0(a1, "wr7");
              break;
            case 136:
              sub_25AA0(a1, "wr8");
              break;
            case 137:
              sub_25AA0(a1, "wr9");
              break;
            case 138:
              sub_25AA0(a1, "wr10");
              break;
            case 139:
              sub_25AA0(a1, "wr11");
              break;
            case 140:
              sub_25AA0(a1, "wr12");
              break;
            case 141:
              sub_25AA0(a1, "wr13");
              break;
            case 142:
              sub_25AA0(a1, "wr14");
              break;
            case 143:
              sub_25AA0(a1, "wr15");
              break;
            case 144:
              sub_25AA0(a1, "wcid");
              break;
            case 145:
              sub_25AA0(a1, "wcon");
              break;
            case 146:
              sub_25AA0(a1, "wcssf");
              break;
            case 147:
              sub_25AA0(a1, "wcasf");
              break;
            case 148:
              sub_25AA0(a1, "wc4");
              break;
            case 149:
              sub_25AA0(a1, "wc5");
              break;
            case 150:
              sub_25AA0(a1, "wc6");
              break;
            case 151:
              sub_25AA0(a1, "wc7");
              break;
            case 152:
              sub_25AA0(a1, "wcgr0");
              break;
            case 153:
              sub_25AA0(a1, "wcgr1");
              break;
            case 154:
              sub_25AA0(a1, "wcgr2");
              break;
            case 155:
              sub_25AA0(a1, "wcgr3");
              break;
            case 156:
              sub_25AA0(a1, "wc12");
              break;
            case 157:
              sub_25AA0(a1, "wc13");
              break;
            case 158:
              sub_25AA0(a1, "wc14");
              break;
            case 159:
              sub_25AA0(a1, "wc15");
              break;
            case 200:
              sub_25AA0(a1, "fs32");
              break;
            case 201:
              sub_25AA0(a1, "fs33");
              break;
            case 202:
              sub_25AA0(a1, "fs34");
              break;
            case 203:
              sub_25AA0(a1, "fs35");
              break;
            case 204:
              sub_25AA0(a1, "fs36");
              break;
            case 205:
              sub_25AA0(a1, "fs37");
              break;
            case 206:
              sub_25AA0(a1, "fs38");
              break;
            case 207:
              sub_25AA0(a1, "fs39");
              break;
            case 208:
              sub_25AA0(a1, "fs40");
              break;
            case 209:
              sub_25AA0(a1, "fs41");
              break;
            case 210:
              sub_25AA0(a1, "fs42");
              break;
            case 211:
              sub_25AA0(a1, "fs43");
              break;
            case 212:
              sub_25AA0(a1, "fs44");
              break;
            case 213:
              sub_25AA0(a1, "fs45");
              break;
            case 214:
              sub_25AA0(a1, "fs46");
              break;
            case 215:
              sub_25AA0(a1, "fs47");
              break;
            case 216:
              sub_25AA0(a1, "fs48");
              break;
            case 217:
              sub_25AA0(a1, "fs49");
              break;
            case 218:
              sub_25AA0(a1, "fs50");
              break;
            case 219:
              sub_25AA0(a1, "fs51");
              break;
            case 220:
              sub_25AA0(a1, "fs52");
              break;
            case 221:
              sub_25AA0(a1, "fs53");
              break;
            case 222:
              sub_25AA0(a1, "fs54");
              break;
            case 223:
              sub_25AA0(a1, "fs55");
              break;
            case 224:
              sub_25AA0(a1, "fs56");
              break;
            case 225:
              sub_25AA0(a1, "fs57");
              break;
            case 226:
              sub_25AA0(a1, "fs58");
              break;
            case 227:
              sub_25AA0(a1, "fs59");
              break;
            case 228:
              sub_25AA0(a1, "fs60");
              break;
            case 229:
              sub_25AA0(a1, "fs61");
              break;
            case 230:
              sub_25AA0(a1, "fs62");
              break;
            case 231:
              sub_25AA0(a1, "fs63");
              break;
            case 300:
              sub_25AA0(a1, "nd0");
              break;
            case 301:
              sub_25AA0(a1, "nd1");
              break;
            case 302:
              sub_25AA0(a1, "nd2");
              break;
            case 303:
              sub_25AA0(a1, "nd3");
              break;
            case 304:
              sub_25AA0(a1, "nd4");
              break;
            case 305:
              sub_25AA0(a1, "nd5");
              break;
            case 306:
              sub_25AA0(a1, "nd6");
              break;
            case 307:
              sub_25AA0(a1, "nd7");
              break;
            case 308:
              sub_25AA0(a1, "nd8");
              break;
            case 309:
              sub_25AA0(a1, "nd9");
              break;
            case 310:
              sub_25AA0(a1, "nd10");
              break;
            case 311:
              sub_25AA0(a1, "nd11");
              break;
            case 312:
              sub_25AA0(a1, "nd12");
              break;
            case 313:
              sub_25AA0(a1, "nd13");
              break;
            case 314:
              sub_25AA0(a1, "nd14");
              break;
            case 315:
              sub_25AA0(a1, "nd15");
              break;
            case 316:
              sub_25AA0(a1, "nd16");
              break;
            case 317:
              sub_25AA0(a1, "nd17");
              break;
            case 318:
              sub_25AA0(a1, "nd18");
              break;
            case 319:
              sub_25AA0(a1, "nd19");
              break;
            case 320:
              sub_25AA0(a1, "nd20");
              break;
            case 321:
              sub_25AA0(a1, "nd21");
              break;
            case 322:
              sub_25AA0(a1, "nd22");
              break;
            case 323:
              sub_25AA0(a1, "nd23");
              break;
            case 324:
              sub_25AA0(a1, "nd24");
              break;
            case 325:
              sub_25AA0(a1, "nd25");
              break;
            case 326:
              sub_25AA0(a1, "nd26");
              break;
            case 327:
              sub_25AA0(a1, "nd27");
              break;
            case 328:
              sub_25AA0(a1, "nd28");
              break;
            case 329:
              sub_25AA0(a1, "nd29");
              break;
            case 330:
              sub_25AA0(a1, "nd30");
              break;
            case 331:
              sub_25AA0(a1, "nd31");
              break;
            case 400:
              sub_25AA0(a1, "nq0");
              break;
            case 401:
              sub_25AA0(a1, "nq1");
              break;
            case 402:
              sub_25AA0(a1, "nq2");
              break;
            case 403:
              sub_25AA0(a1, "nq3");
              break;
            case 404:
              sub_25AA0(a1, "nq4");
              break;
            case 405:
              sub_25AA0(a1, "nq5");
              break;
            case 406:
              sub_25AA0(a1, "nq6");
              break;
            case 407:
              sub_25AA0(a1, "nq7");
              break;
            case 408:
              sub_25AA0(a1, "nq8");
              break;
            case 409:
              sub_25AA0(a1, "nq9");
              break;
            case 410:
              sub_25AA0(a1, "nq10");
              break;
            case 411:
              sub_25AA0(a1, "nq11");
              break;
            case 412:
              sub_25AA0(a1, "nq12");
              break;
            case 413:
              sub_25AA0(a1, "nq13");
              break;
            case 414:
              sub_25AA0(a1, "nq14");
              break;
            case 415:
              sub_25AA0(a1, "nq15");
              break;
            default:
              goto LABEL_51;
          }
          return;
        }
        if ( (_DWORD)a2 != 246 )
          goto LABEL_51;
        switch ( a3 )
        {
          case 0:
            goto LABEL_218;
          case 10:
            sub_25AA0(a1, "w0");
            break;
          case 11:
            sub_25AA0(a1, "w1");
            break;
          case 12:
            sub_25AA0(a1, "w2");
            break;
          case 13:
            sub_25AA0(a1, "w3");
            break;
          case 14:
            sub_25AA0(a1, "w4");
            break;
          case 15:
            sub_25AA0(a1, "w5");
            break;
          case 16:
            sub_25AA0(a1, "w6");
            break;
          case 17:
            sub_25AA0(a1, "w7");
            break;
          case 18:
            sub_25AA0(a1, "w8");
            break;
          case 19:
            sub_25AA0(a1, "w9");
            break;
          case 20:
            sub_25AA0(a1, "w10");
            break;
          case 21:
            sub_25AA0(a1, "w11");
            break;
          case 22:
            sub_25AA0(a1, "w12");
            break;
          case 23:
            sub_25AA0(a1, "w13");
            break;
          case 24:
            sub_25AA0(a1, "w14");
            break;
          case 25:
            sub_25AA0(a1, "w15");
            break;
          case 26:
            sub_25AA0(a1, "w16");
            break;
          case 27:
            sub_25AA0(a1, "w17");
            break;
          case 28:
            sub_25AA0(a1, "w18");
            break;
          case 29:
            sub_25AA0(a1, "w19");
            break;
          case 30:
            sub_25AA0(a1, "w20");
            break;
          case 31:
            sub_25AA0(a1, "w21");
            break;
          case 32:
            sub_25AA0(a1, "w22");
            break;
          case 33:
            sub_25AA0(a1, "w23");
            break;
          case 34:
            sub_25AA0(a1, "w24");
            break;
          case 35:
            sub_25AA0(a1, "w25");
            break;
          case 36:
            sub_25AA0(a1, "w26");
            break;
          case 37:
            sub_25AA0(a1, "w27");
            break;
          case 38:
            sub_25AA0(a1, "w28");
            break;
          case 39:
            sub_25AA0(a1, "w29");
            break;
          case 41:
            sub_25AA0(a1, "wzr");
            break;
          case 50:
            sub_25AA0(a1, "x0");
            break;
          case 51:
            sub_25AA0(a1, "x1");
            break;
          case 52:
            sub_25AA0(a1, "x2");
            break;
          case 53:
            sub_25AA0(a1, "x3");
            break;
          case 54:
            sub_25AA0(a1, "x4");
            break;
          case 55:
            sub_25AA0(a1, "x5");
            break;
          case 56:
            sub_25AA0(a1, "x6");
            break;
          case 57:
            sub_25AA0(a1, "x7");
            break;
          case 58:
            sub_25AA0(a1, "x8");
            break;
          case 59:
            sub_25AA0(a1, "x9");
            break;
          case 60:
            sub_25AA0(a1, "x10");
            break;
          case 61:
            sub_25AA0(a1, "x11");
            break;
          case 62:
            sub_25AA0(a1, "x12");
            break;
          case 63:
            sub_25AA0(a1, "x13");
            break;
          case 64:
            sub_25AA0(a1, "x14");
            break;
          case 65:
            sub_25AA0(a1, "x15");
            break;
          case 66:
            sub_25AA0(a1, "x16");
            break;
          case 67:
            sub_25AA0(a1, "x17");
            break;
          case 68:
            sub_25AA0(a1, "x18");
            break;
          case 69:
            sub_25AA0(a1, "x19");
            break;
          case 70:
            sub_25AA0(a1, "x20");
            break;
          case 71:
            sub_25AA0(a1, "x21");
            break;
          case 72:
            sub_25AA0(a1, "x22");
            break;
          case 73:
            sub_25AA0(a1, "x23");
            break;
          case 74:
            sub_25AA0(a1, "x24");
            break;
          case 75:
            sub_25AA0(a1, "x25");
            break;
          case 76:
            sub_25AA0(a1, "x26");
            break;
          case 77:
            sub_25AA0(a1, "x27");
            break;
          case 78:
            sub_25AA0(a1, "x28");
            break;
          case 79:
            sub_25AA0(a1, "fp");
            break;
          case 80:
LABEL_396:
            sub_25AA0(a1, "lr");
            break;
          case 81:
            goto LABEL_273;
          case 82:
            sub_25AA0(a1, "xzr");
            break;
          case 100:
            sub_25AA0(a1, "s0");
            break;
          case 101:
            sub_25AA0(a1, "s1");
            break;
          case 102:
            sub_25AA0(a1, "s2");
            break;
          case 103:
            sub_25AA0(a1, "s3");
            break;
          case 104:
            sub_25AA0(a1, "s4");
            break;
          case 105:
            sub_25AA0(a1, "s5");
            break;
          case 106:
            sub_25AA0(a1, "s6");
            break;
          case 107:
            sub_25AA0(a1, "s7");
            break;
          case 108:
            sub_25AA0(a1, "s8");
            break;
          case 109:
            sub_25AA0(a1, "s9");
            break;
          case 110:
            sub_25AA0(a1, "s10");
            break;
          case 111:
            sub_25AA0(a1, "s11");
            break;
          case 112:
            sub_25AA0(a1, "s12");
            break;
          case 113:
            sub_25AA0(a1, "s13");
            break;
          case 114:
            sub_25AA0(a1, "s14");
            break;
          case 115:
            sub_25AA0(a1, "s15");
            break;
          case 116:
            sub_25AA0(a1, "s16");
            break;
          case 117:
            sub_25AA0(a1, "s17");
            break;
          case 118:
            sub_25AA0(a1, "s18");
            break;
          case 119:
            sub_25AA0(a1, "s19");
            break;
          case 120:
            sub_25AA0(a1, "s20");
            break;
          case 121:
            sub_25AA0(a1, "s21");
            break;
          case 122:
            sub_25AA0(a1, "s22");
            break;
          case 123:
            sub_25AA0(a1, "s23");
            break;
          case 124:
            sub_25AA0(a1, "s24");
            break;
          case 125:
            sub_25AA0(a1, "s25");
            break;
          case 126:
            sub_25AA0(a1, "s26");
            break;
          case 127:
            sub_25AA0(a1, "s27");
            break;
          case 128:
            sub_25AA0(a1, "s28");
            break;
          case 129:
            sub_25AA0(a1, "s29");
            break;
          case 130:
            sub_25AA0(a1, "s30");
            break;
          case 131:
            sub_25AA0(a1, "s31");
            break;
          case 140:
            goto LABEL_248;
          case 141:
            goto LABEL_249;
          case 142:
            goto LABEL_247;
          case 143:
            goto LABEL_246;
          case 144:
            goto LABEL_361;
          case 145:
            goto LABEL_362;
          case 146:
            goto LABEL_360;
          case 147:
            goto LABEL_359;
          case 148:
            goto LABEL_358;
          case 149:
            goto LABEL_352;
          case 150:
            goto LABEL_357;
          case 151:
            goto LABEL_356;
          case 152:
            goto LABEL_355;
          case 153:
            goto LABEL_354;
          case 154:
            goto LABEL_353;
          case 155:
            goto LABEL_363;
          case 156:
            sub_25AA0(a1, "d16");
            break;
          case 157:
            sub_25AA0(a1, "d17");
            break;
          case 158:
            sub_25AA0(a1, "d18");
            break;
          case 159:
            sub_25AA0(a1, "d19");
            break;
          case 160:
            sub_25AA0(a1, "d20");
            break;
          case 161:
            sub_25AA0(a1, "d21");
            break;
          case 162:
            sub_25AA0(a1, "d22");
            break;
          case 163:
            sub_25AA0(a1, "d23");
            break;
          case 164:
            sub_25AA0(a1, "d24");
            break;
          case 165:
            sub_25AA0(a1, "d25");
            break;
          case 166:
            sub_25AA0(a1, "d26");
            break;
          case 167:
            sub_25AA0(a1, "d27");
            break;
          case 168:
            sub_25AA0(a1, "d28");
            break;
          case 169:
            sub_25AA0(a1, "d29");
            break;
          case 170:
            sub_25AA0(a1, "d30");
            break;
          case 171:
            sub_25AA0(a1, "d31");
            break;
          case 180:
            sub_25AA0(a1, "q0");
            break;
          case 181:
            sub_25AA0(a1, "q1");
            break;
          case 182:
            sub_25AA0(a1, "q2");
            break;
          case 183:
            sub_25AA0(a1, "q3");
            break;
          case 184:
            sub_25AA0(a1, "q4");
            break;
          case 185:
            sub_25AA0(a1, "q5");
            break;
          case 186:
            sub_25AA0(a1, "q6");
            break;
          case 187:
            sub_25AA0(a1, "q7");
            break;
          case 188:
            sub_25AA0(a1, "q8");
            break;
          case 189:
            sub_25AA0(a1, "q9");
            break;
          case 190:
            sub_25AA0(a1, "q10");
            break;
          case 191:
            sub_25AA0(a1, "q11");
            break;
          case 192:
            sub_25AA0(a1, "q12");
            break;
          case 193:
            sub_25AA0(a1, "q13");
            break;
          case 194:
            sub_25AA0(a1, "q14");
            break;
          case 195:
            sub_25AA0(a1, "q15");
            break;
          case 196:
            sub_25AA0(a1, "q16");
            break;
          case 197:
            sub_25AA0(a1, "q17");
            break;
          case 198:
            sub_25AA0(a1, "q18");
            break;
          case 199:
            sub_25AA0(a1, "q19");
            break;
          case 200:
            sub_25AA0(a1, "q20");
            break;
          case 201:
            sub_25AA0(a1, "q21");
            break;
          case 202:
            sub_25AA0(a1, "q22");
            break;
          case 203:
            sub_25AA0(a1, "q23");
            break;
          case 204:
            sub_25AA0(a1, "q24");
            break;
          case 205:
            sub_25AA0(a1, "q25");
            break;
          case 206:
            sub_25AA0(a1, "q26");
            break;
          case 207:
            sub_25AA0(a1, "q27");
            break;
          case 208:
            sub_25AA0(a1, "q28");
            break;
          case 209:
            sub_25AA0(a1, "q29");
            break;
          case 210:
            sub_25AA0(a1, "q30");
            break;
          case 211:
            sub_25AA0(a1, "q31");
            break;
          case 382:
            sub_25AA0(a1, "z0");
            break;
          case 383:
            sub_25AA0(a1, "z1");
            break;
          case 384:
            sub_25AA0(a1, "z2");
            break;
          case 385:
            sub_25AA0(a1, "z3");
            break;
          case 386:
            sub_25AA0(a1, "z4");
            break;
          case 387:
            sub_25AA0(a1, "z5");
            break;
          case 388:
            sub_25AA0(a1, "z6");
            break;
          case 389:
            sub_25AA0(a1, "z7");
            break;
          case 390:
            sub_25AA0(a1, "z8");
            break;
          case 391:
            sub_25AA0(a1, "z9");
            break;
          case 392:
            sub_25AA0(a1, "z10");
            break;
          case 393:
            sub_25AA0(a1, "z11");
            break;
          case 394:
            sub_25AA0(a1, "z12");
            break;
          case 395:
            sub_25AA0(a1, "z13");
            break;
          case 396:
            sub_25AA0(a1, "z14");
            break;
          case 397:
            sub_25AA0(a1, "z15");
            break;
          case 398:
            sub_25AA0(a1, "z16");
            break;
          case 399:
            sub_25AA0(a1, "z17");
            break;
          case 400:
            sub_25AA0(a1, "z18");
            break;
          case 401:
            sub_25AA0(a1, "z19");
            break;
          case 402:
            sub_25AA0(a1, "z20");
            break;
          case 403:
            sub_25AA0(a1, "z21");
            break;
          case 404:
            sub_25AA0(a1, "z22");
            break;
          case 405:
            sub_25AA0(a1, "z23");
            break;
          case 406:
            sub_25AA0(a1, "z24");
            break;
          case 407:
            sub_25AA0(a1, "z25");
            break;
          case 408:
            sub_25AA0(a1, "z26");
            break;
          case 409:
            sub_25AA0(a1, "z27");
            break;
          case 410:
            sub_25AA0(a1, "z28");
            break;
          case 411:
            sub_25AA0(a1, "z29");
            break;
          case 412:
            sub_25AA0(a1, "z30");
            break;
          case 413:
            sub_25AA0(a1, "z31");
            break;
          case 414:
LABEL_2015:
            sub_25AA0(a1, "p0");
            break;
          case 415:
LABEL_2014:
            sub_25AA0(a1, "p1");
            break;
          case 416:
LABEL_1965:
            sub_25AA0(a1, "p2");
            break;
          case 417:
LABEL_1964:
            sub_25AA0(a1, "p3");
            break;
          case 418:
LABEL_1963:
            sub_25AA0(a1, "p4");
            break;
          case 419:
LABEL_1962:
            sub_25AA0(a1, "p5");
            break;
          case 420:
LABEL_1961:
            sub_25AA0(a1, "p6");
            break;
          case 421:
LABEL_1960:
            sub_25AA0(a1, "p7");
            break;
          case 422:
LABEL_1959:
            sub_25AA0(a1, "p8");
            break;
          case 423:
LABEL_1958:
            sub_25AA0(a1, "p9");
            break;
          case 424:
LABEL_1957:
            sub_25AA0(a1, "p10");
            break;
          case 425:
LABEL_1956:
            sub_25AA0(a1, "p11");
            break;
          case 426:
LABEL_1955:
            sub_25AA0(a1, "p12");
            break;
          case 427:
LABEL_1954:
            sub_25AA0(a1, "p13");
            break;
          case 428:
LABEL_1953:
            sub_25AA0(a1, "p14");
            break;
          case 429:
LABEL_1952:
            sub_25AA0(a1, "p15");
            break;
          case 430:
            sub_25AA0(a1, "ffr");
            break;
          default:
            goto LABEL_51;
        }
      }
      return;
  }
}

