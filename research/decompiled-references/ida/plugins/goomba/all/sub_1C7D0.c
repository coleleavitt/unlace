__int64 __fastcall sub_1C7D0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rdx
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rdi

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; v4 != i; ++i )
      {
        v6 = *(volatile signed __int32 **)(v3 + 16 * i + 8);
        if ( !v6 )
          continue;
        v7 = v6 + 2;
        if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
        {
          v10 = *(_QWORD *)v6;
          v11 = *(_QWORD *)(v3 + 16 * i + 8);
          *((_QWORD *)v6 + 1) = 0;
          (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v10 + 16))(v11, a2, v7);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
          v3 = *a1;
          continue;
        }
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
            goto LABEL_11;
        }
        else
        {
          v8 = *((_DWORD *)v6 + 2);
          *((_DWORD *)v6 + 2) = v8 - 1;
          if ( v8 == 1 )
LABEL_11:
            sub_1C3E0(v6);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    return qfree(v3);
  }
  return result;
}

