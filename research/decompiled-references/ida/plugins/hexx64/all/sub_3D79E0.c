void __fastcall sub_3D79E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // r12
  volatile signed __int32 *v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rdi

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = *(_QWORD **)(v3 + 8 * i);
        if ( v6 )
        {
          v7 = v6[10];
          *v6 = 0;
          v6[11] = 0;
          if ( v7 )
            qfree(v7);
          v8 = (volatile signed __int32 *)v6[9];
          if ( v8 )
          {
            v9 = v8 + 2;
            if ( *((_QWORD *)v8 + 1) == 0x100000001LL )
            {
              *((_QWORD *)v8 + 1) = 0;
              (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(
                v8,
                a2,
                v9);
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 24LL))(v8);
            }
            else
            {
              if ( &_pthread_key_create )
              {
                v10 = _InterlockedExchangeAdd(v9, 0xFFFFFFFF);
              }
              else
              {
                v10 = *((_DWORD *)v8 + 2);
                *((_DWORD *)v8 + 2) = v10 - 1;
              }
              if ( v10 == 1 )
                sub_3D5690(v8);
            }
          }
          v11 = v6[2];
          if ( v11 )
          {
            v6[3] = 0;
            qfree(v11);
          }
          a2 = 96;
          operator delete(v6, 0x60u);
          v3 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v3);
  }
}

