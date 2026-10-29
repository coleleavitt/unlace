__int64 __fastcall xref_graph_slotpoline_t__::vfunc_2(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  __int64 result; // rax
  _QWORD *v6; // rdx

  result = QT::QObject::qt_metacall();
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( !(_DWORD)result )
      {
        sub_1C440(a1, *a4[1]);
        LODWORD(result) = 0;
      }
      return (unsigned int)(result - 1);
    }
    if ( a2 == 7 )
    {
      if ( !(_DWORD)result )
      {
        v6 = *a4;
        if ( *(_DWORD *)a4[1] )
          *v6 = 0;
        else
          *v6 = &unk_4FCA0;
      }
      return (unsigned int)(result - 1);
    }
  }
  return result;
}

