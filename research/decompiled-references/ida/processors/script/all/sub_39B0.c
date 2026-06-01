__int64 __fastcall sub_39B0(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i *v7; // rsi
  __m128i si128; // xmm0
  __int64 v9; // rax
  char v10[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 905) = 1;
  v10[0] = 2;
  v12 = 0;
  v11 = 0;
  if ( (int)sub_4750(&off_7460, a1 + 120, a2, 1) >= 0 )
  {
    sub_3800((__int64 *)(a1 + 824));
LABEL_5:
    v3 = 0;
    goto LABEL_6;
  }
  v2 = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 120) = 900;
  if ( !v2 )
    *(_DWORD *)(a1 + 184) = sub_4510(*(_QWORD *)(a1 + 176));
  if ( !(unsigned __int8)sub_4E00(a2, "assembler", v10) || !(unsigned __int8)sub_38C0(a1, (__int64)v10) )
    goto LABEL_5;
  if ( (unsigned __int8)sub_4E00(a2, "codestart", v10) && sub_3530(a1, (__int64 *)(a1 + 720)) )
    v5 = *(_QWORD *)(a1 + 720);
  else
    v5 = 0;
  *(_QWORD *)(a1 + 208) = v5;
  if ( (unsigned __int8)sub_4E00(a2, "retcodes", v10) && sub_3530(a1, (__int64 *)(a1 + 744)) )
    v6 = *(_QWORD *)(a1 + 744);
  else
    v6 = 0;
  *(_QWORD *)(a1 + 216) = v6;
  if ( !(unsigned __int8)sub_4E00(a2, "instruc", v10) || (v3 = sub_3270((_QWORD *)a1), !(_BYTE)v3) )
  {
    if ( *(_QWORD *)(a1 + 832) <= 1u )
    {
      v7 = *(__m128i **)(a1 + 824);
      if ( *(_QWORD *)(a1 + 840) <= 0x42u )
      {
        v9 = qvector_reserve();
        *(_QWORD *)(a1 + 824) = v9;
        v7 = (__m128i *)v9;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_5550);
      *(_QWORD *)(a1 + 832) = 67;
      v7[4].m128i_i16[0] = 31073;
      *v7 = si128;
      v7[1] = _mm_load_si128((const __m128i *)&xmmword_5560);
      v7[2] = _mm_load_si128((const __m128i *)&xmmword_5570);
      v7[3] = _mm_load_si128((const __m128i *)&xmmword_5580);
      *(_BYTE *)(*(_QWORD *)(a1 + 824) + 66LL) = 0;
    }
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 228) - *(_DWORD *)(a1 + 224) != *(_QWORD *)(a1 + 272) )
  {
    sub_2F60((__int64)"WARNING: the 'instruc' array size does not match 'instruc_end' value; adjusting it.\n", v10);
    *(_DWORD *)(a1 + 228) = *(_DWORD *)(a1 + 272) + *(_DWORD *)(a1 + 224);
  }
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 168) = sub_2BB0;
LABEL_6:
  free_idcv();
  return v3;
}

