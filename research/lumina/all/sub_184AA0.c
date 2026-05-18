__int64 __fastcall sub_184AA0(__int64 a1, __int64 a2, char a3)
{
  bool v6; // zf
  const char *v7; // rsi
  char **v8; // rbx
  __int64 v9; // rdi
  char **i; // rbx
  const __m128i *v11; // rdx
  const __m128i *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  const __m128i *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rax
  char *v20; // rdx
  char v21; // cl
  char *v22; // rsi
  __int64 v23; // rax
  _OWORD v24[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  sub_17F860(a1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 584) = a2;
    *(_BYTE *)(a1 + 648) = 1;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 584) == 0;
    *(_BYTE *)(a1 + 648) = 0;
    if ( v6 )
    {
      v23 = operator new(0x38u);
      *(_QWORD *)(v23 + 8) = 1;
      *(_QWORD *)v23 = v23 + 48;
      *(_QWORD *)(v23 + 16) = 0;
      *(_QWORD *)(v23 + 24) = 0;
      *(_DWORD *)(v23 + 32) = 1065353216;
      *(_QWORD *)(v23 + 40) = 0;
      *(_QWORD *)(v23 + 48) = 0;
      *(_QWORD *)(a1 + 584) = v23;
    }
    v7 = "__IDC__";
    v8 = &off_23C920;
    do
    {
      v9 = a1;
      if ( (unsigned int)sub_17FC20(a1, v7, v8[1], 0, 0, nullptr) )
        return sub_18FA20(v9, v7);
      v7 = v8[2];
      v8 += 2;
    }
    while ( v7 );
    if ( unk_241B10 || (a3 & 1) != 0 )
    {
      v7 = "__LINUX__";
      for ( i = &off_23C8E0; ; i += 2 )
      {
        v9 = a1;
        if ( (unsigned int)sub_17FC20(a1, v7, i[1], 0, 0, nullptr) )
          break;
        v7 = i[2];
        if ( !v7 )
        {
          if ( unk_241B10 )
          {
            v15 = dword_241920;
            if ( dword_241920 == -1 )
            {
              dword_241920 = (unsigned __int8)interr_exc_t___vtable_at_1764016(0x35u, nullptr, v11, v12, v13, v14);
              interr_exc_t___vtable_at_1764016(
                0x34u,
                (__int64 (__fastcall ***)(_QWORD))&xmmword_242760,
                (const __m128i *)&qword_20,
                v16,
                v17,
                v18);
              v15 = dword_241920;
            }
            if ( v15 )
            {
              sub_17FC20(a1, "__QT__", "1", 0, 0, nullptr);
              sub_17FC20(a1, "__GUI__", "1", 0, 0, nullptr);
            }
            else
            {
              sub_17FC20(a1, "__TXT__", "1", 0, 0, nullptr);
            }
            sub_17FC20(a1, "__IDA_VERSION__", &xmmword_242760, 0, 0, nullptr);
            v24[0] = _mm_load_si128((const __m128i *)&xmmword_242760);
            v24[1] = _mm_load_si128((const __m128i *)&xmmword_242770);
            v19 = strchr((const char *)v24, 46);
            v20 = v19;
            if ( v19 )
            {
              do
              {
                v21 = v20[1];
                v22 = v20++;
                *(v20 - 1) = v21;
              }
              while ( v21 );
              if ( (unsigned __int64)(v22 - v19) <= 1 )
              {
                *v22 = 48;
                *v20 = 0;
              }
            }
            sub_17FC20(a1, "__IDAVER__", v24, 0, 0, nullptr);
          }
          return 0;
        }
      }
      return sub_18FA20(v9, v7);
    }
  }
  return 0;
}
