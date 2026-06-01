unsigned __int64 __fastcall sub_71390(__int64 *a1, __int64 *a2, char a3)
{
  int v4; // ebp
  double v5; // xmm0_8
  unsigned int v6; // eax
  double v7; // xmm0_8
  int v8; // eax
  unsigned __int64 v9; // r13
  int v10; // r12d
  unsigned __int64 i; // r15
  __int64 v12; // r12
  unsigned int j; // ebp
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v18; // [rsp+10h] [rbp-D0h]
  int v19; // [rsp+28h] [rbp-B8h]
  char v20; // [rsp+2Fh] [rbp-B1h]
  __int64 v21[2]; // [rsp+38h] [rbp-A8h] BYREF
  const void *v22[2]; // [rsp+48h] [rbp-98h] BYREF
  const void *v23[2]; // [rsp+58h] [rbp-88h] BYREF
  __int64 v24; // [rsp+68h] [rbp-78h] BYREF
  __int128 v25; // [rsp+70h] [rbp-70h]
  __int64 v26; // [rsp+80h] [rbp-60h]
  __int128 v27; // [rsp+88h] [rbp-58h]
  unsigned __int64 v28; // [rsp+A0h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v25 = 0;
  v21[0] = 0;
  v21[1] = 0;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  if ( a3 )
  {
    v4 = sub_6DBE0(a1, &v24);
    v5 = (*(double (__fastcall **)(__int64 *))(*a1 + 88))(a1);
    v19 = v6;
    sub_6FCF0((__int64)a1, v6, v21, v5);
  }
  else
  {
    v4 = sub_6D400((__int64)a1, (__int64)&v24);
    v19 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 80))(a1);
  }
  v7 = (*(double (__fastcall **)(__int64 *))(*a1 + 56))(a1);
  sub_711C0(a2, v8, v7);
  v23[0] = nullptr;
  v23[1] = nullptr;
  sub_64190((__int64 *)v23, v19, v7);
  sub_648D0((__int64 *)(*a2 + 16LL * v19), v23, v7);
  qfree((__int64)v23[0]);
  sub_6D2B0((__int64 *)v22, (__int64)a1, v7);
  if ( v4 > 0 )
  {
    v9 = 0;
    v18 = v4;
    do
    {
      if ( v9 >= (unsigned __int64)v25 )
        v10 = -1;
      else
        v10 = *(_DWORD *)(v24 + 4 * v9);
      if ( v19 != v10 && (!a3 || sub_64930(v21, v10)) )
        sub_648D0((__int64 *)(*a2 + 16LL * v10), v22, v7);
      ++v9;
    }
    while ( v4 != v9 );
    do
    {
      v20 = 0;
      for ( i = 0; i != v18; ++i )
      {
        while ( 1 )
        {
          v12 = i >= (unsigned __int64)v25 ? -1LL : *(int *)(v24 + 4 * i);
          if ( v19 != (_DWORD)v12 && (!a3 || sub_64930(v21, v12)) )
            break;
          if ( v18 == ++i )
            goto LABEL_29;
        }
        sub_64000((__int64 *)v23, (__int64)v22, v7);
        for ( j = 0; ; ++j )
        {
          v15 = *a1;
          if ( a3 )
            break;
          if ( (int)j >= (unsigned __int64)(*(int (__fastcall **)(__int64 *, _QWORD))(v15 + 104))(a1, (unsigned int)v12) )
            goto LABEL_26;
          v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, (unsigned int)v12, j);
LABEL_22:
          sub_64700((__int64 *)v23, (__int64 *)(*a2 + 16LL * v14));
        }
        if ( (int)j < (unsigned __int64)(*(int (__fastcall **)(__int64 *, _QWORD))(v15 + 96))(a1, (unsigned int)v12) )
        {
          v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 112))(a1, (unsigned int)v12, j);
          goto LABEL_22;
        }
LABEL_26:
        sub_64190((__int64 *)v23, v12, v7);
        v16 = 16 * v12;
        if ( sub_647F0((__int64)v23, v16 + *a2) )
        {
          sub_648D0((__int64 *)(v16 + *a2), v23, v7);
          v20 = 1;
        }
        qfree((__int64)v23[0]);
      }
LABEL_29:
      ;
    }
    while ( v20 );
  }
  qfree((__int64)v22[0]);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  qfree(v21[0]);
  return v28 - __readfsqword(0x28u);
}

