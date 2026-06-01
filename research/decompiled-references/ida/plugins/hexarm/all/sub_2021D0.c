__int64 __fastcall sub_2021D0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 i; // rbx
  _QWORD v9[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-A0h]
  _QWORD v12[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-78h]
  __int64 v14; // [rsp+48h] [rbp-70h]
  __int64 v15; // [rsp+50h] [rbp-68h]
  _QWORD v16[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v17; // [rsp+68h] [rbp-50h] BYREF
  __int128 v18; // [rsp+70h] [rbp-48h]
  char v19; // [rsp+80h] [rbp-38h]
  unsigned __int64 v20; // [rsp+88h] [rbp-30h]

  v4 = a1[8];
  v20 = __readfsqword(0x28u);
  v13 = a1;
  v12[0] = &off_4D94A0;
  v12[1] = 0;
  v14 = 0;
  v15 = 0;
  v16[0] = 0;
  v16[1] = 0;
  v17 = 0;
  v19 = a3;
  v18 = 0;
  sub_1037A0(a2, v4, (__int64)v16);
  if ( a3 )
  {
    v6 = a1[7];
    if ( v6 )
    {
      while ( 1 )
      {
        v15 = v6;
        if ( v19 )
        {
          if ( *(char *)(v6 + 4) < 0 )
            goto LABEL_15;
          sub_127460((__int64)v9, (__int64)v13, v6, 257);
        }
        else
        {
          sub_1240C0((__int64)v9, (__int64)v13, v6, 0);
        }
        if ( (unsigned __int8)sub_64180(v16, v9) )
        {
          if ( !v10 )
            goto LABEL_8;
          goto LABEL_7;
        }
        if ( (unsigned __int8)sub_318830(&v17, &v10) )
        {
          if ( !v10 )
          {
LABEL_8:
            qfree();
            goto LABEL_9;
          }
LABEL_7:
          v11 = 0;
          qfree();
          goto LABEL_8;
        }
        if ( v10 )
        {
          v11 = 0;
          qfree();
        }
        qfree();
LABEL_15:
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v6 )
          goto LABEL_16;
      }
    }
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(a2 + 48) & 1) == 0 )
    goto LABEL_16;
  for ( i = a1[6]; i; i = *(_QWORD *)(i + 8) )
  {
    v15 = i;
    if ( v19 )
    {
      if ( *(char *)(i + 4) < 0 )
        continue;
      sub_127460((__int64)v9, (__int64)v13, i, 257);
    }
    else
    {
      sub_1240C0((__int64)v9, (__int64)v13, i, 0);
    }
    if ( (unsigned __int8)sub_64180(v16, v9) )
    {
      if ( !v10 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (unsigned __int8)sub_318830(&v17, &v10) )
    {
      if ( !v10 )
      {
LABEL_29:
        qfree();
        goto LABEL_30;
      }
LABEL_28:
      v11 = 0;
      qfree();
      goto LABEL_29;
    }
    if ( v10 )
    {
      v11 = 0;
      qfree();
    }
    qfree();
  }
  i = 0;
LABEL_30:
  if ( !(unsigned int)sub_11F1A0((_BYTE *)i, v12) )
  {
LABEL_16:
    v6 = 0;
    goto LABEL_9;
  }
  v6 = v15;
LABEL_9:
  v12[0] = &off_4D94A0;
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  qfree();
  return v6;
}

