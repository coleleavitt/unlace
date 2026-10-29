unsigned __int64 __fastcall sub_3AD00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  QT::QListWidget *v3; // r12
  const char *v4; // r15
  __int64 v5; // rbp
  size_t v6; // rax
  unsigned int v7; // eax
  __int64 i; // [rsp+8h] [rbp-60h]
  void *ptr[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  QT::QListWidget::clear(*(QT::QListWidget **)(a1 + 40));
  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(v1 + 1760);
  for ( i = v2 + 24LL * *(_QWORD *)(v1 + 1768); i != v2; v2 += 24 )
  {
    v3 = *(QT::QListWidget **)(a1 + 40);
    v4 = s1;
    v5 = operator new(0x28u);
    v6 = 0;
    if ( *(_QWORD *)(v2 + 8) )
    {
      v4 = *(const char **)v2;
      if ( *(_QWORD *)v2 )
      {
        if ( *v4 )
          v6 = strlen(v4 + 1) + 1;
      }
    }
    QT::QString::fromUtf8(ptr, v6, v4);
    QT::QListWidgetItem::QListWidgetItem(v5, ptr, 0, 0);
    v7 = QT::QListWidget::count(v3);
    QT::QListWidget::insertItem(v3, v7, v5);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return v11 - __readfsqword(0x28u);
}

