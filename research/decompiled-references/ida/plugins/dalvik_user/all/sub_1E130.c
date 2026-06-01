__int64 sub_1E130(__int64 *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v5; // rsi
  _BYTE *v6; // rdi
  const char *v7; // rax
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebp
  int v13; // eax
  __int64 v14; // [rsp+0h] [rbp-978h] BYREF
  __int128 v15; // [rsp+8h] [rbp-970h]
  __int64 v16; // [rsp+20h] [rbp-958h]
  int v17; // [rsp+28h] [rbp-950h]
  const char *v18; // [rsp+30h] [rbp-948h]
  _BYTE *v19; // [rsp+38h] [rbp-940h]
  __int128 v20; // [rsp+40h] [rbp-938h]
  __int64 v21; // [rsp+50h] [rbp-928h]
  __int128 v22; // [rsp+58h] [rbp-920h]
  __int64 v23; // [rsp+68h] [rbp-910h]
  gcc_va_list va; // [rsp+78h] [rbp-900h] BYREF
  _BYTE v25[1024]; // [rsp+90h] [rbp-8E8h] BYREF
  char v26[1032]; // [rsp+490h] [rbp-4E8h] BYREF
  unsigned __int64 v27; // [rsp+898h] [rbp-E0h]

  v27 = __readfsqword(0x28u);
  if ( (_QWORD)xmmword_7FBB8 )
  {
    if ( !*(_BYTE *)qword_7FBB0 )
      goto LABEL_3;
  }
  else if ( !byte_7FAF1 )
  {
LABEL_3:
    v5 = 1024;
    v6 = v25;
    goto LABEL_4;
  }
  v13 = qsnprintf();
  v6 = &v25[v13];
  v5 = 1024LL - v13;
LABEL_4:
  va_start(va, a3);
  qvsnprintf();
  v16 = 80;
  v20 = -1;
  v7 = nptr;
  v17 = 0;
  v21 = -1;
  v23 = 0;
  v22 = 0;
  if ( (_QWORD)xmmword_7FBD8 )
    v7 = (const char *)qword_7FBD0;
  v18 = v7;
  v19 = v25;
  v8 = sub_135E0(v6, v5);
  sub_58110(v8, (unsigned int)"ADB: %s %s\n", (_DWORD)v18, (unsigned int)v25, v9, v10);
  qsnprintf();
  if ( !sub_126E0(v26) )
    return 0;
  v14 = 0;
  v15 = 0;
  v11 = capture_process_output();
  sub_1D360(a1, (__int64)&v14);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  if ( (_BYTE)v11 != 1 && a2 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      sub_11340((__int64)"ADB error: %s\n", *(const char **)a2);
    else
      sub_11340((__int64)"ADB error: %s\n", nptr);
    return 0;
  }
  return v11;
}

