void __fastcall sub_3D2D40(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbp
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdi

  if ( a1[7] )
    qfree();
  v3 = (volatile signed __int32 *)a1[6];
  if ( v3 )
  {
    v4 = v3 + 2;
    if ( *((_QWORD *)v3 + 1) == 0x100000001LL )
    {
      v6 = *(_QWORD *)v3;
      v7 = a1[6];
      *((_QWORD *)v3 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v6 + 16))(v7, a2, v4);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd(v4, 0xFFFFFFFF);
      }
      else
      {
        v5 = *((_DWORD *)v3 + 2);
        *((_DWORD *)v3 + 2) = v5 - 1;
      }
      if ( v5 == 1 )
        sub_3D1510(v3);
    }
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
}

