__int64 *__fastcall sub_182190(__int128 a1, __int64 a2, char a3)
{
  bool v4; // zf
  __int64 *i; // rbx
  __int64 v6; // rax
  char v8; // al
  __int64 v9; // rax
  int v10; // [rsp+10h] [rbp-128h]
  __int64 v12; // [rsp+18h] [rbp-120h]
  __int64 v13; // [rsp+20h] [rbp-118h]
  __int64 v14; // [rsp+28h] [rbp-110h]
  _QWORD v15[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v18; // [rsp+58h] [rbp-E0h]
  __int64 v19[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+88h] [rbp-B0h]
  __int64 v22[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-80h]
  __int64 v25; // [rsp+D0h] [rbp-68h] BYREF
  int v26; // [rsp+D8h] [rbp-60h]
  __int64 v27; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+F8h] [rbp-40h]

  v13 = *((_QWORD *)&a1 + 1);
  v29 = __readfsqword(0x28u);
  v4 = *(_BYTE *)a2 == 4;
  v18 = 0;
  v16[0] = 0;
  v16[1] = 0;
  v17 = 0;
  if ( v4 )
  {
    *((_QWORD *)&a1 + 1) = v16;
    sub_120460(a1, *(_QWORD *)(a2 + 8) + 48LL, 0, 0xFFFF0000);
  }
  else
  {
    sub_1245A0(a1, v16, a2, 0);
  }
  v14 = *(_QWORD *)(a1 + 64);
  v12 = *(_QWORD *)(v14 + 1504);
  v10 = 0;
  for ( i = (__int64 *)sub_11EF60(*(_QWORD *)(v13 + 8)); ; i = (__int64 *)sub_11EF90(*(_QWORD *)(v13 + 16)) )
  {
    v19[0] = 0;
    v19[1] = 0;
    v20 = 0;
    v21 = 0;
    if ( i )
      break;
LABEL_23:
    qfree();
    if ( v10 == 1 )
    {
      i = nullptr;
      goto LABEL_25;
    }
    v10 = 1;
  }
  while ( 1 )
  {
    v15[1] = 0;
    v15[0] = 0xFFFFFFFF00000000LL;
    sub_123FE0((__int64)v22, a1, (__int64)i, 1);
    if ( (unsigned __int8)sub_180840((__int64)v15, a1, (__int64)i, 0, a3, (__m128i)0LL) )
      break;
    if ( *(_BYTE *)a2 != 4 )
      goto LABEL_12;
    sub_120C40((__int64)&v25, a1, (__int64)i, 1u);
    if ( (unsigned __int8)sub_60D40(&v25, v16) )
    {
      if ( !v27 )
        goto LABEL_34;
      goto LABEL_33;
    }
    if ( (unsigned __int8)sub_3142F0(&v27, &v17) )
    {
      if ( !v27 )
      {
LABEL_34:
        qfree();
LABEL_18:
        if ( v23 )
        {
          v24 = 0;
          qfree();
        }
        qfree();
        sub_119360((__int64)v15);
LABEL_21:
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree();
        }
        goto LABEL_23;
      }
LABEL_33:
      v28 = 0;
      qfree();
      goto LABEL_34;
    }
    if ( v27 )
    {
      v28 = 0;
      qfree();
    }
    qfree();
LABEL_16:
    if ( *(_BYTE *)a2 == 4 )
    {
      if ( (unsigned __int8)sub_60D40(v22, v16) )
        goto LABEL_18;
      v8 = sub_3142F0(&v23, &v17);
LABEL_29:
      if ( v8 )
        goto LABEL_18;
      goto LABEL_13;
    }
LABEL_12:
    sub_60840(v19, v22);
    sub_312B30(&v20, &v23);
    if ( (unsigned __int8)sub_60DE0(v16, v19) )
    {
      v8 = sub_313DC0(&v20, &v17);
      goto LABEL_29;
    }
LABEL_13:
    if ( v10 )
      v6 = sub_11EF90(i[2]);
    else
      v6 = sub_11EF60(i[1]);
    i = (__int64 *)v6;
    if ( v23 )
    {
      v24 = 0;
      qfree();
    }
    qfree();
    sub_119360((__int64)v15);
    if ( !i )
      goto LABEL_21;
  }
  if ( (unsigned int)sub_17F9C0(v12, a2, (__int64)v15) == -1 )
    goto LABEL_16;
  if ( (unsigned __int8)sub_60D40(v22, v19) )
    goto LABEL_18;
  if ( (unsigned __int8)sub_3142F0(&v23, &v20) )
    goto LABEL_18;
  if ( *(_QWORD *)(*(_QWORD *)(v14 + 1344) + 8LL) )
  {
    v9 = i[3];
    v26 = 0;
    v25 = v9;
    if ( (sub_133C30(v14, (__int64)&v25) & 7) != 0 )
      goto LABEL_18;
  }
  if ( v23 )
  {
    v24 = 0;
    qfree();
  }
  qfree();
  sub_119360((__int64)v15);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  qfree();
LABEL_25:
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  qfree();
  return i;
}

