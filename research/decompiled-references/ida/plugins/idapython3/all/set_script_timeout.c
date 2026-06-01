__int64 __fastcall set_script_timeout(int a1)
{
  unsigned int v1; // ebx
  time_t v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = qword_24618;
  LODWORD(qword_24618) = a1;
  v2 = time(nullptr);
  v3 = xmmword_24608;
  if ( (_QWORD)xmmword_24608 )
  {
    v4 = 0;
    do
      *(_QWORD *)(qword_24600 + 8 * v4++) = v2;
    while ( v3 != v4 );
  }
  if ( (_BYTE)qword_24620 )
  {
    idapython_hide_wait_box();
    LOBYTE(qword_24620) = 0;
  }
  return v1;
}

