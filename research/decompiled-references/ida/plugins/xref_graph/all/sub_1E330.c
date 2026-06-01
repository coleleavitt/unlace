unsigned __int64 __fastcall sub_1E330(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v7; // r14
  __int64 v8; // rax
  QT::QGraphicsScene *v9; // rbx
  const char **v10; // rbx
  const char **v11; // rbp
  __int64 v12; // r13
  const char *v13; // rdi
  __int64 v14; // rdi
  __int64 *v16; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v17[9]; // [rsp+10h] [rbp-48h] BYREF

  v17[1] = __readfsqword(0x28u);
  v7 = a2;
  v8 = sub_1BDA0((_QWORD *)a1, (__int64)a2, a3, a4, a5, a6);
  if ( v8 )
  {
    v17[0] = v8;
    v9 = (QT::QGraphicsScene *)v8;
    a2 = (const char *)&v16;
    v16 = v17;
    sub_1C1A0((int **)(a1 + 1736), &v16);
    sub_27D20(v9);
  }
  else
  {
    v9 = sub_1DD00(a1, (__int64)a2, 0);
    sub_27D20(v9);
    if ( !v9 )
      goto LABEL_4;
  }
  (*(void (__fastcall **)(QT::QGraphicsScene *))(*(_QWORD *)v9 + 32LL))(v9);
LABEL_4:
  v10 = *(const char ***)(a1 + 1760);
  v11 = &v10[3 * *(_QWORD *)(a1 + 1768)];
  if ( v10 == v11 )
    return sub_1A840(a1);
  v12 = *((_QWORD *)v7 + 1);
  while ( 1 )
  {
    if ( v10[1] )
    {
      a2 = *v10;
      v13 = s1;
      if ( !v12 )
        goto LABEL_7;
      goto LABEL_12;
    }
    if ( !v12 )
      break;
    a2 = s1;
LABEL_12:
    v13 = *(const char **)v7;
LABEL_7:
    if ( !strcmp(v13, a2) )
      break;
    v10 += 3;
    if ( v11 == v10 )
      return sub_1A840(a1);
  }
  if ( v10 != v11 )
  {
    v14 = (__int64)*v10;
    if ( *v10 )
    {
      v10[1] = nullptr;
      qfree(v14, a2);
    }
    memmove(v10, v10 + 3, *(_QWORD *)(a1 + 1760) + 24LL * *(_QWORD *)(a1 + 1768) - (_QWORD)v10 - 24);
    --*(_QWORD *)(a1 + 1768);
  }
  return sub_1A840(a1);
}

