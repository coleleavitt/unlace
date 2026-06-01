void __fastcall sub_1C6E0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdi

  *a1 = &off_4D9B0;
  v3 = a1[2];
  if ( v3 )
  {
    v4 = a1[3];
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
          v9 = *(_QWORD *)v6;
          v10 = *(_QWORD *)(v3 + 16 * i + 8);
          *((_QWORD *)v6 + 1) = 0;
          (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v9 + 16))(v10, a2, v7);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
          v3 = a1[2];
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
        v3 = a1[2];
      }
    }
    a1[3] = 0;
    qfree(v3);
  }
  operator delete(a1, 0x28u);
}
