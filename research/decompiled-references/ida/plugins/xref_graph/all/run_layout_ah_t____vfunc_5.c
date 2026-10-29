__int64 __fastcall run_layout_ah_t__::vfunc_5(__int64 a1, __int64 a2, __int64 a3)
{
  QT::QAbstractButton *v4; // rdi
  __int64 v5; // r9
  char isChecked; // [rsp+17h] [rbp-11h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( *(_BYTE *)(a3 + 104) )
    {
      v4 = *(QT::QAbstractButton **)(a3 + 40);
      if ( v4 )
      {
        isChecked = QT::QAbstractButton::isChecked(v4);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          140,
          a2,
          7,
          &isChecked,
          &callui,
          v5);
      }
    }
  }
  return 3;
}

