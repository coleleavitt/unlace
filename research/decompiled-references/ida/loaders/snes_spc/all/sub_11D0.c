__int64 __fastcall sub_11D0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-10228h] BYREF
  _QWORD v12[3]; // [rsp+8h] [rbp-10220h]
  char v13; // [rsp+21h] [rbp-10207h]
  char v14; // [rsp+22h] [rbp-10206h]
  unsigned __int64 v15; // [rsp+10208h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( qlsize(a3) <= 66047
    || qlseek(a3, 0, 0)
    || qlread(a3, &v11, 66048) != 66048
    || v12[0] ^ 0x6E756F5320303037LL | v11 ^ 0x4350532D53454E53LL
    || *(_QWORD *)((char *)&v12[1] + 3) ^ 0x6174614420656C69LL | *(_QWORD *)((char *)v12 + 3) ^ 0x4620646E756F5320LL
    || v13 != 26
    || v14 != 26 )
  {
    return 0;
  }
  v6 = *a1;
  if ( (unsigned __int64)a1[2] <= 0x1B )
  {
    v9 = qvector_reserve(a1, v6, 28, 1);
    *a1 = v9;
    v6 = v9;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_20F0);
  a1[1] = 28;
  *(__m128i *)v6 = si128;
  *(__m128i *)(v6 + 11) = _mm_load_si128((const __m128i *)&xmmword_2100);
  *(_BYTE *)(*a1 + 27) = 0;
  v8 = *a2;
  if ( (unsigned __int64)a2[2] <= 6 )
  {
    v10 = qvector_reserve(a2, v8, 7, 1);
    *a2 = v10;
    v8 = v10;
  }
  a2[1] = 7;
  *(_DWORD *)v8 = 929263731;
  *(_WORD *)(v8 + 4) = 12336;
  *(_BYTE *)(*a2 + 6) = 0;
  return 1;
}

