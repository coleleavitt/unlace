__int64 __fastcall sub_3CE70(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // xmm0
  __int64 v5; // r12
  int v6; // ecx
  int v7; // r12d
  __int64 qword; // r13
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i v10; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  switch ( *(_BYTE *)(a3 + 1) )
  {
    case 0:
      v7 = *(unsigned __int8 *)(a3 + 2);
      if ( (unsigned __int8)v7 > 0xFu )
        goto LABEL_2;
      qword = get_qword();
      sub_3BA80();
      *(_QWORD *)(a2 + 8LL * v7) = qword;
      *(_QWORD *)(a2 + 32) += 8LL;
      *(_BYTE *)(a1 + 24) = 0;
      break;
    case 1:
    case 2:
      v5 = *(unsigned int *)(a3 + 4);
      sub_3BA80();
      *(_QWORD *)(a2 + 32) += v5;
      *(_BYTE *)(a1 + 24) = 0;
      break;
    case 3:
      if ( !*(_BYTE *)(a2 + 152) )
        goto LABEL_2;
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 8LL * (*(_BYTE *)(a2 + 144) & 0xF)) - *(unsigned int *)(a3 + 4);
      sub_3BA80();
      *(_BYTE *)(a2 + 152) = 0;
      *(_BYTE *)(a1 + 24) = 0;
      break;
    case 4:
    case 5:
      v6 = *(unsigned __int8 *)(a3 + 2);
      if ( (unsigned __int8)v6 > 0xFu )
        goto LABEL_2;
      *(_QWORD *)(a2 + 8LL * v6) = get_qword();
      sub_3BA80();
      *(_BYTE *)(a1 + 24) = 0;
      break;
    case 8:
    case 9:
    case 0x16:
    case 0x17:
      sub_3BA80();
      *(_BYTE *)(a1 + 24) = 0;
      break;
    default:
LABEL_2:
      sub_3C7B0((__int64)&v9);
      *(_QWORD *)a1 = v9;
      v3 = _mm_loadu_si128(&v10);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v3;
      break;
  }
  return a1;
}
