__int64 __fastcall sub_3D63C0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 j; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 k; // r14
  volatile signed __int32 *v13; // rdi
  signed __int32 v14; // edx
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  void (__fastcall *v17)(_QWORD *); // rdx
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 i; // r12
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  volatile signed __int32 *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // r14
  volatile signed __int32 *v27; // rdi
  signed __int32 v28; // edx
  __int64 v29; // rdi
  _QWORD *v30; // rbx
  void (__fastcall *v31)(_QWORD *); // rdx

  if ( !*(_BYTE *)(a1 + 2112) )
  {
    v18 = *(_QWORD *)(a1 + 2088);
    if ( v18 )
    {
      v19 = *(_QWORD *)(a1 + 2096);
      if ( v19 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = *(_QWORD **)(v18 + 8 * i);
          if ( v21 )
          {
            v22 = v21[10];
            *v21 = 0;
            v21[11] = 0;
            if ( v22 )
              qfree();
            v23 = (volatile signed __int32 *)v21[9];
            if ( v23 )
              sub_3D5C20(v23);
            if ( v21[2] )
            {
              v21[3] = 0;
              qfree();
            }
            operator delete(v21, 0x60u);
            v18 = *(_QWORD *)(a1 + 2088);
          }
        }
      }
      *(_QWORD *)(a1 + 2096) = 0;
      qfree();
    }
    *(_QWORD *)(a1 + 2064) = &off_4E81E8;
    remove_event_listener();
    *(_QWORD *)(a1 + 2040) = &off_4E81E8;
    result = remove_event_listener();
    v24 = *(_QWORD *)(a1 + 2016);
    if ( !v24 )
      return result;
    v25 = *(_QWORD *)(a1 + 2024);
    if ( !v25 )
    {
LABEL_65:
      *(_QWORD *)(a1 + 2024) = 0;
      return qfree();
    }
    v26 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = *(_QWORD **)(v24 + 8 * v26);
        if ( v30 )
          break;
LABEL_61:
        if ( v25 == ++v26 )
          goto LABEL_65;
      }
      v31 = *(void (__fastcall **)(_QWORD *))(*v30 + 8LL);
      if ( v31 == sub_3D0190 )
      {
        v27 = (volatile signed __int32 *)v30[12];
        *v30 = &off_4E3518;
        if ( v27 )
        {
          if ( &_pthread_key_create )
          {
            v28 = _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF);
          }
          else
          {
            v28 = *((_DWORD *)v27 + 3);
            *((_DWORD *)v27 + 3) = v28 - 1;
          }
          if ( v28 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 24LL))(v27);
        }
        if ( v30[8] )
        {
          v30[9] = 0;
          qfree();
        }
        v29 = v30[2];
        *v30 = &off_4E34D8;
        if ( v29 )
        {
          v30[3] = 0;
          qfree();
        }
        operator delete(v30, 0x68u);
        v24 = *(_QWORD *)(a1 + 2016);
        goto LABEL_61;
      }
      ++v26;
      v31(v30);
      v24 = *(_QWORD *)(a1 + 2016);
      if ( v25 == v26 )
        goto LABEL_65;
    }
  }
  sub_33E4A0(*(_QWORD *)a1, (__int64)sub_3D9160, a1);
  unhook_event_listener();
  v2 = a1 + 2040;
  unhook_event_listener();
  v3 = *(_QWORD *)(a1 + 2088);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 2096);
    if ( v4 )
    {
      for ( j = 0; j != v4; ++j )
      {
        v6 = *(_QWORD **)(v3 + 8 * j);
        if ( v6 )
        {
          v7 = v6[10];
          *v6 = 0;
          v6[11] = 0;
          if ( v7 )
            qfree();
          v8 = (volatile signed __int32 *)v6[9];
          if ( v8 )
            sub_3D5C20(v8);
          if ( v6[2] )
          {
            v6[3] = 0;
            qfree();
          }
          v2 = 96;
          operator delete(v6, 0x60u);
          v3 = *(_QWORD *)(a1 + 2088);
        }
      }
    }
    *(_QWORD *)(a1 + 2096) = 0;
    qfree();
  }
  *(_QWORD *)(a1 + 2064) = &off_4E81E8;
  remove_event_listener();
  *(_QWORD *)(a1 + 2040) = &off_4E81E8;
  result = remove_event_listener();
  v10 = *(_QWORD *)(a1 + 2016);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 2024);
    if ( v11 )
    {
      for ( k = 0; k != v11; ++k )
      {
        while ( 1 )
        {
          v16 = *(_QWORD **)(v10 + 8 * k);
          if ( v16 )
            break;
LABEL_28:
          if ( v11 == ++k )
            goto LABEL_32;
        }
        v17 = *(void (__fastcall **)(_QWORD *))(*v16 + 8LL);
        if ( v17 == sub_3D0190 )
        {
          v13 = (volatile signed __int32 *)v16[12];
          *v16 = &off_4E3518;
          if ( v13 )
          {
            if ( &_pthread_key_create )
            {
              v14 = _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF);
            }
            else
            {
              v14 = *((_DWORD *)v13 + 3);
              *((_DWORD *)v13 + 3) = v14 - 1;
            }
            if ( v14 == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
          }
          if ( v16[8] )
          {
            v16[9] = 0;
            qfree();
          }
          v15 = v16[2];
          *v16 = &off_4E34D8;
          if ( v15 )
          {
            v16[3] = 0;
            qfree();
          }
          v2 = 104;
          operator delete(v16, 0x68u);
          v10 = *(_QWORD *)(a1 + 2016);
          goto LABEL_28;
        }
        ((void (__fastcall *)(_QWORD *, __int64))v17)(v16, v2);
        v10 = *(_QWORD *)(a1 + 2016);
      }
    }
LABEL_32:
    *(_QWORD *)(a1 + 2024) = 0;
    return qfree();
  }
  return result;
}

