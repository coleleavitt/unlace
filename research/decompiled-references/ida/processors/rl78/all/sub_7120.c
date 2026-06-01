__int64 __fastcall sub_7120(__int64 *a1)
{
  __int64 (__fastcall *v1)(__int64 *, char); // rax
  __int64 v2; // rbp
  __int64 v3; // r13
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v7; // rax

  (*(void (__fastcall **)(__int64 *))(*a1 + 296))(a1);
  if ( *((_BYTE *)a1 + 265) )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 304))(a1, 0);
    if ( *((_BYTE *)a1 + 305) )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 32))(a1, 44);
      v1 = *(__int64 (__fastcall **)(__int64 *, char))(*a1 + 96);
      if ( v1 == sub_6FD0 )
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
          v7 = qvector_reserve();
          a1[3] = v7;
          v5 = v7;
        }
        a1[4] = v4;
        *(_BYTE *)(v5 + v2) = 32;
        *(_BYTE *)(a1[3] + v3) = 0;
      }
      else
      {
        v1(a1, 32);
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 304))(a1, 1);
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, 0xFFFFFFFFLL);
}

