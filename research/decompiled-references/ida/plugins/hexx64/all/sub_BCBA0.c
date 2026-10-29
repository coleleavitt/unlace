unsigned __int64 __fastcall sub_BCBA0(
        _QWORD *a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        double a6)
{
  unsigned __int64 v9; // r15
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  __int64 i; // rax
  unsigned __int64 v16; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 j; // rdx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rsi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 *v30[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v31; // [rsp+10h] [rbp-88h] BYREF
  __int64 v32; // [rsp+18h] [rbp-80h]
  unsigned __int64 *v33[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+40h] [rbp-58h] BYREF
  __int64 v35; // [rsp+48h] [rbp-50h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v9 = a4;
  while ( 1 )
  {
    v10 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_6;
    v11 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v11 )
      break;
LABEL_10:
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      return 0;
  }
  if ( (*(_BYTE *)(*v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v11 + 24);
    if ( v9 >= v16 )
      break;
    v11 = *(_QWORD *)(v11 + 8);
LABEL_14:
    if ( (*(_BYTE *)v11 & 2) != 0 )
      goto LABEL_6;
  }
  if ( v16 < v9 )
  {
    v11 = *(_QWORD *)(v11 + 16);
    goto LABEL_14;
  }
  if ( v10 != (_QWORD *)v11 )
    goto LABEL_10;
LABEL_6:
  if ( !(unsigned __int8)sub_BC1C0(a1, a5, v9, 0) )
  {
    v14 = 0;
    for ( i = 0; (unsigned __int64)v14 < a1[12]; i = v14 )
    {
      ++v14;
      *(_QWORD *)(a1[8] + 8LL * *(int *)(a1[11] + 4 * i)) = 0;
    }
    a1[12] = 0;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1[40] + 528LL) + 8LL * a2) + 24LL) & 1) == 0 )
  {
    sub_127A20((__int64)v30, a3, v9, 1, v12, v13);
    sub_124680((__int64)v33, a3, v9, 1u);
    sub_64280((__int64 *)v33, (__int64 *)v30, a6);
    sub_316CB0(&v34, &v31, v18, v19);
    v20 = *(_QWORD *)(v9 + 8);
    if ( !v20 )
      goto LABEL_52;
LABEL_23:
    v21 = sub_A9D90(a3, v30, v20, *(_QWORD *)(a4 + 8), 1u);
    if ( v21 )
    {
      v22 = (_QWORD *)*a1;
      if ( !*a1 )
        goto LABEL_30;
      v23 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v23 )
        goto LABEL_36;
      if ( (*(_BYTE *)(*v22 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_30:
        if ( v34 )
        {
          v35 = 0;
          qfree(v34);
        }
        qfree((__int64)v33[0]);
        if ( v31 )
        {
          v32 = 0;
          qfree((__int64)v31);
        }
        v9 = 0;
        qfree((__int64)v30[0]);
        return v9;
      }
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 + 24);
        if ( v21 >= v24 )
        {
          if ( v24 >= v21 )
          {
            if ( v22 == (_QWORD *)v23 )
              goto LABEL_30;
LABEL_36:
            v20 = *(_QWORD *)(v21 + 8);
            if ( !v20 )
              break;
            goto LABEL_23;
          }
          v23 = *(_QWORD *)(v23 + 16);
        }
        else
        {
          v23 = *(_QWORD *)(v23 + 8);
        }
        if ( (*(_BYTE *)v23 & 2) != 0 )
          goto LABEL_30;
      }
    }
    for ( j = *(_QWORD *)(v9 + 8); j; j = *(_QWORD *)(v26 + 8) )
    {
      v26 = sub_A9AA0(a3, v33, j, *(_QWORD *)(a4 + 8), 1u);
      if ( !v26 )
        break;
      v27 = (_QWORD *)*a1;
      if ( !*a1 )
        goto LABEL_30;
      v28 = *v27 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v28 )
      {
        if ( (*(_BYTE *)(*v27 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_30;
        v29 = *(_QWORD *)(v28 + 24);
        if ( v26 < v29 )
        {
LABEL_43:
          v28 = *(_QWORD *)(v28 + 8);
          goto LABEL_44;
        }
        while ( v29 < v26 )
        {
          v28 = *(_QWORD *)(v28 + 16);
LABEL_44:
          if ( (*(_BYTE *)v28 & 2) != 0 )
            goto LABEL_30;
          v29 = *(_QWORD *)(v28 + 24);
          if ( v26 < v29 )
            goto LABEL_43;
        }
        if ( v27 == (_QWORD *)v28 )
          goto LABEL_30;
      }
    }
LABEL_52:
    if ( v34 )
    {
      v35 = 0;
      qfree(v34);
    }
    qfree((__int64)v33[0]);
    if ( v31 )
    {
      v32 = 0;
      qfree((__int64)v31);
    }
    qfree((__int64)v30[0]);
  }
  return v9;
}

