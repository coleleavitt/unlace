__int64 __fastcall sub_148D0(_QWORD *a1)
{
  __int64 v1; // r12
  unsigned int v2; // eax
  unsigned int v3; // ebp
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  char *v7; // r14
  __int64 v8; // rsi
  bool v9; // al
  __int64 v10; // rsi
  __int64 v11; // rax
  char *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned int v15; // eax
  int v16; // [rsp+Ch] [rbp-ACh]
  char v17; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int8 v18; // [rsp+11h] [rbp-A7h]
  char v19; // [rsp+12h] [rbp-A6h]
  unsigned int v20; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v21; // [rsp+1Ch] [rbp-9Ch]
  _BYTE v22[8]; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-90h]
  unsigned __int8 v24; // [rsp+2Ch] [rbp-8Ch]
  char *s1; // [rsp+30h] [rbp-88h] BYREF
  __int128 v26; // [rsp+38h] [rbp-80h]
  __int64 v27; // [rsp+50h] [rbp-68h] BYREF
  __int128 v28; // [rsp+58h] [rbp-60h]
  char *v29; // [rsp+70h] [rbp-48h] BYREF
  __int128 v30; // [rsp+78h] [rbp-40h]
  unsigned __int64 v31; // [rsp+88h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  qlseek();
  v1 = qlsize();
  LOBYTE(v2) = sub_11DB0((__int64)&v17);
  v3 = v2;
  if ( !(_BYTE)v2 )
    return v3;
  v3 = 0;
  if ( v19 )
    return v3;
  v3 = v18;
  if ( !v18 )
    return v3;
  v3 = 0;
  if ( v17 != 16 )
    return v3;
  v5 = v20;
  if ( v20 != v1 )
    return v3;
  v6 = a1[6];
  s1 = nullptr;
  v26 = 0;
  if ( sub_14800((__int64 *)&s1, v6) == -1 )
  {
LABEL_28:
    v7 = s1;
    goto LABEL_29;
  }
  v7 = s1;
  if ( !(_QWORD)v26 )
    goto LABEL_29;
  if ( !strcmp(s1, "IMG4") )
  {
    v9 = sub_11DB0((__int64)&v27);
    v7 = s1;
    if ( !v9 )
      goto LABEL_29;
    if ( BYTE2(v27) )
      goto LABEL_29;
    if ( !BYTE1(v27) )
      goto LABEL_29;
    if ( (_BYTE)v27 != 16 )
      goto LABEL_29;
    v5 = (unsigned int)v28;
    if ( __CFADD__((_DWORD)v28, v21 + 8) || (unsigned int)v28 + v21 + 8 > v1 )
      goto LABEL_29;
    v10 = a1[6];
    v29 = nullptr;
    v30 = 0;
    v11 = sub_14800((__int64 *)&v29, v10);
    v12 = v29;
    if ( v11 != -1 && (_QWORD)v30 && !strcmp(v29, "IM4P") )
    {
      if ( v12 )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
      goto LABEL_11;
    }
    if ( v12 )
    {
      *(_QWORD *)&v30 = 0;
      qfree();
    }
    goto LABEL_28;
  }
  if ( !strcmp(v7, "IM4P") )
  {
LABEL_11:
    v8 = a1[6];
    v27 = 0;
    v28 = 0;
    v3 = 0;
    if ( sub_14800(&v27, v8) > 3 && (_QWORD)v28 == 5 )
    {
      v13 = a1[6];
      v29 = nullptr;
      v30 = 0;
      v14 = sub_14800((__int64 *)&v29, v13);
      if ( v14 == -1
        || (LOBYTE(v15) = sub_11DB0((__int64)v22), v3 = v15, !(_BYTE)v15)
        || v22[2]
        || v22[1]
        || v22[0] != 4
        || v14 + 12 > ~v23
        || v5 < v14 + (unsigned __int64)v23 + 12
        || qlread() != 4 )
      {
        v3 = 0;
      }
      else
      {
        if ( v16 == 1886220131 )
        {
          a1[13] = qlseek() - 4;
        }
        else if ( v16 == 846755426 )
        {
          a1[13] = qlseek() - v24 - 6;
        }
        a1[12] = qlseek() - 4;
      }
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
    }
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree();
    }
    v7 = s1;
    goto LABEL_16;
  }
LABEL_29:
  v3 = 0;
LABEL_16:
  if ( v7 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v3;
}

