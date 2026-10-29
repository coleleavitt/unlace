__int64 __fastcall select_all_ah_t__::vfunc_5(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  void *v5; // rbx
  void *ptr[5]; // [rsp+0h] [rbp-28h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !a4 )
    return 7;
  v4 = *(_QWORD *)(a4 + 64);
  if ( !v4 )
    return 7;
  v5 = *(void **)(v4 + 48);
  if ( !v5 )
    return 7;
  QT::QGraphicsScene::selectedItems((QT::QGraphicsScene *)ptr);
  if ( v5 == ptr[2] )
  {
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    return 7;
  }
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return 3;
}
