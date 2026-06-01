__int64 __fastcall sub_D3C0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // r12
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned __int64 v7; // r13
  __int64 v8; // rsi
  char *v9; // r14
  __int64 v10; // rsi
  bool v11; // al
  __int64 v12; // rsi
  __int64 v13; // rax
  char *v14; // r12
  __int64 v15; // rsi
  __int64 v16; // r12
  unsigned int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // [rsp+Ch] [rbp-ACh] BYREF
  char v22; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int8 v23; // [rsp+11h] [rbp-A7h]
  char v24; // [rsp+12h] [rbp-A6h]
  unsigned int v25; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v26; // [rsp+1Ch] [rbp-9Ch]
  _BYTE v27[8]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-90h]
  unsigned __int8 v29; // [rsp+2Ch] [rbp-8Ch]
  char *s1; // [rsp+30h] [rbp-88h] BYREF
  __int128 v31; // [rsp+38h] [rbp-80h]
  __int64 v32; // [rsp+50h] [rbp-68h] BYREF
  __int128 v33; // [rsp+58h] [rbp-60h]
  char *v34; // [rsp+70h] [rbp-48h] BYREF
  __int128 v35; // [rsp+78h] [rbp-40h]
  unsigned __int64 v36; // [rsp+88h] [rbp-30h]

  v1 = a1[12];
  v36 = __readfsqword(0x28u);
  qlseek(a1[6], v1, 0);
  v3 = qlsize(a1[6]);
  LOBYTE(v4) = sub_5AB0((__int64)&v22, a1[6]);
  v5 = v4;
  if ( !(_BYTE)v4 )
    return v5;
  v5 = 0;
  if ( v24 )
    return v5;
  v5 = v23;
  if ( !v23 )
    return v5;
  v5 = 0;
  if ( v22 != 16 )
    return v5;
  v7 = v25;
  if ( v25 != v3 )
    return v5;
  v8 = a1[6];
  s1 = nullptr;
  v31 = 0;
  if ( sub_D2F0((__int64 *)&s1, v8) == -1 )
  {
LABEL_28:
    v9 = s1;
    goto LABEL_29;
  }
  v9 = s1;
  if ( !(_QWORD)v31 )
    goto LABEL_29;
  if ( !strcmp(s1, "IMG4") )
  {
    v11 = sub_5AB0((__int64)&v32, a1[6]);
    v9 = s1;
    if ( !v11 )
      goto LABEL_29;
    if ( BYTE2(v32) )
      goto LABEL_29;
    if ( !BYTE1(v32) )
      goto LABEL_29;
    if ( (_BYTE)v32 != 16 )
      goto LABEL_29;
    v7 = (unsigned int)v33;
    if ( __CFADD__((_DWORD)v33, v26 + 8) || (unsigned int)v33 + v26 + 8 > v3 )
      goto LABEL_29;
    v12 = a1[6];
    v34 = nullptr;
    v35 = 0;
    v13 = sub_D2F0((__int64 *)&v34, v12);
    v14 = v34;
    if ( v13 != -1 && (_QWORD)v35 && !strcmp(v34, "IM4P") )
    {
      if ( v14 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v14);
      }
      goto LABEL_11;
    }
    if ( v14 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v14);
    }
    goto LABEL_28;
  }
  if ( !strcmp(v9, "IM4P") )
  {
LABEL_11:
    v10 = a1[6];
    v32 = 0;
    v33 = 0;
    v5 = 0;
    if ( sub_D2F0(&v32, v10) > 3 && (_QWORD)v33 == 5 )
    {
      v15 = a1[6];
      v34 = nullptr;
      v35 = 0;
      v16 = sub_D2F0((__int64 *)&v34, v15);
      if ( v16 == -1
        || (LOBYTE(v17) = sub_5AB0((__int64)v27, a1[6]), v5 = v17, !(_BYTE)v17)
        || v27[2]
        || v27[1]
        || v27[0] != 4
        || v16 + 12 > ~v28
        || v7 < v16 + (unsigned __int64)v28 + 12
        || qlread(a1[6], &v21, 4) != 4 )
      {
        v5 = 0;
      }
      else
      {
        v18 = a1[6];
        if ( v21 == 1886220131 )
        {
          v20 = qlseek(v18, 0, 1);
          v18 = a1[6];
          a1[13] = v20 - 4;
        }
        else if ( v21 == 846755426 )
        {
          v19 = qlseek(v18, 0, 1);
          v18 = a1[6];
          a1[13] = v19 - v29 - 6;
        }
        a1[12] = qlseek(v18, 0, 1) - 4;
      }
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v34);
      }
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    v9 = s1;
    goto LABEL_16;
  }
LABEL_29:
  v5 = 0;
LABEL_16:
  if ( v9 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v9);
  }
  return v5;
}

