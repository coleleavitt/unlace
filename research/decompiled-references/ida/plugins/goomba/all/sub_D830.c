__int64 __fastcall sub_D830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 (__fastcall *hexdsp)(__int64); // rax
  const char *v8; // rax
  const char **v9; // rsi
  const char *v10; // rdx
  const char *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rbx
  const char *v17; // rsi
  const char *v18; // [rsp+0h] [rbp-10F0h] BYREF
  __int128 v19; // [rsp+8h] [rbp-10E8h]
  _QWORD v20[2]; // [rsp+20h] [rbp-10D0h] BYREF
  int v21; // [rsp+30h] [rbp-10C0h]
  int v22; // [rsp+38h] [rbp-10B8h]
  const char *v23; // [rsp+48h] [rbp-10A8h]
  __int64 v24; // [rsp+50h] [rbp-10A0h]
  int v25; // [rsp+58h] [rbp-1098h]
  __int64 v26; // [rsp+60h] [rbp-1090h]
  char *v27; // [rsp+70h] [rbp-1080h]
  __int64 v28; // [rsp+78h] [rbp-1078h]
  int v29; // [rsp+80h] [rbp-1070h]
  __int64 v30; // [rsp+88h] [rbp-1068h]
  const char *v31; // [rsp+98h] [rbp-1058h]
  __int64 v32; // [rsp+A0h] [rbp-1050h]
  int v33; // [rsp+A8h] [rbp-1048h]
  int v34; // [rsp+B0h] [rbp-1040h]
  char v35[4104]; // [rsp+C0h] [rbp-1030h] BYREF
  unsigned __int64 v36; // [rsp+10C8h] [rbp-28h]

  v36 = __readfsqword(0x28u);
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                       7,
                       0xDEC0DE00000004LL,
                       &v18,
                       0,
                       &callui,
                       a6) != 14598366 )
    return 0;
  hexdsp = (__int64 (__fastcall *)(__int64))get_hexdsp(7, 0xDEC0DE00000004LL, v6);
  v8 = (const char *)hexdsp(435);
  sub_C720((__int64)"Hex-rays version %s has been detected, %s ready to use\n", v8, off_4E570);
  v9 = &v18;
  v18 = nullptr;
  v19 = 0;
  if ( (unsigned __int8)qgetenv("VD_MSYNTH_PATH", &v18) )
  {
    v10 = src;
    if ( (_QWORD)v19 )
      v10 = v18;
    set_file_ext(v35, 4096, v10, "oracle");
    v11 = src;
    if ( (_QWORD)v19 )
      v11 = v18;
    v12 = fopenRT(v11);
    if ( !v12 )
    {
      v17 = src;
      if ( (_QWORD)v19 )
        v17 = v18;
      sub_C670((__int64)"%s: failed to open for reading", v17);
    }
    v13 = fopenWB(v35);
    v14 = v13;
    if ( !v13 )
      sub_C670((__int64)"%s: failed to open for writing", v35);
    sub_429A0(v12, v13);
    qfclose(v12);
    qfclose(v14);
    v9 = (const char **)(&dword_0 + 1);
    set_database_flag(1, 1);
    qexit(0);
  }
  v15 = qalloc_or_throw(192);
  sub_D6C0(v15, (__int64)v9);
  v21 = 50331651;
  v20[0] = "MBA_RUN_AUTOMATICALLY";
  v20[1] = v15 + 104;
  v23 = "MBA_Z3_TIMEOUT";
  v24 = v15 + 168;
  v27 = "MBA_ORACLE_PATH";
  v28 = v15 + 112;
  v31 = "MBA_Z3_ASSUME_TIMEOUTS_CORRECT";
  v22 = 1;
  v25 = 134217730;
  v26 = 0;
  v29 = 50331649;
  v30 = 0;
  v32 = v15 + 172;
  v33 = 50331651;
  v34 = 1;
  read_config("goomba", 1, v20, 4, 0, 0, 0);
  if ( (unsigned __int8)qgetenv("VD_MBA_AUTO", 0) || *(_BYTE *)(v15 + 104) )
    *(_BYTE *)(v15 + 184) = 1;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v15;
}

