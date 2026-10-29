void __fastcall sub_D01E0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12

  if ( a2 )
  {
    v6 = 24LL * a3 - 24;
    v7 = a2 + v6;
    v8 = a2 + v6 - 24 * ((0xAAAAAAAAAAAAAABLL * (v6 >> 3)) & 0x1FFFFFFFFFFFFFFFLL);
    while ( 1 )
    {
      if ( *(char *)(v7 + 1) >= -5 )
      {
        if ( v7 == v8 )
          goto LABEL_7;
      }
      else
      {
        sub_D0130(a1, (unsigned int)*(char *)(v7 + 1), *(_QWORD *)(v7 + 16), a4, a5, a6);
        if ( v7 == v8 )
        {
LABEL_7:
          sub_C9250(a1, (_QWORD *)v7);
          return;
        }
      }
      v7 -= 24;
    }
  }
}
