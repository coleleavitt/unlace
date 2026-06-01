__int64 __fastcall sub_22A0(__int64 a1)
{
  __int64 eah; // rax
  __m128i v2; // xmm1
  __m128i si128; // xmm2
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v15; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+10h] [rbp-68h] BYREF
  __m128i v17; // [rsp+18h] [rbp-60h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  _BYTE v19[20]; // [rsp+30h] [rbp-48h]
  int v20; // [rsp+44h] [rbp-34h]
  __int64 v21; // [rsp+48h] [rbp-30h]
  unsigned __int64 v22; // [rsp+58h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v15 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)&off_5D50),
          (__m128i)(unsigned __int64)"Specify switch idiom...");
  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  v2 = _mm_load_si128(&v15);
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = off_5D38;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3CD0);
  *(_QWORD *)(a1 + 112) = off_5D08;
  v18 = a1 + 112;
  HIDWORD(v16) = 0;
  v21 = 0x4FFFFFFFFLL;
  *(_OWORD *)&v19[4] = 0;
  *(_DWORD *)(a1 + 120) = 1;
  *(_QWORD *)(a1 + 128) = a1;
  v20 = 0;
  LODWORD(v16) = 64;
  *(_QWORD *)v19 = a1;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(__m128i *)(a1 + 96) = si128;
  v17 = v2;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64))callui)(
                          127,
                          &v16,
                          v4,
                          v5,
                          v6,
                          v7,
                          v15.m128i_i64[0],
                          v15.m128i_i64[1])
    && !(unsigned __int8)callui(
                           129,
                           "Edit/Other/Create",
                           "uiswitch:SpecSwitchIdiom",
                           0,
                           v8,
                           v9,
                           v15.m128i_i64[0],
                           v15.m128i_i64[1],
                           v16,
                           v17.m128i_i64[0]) )
  {
    callui(
      128,
      "uiswitch:SpecSwitchIdiom",
      v10,
      v11,
      v12,
      v13,
      v15.m128i_i64[0],
      v15.m128i_i64[1],
      v16,
      v17.m128i_i64[0]);
  }
  return netnode_check();
}

