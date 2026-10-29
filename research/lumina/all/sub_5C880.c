__int64 __fastcall sub_5C880(char *s, time_t *a2)
{
  int v2; // eax
  time_t v3; // rdx
  size_t v5; // rax
  int v6; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v7; // [rsp+4h] [rbp-64h] BYREF
  int v8; // [rsp+8h] [rbp-60h] BYREF
  int v9; // [rsp+Ch] [rbp-5Ch] BYREF
  struct tm tp; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = strcmp(s, "Never");
  v3 = 0;
  if ( v2 )
  {
    v6 = 0;
    if ( (unsigned int)sub_19DA80(
                         (_DWORD)s,
                         (unsigned int)"%4d-%2d-%2d%n",
                         (unsigned int)&v9,
                         (unsigned int)&v8,
                         (unsigned int)&v7,
                         (unsigned int)&v6) != 3 )
      return 0;
    v5 = strlen(s);
    if ( v6 != v5 )
      return 0;
    memset(&tp.tm_yday, 0, 28);
    *(_OWORD *)&tp.tm_sec = 0;
    *(_QWORD *)&tp.tm_year = (unsigned int)(v9 - 1900);
    tp.tm_isdst = -1;
    *(_QWORD *)&tp.tm_mday = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v8 - 1)).m128i_u64[0];
    v3 = mktime(&tp);
    if ( !v3 )
      return 0;
  }
  *a2 = v3;
  return 1;
}
