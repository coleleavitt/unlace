unsigned __int64 __fastcall sub_4DC10(__int64 a1, __int64 a2)
{
  int v2; // eax
  bool v3; // zf
  const char *v4; // r13
  int v5; // r12d
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  void *v9; // r13
  int v10; // [rsp+Ah] [rbp-FEh]
  __int16 v11; // [rsp+Eh] [rbp-FAh]
  int v12; // [rsp+10h] [rbp-F8h] BYREF
  __int16 v13; // [rsp+14h] [rbp-F4h]
  int v14; // [rsp+18h] [rbp-F0h]
  int v15; // [rsp+1Ch] [rbp-ECh]
  __int64 v16; // [rsp+20h] [rbp-E8h]
  int v17; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v18; // [rsp+34h] [rbp-D4h]
  int v19; // [rsp+38h] [rbp-D0h]
  int v20; // [rsp+3Ch] [rbp-CCh]
  int v21; // [rsp+40h] [rbp-C8h]
  int v22; // [rsp+44h] [rbp-C4h]
  __int64 v23; // [rsp+48h] [rbp-C0h]
  __int64 v24; // [rsp+50h] [rbp-B8h]
  __int128 v25; // [rsp+58h] [rbp-B0h]
  void *v26; // [rsp+68h] [rbp-A0h]
  __m128i v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+80h] [rbp-88h]
  __int128 v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int128 v34; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+C8h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 2);
  v3 = *(_QWORD *)(a2 + 16) == 0;
  v35 = __readfsqword(0x28u);
  v10 = v2;
  v11 = *(_WORD *)(a2 + 6);
  if ( v3 )
  {
    v4 = s1;
    v5 = 0;
    if ( !s1 )
      goto LABEL_4;
  }
  else
  {
    v4 = *(const char **)(a2 + 8);
    v5 = 0;
    if ( !v4 )
      goto LABEL_4;
    v5 = 1;
    if ( !strcmp(*(const char **)(a2 + 8), "IDAPRO") )
      goto LABEL_4;
    v5 = 2;
    if ( !strcmp(v4, "IDAHOME") )
      goto LABEL_4;
    if ( !strcmp(v4, "IDAFREE") )
    {
      v5 = 3;
      goto LABEL_4;
    }
  }
  v5 = 4;
  if ( strcmp(v4, "TEAMS_SERVER") )
  {
    v5 = 5;
    if ( strcmp(v4, "LUMINA_SERVER") )
      v5 = strcmp(v4, "LICENSE_SERVER") == 0 ? 6 : 0;
  }
LABEL_4:
  v14 = v5;
  v17 = v10;
  v18 = v11;
  v12 = v10;
  v13 = v11;
  v15 = 1;
  v16 = 0;
  if ( !sub_4CB80(a1, (__int64)&v12) )
  {
    v20 = v5;
    v7 = *(_QWORD *)(a2 + 96);
    v25 = 0;
    v17 = v10;
    v22 = 0;
    v18 = v11;
    v8 = *(_QWORD *)(a2 + 80);
    v24 = 0;
    v26 = nullptr;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v33 = 0;
    v21 = 1;
    v19 = 3;
    v31 = v8;
    v23 = 1;
    v27 = 0;
    v29 = 0;
    v34 = 0;
    if ( v7 )
    {
      v9 = (void *)sub_198760(40 * v7);
      memcpy(v9, *(const void **)(a2 + 88), 40 * v7);
      v26 = v9;
      v27 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
      sub_4D780((__int64 *)(a1 + 128), &v17);
      if ( v9 )
        j__free(v9);
    }
    else
    {
      sub_4D780((__int64 *)(a1 + 128), &v17);
    }
  }
  return v35 - __readfsqword(0x28u);
}
