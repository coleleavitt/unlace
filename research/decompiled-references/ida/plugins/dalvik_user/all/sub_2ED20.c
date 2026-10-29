__int64 __fastcall sub_2ED20(_QWORD *a1)
{
  unsigned __int64 *func; // rax
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // r13
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  unsigned __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 *v18; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 *v19; // [rsp+10h] [rbp-48h] BYREF
  __int128 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  func = (unsigned __int64 *)get_func();
  if ( !func )
    return 0;
  v2 = *func;
  v3 = (_QWORD *)a1[31];
  v4 = a1 + 30;
  v17 = v2;
  if ( v3 )
  {
    v5 = a1 + 30;
    do
    {
      while ( 1 )
      {
        v6 = v3[2];
        v7 = v3[3];
        if ( v3[4] < v2 )
          break;
        v5 = v3;
        v3 = (_QWORD *)v3[2];
        if ( !v6 )
          goto LABEL_7;
      }
      v3 = (_QWORD *)v3[3];
    }
    while ( v7 );
LABEL_7:
    if ( v4 != v5 && v2 >= v5[4] )
    {
LABEL_22:
      v12 = *((int *)v5 + 10);
      if ( (_DWORD)v12 != -1 )
        return a1[20] + 392 * v12;
      return 0;
    }
  }
  v20 = 0;
  v19 = nullptr;
  if ( !(unsigned __int8)sub_1C3C0((__int64)a1, (__int64)&v19, v2) )
  {
    v16 = (_QWORD *)a1[31];
    if ( v16 )
    {
      v15 = a1 + 30;
      do
      {
        if ( v16[4] >= v17 )
        {
          v15 = v16;
          v16 = (_QWORD *)v16[2];
        }
        else
        {
          v16 = (_QWORD *)v16[3];
        }
      }
      while ( v16 );
      if ( v4 != v15 && v17 >= v15[4] )
        goto LABEL_32;
    }
    else
    {
      v15 = a1 + 30;
    }
    v18 = &v17;
    v15 = sub_16E80(a1 + 29, v15, &v18);
LABEL_32:
    *((_DWORD *)v15 + 10) = -1;
    goto LABEL_33;
  }
  v8 = sub_23D40((__int64)(a1 + 8), (__int64)&v19);
  if ( v8 != a1 + 9 && (unsigned __int8)sub_2B140(a1, *(_QWORD *)(a1[5] + 72LL * *((int *)v8 + 14) + 8)) )
  {
    v9 = (_QWORD *)a1[31];
    v10 = v17;
    if ( v9 )
    {
      v5 = a1 + 30;
      v11 = (_QWORD *)a1[31];
      do
      {
        if ( v11[4] >= v17 )
        {
          v5 = v11;
          v11 = (_QWORD *)v11[2];
        }
        else
        {
          v11 = (_QWORD *)v11[3];
        }
      }
      while ( v11 );
      if ( v5 != v4 && v17 >= v5[4] )
      {
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree();
        }
        goto LABEL_22;
      }
      if ( !v19 )
      {
LABEL_37:
        v14 = a1 + 30;
        do
        {
          if ( v9[4] >= v10 )
          {
            v14 = v9;
            v9 = (_QWORD *)v9[2];
          }
          else
          {
            v9 = (_QWORD *)v9[3];
          }
        }
        while ( v9 );
        if ( v14 != v4 )
        {
          if ( v10 >= v14[4] )
          {
LABEL_27:
            *((_DWORD *)v14 + 10) = -1;
            return 0;
          }
LABEL_26:
          v19 = &v17;
          v14 = sub_16E80(a1 + 29, v14, &v19);
          goto LABEL_27;
        }
LABEL_49:
        v14 = a1 + 30;
        goto LABEL_26;
      }
    }
    else if ( !v19 )
    {
      goto LABEL_49;
    }
    *(_QWORD *)&v20 = 0;
    qfree();
    v9 = (_QWORD *)a1[31];
    v10 = v17;
    if ( !v9 )
      goto LABEL_49;
    goto LABEL_37;
  }
LABEL_33:
  if ( !v19 )
    return 0;
  *(_QWORD *)&v20 = 0;
  qfree();
  return 0;
}

