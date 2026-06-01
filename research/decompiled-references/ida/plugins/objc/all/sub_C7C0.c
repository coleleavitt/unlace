__int64 __fastcall sub_C7C0(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 til; // r13
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  const char *v16; // rsi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  const char *v24; // rsi
  const char *v25; // rsi
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  const char *v30; // rsi
  __int64 v31; // [rsp+0h] [rbp-118h] BYREF
  __int128 v32; // [rsp+8h] [rbp-110h]
  __int64 v33; // [rsp+18h] [rbp-100h]
  __int64 v34; // [rsp+20h] [rbp-F8h]
  __int128 v35; // [rsp+28h] [rbp-F0h]
  int v36; // [rsp+38h] [rbp-E0h]
  _OWORD v37[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-B8h]
  __int128 v39; // [rsp+68h] [rbp-B0h]
  __int64 v40; // [rsp+78h] [rbp-A0h]
  __int128 v41; // [rsp+80h] [rbp-98h]
  __int128 v42; // [rsp+90h] [rbp-88h]
  __int128 v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+B0h] [rbp-68h]
  __int128 v45; // [rsp+B8h] [rbp-60h]
  __int64 v46; // [rsp+C8h] [rbp-50h]
  int v47; // [rsp+D0h] [rbp-48h]
  char v48; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v49; // [rsp+E8h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  LODWORD(v38) = -1;
  memset(v37, 0, sizeof(v37));
  v1 = sub_B130(a1, (int)v37);
  if ( *(_QWORD *)&v37[0] )
  {
    *((_QWORD *)&v37[0] + 1) = 0;
    qfree();
  }
  if ( (_BYTE)v1 )
  {
    v31 = 0;
    v32 = 0;
    if ( netnode_qsupstr() <= 0 )
    {
      sub_EC40((unsigned int)"Error: expected a destination path argument\n", (unsigned int)&v31, v3, v4, v5, v6);
      v1 = 0;
    }
    else
    {
      getinf_flag();
      v35 = 0;
      v34 = 0;
      getinf_flag();
      til = load_til();
      if ( til )
      {
        if ( (unsigned int)add_base_tils() )
        {
          memset(v37, 0, sizeof(v37));
          *((_QWORD *)&v37[0] + 1) = qvector_reserve();
          *(_QWORD *)&v37[1] = 5;
          strcpy(*((char **)&v37[0] + 1), "OBJC");
          v38 = 0;
          v40 = 0x186A000000000LL;
          v44 = 0;
          v46 = 0;
          v47 = -1;
          v48 = 0;
          *(_QWORD *)&v37[0] = til;
          v39 = 0;
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v45 = 0;
          sub_198E0(v37, "Generating Objective-C TIL");
          sub_19C60(
            *(_QWORD *)(a1 + 1808),
            (unsigned int)v37,
            v17,
            v18,
            v19,
            v20,
            v31,
            v32,
            DWORD2(v32),
            v33,
            v34,
            v35,
            DWORD2(v35),
            v36,
            v37[0],
            DWORD2(v37[0]),
            v37[1],
            DWORD2(v37[1]),
            v38,
            v39,
            *((__int64 *)&v39 + 1));
          sub_14B10(v37);
          if ( (unsigned __int8)sort_til() && (v1 = store_til(), (_BYTE)v1) )
          {
            v24 = src;
            if ( (_QWORD)v32 )
              LODWORD(v24) = v31;
            sub_EC40((unsigned int)"generated %s with %zu additional classes\n", (_DWORD)v24, v41, v21, v22, v23);
          }
          else
          {
            __errno_location();
            v26 = winerr();
            v30 = src;
            if ( (_QWORD)v32 )
              LODWORD(v30) = v31;
            sub_EC40((unsigned int)"Error: failed to create %s: %s\n", (_DWORD)v30, v26, v27, v28, v29);
            v1 = 0;
          }
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree();
          }
          if ( v38 )
          {
            *(_QWORD *)&v39 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v37[0] + 1) )
          {
            *(_QWORD *)&v37[1] = 0;
            qfree();
          }
        }
        else
        {
          v16 = src;
          if ( (_QWORD)v35 )
            LODWORD(v16) = v34;
          sub_EC40((unsigned int)"Error: %s\n", (_DWORD)v16, v12, v13, v14, v15);
          v1 = 0;
        }
        free_til();
      }
      else
      {
        v25 = src;
        if ( (_QWORD)v35 )
          LODWORD(v25) = v34;
        sub_EC40((unsigned int)"Error: %s\n", (_DWORD)v25, v7, v8, v9, v10);
        v1 = 0;
      }
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree();
      }
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree();
    }
  }
  return v1;
}
