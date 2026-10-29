__int64 __fastcall sub_6220(__int64 *a1)
{
  __int64 (__fastcall *v1)(__int64 *, char); // rax
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  __int64 (__fastcall *v7)(__int64 *, char); // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax

  (*(void (__fastcall **)(__int64 *))(*a1 + 296))(a1);
  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0);
  if ( *((_BYTE *)a1 + 305) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    if ( (*(_BYTE *)(a1[79] + 4) & 1) == 0 )
    {
      v7 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v7 == sub_5CA0 )
      {
        v8 = a1[4];
        if ( v8 )
        {
          v10 = v8 + 1;
          v9 = a1[4];
          --v8;
        }
        else
        {
          v9 = 1;
          v10 = 2;
        }
        v11 = a1[3];
        if ( a1[5] < v10 )
        {
          v12 = qvector_reserve();
          a1[3] = v12;
          v11 = v12;
        }
        a1[4] = v10;
        *(_BYTE *)(v11 + v8) = 32;
        *(_BYTE *)(a1[3] + v9) = 0;
      }
      else
      {
        v7(a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
  }
  if ( *((_BYTE *)a1 + 345) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    if ( (*(_BYTE *)(a1[79] + 4) & 1) == 0 )
    {
      v1 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v1 == sub_5CA0 )
      {
        v2 = a1[4];
        if ( v2 )
        {
          v4 = v2 + 1;
          v3 = a1[4];
          --v2;
        }
        else
        {
          v3 = 1;
          v4 = 2;
        }
        v5 = a1[3];
        if ( a1[5] < v4 )
        {
          v13 = qvector_reserve();
          a1[3] = v13;
          v5 = v13;
        }
        a1[4] = v4;
        *(_BYTE *)(v5 + v2) = 32;
        *(_BYTE *)(a1[3] + v3) = 0;
      }
      else
      {
        v1(a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
  }
  (*(void (__fastcall **)(__int64 *))(*a1 + 320))(a1);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

