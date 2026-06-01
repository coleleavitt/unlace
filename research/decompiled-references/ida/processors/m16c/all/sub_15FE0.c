__int64 __fastcall sub_15FE0(__int64 a1)
{
  char v1; // al
  __int64 (__fastcall *v2)(_QWORD *, char); // rax
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  char v7; // al
  __int64 (__fastcall *v8)(_QWORD *, char); // rax
  __int64 v9; // rbp
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  *(_BYTE *)(*(_QWORD *)(a1 + 616) + 4373LL) = 0;
  sub_15990(a1);
  if ( (*(_BYTE *)(a1 + 255) & 1) != 0 && *(_BYTE *)(a1 + 265) == 5 )
  {
    get_flags_ex();
    if ( !(unsigned __int8)is_numop() && *(_BYTE *)(a1 + 305) == 2 )
    {
      v14 = getseg();
      if ( v14 )
      {
        if ( *(_BYTE *)(v14 + 184) == 12 )
          *(_BYTE *)(*(_QWORD *)(a1 + 616) + 4373LL) = 1;
      }
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  v1 = *(_BYTE *)(a1 + 305);
  if ( v1 )
  {
    if ( v1 != 10 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v2 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v2 == sub_153C0 )
      {
        v3 = *(_QWORD *)(a1 + 32);
        if ( v3 )
        {
          v5 = v3 + 1;
          v4 = *(_QWORD *)(a1 + 32);
          --v3;
        }
        else
        {
          v4 = 1;
          v5 = 2;
        }
        v6 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v5 )
        {
          v16 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v16;
          v6 = v16;
        }
        *(_QWORD *)(a1 + 32) = v5;
        *(_BYTE *)(v6 + v3) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v4) = 0;
      }
      else
      {
        v2((_QWORD *)a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  }
  v7 = *(_BYTE *)(a1 + 345);
  if ( v7 )
  {
    if ( v7 != 10 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v8 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v8 == sub_153C0 )
      {
        v9 = *(_QWORD *)(a1 + 32);
        if ( v9 )
        {
          v11 = v9 + 1;
          v10 = *(_QWORD *)(a1 + 32);
          --v9;
        }
        else
        {
          v10 = 1;
          v11 = 2;
        }
        v12 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v11 )
        {
          v15 = qvector_reserve();
          *(_QWORD *)(a1 + 24) = v15;
          v12 = v15;
        }
        *(_QWORD *)(a1 + 32) = v11;
        *(_BYTE *)(v12 + v9) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v10) = 0;
      }
      else
      {
        v8((_QWORD *)a1, 32);
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

