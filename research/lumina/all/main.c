__int64 __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rsi
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  char v23; // al
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __m128i v28; // xmm0
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  const char *v38; // rsi
  const char *v39; // rsi
  __int64 v40; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  const char *v45; // rsi
  __m128i v46; // [rsp+0h] [rbp-188h] BYREF
  int v47; // [rsp+10h] [rbp-178h]
  int v48; // [rsp+18h] [rbp-170h]
  _DWORD v49[3]; // [rsp+1Ch] [rbp-16Ch] BYREF
  int v50[2]; // [rsp+28h] [rbp-160h] BYREF
  __m128i v51; // [rsp+30h] [rbp-158h] BYREF
  void *v52; // [rsp+40h] [rbp-148h] BYREF
  __int128 v53; // [rsp+48h] [rbp-140h]
  void *v54; // [rsp+60h] [rbp-128h] BYREF
  __int128 v55; // [rsp+68h] [rbp-120h]
  void *v56; // [rsp+80h] [rbp-108h] BYREF
  __int128 v57; // [rsp+88h] [rbp-100h]
  int v58; // [rsp+98h] [rbp-F0h]
  void *ptr; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-E0h]
  int v61; // [rsp+B8h] [rbp-D0h]
  __int64 v62; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v63; // [rsp+C8h] [rbp-C0h]
  __int64 v64; // [rsp+D8h] [rbp-B0h]
  __int128 v65; // [rsp+E0h] [rbp-A8h]
  __int64 v66; // [rsp+F0h] [rbp-98h]
  __int128 v67; // [rsp+F8h] [rbp-90h]
  __int64 (*v68)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...); // [rsp+108h] [rbp-80h]
  char v69; // [rsp+110h] [rbp-78h]
  _BYTE v70[40]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v71; // [rsp+148h] [rbp-40h]

  v49[0] = a1;
  v71 = __readfsqword(0x28u);
  sub_18D1A0("ida.hlp", v49, a2);
  v62 = 0;
  v64 = 0;
  v66 = 0;
  v68 = sub_16B870;
  v69 = 1;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  sub_42EC0(
    (unsigned int)&dword_2419A0,
    (unsigned int)&v62,
    0,
    v3,
    v4,
    v5,
    v46.m128i_i32[0],
    v46.m128i_i32[2],
    v47,
    v48,
    v49[1],
    v50[0],
    v51.m128i_i32[0],
    v51.m128i_i32[2],
    (__int64)v52);
  sub_18EAB0(&v62, v49[0], a2, &dword_2419A0);
  sub_16E700(&dword_2419A0);
  v52 = nullptr;
  v53 = 0;
  sub_299F0((unsigned int)&v52, (unsigned int)"Hex-Rays IDA Pro Lumina Server v9.3", v6, v7, v8, v9, v46.m128i_i8[0]);
  v14 = s1;
  if ( (_QWORD)v53 )
    LODWORD(v14) = (_DWORD)v52;
  sub_16B870((unsigned int)"%s Hex-Rays (c) 2026\n", (_DWORD)v14, v10, v11, v12, v13, v46.m128i_i8[0]);
  sub_2FF80(&dword_2419A0);
  if ( (unsigned __int64)xmmword_241AC8 > 1 )
  {
    sub_BB9F0();
    sub_BDC20();
    if ( !byte_241A50 && !byte_241A51 )
    {
      ptr = off_236218;
      sub_471B0(&dword_2419A0, &ptr);
    }
    v55 = 0;
    v54 = nullptr;
    if ( (unsigned __int8)sub_C0B10(&unk_241E40, &unk_241A70, &v54) )
    {
      v56 = nullptr;
      v58 = -1;
      v57 = 0;
      v23 = unk_241E40(&v56);
      v46 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_236538), (__m128i)(unsigned __int64)&dword_2419A0);
      if ( v23 )
      {
        sub_16E250(&v51);
        v28 = _mm_load_si128(&v46);
        ptr = nullptr;
        v61 = -1;
        v51 = v28;
        v60 = 0;
        unk_241E50(v50, &unk_241A70, &ptr);
        if ( !*(_QWORD *)v50 )
        {
          v45 = s1;
          if ( (_QWORD)v60 )
            LODWORD(v45) = (_DWORD)ptr;
          sub_2F260(
            (unsigned int)"Cannot connect to lumina db: %s (code %d)",
            (_DWORD)v45,
            v61,
            v29,
            v30,
            v31,
            v46.m128i_i8[0]);
        }
        sub_1666F0(&dword_2419A0);
        sub_16E3B0("lumina_server");
        if ( byte_241A50 )
        {
          sub_33D60(&dword_2419A0, v50);
          v40 = sub_199140(&dword_2419A0, v50);
          sub_1677A0(v70, 25, v40, 0);
          sub_16B870(
            (unsigned int)"%s Database has been initialized; exiting.\n",
            (unsigned int)v70,
            v41,
            v42,
            v43,
            v44,
            *(_OWORD *)&v46);
        }
        else
        {
          sub_388D0((int)&dword_2419A0, (int)v50);
          if ( byte_241A51 )
          {
            v32 = sub_199140(&dword_2419A0, v50);
            sub_1677A0(v70, 25, v32, 0);
            sub_16B870(
              (unsigned int)"%s Database schema is up to date; exiting.\n",
              (unsigned int)v70,
              v33,
              v34,
              v35,
              v36,
              v46.m128i_i8[0]);
          }
          else
          {
            sub_302D0(&dword_2419A0);
            sub_166A90(&dword_2419A0);
          }
        }
        sub_328D0(v50);
        if ( ptr )
        {
          *(_QWORD *)&v60 = 0;
          j__free(ptr);
        }
        v51.m128i_i64[0] = (__int64)off_23C4A0;
        sub_16E2E0(&v51);
      }
      else
      {
        v38 = s1;
        if ( (_QWORD)v57 )
          LODWORD(v38) = (_DWORD)v56;
        sub_16B870((unsigned int)"Couldn't initialize SQL: %s\n", (_DWORD)v38, v24, v25, v26, v27, *(_OWORD *)&v46);
      }
      if ( v56 )
      {
        *(_QWORD *)&v57 = 0;
        j__free(v56);
      }
    }
    else
    {
      v39 = s1;
      if ( (_QWORD)v55 )
        LODWORD(v39) = (_DWORD)v54;
      sub_16B870((unsigned int)"Couldn't load SQL: %s\n", (_DWORD)v39, v19, v20, v21, v22);
    }
    sub_198E30(0);
  }
  sub_16B870(
    (unsigned int)"No connection string given (--help for help).\n",
    (_DWORD)v14,
    v15,
    v16,
    v17,
    v18,
    v46.m128i_i8[0]);
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    j__free(v52);
  }
  sub_306A0(&v62);
  return 1;
}
