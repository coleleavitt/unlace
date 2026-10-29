__int64 __fastcall sub_1D9B0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  __int64 i; // r12
  __int64 *v4; // r15
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rbp
  volatile signed __int32 *v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdi

  result = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = 0; v2 != i; ++i )
      {
        v4 = (__int64 *)(result + 24 * i);
        v5 = *v4;
        if ( *v4 )
        {
          v6 = v4[1];
          if ( v6 )
          {
            v7 = 0;
            while ( 2 )
            {
              v8 = *(volatile signed __int32 **)(v5 + 16 * v7 + 8);
              if ( !v8 )
                goto LABEL_9;
              v9 = v8 + 2;
              if ( *((_QWORD *)v8 + 1) == 0x100000001LL )
              {
                v11 = *(_QWORD *)v8;
                v12 = *(_QWORD *)(v5 + 16 * v7 + 8);
                *((_QWORD *)v8 + 1) = 0;
                (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v11 + 16))(v12, v2, v9);
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 24LL))(v8);
                v5 = *v4;
                goto LABEL_9;
              }
              if ( &_pthread_key_create )
              {
                if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
                  goto LABEL_14;
              }
              else
              {
                v10 = *((_DWORD *)v8 + 2);
                *((_DWORD *)v8 + 2) = v10 - 1;
                if ( v10 == 1 )
LABEL_14:
                  sub_1C3E0(v8);
              }
              v5 = *v4;
LABEL_9:
              if ( v6 == ++v7 )
                break;
              continue;
            }
          }
          v4[1] = 0;
          qfree(v5);
          result = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(result);
  }
  return result;
}

