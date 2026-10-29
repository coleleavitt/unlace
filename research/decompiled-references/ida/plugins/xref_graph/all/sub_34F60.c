__int64 __fastcall sub_34F60(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int *v3; // rax
  QT::QGraphicsItem **v4; // rdx
  QT::QGraphicsItem **v5; // rbx
  QT::QGraphicsItem **i; // r13
  QT::QGraphicsItem *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  QT::QGraphicsItem *v15; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  QT::QGraphicsItem **v17; // [rsp+10h] [rbp-50h]
  __int64 v18; // [rsp+18h] [rbp-48h]
  unsigned __int64 v19; // [rsp+20h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  QT::QGraphicsScene::selectedItems((QT::QGraphicsScene *)&ptr);
  v3 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    sub_34720((__int64)&ptr, 0, 0, 0, v1, v2);
    v3 = (int *)ptr;
  }
  v4 = v17;
  v5 = v17;
  if ( !v3 || *v3 > 1 )
  {
    sub_34720((__int64)&ptr, 0, 0, 0, v1, v2);
    v4 = v17;
  }
  for ( i = &v4[v18]; i != v5; ++v5 )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( (*(unsigned int (__fastcall **)(QT::QGraphicsItem *))(*(_QWORD *)v7 + 88LL))(*v5) == 65537 )
        {
          if ( (unsigned __int8)QT::QGraphicsItem::isVisible(v7) )
          {
            v11 = *(int **)(a1 + 16);
            v15 = v7;
            sub_34C70((int **)a1, v11, (__int64 *)&v15, v8, v9, v10);
            if ( !*(_QWORD *)a1 || **(int **)a1 > 1 )
              break;
          }
        }
      }
      if ( i == ++v5 )
        goto LABEL_16;
    }
    sub_22070(a1, 0, 0, 0, v12, v13);
  }
LABEL_16:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return a1;
}

