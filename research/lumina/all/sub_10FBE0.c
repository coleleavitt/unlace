__int64 __fastcall sub_10FBE0(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // r8
  unsigned int *v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // ebp
  unsigned __int8 v10; // al
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r13
  unsigned int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 (__fastcall *v18)(_QWORD, __int64, _QWORD); // rax
  __int64 v19; // rbx
  unsigned int v20; // eax
  _QWORD *v21; // rdx
  __int64 v22; // rdi
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned int v29; // ebx
  __int64 *v30; // r13
  __int64 v31; // rax
  char v32; // al
  unsigned int v33; // eax
  _BOOL4 v34; // eax
  unsigned __int8 v35; // al
  void (__fastcall *v36)(__int64, __int64, _QWORD); // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  int v39; // [rsp+0h] [rbp-58h] BYREF
  int v40; // [rsp+4h] [rbp-54h] BYREF
  unsigned int v41; // [rsp+8h] [rbp-50h] BYREF
  int v42; // [rsp+Ch] [rbp-4Ch] BYREF
  __int128 v43; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v44; // [rsp+28h] [rbp-30h]

  v2 = a1[37];
  v44 = __readfsqword(0x28u);
  if ( v2 )
  {
LABEL_2:
    v42 = 0;
    v3 = 0;
    sub_CC410(v2);
    v5 = (unsigned int *)a1[37];
    do
    {
      ++v3;
      v6 = (__int64)&v42;
      v7 = sub_101440(v5, &v42, 0, v3, v4);
      v8 = v7;
    }
    while ( v7 == -1 );
    if ( v7 || v42 )
    {
      sub_CBBE0((__int64)a1);
      if ( *((_BYTE *)a1 + 27) )
      {
        v6 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[9] + 144LL))(a1[9], 0, 0);
      }
    }
    goto LABEL_8;
  }
  if ( *((_BYTE *)a1 + 21) )
  {
LABEL_13:
    if ( (a1[2] & 0xFF00000000FFLL) != 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v6 = 1;
  v8 = sub_CC0D0((__int64)a1, 1);
  if ( v8 )
    goto LABEL_10;
  if ( *((_BYTE *)a1 + 22) > 1u )
    goto LABEL_19;
  v11 = (__int64 *)a1[10];
  v39 = 1;
  v12 = *a1;
  v13 = *v11;
  if ( !*v11 )
  {
    v6 = a1[28];
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, int *))(v12 + 56))(*a1, v6, 0, &v39);
    if ( v14 )
      goto LABEL_48;
    if ( !v39 )
      goto LABEL_32;
  }
  v15 = a1[9];
  v40 = 0;
  v6 = (__int64)&v40;
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 72LL))(v15, &v40);
  if ( v14 )
    goto LABEL_48;
  if ( v40 )
    goto LABEL_32;
  v6 = (__int64)&v41;
  v23 = a1;
  v14 = sub_C3440((__int64)a1, &v41);
  if ( v14 )
  {
LABEL_48:
    v8 = v14;
    goto LABEL_10;
  }
  if ( !v41 )
  {
    if ( !v13 )
    {
      if ( qword_2424C0 )
        qword_2424C0(a1, &v41, v24, v25);
      v35 = *((_BYTE *)a1 + 22);
      if ( v35 > 1u && v35 != 5 || (v37 = 2, v23 = a1, !(unsigned int)sub_CC090((__int64)a1, 2)) )
      {
        v36 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v12 + 48);
        v37 = a1[28];
        if ( v36 )
        {
          v23 = (_QWORD *)v12;
          v36(v12, v37, 0);
        }
        if ( !*((_BYTE *)a1 + 8) )
        {
          v23 = (_QWORD *)a1[9];
          if ( *v23 )
          {
            if ( !*((_BYTE *)a1 + 17) )
            {
              v37 = 1;
              (*(void (__fastcall **)(_QWORD *, __int64))(*v23 + 64LL))(v23, 1);
            }
            if ( *((_BYTE *)a1 + 22) != 5 )
              *((_BYTE *)a1 + 22) = 1;
          }
          *((_BYTE *)a1 + 23) = *((_BYTE *)a1 + 16);
        }
      }
      if ( qword_2424C8 )
        qword_2424C8(v23, v37);
      goto LABEL_32;
    }
    v26 = a1[10];
    LOBYTE(v42) = 0;
