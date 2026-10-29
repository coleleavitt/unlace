__int64 __fastcall sub_43EB0(__int64 a1, _QWORD *a2, double a3, double a4, double a5)
{
  bool v5; // zf
  int v6; // r13d
  _QWORD *v7; // rbp
  const char *v8; // rdx
  const char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[4]; // [rsp+0h] [rbp-4B8h] BYREF
  int v18; // [rsp+20h] [rbp-498h]
  int v19; // [rsp+30h] [rbp-488h] BYREF
  __int64 v20; // [rsp+38h] [rbp-480h]
  int *v21; // [rsp+40h] [rbp-478h]
  int *v22; // [rsp+48h] [rbp-470h]
  __int64 v23; // [rsp+50h] [rbp-468h]
  const char *v24; // [rsp+460h] [rbp-58h]
  int v25; // [rsp+468h] [rbp-50h]
  const char *v26; // [rsp+470h] [rbp-48h]
  int v27; // [rsp+47Ch] [rbp-3Ch]
  char v28; // [rsp+480h] [rbp-38h]
  unsigned __int64 v29; // [rsp+488h] [rbp-30h]

  v5 = *(_DWORD *)(a1 + 396) == -1;
  v6 = *(_DWORD *)(a1 + 392);
  v29 = __readfsqword(0x28u);
  v7 = a2;
  if ( !v5 )
  {
    a2 = (_QWORD *)&byte_4;
    if ( (unsigned __int8)getinf_flag(3, 4) )
      v6 = *(_DWORD *)(a1 + 396);
  }
  v8 = src;
  if ( *(_QWORD *)(a1 + 432) )
    v8 = *(const char **)(a1 + 424);
  v9 = src;
  if ( *(_QWORD *)(a1 + 408) )
    v9 = *(const char **)(a1 + 400);
  v17[1] = v7;
  v17[2] = 0xFFFFFFFFLL;
  v17[0] = &off_A9CE0;
  v21 = &v19;
  v22 = &v19;
  v10 = v7[12];
  v18 = -1;
  v19 = 0;
  v20 = 0;
  v23 = 0;
  v24 = v9;
  v25 = v6;
  v26 = v8;
  v27 = -1;
  v28 = 0;
  v17[3] = v10;
  v13 = sub_406C0((__int64)v17);
  if ( !v13 )
  {
    a2 = v17;
    v13 = sub_43C20(a1, (__int64)v17, a3, a4, a5);
  }
  sub_2F790(v17, (__int64)a2, v11, v12, v14, v15, a3, a4, a5);
  return v13;
}

