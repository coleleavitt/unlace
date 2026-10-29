unsigned __int64 __fastcall sub_1DD90(_QWORD *a1, void (__fastcall ***a2)(_QWORD))
{
  __int64 v2; // rdx
  __int64 (__fastcall ***v4)(); // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // ebp
  __int64 v12; // rax
  char *v13; // rbx
  char *v14; // rbp
  const char *v16; // [rsp+18h] [rbp-F8h] BYREF
  __int128 v17; // [rsp+20h] [rbp-F0h]
  __int64 v18; // [rsp+30h] [rbp-E0h]
  __int128 v19; // [rsp+38h] [rbp-D8h]
  __int64 (__fastcall **v20)(); // [rsp+48h] [rbp-C8h] BYREF
  int v21; // [rsp+50h] [rbp-C0h]
  __int64 v22; // [rsp+58h] [rbp-B8h]
  __int64 (__fastcall ***v23)(); // [rsp+60h] [rbp-B0h]
  const char **v24; // [rsp+68h] [rbp-A8h]
  void (__fastcall ***v25)(_QWORD); // [rsp+70h] [rbp-A0h]
  __int64 (__fastcall **v26)(); // [rsp+78h] [rbp-98h] BYREF
  int v27; // [rsp+88h] [rbp-88h] BYREF
  void *v28; // [rsp+90h] [rbp-80h]
  int *v29; // [rsp+98h] [rbp-78h]
  int *v30; // [rsp+A0h] [rbp-70h]
  __int64 v31; // [rsp+A8h] [rbp-68h]
  __int64 v32; // [rsp+B0h] [rbp-60h]
  __int128 v33; // [rsp+B8h] [rbp-58h]
  __int64 v34; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v35; // [rsp+D0h] [rbp-40h]

  v2 = a1[18];
  v35 = __readfsqword(0x28u);
  v4 = nullptr;
  v17 = 0;
  v26 = &off_C7230;
  v34 = v2;
  v27 = 0;
  v28 = nullptr;
  v29 = &v27;
  v30 = &v27;
  v31 = 0;
  v32 = 0;
  v16 = nullptr;
  v33 = 0;
  v5 = qvector_reserve(&v16, 0, 8, 1);
  v16 = (const char *)v5;
  v7 = 0;
  v8 = 1;
  *(_QWORD *)&v17 = 8;
  *(_DWORD *)v5 = 1651469383;
  *(_DWORD *)(v5 + 3) = 1936482658;
  *((_BYTE *)v16 + 7) = 0;
  v20 = off_C7580;
  v24 = &v16;
  v9 = a1[36];
  v23 = &v26;
  v18 = 0;
  v21 = 0;
  v22 = 0;
  v25 = a2;
  v19 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = v7 + a1[35];
      if ( (unsigned __int16)sub_97BF0(v10) == 52 )
      {
        if ( v25 )
          (**v25)(v25);
        sub_1BFF0(v10, v23, v24);
      }
      if ( a2 )
      {
        ((void (*)(void (__fastcall ***)(_QWORD), const char *, ...))(*a2)[1])(
          a2,
          "%s: Compile unit %d of %d",
          "Globals",
          v8,
          v9);
        (**a2)(a2);
      }
      v4 = &v20;
      sub_A1190(v7 + a1[35], &v20, 0);
      v7 += 264;
      if ( v8 == v9 )
        break;
      ++v8;
    }
  }
  if ( a1[14] )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v4 = (__int64 (__fastcall ***)())a2;
      sub_1DD90(*(_QWORD *)(a1[13] + 8 * v12), a2);
      v12 = ++v11;
    }
    while ( (unsigned __int64)v11 < a1[14] );
  }
  sub_1DA40(&v16, (__int64)v4, v6);
  v26 = &off_C7230;
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  v13 = (char *)v28;
  if ( v28 )
  {
    do
    {
      v14 = v13;
      sub_156D0(*((_QWORD **)v13 + 3));
      v13 = *((char **)v13 + 2);
      clear_tinfo_t(v14 + 48);
      operator delete(v14, 0x38u);
    }
    while ( v13 );
  }
  return v35 - __readfsqword(0x28u);
}

