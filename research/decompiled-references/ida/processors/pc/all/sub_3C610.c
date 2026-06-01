__int64 __fastcall sub_3C610(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 result; // rax
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v13; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v14; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v15; // [rsp+30h] [rbp-98h] BYREF
  __m128i v16; // [rsp+40h] [rbp-88h] BYREF
  __m128i v17; // [rsp+50h] [rbp-78h] BYREF
  __m128i v18; // [rsp+60h] [rbp-68h] BYREF
  __m128i v19; // [rsp+70h] [rbp-58h] BYREF
  __int64 v20; // [rsp+80h] [rbp-48h]
  __m128i v21; // [rsp+88h] [rbp-40h] BYREF
  __int64 v22; // [rsp+98h] [rbp-30h]
  unsigned __int64 v23; // [rsp+A8h] [rbp-20h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v3 = *(_QWORD *)(a1 + 208);
  v23 = __readfsqword(0x28u);
  v12 = v2;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  v20 = v3;
  v5 = *(_QWORD *)(a1 + 232);
  v13 = v4;
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 112));
  v22 = v5;
  v14 = v6;
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 128));
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 144));
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 160));
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 176));
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 192));
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 216));
  if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, __m128i *))sub_3C000)(a1, &v12) )
    return 0;
  if ( !(unsigned __int8)sub_3C240(a1, &v12) )
    return 0;
  result = sub_3C400(a1, &v12, a2);
  if ( !(_BYTE)result )
    return 0;
  v8 = v20;
  *(__m128i *)(a1 + 80) = _mm_load_si128(&v12);
  v9 = _mm_load_si128(&v13);
  *(_QWORD *)(a1 + 208) = v8;
  v10 = v22;
  *(__m128i *)(a1 + 96) = v9;
  v11 = _mm_load_si128(&v14);
  *(_QWORD *)(a1 + 232) = v10;
  *(__m128i *)(a1 + 112) = v11;
  *(__m128i *)(a1 + 128) = _mm_load_si128(&v15);
  *(__m128i *)(a1 + 144) = _mm_load_si128(&v16);
  *(__m128i *)(a1 + 160) = _mm_load_si128(&v17);
  *(__m128i *)(a1 + 176) = _mm_load_si128(&v18);
  *(__m128i *)(a1 + 192) = _mm_load_si128(&v19);
  *(__m128i *)(a1 + 216) = _mm_loadu_si128(&v21);
  return result;
}
