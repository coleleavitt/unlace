__int64 (__fastcall **__fastcall sub_1C5F0(_QWORD *a1, __int64 a2))(int, int, int, int, int, int, __int64)
{
  __int64 (__fastcall **result)(int, int, int, int, int, int, __int64); // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbx
  volatile signed __int32 *v7; // rbp
  volatile signed __int32 *v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi

  result = &off_4D9B0;
  *a1 = &off_4D9B0;
  v4 = a1[2];
  if ( v4 )
  {
    v5 = a1[3];
    if ( v5 )
    {
      for ( i = 0; v5 != i; ++i )
      {
        v7 = *(volatile signed __int32 **)(v4 + 16 * i + 8);
        if ( !v7 )
          continue;
        v8 = v7 + 2;
        if ( *((_QWORD *)v7 + 1) == 0x100000001LL )
        {
          v10 = *(_QWORD *)v7;
          v11 = *(_QWORD *)(v4 + 16 * i + 8);
          *((_QWORD *)v7 + 1) = 0;
          (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v10 + 16))(v11, a2, v8);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
          v4 = a1[2];
          continue;
        }
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
            goto LABEL_11;
        }
        else
        {
          v9 = *((_DWORD *)v7 + 2);
          *((_DWORD *)v7 + 2) = v9 - 1;
          if ( v9 == 1 )
LABEL_11:
            sub_1C3E0(v7);
        }
        v4 = a1[2];
      }
    }
    a1[3] = 0;
    return (__int64 (__fastcall **)(int, int, int, int, int, int, __int64))qfree(v4);
  }
  return result;
}
