__int64 (__fastcall **__fastcall sub_376F0(_QWORD *a1, __int64 a2))()
{
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v16; // rax
  __int64 v17; // rdi

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
      v16 = *(_QWORD *)v4;
      v17 = a1[11];
      *((_QWORD *)v4 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v16 + 16))(v17, a2, v5);
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
  result = &off_4DB00;
  *a1 = &off_4DB00;
  if ( v7 )
  {
    a1[8] = 0;
    result = (__int64 (__fastcall **)())qfree(v7);
  }
  v9 = a1[4];
  if ( v9 )
  {
    a1[5] = 0;
    result = (__int64 (__fastcall **)())qfree(v9);
  }
  v10 = a1[1];
  if ( v10 )
  {
    v11 = a1[2];
    if ( v11 )
    {
      v12 = 0;
      do
      {
        v13 = v12++;
        v14 = v10 + 16 * v13;
        hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(v10, a2);
        a2 = v14;
        hexdsp(276, v14);
        v10 = a1[1];
      }
      while ( v11 != v12 );
    }
    a1[2] = 0;
    return (__int64 (__fastcall **)())qfree(v10);
  }
  return result;
}

