__int64 __fastcall sub_7B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 path; // rax
  __int64 v7; // rbp
  unsigned int v8; // r13d
  const char *v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-20C8h] BYREF
  _BYTE v12[4096]; // [rsp+20h] [rbp-20A8h] BYREF
  _BYTE v13[4096]; // [rsp+1020h] [rbp-10A8h] BYREF
  int v14; // [rsp+2020h] [rbp-A8h]
  __int64 v15; // [rsp+2028h] [rbp-A0h]
  __int128 v16; // [rsp+2030h] [rbp-98h]
  __int64 v17; // [rsp+2040h] [rbp-88h]
  __int64 v18; // [rsp+2048h] [rbp-80h]
  __int128 v19; // [rsp+2050h] [rbp-78h]
  int v20; // [rsp+2060h] [rbp-68h]
  __int64 v21; // [rsp+2068h] [rbp-60h] BYREF
  __int128 v22; // [rsp+2070h] [rbp-58h]
  __int16 v23; // [rsp+2080h] [rbp-48h]
  __int64 v24; // [rsp+2088h] [rbp-40h]
  unsigned __int64 v25; // [rsp+2098h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v15 = 0;
  v17 = 40;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  v24 = -1;
  v14 = 0;
  v23 = 1;
  v16 = 0;
  v19 = 0;
  v22 = 0;
  path = get_path(1, a2, a3, a4, a5, a6, 0, 0, 0);
  v7 = path;
  if ( path )
  {
    qstrncpy(v13, path, 4096);
    set_file_ext(v13, 4096, v13, "pat");
    v8 = sub_6600(a1, (__int64)v12, (__int64)&v11);
    if ( !a2 )
    {
      qstrncpy(v12, v7, 4096);
      v10 = (const char *)qbasename(v12);
      if ( v10 )
        sub_7750(&v21, (__int64)"Produced from %s", v10);
      set_file_ext(v12, 4096, v12, "sig");
      v8 &= sub_5950(a1, (__int64)v12);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v8;
}

