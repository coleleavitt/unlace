unsigned __int64 __fastcall sub_128710(
        __int64 a1,
        unsigned int a2,
        char *a3,
        __int64 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  __int64 v9; // r12
  int v10; // esi
  __int64 v12; // rdx
  __int64 *v13; // r15
  int v14; // edx
  unsigned int v15; // eax
  _BOOL4 v16; // eax
  int v17; // edx
  __int64 v20; // [rsp+18h] [rbp-80h]
  __int64 v21; // [rsp+18h] [rbp-80h]
  unsigned int v22; // [rsp+18h] [rbp-80h]
  __int64 v23; // [rsp+18h] [rbp-80h]
  __int64 v24; // [rsp+20h] [rbp-78h] BYREF
  __int128 v25; // [rsp+28h] [rbp-70h]
  __int128 v26; // [rsp+38h] [rbp-60h]
  __int128 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v9 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(a1 + 48);
  v28 = __readfsqword(0x28u);
  if ( v10 )
    goto LABEL_2;
  v24 = a1;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( a5 )
  {
    if ( *a5 == 59 )
    {
      *a5 = 117;
    }
    else
    {
      v23 = a4;
      v16 = sub_E45E0((__int64)&v24, (__int64)a5);
      a4 = v23;
      if ( v16 )
        goto LABEL_3;
    }
  }
  if ( !a6 )
  {
LABEL_18:
    if ( a7 )
    {
      if ( *a7 == 59 )
      {
        *a7 = 117;
      }
      else
      {
        v21 = a4;
        if ( sub_E45E0((__int64)&v24, (__int64)a7) )
          goto LABEL_2;
        a4 = v21;
      }
    }
    if ( !a4 )
      goto LABEL_26;
    v12 = 0;
    if ( *(_BYTE *)a4 == 117 )
      v12 = *(_QWORD *)(a4 + 8);
    if ( !(unsigned int)sub_E4020(a1, a2, v12, 0, 0) )
    {
LABEL_26:
      v13 = *(__int64 **)(a1 + 16);
      if ( !v13 )
        v13 = sub_E2050((__int64 *)a1);
      v14 = *(_DWORD *)(a1 + 40);
      if ( v14 <= 3 )
      {
        v17 = *(_DWORD *)(a1 + 56);
        v15 = v17 + 1;
        *(_DWORD *)(a1 + 56) = v17 + 4;
      }
      else
      {
        v15 = *(_DWORD *)(a1 + 44);
        *(_DWORD *)(a1 + 40) = v14 - 4;
        *(_DWORD *)(a1 + 44) = v15 + 4;
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        v22 = v15;
        sub_127300(a1, a5, v15, 0.0);
        v15 = v22;
        if ( *(_QWORD *)(a1 + 16) )
        {
          sub_127300(a1, a6, v22 + 1, 0.0);
          v15 = v22;
          if ( *(_QWORD *)(a1 + 16) )
          {
            sub_127300(a1, a7, v22 + 2, 0.0);
            v15 = v22;
          }
        }
      }
      if ( v13 )
      {
        sub_E17F0((__int64 *)a1, *(_QWORD *)(a1 + 16), 0, v15 - *a3 + 3, v15 + 3, *a3, (__int64)a3, 0);
        sub_E1710((__int64)v13, 166, a2 == 24, 0, 0);
      }
    }
LABEL_2:
    if ( !a5 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( *a6 == 59 )
  {
    *a6 = 117;
    goto LABEL_18;
  }
  v20 = a4;
  if ( !sub_E45E0((__int64)&v24, (__int64)a6) )
  {
    a4 = v20;
    goto LABEL_18;
  }
  if ( a5 )
  {
LABEL_3:
    sub_D7720(v9, (__int64)a5);
LABEL_4:
    if ( !a6 )
      goto LABEL_6;
  }
  sub_D7720(v9, (__int64)a6);
LABEL_6:
  if ( a7 )
    sub_D7720(v9, (__int64)a7);
  return __readfsqword(0x28u) ^ v28;
}
