__int64 __fastcall sub_18710(__int64 a1, __int64 a2, const char *a3, char a4)
{
  const char *v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rax
  const char *v11; // rsi

  if ( !a4 )
    getinf_flag();
  v6 = s;
  if ( (_QWORD)xmmword_3C438 )
    v6 = (const char *)qword_3C430;
  LOBYTE(v7) = sub_D630(v6);
  v8 = v7;
  if ( (_BYTE)v7 )
  {
    v10 = launch_process();
    if ( v10 )
    {
      *(_QWORD *)(a1 + 40) = v10;
      return v8;
    }
    v11 = s;
    if ( (_QWORD)xmmword_3C438 )
      v11 = (const char *)qword_3C430;
    sub_BCD0((__int64)"Failed to launch PIN: %s %s\nError: %s", v11, a3, s);
  }
  return 0;
}

