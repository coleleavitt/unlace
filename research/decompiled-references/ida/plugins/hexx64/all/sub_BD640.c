__int64 __fastcall sub_BD640(_QWORD **a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18[2]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 *v19; // [rsp+20h] [rbp-88h] BYREF
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22[11]; // [rsp+50h] [rbp-58h] BYREF

  v22[3] = __readfsqword(0x28u);
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
    sub_124680((__int64)v18, a2, v4, 1u);
    if ( (unsigned __int8)sub_64780(v18, a3) || (unsigned __int8)sub_318470(&v19, (__int64)(a3 + 2)) )
      break;
    sub_127A20((__int64)v21, a2, v4, 1, v12, v13);
    sub_64640(a3, v21, v14, v15, v16, v17);
    sub_317C60(a3 + 2, (__int64)v22);
    if ( v22[0] )
    {
      v22[1] = 0;
      qfree(v22[0]);
    }
    qfree(v21[0]);
    if ( v19 )
    {
      v20 = 0;
      qfree((__int64)v19);
    }
    qfree(v18[0]);
    v4 = *(_QWORD *)(v4 + 8);
    if ( !v4 )
      return 0;
  }
  if ( v19 )
  {
    v20 = 0;
    qfree((__int64)v19);
  }
  qfree(v18[0]);
  return 1;
}

