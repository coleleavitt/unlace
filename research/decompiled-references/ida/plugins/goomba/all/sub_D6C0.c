unsigned __int64 __fastcall sub_D6C0(__int64 a1, __int64 a2)
{
  __int64 eah; // rax
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, __int64), __int64); // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+0h] [rbp-68h] BYREF
  __m128i v9; // [rsp+8h] [rbp-60h]
  __int64 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]
  const char *v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+48h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = off_4D758;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 1;
  *(_QWORD *)(a1 + 136) = off_4D700;
  *(_QWORD *)(a1 + 152) = a1;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 1000;
  *(_BYTE *)(a1 + 172) = 1;
  *(_QWORD *)(a1 + 176) = 0;
  *(_WORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, __int64), __int64))get_hexdsp(a1, a2, 0);
  hexdsp(574, sub_E290, a1);
  v11 = a1;
  v8 = 64;
  v10 = a1 + 136;
  v13 = "Attempt to simplify Mixed Boolean Arithmetic-obfuscated expressions using gooMBA";
  v12 = 0;
  v14 = 0x4FFFFFFFFLL;
  v9 = _mm_unpacklo_epi64(
         _mm_loadl_epi64((const __m128i *)&off_4D770),
         (__m128i)(unsigned __int64)"De-obfuscate arithmetic expressions");
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(127, &v8, &callui, v4, v5, v6);
  return v15 - __readfsqword(0x28u);
}

