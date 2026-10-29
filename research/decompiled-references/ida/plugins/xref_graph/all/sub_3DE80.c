unsigned __int64 __fastcall sub_3DE80(QT::QMetaObject *a1, int a2, const QT::QMetaObject *a3, __int64 a4, void **a5)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  int v10[2]; // [rsp+10h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+18h] [rbp-20h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 7 )
    {
      v7 = *(_QWORD **)a4;
      if ( (_DWORD)a3 || **(_DWORD **)(a4 + 8) )
        *v7 = 0;
      else
        *v7 = &unk_4FCA0;
    }
    else if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v6 == sub_3DE20
        && !*(_QWORD *)(v6 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
    }
  }
  else if ( !(_DWORD)a3 )
  {
    v8 = **(_QWORD **)(a4 + 8);
    *(_QWORD *)v10 = 0;
    v9 = v8;
    v11 = &v9;
    QT::QMetaObject::activate(a1, (QT::QObject *)&off_4EB40, a3, (int)v10, a5);
  }
  return v12 - __readfsqword(0x28u);
}

