__int64 __fastcall sub_47310(time_t *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  bool v6; // zf
  const char *v8; // rdi
  int v9; // edx
  __int64 result; // rax
  int v11; // [rsp+4h] [rbp-54h] BYREF
  int v12; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v13; // [rsp+Ch] [rbp-4Ch] BYREF
  struct tm tp; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-10h]

  v6 = *(_QWORD *)(a2 + 8) == 0;
  v15 = __readfsqword(0x28u);
  v8 = s1;
  if ( !v6 )
    v8 = *(const char **)a2;
  v9 = sub_19DA80((_DWORD)v8, (unsigned int)"%d-%d-%d", (unsigned int)&v11, (unsigned int)&v12, (unsigned int)&v13, a6);
  result = 0;
  if ( v9 == 3 )
  {
    memset(&tp.tm_yday, 0, 28);
    *(_OWORD *)&tp.tm_sec = 0;
    *(_QWORD *)&tp.tm_year = (unsigned int)(v11 - 1900);
    *(_QWORD *)&tp.tm_mday = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v12 - 1)).m128i_u64[0];
    *a1 = j__timegm(&tp);
    return 1;
  }
  return result;
}
