void __fastcall sub_37850(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v15; // rax
  __int64 v16; // rdi

  *a1 = &off_4DB40;
  v3 = a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    qfree(v3);
  }
  v4 = (volatile signed __int32 *)a1[11];
  if ( v4 )
  {
    v5 = v4 + 2;
    if ( *((_QWORD *)v4 + 1) == 0x100000001LL )
    {
      v15 = *(_QWORD *)v4;
      v16 = a1[11];
      *((_QWORD *)v4 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v15 + 16))(v16, a2, v5);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v6 = _InterlockedExchangeAdd(v5, 0xFFFFFFFF);
      }
      else
      {
        v6 = *((_DWORD *)v4 + 2);
        *((_DWORD *)v4 + 2) = v6 - 1;
      }
      if ( v6 == 1 )
        sub_1C3E0(v4);
    }
  }
  v7 = a1[7];
  *a1 = &off_4DB00;
  if ( v7 )
  {
    a1[8] = 0;
    qfree(v7);
  }
  v8 = a1[4];
  if ( v8 )
  {
    a1[5] = 0;
    qfree(v8);
  }
  v9 = a1[1];
  if ( v9 )
  {
    v10 = a1[2];
    if ( v10 )
    {
      v11 = 0;
      do
      {
        v12 = v11++;
        v13 = v9 + 16 * v12;
        hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(v9, a2);
        a2 = v13;
        hexdsp(276, v13);
        v9 = a1[1];
      }
      while ( v10 != v11 );
    }
    a1[2] = 0;
    qfree(v9);
  }
  operator delete(a1, 0x78u);
}
