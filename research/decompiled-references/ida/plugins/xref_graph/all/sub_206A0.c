char __fastcall sub_206A0(QT::QGraphicsScene *this, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  char *v12; // rsi
  QT::QGraphicsItem *v13; // r13
  _QWORD *v14; // rdx
  _QWORD *v15; // rdi
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // bl
  char *v21; // [rsp+8h] [rbp-30h] BYREF

  v21 = (char *)sub_1AB20(a2);
  v5 = sub_1AB20(a3);
  v6 = *((_QWORD *)this + 8);
  if ( !v6 )
    goto LABEL_9;
  v7 = (_QWORD *)(v6 + 16);
  v8 = *(_QWORD **)(v6 + 24);
  if ( !v8 )
    goto LABEL_9;
  v9 = v7;
  do
  {
    while ( 1 )
    {
      v10 = v8[2];
      v11 = v8[3];
      if ( v8[4] < (unsigned __int64)v21 )
        break;
      v9 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v10 )
        goto LABEL_7;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v11 );
LABEL_7:
  if ( v9 == v7 || (unsigned __int64)v21 < v9[4] )
  {
LABEL_9:
    v12 = v21;
    v13 = (QT::QGraphicsItem *)operator new(0x90u);
    sub_28DB0(v13);
    if ( *((_QWORD *)this + 12)
      && (v12 = (char *)this + 80,
          v19 = *((_BYTE *)this + 104),
          LOBYTE(v8) = QT::QString::indexOf((char *)v13 + 64, (char *)this + 80, 0, 1) != -1,
          v19 == (_BYTE)v8)
      || (LODWORD(v8) = *((_DWORD *)this + 27) & (1 << *((_DWORD *)v13 + 22)), !(_DWORD)v8) )
    {
      if ( v13 )
        LOBYTE(v8) = (*(__int64 (__fastcall **)(QT::QGraphicsItem *, char *))(*(_QWORD *)v13 + 8LL))(v13, v12);
    }
    else
    {
      v14 = *((_QWORD **)this + 8);
      if ( v14 )
      {
        v15 = v14 + 2;
        v14 = (_QWORD *)v14[3];
        if ( v14 )
        {
          v16 = v15;
          do
          {
            while ( 1 )
            {
              v17 = v14[2];
              v18 = v14[3];
              if ( v14[4] < v5 )
                break;
              v16 = v14;
              v14 = (_QWORD *)v14[2];
              if ( !v17 )
                goto LABEL_17;
            }
            v14 = (_QWORD *)v14[3];
          }
          while ( v18 );
LABEL_17:
          if ( v16 != v15 && v5 >= v16[4] )
            v14 = (_QWORD *)v16[5];
        }
      }
      sub_39080((char *)this + 128, v13, v14);
      *(_QWORD *)sub_20420((volatile signed __int32 **)this + 8, (unsigned __int64 *)&v21) = v13;
      LOBYTE(v8) = QT::QGraphicsScene::addItem(this, v13);
    }
  }
  return (char)v8;
}

