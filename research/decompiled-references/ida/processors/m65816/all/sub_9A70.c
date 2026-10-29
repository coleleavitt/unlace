signed __int64 __fastcall sub_9A70(__int64 *a1)
{
  const __m128i *v1; // rdx
  __m128i *v2; // rax
  bool v3; // cc
  const char *v4; // rsi
  signed __int64 result; // rax

  sub_82A0(a1[31]);
  v1 = (const __m128i *)a1[31];
  v2 = (__m128i *)a1[32];
  *v2 = _mm_loadu_si128(v1);
  v2[1] = _mm_loadu_si128(v1 + 1);
  v3 = v2[1].m128i_i32[2] <= 6u;
  v2[2] = _mm_loadu_si128(v1 + 2);
  if ( !v3 )
  {
    switch ( *(_DWORD *)(a1[31] + 24) )
    {
      case 0:
        v4 = "LoROM";
        break;
      case 1:
        v4 = "HiROM";
        break;
      case 2:
        v4 = "ExLoROM";
        break;
      case 3:
        v4 = "ExHiROM";
        break;
      case 4:
        v4 = "SuperFXROM";
        break;
      case 5:
        v4 = "SA1ROM";
        break;
      case 6:
        v4 = "SPC7110ROM";
        break;
      case 7:
        v4 = "BSCLoROM";
        break;
      case 8:
        v4 = "BSCHiROM";
        break;
      case 9:
        v4 = "BSXROM";
        break;
      case 0xA:
        v4 = "STROM";
        break;
      default:
        v4 = nullptr;
        break;
    }
    sub_4860((__int64)"Unsupported mapper: %s", v4);
  }
  result = netnode_qsupstr();
  if ( result > 0 )
    return sub_78B0(a1 + 16, 0);
  return result;
}

