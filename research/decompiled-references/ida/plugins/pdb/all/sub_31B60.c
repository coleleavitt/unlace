__int64 __fastcall sub_31B60(__int64 a1, __int64 **a2)
{
  __int64 (__fastcall *v2)(__int64, __m128i *); // rax
  const __m128i *v3; // rax
  __int64 result; // rax
  __m128i v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v5.m128i_i16[0] = 0;
  v2 = (__int64 (__fastcall *)(__int64, __m128i *))(*a2)[25];
  if ( v2 == sub_2D240 )
  {
    v3 = (const __m128i *)sub_2CEC0(a2[2], 0x80000000LL, 0x80000000, 0x80000000LL);
    if ( v3 )
    {
      v5 = _mm_loadu_si128(v3);
      v6 = v3[1].m128i_i64[0];
      goto LABEL_4;
    }
    return 0;
  }
  if ( (unsigned int)v2((__int64)a2, &v5) )
    return 0;
LABEL_4:
  switch ( v5.m128i_i16[0] )
  {
    case 2:
      result = (unsigned int)v5.m128i_i16[4];
      break;
    case 3:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      result = v5.m128i_u32[2];
      break;
    case 0x10:
      result = (unsigned int)v5.m128i_i8[8];
      break;
    case 0x11:
      result = v5.m128i_u8[8];
      break;
    case 0x12:
      result = v5.m128i_u16[4];
      break;
    default:
      sub_29830();
      result = 0;
      break;
  }
  return result;
}

