__int64 __fastcall sub_169E0(_QWORD *a1, __int64 a2)
{
  char *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  void (__fastcall *v5)(__int64, __int64, _QWORD, char *); // rax
  const char **v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // rbx
  const char **v10; // rbx
  const char *v11; // rdx
  const char *i; // rdx
  __m128i v14; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-98h]
  __m128i v16; // [rsp+20h] [rbp-88h] BYREF
  const char *v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  _OWORD v19[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+60h] [rbp-48h]
  unsigned __int64 v21; // [rsp+68h] [rbp-40h]

  v2 = byte_1A764;
  v3 = *(_QWORD *)a2;
  v4 = a1[18] == 0;
  v21 = __readfsqword(0x28u);
  v5 = *(void (__fastcall **)(__int64, __int64, _QWORD, char *))(v3 + 368);
  if ( !v4 )
    v2 = (char *)a1[17];
  v6 = nullptr;
  v5(a2, 3, 0, v2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
  v4 = a1[18] == 0;
  v15 = 0;
  v20 = 0;
  v14 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1DAA0), (__m128i)(unsigned __int64)"gpt");
  v18 = 0;
  v17 = "qsm";
  v19[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1DAA8), (__m128i)(unsigned __int64)"ram");
  v19[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1DAB0), (__m128i)(unsigned __int64)"tpuram");
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1DAB8), (__m128i)(unsigned __int64)"stbram");
  if ( !v4 )
  {
    v9 = (const char *)a1[17];
    v6 = (const char **)v19;
    if ( strcmp(v9, "MC68HC16Y1") )
    {
      if ( !strcmp(v9, "MC68HC16Z") )
        v6 = (const char **)&v16;
      else
        v6 = nullptr;
    }
  }
  v10 = (const char **)&v14;
  v11 = "adc";
  do
  {
    while ( *(_WORD *)(a1[3] + 4LL) != 1 )
    {
      ++v10;
      sub_15F70(a2, (__int64)"include \"%s.s\"", v11);
      v11 = *v10;
      if ( !*v10 )
        goto LABEL_9;
    }
    ++v10;
    sub_15EC0(a2, 0, (__int64)&unk_1A4CE, v11, v7, v8, *(_OWORD *)&v14, v15);
    v11 = *v10;
  }
  while ( *v10 );
LABEL_9:
  if ( v6 )
  {
    for ( i = *v6; *v6; i = *v6 )
    {
      while ( *(_WORD *)(a1[3] + 4LL) != 1 )
      {
        ++v6;
        sub_15F70(a2, (__int64)"include \"%s.s\"", i);
        i = *v6;
        if ( !*v6 )
          goto LABEL_15;
      }
      ++v6;
      sub_15EC0(a2, 0, (__int64)&unk_1A4CE, i);
    }
  }
LABEL_15:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
}

