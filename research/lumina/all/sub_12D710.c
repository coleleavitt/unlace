void __fastcall sub_12D710(__int64 *a1, __int64 a2, unsigned __int8 *a3, double a4)
{
  __int64 i; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE *v11; // rdi
  unsigned __int8 *j; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // edx

  for ( i = *(_QWORD *)(a2 + 16); i; i = *(_QWORD *)(i + 40) )
  {
    if ( a3 )
    {
      v8 = *(unsigned __int16 *)(i + 96);
      if ( (_WORD)v8 )
      {
        v9 = 0;
        v10 = (unsigned int)(v8 - 1) + 1LL;
        do
        {
          if ( *(__int16 *)(*(_QWORD *)(i + 8) + 2 * v9) >= 0 )
          {
            v11 = *(_BYTE **)(*(_QWORD *)(i + 64) + 8 * v9);
            for ( j = a3; ; ++j )
            {
              v13 = (unsigned __int8)*v11;
              v14 = *j;
              if ( (_DWORD)v13 == (_DWORD)v14 )
              {
                if ( !*v11 )
                  goto LABEL_11;
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
    }
    else
    {
LABEL_11:
      v15 = *(_QWORD *)(a2 + 96);
      v16 = -32768;
      if ( v15 )
        v16 = sub_CFB20(*a1, v15);
      sub_11C930((__int64)a1, 0, v16);
      sub_12D190((__int64)a1, i, -1, a4);
    }
  }
}
