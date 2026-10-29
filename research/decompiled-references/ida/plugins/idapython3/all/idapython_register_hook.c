__int64 __fastcall idapython_register_hook(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // rdx
  __int64 result; // rax
  char *v11; // rsi

  v7 = xmmword_24658;
  v8 = (char *)qword_24650;
  v9 = xmmword_24658 + 1;
  if ( *((_QWORD *)&xmmword_24658 + 1) < (unsigned __int64)(xmmword_24658 + 1) )
  {
    qword_24650 = (void *)qvector_reserve();
    v8 = (char *)qword_24650;
    v7 = xmmword_24658;
    v9 = xmmword_24658 + 1;
  }
  result = 32 * v7;
  *(_QWORD *)&xmmword_24658 = v9;
  v11 = &v8[result];
  *(_DWORD *)v11 = a1;
  *((_QWORD *)v11 + 1) = a2;
  *((_QWORD *)v11 + 2) = a3;
  v11[24] = a4;
  return result;
}

