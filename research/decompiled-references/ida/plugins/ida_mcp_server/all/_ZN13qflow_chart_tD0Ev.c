void __fastcall qflow_chart_t::~qflow_chart_t(qflow_chart_t *this)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx

  *(_QWORD *)this = off_445398;
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        while ( 1 )
        {
          v5 = (_QWORD *)(v2 + (i << 6));
          if ( v5[5] )
          {
            v5[6] = 0;
            qfree();
          }
          if ( !v5[2] )
            break;
          v5[3] = 0;
          ++i;
          qfree();
          v2 = *((_QWORD *)this + 9);
          if ( v3 == i )
            goto LABEL_8;
        }
        v2 = *((_QWORD *)this + 9);
      }
    }
LABEL_8:
    *((_QWORD *)this + 10) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 2) )
  {
    *((_QWORD *)this + 3) = 0;
    qfree();
  }
  qfree();
}

