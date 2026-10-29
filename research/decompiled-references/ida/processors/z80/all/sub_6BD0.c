__int64 __fastcall sub_6BD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  char v4; // si
  __int16 v5; // cx
  __int16 v6; // dx
  __m128i v7; // xmm0
  int v8; // edx
  __m128i v9; // xmm0

  v2 = *(unsigned __int16 *)(a2 + 24);
  result = a2;
  if ( (unsigned __int16)v2 <= 0x50u )
  {
    v4 = *(_BYTE *)(a2 + 44);
    *(_BYTE *)(result + 84) |= 8u;
    *(_BYTE *)(result + 44) = v4 | 8;
    switch ( v2 )
    {
      case 1LL:
        *(_WORD *)(result + 24) = 2;
        return result;
      case 4LL:
      case 21LL:
        *(_WORD *)(result + 24) = 3;
        return result;
      case 5LL:
      case 6LL:
        *(_WORD *)(result + 24) = 81;
        if ( (*(_BYTE *)(a1 + 224) & 0x10) == 0 )
          goto LABEL_9;
        return result;
      case 7LL:
        v5 = 8;
        goto LABEL_30;
      case 8LL:
        v5 = 0;
        goto LABEL_30;
      case 9LL:
        v5 = 1;
        goto LABEL_30;
      case 10LL:
        v5 = 2;
        goto LABEL_30;
      case 11LL:
        v5 = 3;
        goto LABEL_30;
      case 12LL:
        v5 = 4;
        goto LABEL_30;
      case 13LL:
        v5 = 5;
        goto LABEL_30;
      case 14LL:
        v5 = 6;
        goto LABEL_30;
      case 15LL:
        v5 = 7;
LABEL_30:
        v6 = 83;
        goto LABEL_5;
      case 17LL:
      case 18LL:
        *(_WORD *)(result + 24) = 85;
        if ( (*(_BYTE *)(a1 + 224) & 0x10) == 0 )
          goto LABEL_9;
        return result;
      case 22LL:
      case 23LL:
        *(_WORD *)(result + 24) = 91;
        return result;
      case 26LL:
        *(_WORD *)(result + 24) = 95;
        return result;
      case 28LL:
      case 29LL:
        *(_WORD *)(result + 24) = 97;
        return result;
      case 30LL:
        goto LABEL_25;
      case 31LL:
        v5 = 0;
        goto LABEL_26;
      case 32LL:
        v5 = 1;
        goto LABEL_26;
      case 33LL:
        v5 = 2;
        goto LABEL_26;
      case 34LL:
        v5 = 3;
        goto LABEL_26;
      case 35LL:
        v5 = 4;
        goto LABEL_26;
      case 36LL:
        v5 = 5;
        goto LABEL_26;
      case 37LL:
        v5 = 6;
        goto LABEL_26;
      case 38LL:
        v5 = 7;
        goto LABEL_26;
      case 39LL:
      case 40LL:
      case 41LL:
      case 42LL:
      case 43LL:
      case 44LL:
      case 69LL:
      case 70LL:
      case 71LL:
      case 72LL:
        *(_WORD *)(result + 24) = 104;
        return result;
      case 46LL:
      case 47LL:
        *(_WORD *)(result + 24) = 110;
        if ( (*(_BYTE *)(a1 + 224) & 0x10) == 0 )
          goto LABEL_9;
        return result;
      case 49LL:
        *(_BYTE *)(result + 41) = 3;
        *(_WORD *)(result + 46) = 10;
LABEL_25:
        v5 = 8;
LABEL_26:
        v6 = 102;
        goto LABEL_5;
      case 52LL:
        v5 = 8;
        goto LABEL_4;
      case 53LL:
        v5 = 0;
        goto LABEL_4;
      case 54LL:
        v5 = 1;
        goto LABEL_4;
      case 55LL:
        v5 = 2;
        goto LABEL_4;
      case 56LL:
        v5 = 3;
        goto LABEL_4;
      case 57LL:
        v5 = 4;
        goto LABEL_4;
      case 58LL:
        v5 = 5;
        goto LABEL_4;
      case 59LL:
        v5 = 6;
        goto LABEL_4;
      case 60LL:
        v5 = 7;
LABEL_4:
        v6 = 116;
LABEL_5:
        v7 = _mm_loadu_si128((const __m128i *)(result + 40));
        *(_WORD *)(result + 24) = v6;
        v8 = *(_DWORD *)(result + 72);
        *(_BYTE *)(result + 41) = 8;
        *(__m128i *)(result + 80) = v7;
        v9 = _mm_loadu_si128((const __m128i *)(result + 56));
        *(_DWORD *)(result + 112) = v8;
        *(_BYTE *)(result + 80) = 1;
        *(_WORD *)(result + 46) = v5;
        *(__m128i *)(result + 96) = v9;
        return result;
      case 66LL:
      case 67LL:
        *(_WORD *)(result + 24) = 130;
        return result;
      case 73LL:
      case 74LL:
        *(_WORD *)(result + 24) = 74;
        if ( (*(_BYTE *)(a1 + 224) & 0x10) == 0 )
          goto LABEL_9;
        return result;
      case 75LL:
      case 76LL:
        *(_WORD *)(result + 24) = 135;
        if ( (*(_BYTE *)(a1 + 224) & 0x10) == 0 )
LABEL_9:
          *(_BYTE *)(result + 44) = v4 & 0xF7;
        break;
      case 77LL:
      case 78LL:
        *(_WORD *)(result + 24) = 93;
        break;
      default:
        return result;
    }
  }
  return result;
}

