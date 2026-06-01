void __fastcall sub_D6C60(_QWORD *a1, int a2, double a3)
{
  int v4; // ebx
  int v5; // ebp
  __int64 v6; // r14
  _DWORD *v7; // rax
  int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rax

  if ( a1[58] )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = (_DWORD *)sub_13D280(a1, v4);
      if ( (unsigned int)(*v7 - 3) > 1 )
        goto LABEL_4;
      if ( a2 == v5 )
      {
        v8 = v7[6];
        BYTE1(v8) &= 0x7Eu;
        v7[6] = v8 | 0x100000;
        v9 = a1[57] + 4 * v6;
        v10 = a1[58] - v6;
        v6 = v4;
        memmove((void *)v9, (const void *)(v9 + 4), 4 * v10 - 4);
        v11 = a1[58] - 1LL;
        a1[58] = v11;
        if ( v4 >= v11 )
          goto LABEL_8;
      }
      else
      {
        ++v5;
LABEL_4:
        v6 = ++v4;
        if ( (unsigned __int64)v4 >= a1[58] )
          goto LABEL_8;
      }
    }
  }
  v5 = 0;
LABEL_8:
  if ( a2 != v5 )
  {
    if ( !under_debugger )
      sub_383060(0xC39Au, a3);
    BUG();
  }
}

