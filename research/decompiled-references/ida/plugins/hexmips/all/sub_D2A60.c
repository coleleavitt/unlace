void __fastcall sub_D2A60(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // ebp
  __int64 v5; // r14
  _DWORD *v6; // rax
  int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rax

  if ( *(_QWORD *)(a1 + 464) )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = (_DWORD *)sub_139080(a1, v3);
      if ( (unsigned int)(*v6 - 3) > 1 )
        goto LABEL_4;
      if ( a2 == v4 )
      {
        v7 = v6[6];
        BYTE1(v7) &= 0x7Eu;
        v6[6] = v7 | 0x100000;
        v8 = *(_QWORD *)(a1 + 456) + 4 * v5;
        v9 = *(_QWORD *)(a1 + 464) - v5;
        v5 = (int)v3;
        memmove((void *)v8, (const void *)(v8 + 4), 4 * v9 - 4);
        v10 = *(_QWORD *)(a1 + 464) - 1LL;
        *(_QWORD *)(a1 + 464) = v10;
        if ( (int)v3 >= v10 )
          goto LABEL_8;
      }
      else
      {
        ++v4;
LABEL_4:
        v5 = (int)++v3;
        if ( (unsigned __int64)(int)v3 >= *(_QWORD *)(a1 + 464) )
          goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  if ( a2 != v4 )
  {
    if ( !under_debugger )
      sub_37E160(50074);
    BUG();
  }
}

