void __fastcall idapython_unregister_hook(int a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx

  if ( (_QWORD)xmmword_24658 )
  {
    v3 = qword_24650;
    v4 = 0;
    while ( *(_DWORD *)v3 != a1 || v3[1] != a2 || v3[2] != a3 )
    {
      ++v4;
      v3 += 4;
      if ( (_QWORD)xmmword_24658 == v4 )
        return;
    }
    memmove(v3, v3 + 4, 32 * (xmmword_24658 - v4) - 32);
    *(_QWORD *)&xmmword_24658 = xmmword_24658 - 1;
  }
}

