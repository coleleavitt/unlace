__int64 __fastcall sub_B8A80(_QWORD **a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  _QWORD v16[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v17; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v20[11]; // [rsp+50h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 48);
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( a4 != v4 )
      {
        v8 = *a1;
        if ( !*a1 )
          break;
        v9 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v9 )
        {
          if ( (*(_BYTE *)(*v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            break;
          v11 = *(_QWORD *)(v9 + 24);
          if ( v4 < v11 )
          {
LABEL_11:
            v9 = *(_QWORD *)(v9 + 8);
            goto LABEL_12;
          }
          while ( v11 < v4 )
          {
            v9 = *(_QWORD *)(v9 + 16);
LABEL_12:
            if ( (*(_BYTE *)v9 & 2) != 0 )
              goto LABEL_6;
            v11 = *(_QWORD *)(v9 + 24);
            if ( v4 < v11 )
              goto LABEL_11;
          }
          if ( v8 == (_QWORD *)v9 )
            break;
        }
      }
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        return 0;
    }
LABEL_6:
    sub_11FAC0(v16, a2, v4, 1);
    if ( (unsigned __int8)sub_5FD00(v16, a3) || (unsigned __int8)sub_312BB0(&v17, a3 + 2) )
      break;
    sub_122E60(v19, a2, v4, 1);
    sub_5FBC0(a3, v19, v12, v13, v14, v15);
    sub_3123A0(a3 + 2, v20);
    if ( v20[0] )
    {
      v20[1] = 0;
      qfree();
    }
    qfree();
    if ( v17 )
    {
      v18 = 0;
      qfree();
    }
    qfree();
    v4 = *(_QWORD *)(v4 + 8);
    if ( !v4 )
      return 0;
  }
  if ( v17 )
  {
    v18 = 0;
    qfree();
  }
  qfree();
  return 1;
}

