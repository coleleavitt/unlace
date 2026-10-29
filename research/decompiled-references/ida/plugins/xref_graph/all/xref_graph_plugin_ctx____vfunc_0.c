__int64 __fastcall xref_graph_plugin_ctx__::vfunc_0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  volatile signed __int32 **v7; // rax
  _QWORD v8[11]; // [rsp+0h] [rbp-58h] BYREF

  v8[7] = __readfsqword(0x28u);
  if ( a1[221] )
  {
    sub_3AE40((QT::QWidget *)v8);
    QT::QDialog::exec((QT::QDialog *)v8);
    v8[0] = &off_4C570;
    v8[2] = graph_chooser_t___vtable_at__16;
    QT::QDialog::~QDialog((QT::QDialog *)v8);
  }
  else
  {
    v7 = sub_1E4C0(a1, 511, 0, a4, a5, a6);
    if ( v7 )
      sub_1FAE0(v7);
  }
  return 1;
}