LABEL_89:
    v6 = (__int64)&v42;
    v29 = (*(__int64 (__fastcall **)(__int64, int *, __int64, _QWORD))(*(_QWORD *)v26 + 16LL))(v26, &v42, 1, 0);
    if ( v29 == 522 )
    {
      v34 = (_BYTE)v42 != 0;
      goto LABEL_91;
    }
    goto LABEL_80;
  }
  v26 = a1[10];
  if ( v13 )
  {
    LOBYTE(v42) = 0;
    goto LABEL_89;
  }
  v27 = a1[10];
  v42 = 2049;
  v6 = a1[28];
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int *))(v12 + 40))(v12, v6, v27, 2049, &v42);
  if ( !v14 )
  {
    v28 = a1[10];
    LOBYTE(v42) = 0;
    v6 = (__int64)&v42;
    v29 = (*(__int64 (__fastcall **)(__int64, int *, __int64, _QWORD))(*(_QWORD *)v28 + 16LL))(v28, &v42, 1, 0);
    if ( v29 == 522 )
    {
      v30 = (__int64 *)a1[10];
      v29 = 0;
      v31 = *v30;
      if ( !*v30 )
      {
        v32 = v42;
LABEL_113:
        v34 = v32 != 0;
LABEL_91:
        if ( !v34 )
          goto LABEL_32;
        goto LABEL_19;
      }
    }
    else
    {
      v30 = (__int64 *)a1[10];
      v31 = *v30;
      if ( !*v30 )
        goto LABEL_80;
    }
    (*(void (__fastcall **)(__int64 *))(v31 + 8))(v30);
    *v30 = 0;
LABEL_80:
    v32 = v42;
    if ( v29 )
    {
      v8 = v29;
      goto LABEL_10;
    }
    goto LABEL_113;
  }
  if ( v14 != 14 )
    goto LABEL_48;
LABEL_19:
  if ( *((_BYTE *)a1 + 18) )
  {
    v8 = 776;
    goto LABEL_10;
  }
  v10 = *((_BYTE *)a1 + 22);
  if ( v10 == 5 || v10 <= 3u )
  {
    v6 = 4;
    v17 = sub_CC090((__int64)a1, 4);
    if ( v17 )
    {
      v8 = v17;
      goto LABEL_10;
    }
  }
  if ( *(_QWORD *)a1[10] )
    goto LABEL_23;
  if ( *((_BYTE *)a1 + 9) == 2 )
    goto LABEL_64;
  v19 = *a1;
  v6 = a1[28];
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *))(*a1 + 56LL))(*a1, v6, 0, &v41);
  if ( v20 )
    goto LABEL_82;
  v21 = (_QWORD *)a1[10];
  if ( !v41 )
  {
    if ( !*v21 )
    {
LABEL_64:
      if ( *((_BYTE *)a1 + 8) )
        goto LABEL_32;
      goto LABEL_65;
    }
LABEL_23:
    v8 = sub_C35A0((__int64)a1);
    if ( v8 )
    {
LABEL_24:
      if ( (unsigned __int8)v8 == 13 || (unsigned __int8)v8 == 10 )
      {
        v6 = v8;
        sub_CC130((__int64)a1, v8);
      }
      goto LABEL_10;
    }
    v6 = *((_BYTE *)a1 + 16) == 0;
    v33 = sub_10EB60(a1, v6);
    *((_BYTE *)a1 + 21) = 0;
    v8 = v33;
    goto LABEL_71;
  }
  v42 = 0;
  v6 = a1[28];
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64, int *))(v19 + 40))(v19, v6, v21, 2050, &v42);
  if ( v20 )
  {
LABEL_82:
    v8 = v20;
    if ( *(_QWORD *)a1[10] )
      goto LABEL_23;
    if ( *((_BYTE *)a1 + 8) )
      goto LABEL_24;
  }
  else
  {
    if ( (v42 & 1) == 0 )
    {
      if ( !*(_QWORD *)a1[10] )
        goto LABEL_64;
      goto LABEL_23;
    }
    v6 = (__int64)"%s at line %d of [%.10s]";
    sub_E8BB0(
      0xEu,
      "%s at line %d of [%.10s]",
      "cannot open file",
      59040,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    v38 = a1[10];
    if ( *(_QWORD *)v38 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38 + 8LL))(a1[10]);
      *(_QWORD *)v38 = 0;
      if ( *(_QWORD *)a1[10] )
        goto LABEL_23;
    }
    v8 = 14;
    if ( *((_BYTE *)a1 + 8) )
      goto LABEL_10;
  }
