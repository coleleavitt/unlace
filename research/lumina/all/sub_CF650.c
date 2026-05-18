__int64 __fastcall sub_CF650(__int64 *a1, _QWORD *a2, int a3, __int64 a4, _QWORD *a5, int a6)
{
  __int16 v6; // bx
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int8 *v11; // rdi
  _BYTE *i; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx

  v6 = *(_WORD *)(a4 + 2LL * a6);
  if ( a3 > 0 )
  {
    v7 = 8LL * a6;
    v8 = *a1;
    v9 = 0;
    v10 = (unsigned int)(a3 - 1) + 1LL;
    do
    {
      if ( v6 == *(_WORD *)(v8 + 2 * v9) )
      {
        v11 = *(unsigned __int8 **)(*a5 + v7);
        for ( i = *(_BYTE **)(*a2 + 8 * v9); ; ++i )
        {
          v13 = (unsigned __int8)*i;
          v14 = *v11;
          if ( (_DWORD)v13 == (_DWORD)v14 )
          {
            if ( !*i )
              return 1;
          }
          else if ( byte_1BF000[v13] != byte_1BF000[v14] )
          {
            break;
          }
          ++v11;
        }
      }
      ++v9;
    }
    while ( v9 != v10 );
  }
  return 0;
}
