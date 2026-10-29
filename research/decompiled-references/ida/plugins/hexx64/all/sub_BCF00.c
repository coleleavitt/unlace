unsigned __int64 __fastcall sub_BCF00(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        double a6)
{
  unsigned __int64 v8; // r15
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  __int64 i; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 j; // rdx
  unsigned __int64 v25; // rax
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // [rsp+8h] [rbp-98h]
  __int64 v30[2]; // [rsp+10h] [rbp-90h] BYREF
  __int64 *v31; // [rsp+20h] [rbp-80h] BYREF
  __int64 v32; // [rsp+28h] [rbp-78h]
  __int64 v33[2]; // [rsp+40h] [rbp-60h] BYREF
  __int64 v34; // [rsp+50h] [rbp-50h] BYREF
  __int64 v35; // [rsp+58h] [rbp-48h]
  unsigned __int64 v36; // [rsp+68h] [rbp-38h]

  v29 = a4;
  v36 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v8 = a4;
  while ( 1 )
  {
    v9 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_6;
    v10 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v10 )
      break;
LABEL_10:
    v8 = *(_QWORD *)(v8 + 8);
    if ( !v8 )
      return 0;
  }
  if ( (*(_BYTE *)(*v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v10 + 24);
    if ( v8 >= v15 )
      break;
    v10 = *(_QWORD *)(v10 + 8);
LABEL_14:
    if ( (*(_BYTE *)v10 & 2) != 0 )
      goto LABEL_6;
  }
  if ( v15 < v8 )
  {
    v10 = *(_QWORD *)(v10 + 16);
    goto LABEL_14;
  }
  if ( v9 != (_QWORD *)v10 )
    goto LABEL_10;
LABEL_6:
  if ( !(unsigned __int8)sub_BC1C0((_QWORD *)a1, a5, v8, 0) )
  {
    v13 = 0;
    for ( i = 0; (unsigned __int64)v13 < *(_QWORD *)(a1 + 96); i = v13 )
    {
      ++v13;
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(int *)(*(_QWORD *)(a1 + 88) + 4 * i)) = 0;
    }
    *(_QWORD *)(a1 + 96) = 0;
    goto LABEL_10;
  }
  if ( *(_BYTE *)(v8 + 64) == 8 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v8 + 72) + 284LL) == 5 )
      return v8;
    v16 = *(_QWORD *)(a1 + 320);
    if ( *(_DWORD *)(v16 + 64) != 1 )
      goto LABEL_22;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 320);
    if ( *(_DWORD *)(v16 + 64) != 1 )
    {
LABEL_22:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 528) + 8LL * a2) + 24LL) & 1) == 0 )
      {
        sub_127A20((__int64)v30, a3, v8, 1, v11, v12);
        v18 = v8;
        while ( 1 )
        {
          v18 = sub_124CC0(a3, v30, v18, *(_QWORD *)(v29 + 16), 0, 1u);
          if ( !v18 )
            break;
          v19 = *(_QWORD **)a1;
          if ( *(_QWORD *)a1 )
          {
            v20 = *v19 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !v20 )
              continue;
            if ( (*(_BYTE *)(*v19 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
            {
              v21 = *(_QWORD *)(v20 + 24);
              if ( v18 < v21 )
              {
LABEL_37:
                v20 = *(_QWORD *)(v20 + 8);
                goto LABEL_38;
              }
              while ( v21 < v18 )
              {
                v20 = *(_QWORD *)(v20 + 16);
LABEL_38:
                if ( (*(_BYTE *)v20 & 2) != 0 )
                  goto LABEL_33;
                v21 = *(_QWORD *)(v20 + 24);
                if ( v18 < v21 )
                  goto LABEL_37;
              }
              if ( v19 != (_QWORD *)v20 )
                continue;
            }
          }
LABEL_33:
          if ( v31 )
          {
            v32 = 0;
            qfree((__int64)v31);
          }
          v8 = 0;
          qfree(v30[0]);
          return v8;
        }
        sub_124680((__int64)v33, a3, v8, 1u);
        sub_64280(v33, v30, a6);
        sub_316CB0(&v34, &v31, v22, v23);
        for ( j = *(_QWORD *)(v8 + 16); j; j = *(_QWORD *)(v25 + 16) )
        {
          v25 = sub_129150(a3, v30, j, *(_QWORD *)(v29 + 16), 0, 0, 0x101u);
          if ( !v25 )
            break;
          v26 = *(_QWORD **)a1;
          if ( !*(_QWORD *)a1 )
            goto LABEL_49;
          v27 = *v26 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v27 )
          {
            if ( (*(_BYTE *)(*v26 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
              goto LABEL_49;
            v28 = *(_QWORD *)(v27 + 24);
            if ( v25 < v28 )
            {
LABEL_53:
              v27 = *(_QWORD *)(v27 + 8);
              goto LABEL_54;
            }
            while ( v28 < v25 )
            {
              v27 = *(_QWORD *)(v27 + 16);
LABEL_54:
              if ( (*(_BYTE *)v27 & 2) != 0 )
                goto LABEL_49;
              v28 = *(_QWORD *)(v27 + 24);
              if ( v25 < v28 )
                goto LABEL_53;
            }
            if ( v26 == (_QWORD *)v27 )
            {
LABEL_49:
              if ( v34 )
              {
                v35 = 0;
                qfree(v34);
              }
              qfree(v33[0]);
              goto LABEL_33;
            }
          }
        }
        if ( v34 )
        {
          v35 = 0;
          qfree(v34);
        }
        qfree(v33[0]);
        if ( v31 )
        {
          v32 = 0;
          qfree((__int64)v31);
        }
        qfree(v30[0]);
      }
      return v8;
    }
  }
  v29 = ***(_QWORD ***)(a1 + 40);
  if ( v29 )
    goto LABEL_22;
  return v8;
}

