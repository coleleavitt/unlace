__int64 __fastcall sub_345D0(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int *v3; // rax
  const QT::QObject **v4; // rdx
  const QT::QObject **v5; // rbx
  const QT::QObject **v6; // rbp
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  const QT::QObject **v10; // [rsp+18h] [rbp-40h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  QT::QGraphicsScene::views((QT::QGraphicsScene *)&ptr);
  v3 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    sub_21AD0((__int64)&ptr, 0, 0, 0, v1, v2);
    v3 = (int *)ptr;
  }
  v4 = v10;
  v5 = v10;
  if ( !v3 || *v3 > 1 )
  {
    sub_21AD0((__int64)&ptr, 0, 0, 0, v1, v2);
    v4 = v10;
  }
  v6 = &v4[v11];
  if ( v5 == v6 )
  {
LABEL_16:
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      free(ptr);
      return 0;
    }
    return 0;
  }
  while ( 1 )
  {
    result = QT::QMetaObject::cast((QT::QMetaObject *)&off_4D1E0, *v5);
    if ( result )
      break;
    if ( v6 == ++v5 )
      goto LABEL_16;
  }
  if ( ptr )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      v8 = result;
      free(ptr);
      return v8;
    }
  }
  return result;
}

