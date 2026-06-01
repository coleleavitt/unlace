__int64 __fastcall sub_1C6B0(__int64 a1, int a2, int a3)
{
  const char *file_ext; // rdi
  const char *v7; // rdi
  __int64 v8; // r14
  char *v9; // rax
  __m128i si128; // xmm0
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbp
  unsigned __int8 v15; // al
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  const char *v21; // rsi
  unsigned __int8 v22; // [rsp+Fh] [rbp-49h]
  unsigned __int8 v23; // [rsp+Fh] [rbp-49h]
  char *v24; // [rsp+10h] [rbp-48h] BYREF
  __int128 v25; // [rsp+18h] [rbp-40h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a2 <= 0 )
    return 0;
  file_ext = (const char *)get_file_ext();
  if ( file_ext && !strcmp(file_ext, "app") || (v7 = (const char *)get_file_ext()) != nullptr && !strcmp(v7, "app") )
  {
    sub_130A0((__int64)"Invalid target path. Please specify the full path to the binary within the app bundle");
    return 0;
  }
  v24 = nullptr;
  v8 = *(_QWORD *)(a1 + 864);
  v25 = 0;
  v9 = (char *)qvector_reserve();
  si128 = _mm_load_si128((const __m128i *)&xmmword_773E0);
  v24 = v9;
  *(_QWORD *)&v25 = 18;
  v9[16] = 49;
  *(__m128i *)v9 = si128;
  v24[17] = 0;
  sub_5B360(v8, &v24);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  if ( !(unsigned __int8)sub_5CBB0(*(_QWORD *)(a1 + 864), a2, a3, v11, v12, v13) )
    return 0;
  sub_59210(*(_QWORD *)(a1 + 864), 10000);
  v24 = nullptr;
  v14 = *(_QWORD *)(a1 + 864);
  v25 = 0;
  v24 = (char *)qvector_reserve();
  *(_QWORD *)&v25 = 15;
  strcpy(v24, "qLaunchSuccess");
  v15 = sub_5B360(v14, &v24);
  if ( v24 )
  {
    v22 = v15;
    *(_QWORD *)&v25 = 0;
    qfree();
    v15 = v22;
  }
  v20 = *(_QWORD *)(a1 + 864);
  if ( !v15 )
  {
    v24 = nullptr;
    v25 = 0;
    sub_59220(v20, &v24);
    v21 = s;
    if ( (_QWORD)v25 )
      v21 = v24;
    sub_13170((__int64)"Error launching target process: %s\n", v21);
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    return 0;
  }
  v23 = v15;
  sub_5B150(v20, (unsigned int)&v24, v16, v17, v18, v19);
  return v23;
}