LABEL_65:
  v22 = a1[9];
  if ( *(_QWORD *)v22 )
  {
    if ( !*((_BYTE *)a1 + 17) )
    {
      v6 = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 64LL))(v22, 1);
    }
    if ( *((_BYTE *)a1 + 22) != 5 )
      *((_BYTE *)a1 + 22) = 1;
  }
  *((_BYTE *)a1 + 23) = *((_BYTE *)a1 + 16);
LABEL_71:
  if ( v8 )
    goto LABEL_24;
LABEL_32:
  if ( *((_BYTE *)a1 + 16) )
    goto LABEL_50;
  if ( *((_BYTE *)a1 + 28) )
  {
    v6 = (__int64)&v43;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int64))(*(_QWORD *)a1[9] + 16LL))(
            a1[9],
            &v43,
            16,
            24);
    v8 = v16;
    if ( v16 )
    {
      if ( v16 != 522 )
        goto LABEL_10;
      v43 = 0;
    }
    if ( v43 != *(_OWORD *)(a1 + 17) )
    {
      sub_CBBE0((__int64)a1);
      if ( *((_BYTE *)a1 + 27) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)a1[9] + 144LL))(a1[9], 0, 0);
    }
    if ( *((_BYTE *)a1 + 16) )
    {
LABEL_50:
      v2 = a1[37];
      if ( v2 )
        goto LABEL_2;
      goto LABEL_13;
    }
  }
  v6 = a1[38];
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *))(*a1 + 56LL))(*a1, v6, 0, &v41);
  if ( !v8 )
  {
    v8 = v41;
    if ( v41 )
    {
      v6 = (__int64)&v42;
      v8 = sub_C3440((__int64)a1, &v42);
      if ( !v8 )
      {
        if ( v42 )
        {
          v6 = 0;
          v8 = sub_2165E((__int64)a1, nullptr);
        }
        else
        {
          v6 = a1[38];
          v18 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*a1 + 48LL);
          if ( v18 )
            v8 = v18(*a1, v6, 0);
        }
      }
    }
    else if ( *((_BYTE *)a1 + 9) == 5 )
    {
      *((_BYTE *)a1 + 9) = 0;
    }
  }
  v2 = a1[37];
  if ( v2 )
    goto LABEL_2;
LABEL_8:
  if ( (a1[2] & 0xFF00000000FFLL) != 0 )
    goto LABEL_15;
  if ( !v8 )
  {
LABEL_14:
    v6 = (__int64)(a1 + 4);
    v8 = sub_C3440((__int64)a1, (_DWORD *)a1 + 8);
LABEL_15:
    if ( v8 )
      goto LABEL_10;
LABEL_16:
    *((_BYTE *)a1 + 21) = 1;
    *((_BYTE *)a1 + 28) = 1;
    return 0;
  }
LABEL_10:
  sub_CC460((__int64)a1, v6);
  return v8;
}
