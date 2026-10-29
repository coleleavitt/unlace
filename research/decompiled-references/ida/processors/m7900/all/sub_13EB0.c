__int64 __fastcall sub_13EB0(__int64 *a1)
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
  __int64 (__fastcall *v12)(__int64 *, char); // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // r12
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64 *, char); // rax
  __int64 v18; // rbp
  __int64 v19; // r13
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  (*(void (__fastcall **)(__int64 *))(*a1 + 296))(a1);
  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0);
  if ( *((_BYTE *)a1 + 305) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    if ( (*(_BYTE *)(a1[79] + 4) & 1) == 0 )
    {
      v17 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v17 == sub_12640 )
      {
        v18 = a1[4];
        if ( v18 )
        {
          v20 = v18 + 1;
          v19 = a1[4];
          --v18;
        }
        else
        {
          v19 = 1;
          v20 = 2;
        }
        v21 = a1[3];
        if ( a1[5] < v20 )
        {
          v22 = qvector_reserve();
          a1[3] = v22;
          v21 = v22;
        }
        a1[4] = v20;
        *(_BYTE *)(v21 + v18) = 32;
        *(_BYTE *)(a1[3] + v19) = 0;
      }
      else
      {
        v17(a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
  }
  if ( *((_BYTE *)a1 + 345) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    if ( (*(_BYTE *)(a1[79] + 4) & 1) == 0 )
    {
      v12 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v12 == sub_12640 )
      {
        v13 = a1[4];
        if ( v13 )
        {
          v15 = v13 + 1;
          v14 = a1[4];
          --v13;
        }
        else
        {
          v14 = 1;
          v15 = 2;
        }
        v16 = a1[3];
        if ( a1[5] < v15 )
        {
          v24 = qvector_reserve();
          a1[3] = v24;
          v16 = v24;
        }
        a1[4] = v15;
        *(_BYTE *)(v16 + v13) = 32;
        *(_BYTE *)(a1[3] + v14) = 0;
      }
      else
      {
        v12(a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 2);
  }
  if ( *((_BYTE *)a1 + 385) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    if ( (*(_BYTE *)(a1[79] + 4) & 1) == 0 )
    {
      v7 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v7 == sub_12640 )
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
          v25 = qvector_reserve();
          a1[3] = v25;
          v11 = v25;
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
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 3);
  }
  if ( *((_BYTE *)a1 + 425) )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
    if ( (*(_BYTE *)(a1[79] + 4) & 1) == 0 )
    {
      v1 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v1 == sub_12640 )
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
          v23 = qvector_reserve();
          a1[3] = v23;
          v5 = v23;
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
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 4);
  }
  (*(void (__fastcall **)(__int64 *))(*a1 + 320))(a1);
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

