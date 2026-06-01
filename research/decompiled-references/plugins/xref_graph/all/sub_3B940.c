void __fastcall sub_3B940(int a1, __int64 *a2)
{
  __int64 v3; // rsi
  const void *v4; // rdi
  QT::QListWidget *v5; // rbx
  const void *v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( a1 != 1 )
      return;
    v3 = a2[2];
    sub_3B5B0((__int64)&v6, v3);
    if ( v7 > 1 )
    {
      v3 = (__int64)&v6;
      sub_1E960(*(_QWORD **)(a2[2] + 48), &v6);
    }
    sub_3AD00(a2[2]);
    if ( (int)QT::QListWidget::count(*(QT::QListWidget **)(a2[2] + 40)) > 0 )
    {
      v5 = *(QT::QListWidget **)(a2[2] + 40);
      v3 = (unsigned int)QT::QListWidget::count(v5) - 1;
      QT::QListWidget::setCurrentRow(v5, v3);
      v4 = v6;
      if ( !v6 )
        return;
LABEL_8:
      v7 = 0;
      qfree(v4, (const char *)v3);
      return;
    }
    v4 = v6;
    if ( v6 )
      goto LABEL_8;
  }
  else if ( a2 )
  {
    operator delete(a2, 0x18u);
  }
}
