__int64 __fastcall sub_22020(__int64 a1, _BYTE *a2)
{
  int v2; // ecx
  unsigned __int16 v5; // si
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r10
  __int64 result; // rax
  char v10; // al
  __int16 v11; // ax
  unsigned __int16 v12; // cx

  v2 = *(unsigned __int16 *)(a1 + 24);
  v5 = v2 - 770;
  v6 = (*(char *)(a1 + 33) >> 3) & 1;
  if ( (unsigned __int16)(v2 - 770) > 0x309u )
    goto LABEL_2;
  if ( *a2 != 2 )
  {
LABEL_5:
    if ( *(_BYTE *)(a1 + v5) <= 7u )
    {
      switch ( (__int16)v2 )
      {
        case 770:
        case 771:
        case 790:
        case 791:
        case 794:
        case 795:
        case 796:
        case 797:
        case 807:
        case 808:
        case 809:
        case 810:
        case 818:
        case 819:
        case 824:
        case 827:
        case 828:
        case 831:
        case 832:
        case 835:
        case 836:
        case 845:
        case 846:
        case 849:
        case 850:
        case 853:
        case 854:
        case 863:
        case 864:
        case 867:
        case 868:
        case 871:
        case 872:
        case 875:
        case 876:
        case 879:
        case 880:
        case 883:
        case 884:
        case 885:
        case 886:
        case 887:
        case 888:
        case 895:
        case 903:
        case 904:
        case 907:
        case 908:
        case 911:
        case 916:
        case 919:
        case 927:
        case 928:
        case 931:
        case 937:
        case 938:
        case 964:
        case 965:
        case 966:
        case 967:
        case 989:
        case 990:
        case 991:
        case 992:
        case 993:
        case 994:
        case 995:
        case 996:
        case 1004:
        case 1005:
        case 1006:
        case 1007:
        case 1098:
        case 1099:
        case 1103:
        case 1104:
        case 1107:
        case 1108:
        case 1321:
        case 1322:
        case 1345:
        case 1346:
        case 1348:
        case 1349:
        case 1360:
        case 1361:
        case 1364:
        case 1365:
        case 1368:
        case 1369:
        case 1372:
        case 1373:
        case 1403:
        case 1404:
        case 1421:
        case 1422:
        case 1469:
        case 1470:
        case 1471:
        case 1472:
        case 1496:
        case 1497:
        case 1499:
        case 1501:
        case 1503:
        case 1505:
        case 1507:
        case 1509:
        case 1511:
        case 1513:
        case 1515:
        case 1517:
        case 1518:
        case 1519:
        case 1520:
        case 1521:
        case 1525:
        case 1527:
        case 1529:
        case 1531:
        case 1532:
        case 1533:
        case 1534:
        case 1535:
        case 1536:
        case 1537:
        case 1538:
        case 1539:
        case 1540:
        case 1541:
        case 1542:
        case 1543:
        case 1544:
        case 1545:
        case 1546:
        case 1547:
          v12 = v2 - 964;
          if ( v12 > 0x2Bu )
            return (unsigned int)(v6 + 2);
          v7 = 1;
          if ( ((1LL << v12) & 0x80010000008LL) == 0 )
          {
            v7 = 0;
            if ( ((1LL << v12) & 0x10002000001LL) == 0 )
              return (unsigned int)(v6 + 2);
          }
          return v7;
        case 806:
        case 811:
        case 814:
        case 815:
        case 1331:
        case 1332:
        case 1339:
        case 1340:
          goto LABEL_14;
        case 912:
          goto LABEL_12;
        case 917:
        case 920:
        case 1311:
        case 1313:
        case 1316:
        case 1318:
        case 1351:
        case 1355:
        case 1375:
        case 1379:
          goto LABEL_19;
        case 1312:
        case 1315:
        case 1317:
        case 1320:
        case 1350:
        case 1353:
        case 1354:
        case 1357:
        case 1374:
        case 1377:
        case 1378:
        case 1381:
          goto LABEL_18;
        case 1314:
        case 1319:
        case 1352:
        case 1356:
        case 1376:
        case 1380:
          goto LABEL_17;
        default:
          break;
      }
    }
LABEL_2:
    if ( (*(_BYTE *)(a1 + 273) & 8) != 0 )
    {
      return (unsigned int)(v6 + 2);
    }
    else
    {
      switch ( a2[5] )
      {
        case 1:
          v7 = 1;
          break;
        case 2:
          v7 = 2;
          break;
        case 7:
          return 3;
        case 8:
          v7 = 4;
          break;
        case 0x10:
          v7 = 5;
          break;
        case 0x11:
          v7 = 6;
          break;
        default:
          v7 = 0;
          break;
      }
    }
    return v7;
  }
  if ( (unsigned __int16)v2 > 0x428u )
  {
    v7 = 4;
    if ( (_WORD)v2 == 1473 )
      return v7;
  }
  else
  {
    if ( (unsigned __int16)v2 <= 0x41Cu )
      goto LABEL_5;
    v8 = 2565;
    v7 = 4;
    if ( _bittest64(&v8, (unsigned int)(v2 - 1053)) )
      return v7;
  }
  if ( (unsigned __int8)byte_4[v5] > 7u )
    goto LABEL_2;
  switch ( (__int16)v2 )
  {
    case 770:
    case 771:
    case 790:
    case 791:
    case 794:
    case 795:
    case 796:
    case 797:
    case 807:
    case 808:
    case 809:
    case 810:
    case 818:
    case 819:
    case 824:
    case 827:
    case 828:
    case 831:
    case 832:
    case 835:
    case 836:
    case 845:
    case 846:
    case 849:
    case 850:
    case 853:
    case 854:
    case 863:
    case 864:
    case 867:
    case 868:
    case 871:
    case 872:
    case 875:
    case 876:
    case 879:
    case 880:
    case 883:
    case 884:
    case 885:
    case 886:
    case 887:
    case 888:
    case 895:
    case 903:
    case 904:
    case 907:
    case 908:
    case 911:
    case 916:
    case 919:
    case 927:
    case 928:
    case 931:
    case 937:
    case 938:
    case 964:
    case 965:
    case 966:
    case 967:
    case 989:
    case 990:
    case 991:
    case 992:
    case 993:
    case 994:
    case 995:
    case 996:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1098:
    case 1099:
    case 1103:
    case 1104:
    case 1107:
    case 1108:
    case 1321:
    case 1322:
    case 1345:
    case 1346:
    case 1348:
    case 1349:
    case 1360:
    case 1361:
    case 1364:
    case 1365:
    case 1368:
    case 1369:
    case 1372:
    case 1373:
    case 1403:
    case 1404:
    case 1421:
    case 1422:
    case 1469:
    case 1470:
    case 1471:
    case 1472:
    case 1496:
    case 1497:
    case 1499:
    case 1501:
    case 1503:
    case 1505:
    case 1507:
    case 1509:
    case 1511:
    case 1513:
    case 1515:
    case 1517:
    case 1518:
    case 1519:
    case 1520:
    case 1521:
    case 1525:
    case 1527:
    case 1529:
    case 1531:
    case 1532:
    case 1533:
    case 1534:
    case 1535:
    case 1536:
    case 1537:
    case 1538:
    case 1539:
    case 1540:
    case 1541:
    case 1542:
    case 1543:
    case 1544:
    case 1545:
    case 1546:
    case 1547:
      return (unsigned int)(v6 + 2);
    case 806:
    case 811:
    case 814:
    case 815:
    case 1331:
    case 1332:
    case 1339:
    case 1340:
LABEL_14:
      v11 = v2 & 0xFFF7;
      if ( (v2 & 0xFFF7) == 0x326 || v11 == 1331 )
        return 3;
      else
        return 2 * (unsigned int)(v11 == 1332 || (v2 & 0xFFFB) == 811);
    case 912:
LABEL_12:
      v10 = a2[5];
      v7 = 6;
      if ( v10 != 17 )
        return 2 * (unsigned int)(v10 == 16) + 3;
      return v7;
    case 917:
    case 920:
    case 1311:
    case 1313:
    case 1316:
    case 1318:
    case 1351:
    case 1355:
    case 1375:
    case 1379:
LABEL_19:
      result = (unsigned int)(v6 + 3);
      break;
    case 1312:
    case 1315:
    case 1317:
    case 1320:
    case 1350:
    case 1353:
    case 1354:
    case 1357:
    case 1374:
    case 1377:
    case 1378:
    case 1381:
LABEL_18:
      result = (unsigned int)(v6 + 4);
      break;
    case 1314:
    case 1319:
    case 1352:
    case 1356:
    case 1376:
    case 1380:
LABEL_17:
      result = (unsigned int)(v6 + 5);
      break;
    default:
      goto LABEL_2;
  }
  return result;
}

