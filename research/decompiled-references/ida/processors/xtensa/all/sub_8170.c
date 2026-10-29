__int64 __fastcall sub_8170(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // di
  __int64 result; // rax
  int v5; // ecx
  int v6; // ecx

  v3 = *(_WORD *)(a2 + 24);
  result = a2;
  switch ( v3 )
  {
    case 295:
    case 296:
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 0;
      *(_WORD *)(a2 + 46) = ((a3 >> 12) & 3) + 53;
      *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
      return result;
    case 297:
    case 301:
    case 309:
    case 313:
      *(_DWORD *)(a2 + 28) = 4;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 33) = BYTE2(a3) & 3;
      v5 = (a3 >> 8) & 0xF;
      goto LABEL_5;
    case 298:
    case 302:
    case 310:
      *(_DWORD *)(a2 + 28) = 4;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 33) = BYTE2(a3) & 3;
      v6 = (a3 >> 8) & 0xF;
      goto LABEL_7;
    case 299:
    case 303:
    case 311:
      *(_DWORD *)(a2 + 28) = 4;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 33) = BYTE2(a3) & 3;
      LOWORD(v5) = ((a3 >> 14) & 1) + 53;
LABEL_5:
      *(_WORD *)(a2 + 46) = v5;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 0;
      *(_WORD *)(a2 + 86) = (unsigned __int8)a3 >> 4;
      return result;
    case 300:
    case 306:
    case 312:
      *(_DWORD *)(a2 + 28) = 4;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 33) = BYTE2(a3) & 3;
      LOWORD(v6) = ((a3 >> 14) & 1) + 53;
LABEL_7:
      *(_WORD *)(a2 + 46) = v6;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 0;
      *(_WORD *)(a2 + 86) = ((a3 >> 6) & 1) + 55;
      return result;
    case 304:
    case 305:
      *(_DWORD *)(a2 + 28) = 4;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 33) = BYTE2(a3) & 3;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 0;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 46) = ((a3 >> 12) & 3) + 53;
      *(_BYTE *)(a2 + 125) = 0;
      *(_BYTE *)(a2 + 161) = 1;
      *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
      *(_BYTE *)(a2 + 165) = 0;
      *(_WORD *)(a2 + 166) = (unsigned __int8)a3 >> 4;
      *(_WORD *)(a2 + 126) = ((a3 >> 14) & 1) + 53;
      if ( v3 == 304 )
        goto LABEL_11;
      goto LABEL_3;
    case 307:
    case 308:
      *(_DWORD *)(a2 + 28) = 4;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 0;
      *(_BYTE *)(a2 + 33) = BYTE2(a3) & 3;
      *(_BYTE *)(a2 + 81) = 1;
      *(_BYTE *)(a2 + 85) = 0;
      *(_BYTE *)(a2 + 121) = 1;
      *(_WORD *)(a2 + 46) = ((a3 >> 12) & 3) + 53;
      *(_BYTE *)(a2 + 125) = 0;
      *(_BYTE *)(a2 + 161) = 1;
      *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
      *(_BYTE *)(a2 + 165) = 0;
      *(_WORD *)(a2 + 166) = ((a3 >> 6) & 1) + 55;
      *(_WORD *)(a2 + 126) = ((a3 >> 14) & 1) + 53;
      if ( v3 == 307 )
LABEL_11:
        *(_DWORD *)(a2 + 28) |= 8u;
      else
LABEL_3:
        *(_DWORD *)(a2 + 28) |= 0x10u;
      break;
    default:
      return result;
  }
  return result;
}

