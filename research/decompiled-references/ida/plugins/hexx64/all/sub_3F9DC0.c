__int64 __fastcall sub_3F9DC0(__int64 a1, int a2, unsigned int a3, __m128i a4, __m128 a5, __m128 a6)
{
  __int64 v6; // rcx
  unsigned __int8 *v7; // r13
  char v10; // al
  int v11; // edx
  __int64 result; // rax
  char v13; // al
  int v14; // ebp
  char v15; // r8
  int v16; // r9d
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r9d
  unsigned int v22; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v6 = 40LL * a2;
  v7 = (unsigned __int8 *)(a1 + v6 + 64);
  switch ( *(_BYTE *)(a1 + v6 + 65) )
  {
    case 1:
      v19 = *(_QWORD *)(a1 + 832);
      v20 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      goto LABEL_18;
    case 2:
    case 6:
    case 7:
      v10 = sub_3F94F0(a1, v7, a3, (signed int *)&v22, a4, *(double *)a5.m128_u64, a6);
      sub_3F9C60(a1, (__int64)v7, v22, 1, v10, a4, a5, a6);
      goto LABEL_3;
    case 3:
    case 4:
      v13 = sub_3F94F0(a1, v7, a3, (signed int *)&v22, a4, *(double *)a5.m128_u64, a6);
      v14 = v22;
      v15 = v13;
      if ( !*(_BYTE *)(a1 + 40LL * a2 + 96) )
      {
        sub_3F9880(a1, (__int64)v7, v22, v13, *(double *)a4.m128i_i64);
        v15 = 1;
      }
      sub_3F9C60(a1, (__int64)v7, v14, *(_BYTE *)(a1 + 40LL * a2 + 65) == 4, v15, a4, a5, a6);
LABEL_3:
      v11 = *(unsigned __int16 *)(a1 + 48);
      if ( (_WORD)v11 == 92
        || v11 == 222
        || (unsigned __int16)(v11 - 198) <= 1u
        || (unsigned __int16)(*(_WORD *)(a1 + 48) - 97) <= 1u )
      {
        return v22;
      }
      else
      {
        return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 468LL);
      }
    case 5:
      sub_3F9B20(a1, v7, *(unsigned __int8 *)(a1 + 40LL * a2 + 69), *(_QWORD *)(a1 + 40LL * a2 + 72), a3, a4, a5, a6);
      return a3;
    case 0xB:
      v16 = *(_DWORD *)(a1 + 892);
      if ( v16 < 0 )
        goto LABEL_12;
      v17 = 8 - v16;
      if ( !a2 && (unsigned int)sub_3EBCA0(*(_WORD *)(a1 + 48)) == 1 )
        v17 = 7 - v21;
      v18 = v17 + *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      if ( v18 > 7 )
        goto LABEL_12;
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 832) + 492LL)
                            + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) * v18);
      break;
    case 0xC:
      v19 = *(_QWORD *)(a1 + 832);
      v20 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 56;
      goto LABEL_18;
    case 0xD:
      v19 = *(_QWORD *)(a1 + 832);
      v20 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 64;
      goto LABEL_18;
    case 0xE:
      v19 = *(_QWORD *)(a1 + 832);
      v20 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 81;
      goto LABEL_18;
    case 0xF:
      v19 = *(_QWORD *)(a1 + 832);
      v20 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 133;
LABEL_18:
      result = (*(__int64 (__fastcall **)(__int64, __int64, double))(*(_QWORD *)v19 + 168LL))(
                 v19,
                 v20,
                 *(double *)a4.m128i_i64);
      break;
    default:
LABEL_12:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

