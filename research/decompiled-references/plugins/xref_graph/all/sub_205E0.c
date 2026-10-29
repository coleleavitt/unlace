_QWORD *__fastcall sub_205E0(QT::QGraphicsScene *this, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v5; // rsi
  _QWORD *result; // rax
  unsigned __int64 v7; // rdi
  _QWORD *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 *v11; // r12

  v3 = *((_QWORD *)this + 8);
  if ( !v3 )
    goto LABEL_9;
  v5 = (_QWORD *)(v3 + 16);
  result = *(_QWORD **)(v3 + 24);
  if ( !result )
    goto LABEL_9;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = v5;
  do
  {
    while ( 1 )
    {
      v9 = result[2];
      v10 = result[3];
      if ( result[4] >= v7 )
        break;
      result = (_QWORD *)result[3];
      if ( !v10 )
        goto LABEL_7;
    }
    v8 = result;
    result = (_QWORD *)result[2];
  }
  while ( v9 );
LABEL_7:
  if ( v5 == v8 || v7 < v8[4] )
  {
LABEL_9:
    v11 = (unsigned __int64 *)operator new(0x90u);
    sub_28F10(v11, a2);
    *(_QWORD *)sub_20420((volatile signed __int32 **)this + 8, v11 + 2) = v11;
    return (_QWORD *)QT::QGraphicsScene::addItem(this, (QT::QGraphicsItem *)v11);
  }
  return result;
}
