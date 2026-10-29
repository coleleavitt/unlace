void __fastcall sub_4B630(char *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rbp
  char *v10; // r13
  __int64 v11; // r11
  __int64 v12; // r12
  __int64 *v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v7 = a4;
    v8 = a5;
    if ( a4 )
    {
      if ( a4 + a5 == 2 )
      {
LABEL_9:
        if ( (unsigned __int64)*a2 < *(_QWORD *)a1 )
          sub_4B2B0((__int64)a1, a2);
      }
      else
      {
        while ( 1 )
        {
          if ( v7 <= v8 )
          {
            v12 = v8 / 2;
            v13 = &a2[18 * (v8 / 2)];
            v10 = (char *)sub_25180(a1, (__int64)a2, v13);
            v9 = 0x8E38E38E38E38E39LL * ((v10 - a1) >> 4);
          }
          else
          {
            v9 = v7 / 2;
            v10 = &a1[144 * (v7 / 2)];
            v13 = sub_251E0(a2, a3, v10);
            v12 = 0x8E38E38E38E38E39LL * (((__int64)v13 - v11) >> 4);
          }
          v8 -= v12;
          v14 = sub_2AC40((__int64)v10, v11, (__int64)v13);
          sub_4B630(a1, v10, v14, v9, v12);
          v7 -= v9;
          if ( !v7 || !v8 )
            break;
          a1 = (char *)v14;
          a2 = v13;
          if ( v7 + v8 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
}
