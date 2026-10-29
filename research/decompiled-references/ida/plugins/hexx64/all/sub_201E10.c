__int64 __fastcall sub_201E10(_QWORD *a1, __int64 a2, char a3, double a4, __m128 a5)
{
  __int64 v6; // rsi
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rdi
  char v13; // al
  __int64 i; // rbx
  __int64 v15; // rdi
  char v16; // al
  __int64 v17[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-A0h]
  _QWORD v20[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-78h]
  __int64 v22; // [rsp+48h] [rbp-70h]
  __int64 v23; // [rsp+50h] [rbp-68h]
  __int64 v24[2]; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 *v25; // [rsp+68h] [rbp-50h] BYREF
  __int128 v26; // [rsp+70h] [rbp-48h]
  char v27; // [rsp+80h] [rbp-38h]
  unsigned __int64 v28; // [rsp+88h] [rbp-30h]

  v6 = a1[8];
  v28 = __readfsqword(0x28u);
  v21 = a1;
  v20[0] = &off_4DEDE0;
  v20[1] = 0;
  v22 = 0;
  v23 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25 = nullptr;
  v27 = a3;
  v26 = 0;
  sub_103D60(a2, v6, v24);
  if ( a3 )
  {
    v10 = a1[7];
    if ( v10 )
    {
      while ( 1 )
      {
        v23 = v10;
        if ( v27 )
        {
          if ( *(char *)(v10 + 4) < 0 )
            goto LABEL_15;
          sub_127A20((__int64)v17, (__int64)v21, v10, 257, v8, v9, 0.0, a5);
        }
        else
        {
          sub_124680((__int64)v17, (__int64)v21, v10, 0, 0.0, a5);
        }
        if ( (unsigned __int8)sub_64780(v24, v17) )
        {
          v11 = v18;
          if ( !v18 )
            goto LABEL_8;
          goto LABEL_7;
        }
        v13 = sub_318470(&v25, (__int64)&v18);
        v11 = v18;
        if ( v13 )
        {
          if ( !v18 )
          {
LABEL_8:
            qfree(v17[0]);
            goto LABEL_9;
          }
LABEL_7:
          v19 = 0;
          qfree(v11);
          goto LABEL_8;
        }
        if ( v18 )
        {
          v19 = 0;
          qfree(v18);
        }
        qfree(v17[0]);
LABEL_15:
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(a2 + 48) & 1) == 0 )
    goto LABEL_16;
  for ( i = a1[6]; i; i = *(_QWORD *)(i + 8) )
  {
    v23 = i;
    if ( v27 )
    {
      if ( *(char *)(i + 4) < 0 )
        continue;
      sub_127A20((__int64)v17, (__int64)v21, i, 257, v8, v9, 0.0, a5);
    }
    else
    {
      sub_124680((__int64)v17, (__int64)v21, i, 0, 0.0, a5);
    }
    if ( (unsigned __int8)sub_64780(v24, v17) )
    {
      v15 = v18;
      if ( !v18 )
        goto LABEL_29;
      goto LABEL_28;
    }
    v16 = sub_318470(&v25, (__int64)&v18);
    v15 = v18;
    if ( v16 )
    {
      if ( !v18 )
      {
LABEL_29:
        qfree(v17[0]);
        goto LABEL_30;
      }
LABEL_28:
      v19 = 0;
      qfree(v15);
      goto LABEL_29;
    }
    if ( v18 )
    {
      v19 = 0;
      qfree(v18);
    }
    qfree(v17[0]);
  }
  i = 0;
LABEL_30:
  if ( !(unsigned int)sub_11F760((_BYTE *)i, v20) )
  {
LABEL_16:
    v10 = 0;
    goto LABEL_9;
  }
  v10 = v23;
LABEL_9:
  v20[0] = &off_4DEDE0;
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree((__int64)v25);
  }
  qfree(v24[0]);
  return v10;
}

