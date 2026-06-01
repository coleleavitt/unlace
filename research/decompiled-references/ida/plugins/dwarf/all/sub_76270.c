unsigned __int64 __fastcall sub_76270(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int64 i; // rdx
  char *v9; // rbx
  char *v10; // rbp
  int v12; // [rsp+4h] [rbp-12Ch]
  const char *v14; // [rsp+18h] [rbp-118h] BYREF
  __int128 v15; // [rsp+20h] [rbp-110h]
  __int64 v16; // [rsp+30h] [rbp-100h]
  __int128 v17; // [rsp+38h] [rbp-F8h]
  __int64 (__fastcall **v18)(); // [rsp+48h] [rbp-E8h] BYREF
  int v19; // [rsp+50h] [rbp-E0h]
  __int64 v20; // [rsp+58h] [rbp-D8h]
  _QWORD *v21; // [rsp+60h] [rbp-D0h]
  __int64 (__fastcall ***v22)(); // [rsp+68h] [rbp-C8h]
  const char **v23; // [rsp+70h] [rbp-C0h]
  __int64 v24; // [rsp+78h] [rbp-B8h]
  __int128 v25; // [rsp+80h] [rbp-B0h]
  __int64 v26; // [rsp+90h] [rbp-A0h]
  __int64 (__fastcall **v27)(); // [rsp+98h] [rbp-98h] BYREF
  int v28; // [rsp+A8h] [rbp-88h] BYREF
  void *v29; // [rsp+B0h] [rbp-80h]
  int *v30; // [rsp+B8h] [rbp-78h]
  int *v31; // [rsp+C0h] [rbp-70h]
  __int64 v32; // [rsp+C8h] [rbp-68h]
  __int64 v33; // [rsp+D0h] [rbp-60h]
  __int128 v34; // [rsp+D8h] [rbp-58h]
  __int64 v35; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v36; // [rsp+F0h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v4 = a1[18];
  v27 = &off_C7230;
  v28 = 0;
  v35 = v4;
  v29 = nullptr;
  v30 = &v28;
  v31 = &v28;
  v32 = 0;
  v33 = 0;
  v14 = nullptr;
  v34 = 0;
  v15 = 0;
  v5 = qvector_reserve(&v14, 0, 10, 1);
  *(_QWORD *)&v15 = 10;
  v6 = a3;
  *(_BYTE *)(v5 + 8) = 115;
  v14 = (const char *)v5;
  *(_QWORD *)v5 = 0x6E6F6974636E7546LL;
  v18 = off_C8B98;
  *((_BYTE *)v14 + 9) = 0;
  v21 = a1;
  v16 = 0;
  v19 = 0;
  v20 = 0;
  v22 = &v27;
  v23 = &v14;
  v24 = 0;
  v26 = a3;
  v17 = 0;
  v25 = 0;
  sub_1C3D0(a1 + 35, a3, "Functions", (void (__fastcall ***)(_QWORD, __int64))&v18, 1u);
  v7 = 0;
  for ( i = 0; i < a1[14]; i = v12 + 1 )
  {
    v6 = a2;
    v12 = v7;
    sub_76270(*(_QWORD *)(a1[13] + 8 * i), a2, a3);
    v7 = v12 + 1;
  }
  v18 = off_C8B98;
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  sub_1DA40(&v14, v6, i);
  v27 = &off_C7230;
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  v9 = (char *)v29;
  if ( v29 )
  {
    do
    {
      v10 = v9;
      sub_70E60(*((_QWORD **)v9 + 3));
      v9 = *((char **)v9 + 2);
      clear_tinfo_t(v10 + 48);
      operator delete(v10, 0x38u);
    }
    while ( v9 );
  }
  return v36 - __readfsqword(0x28u);
}

