__int64 __fastcall sub_7740(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int16 v4; // cx
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax

  result = 0;
  if ( *(_BYTE *)(a2 + 1) == 3 )
  {
    v4 = *(_WORD *)(a2 + 6);
    if ( (v4 & 8) != 0 )
    {
      if ( a3 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v6 == sub_6910 )
        {
          v7 = a1[4];
          if ( v7 )
          {
            v8 = v7 + 1;
            v9 = a1[4];
            --v7;
          }
          else
          {
            v9 = 1;
            v8 = 2;
          }
          v10 = a1[3];
          if ( a1[5] < v8 )
          {
            v11 = qvector_reserve();
            a1[3] = v11;
            v10 = v11;
          }
          a1[4] = v8;
          *(_BYTE *)(v10 + v7) = 32;
          *(_BYTE *)(a1[3] + v9) = 0;
          v4 = *(_WORD *)(a2 + 6);
        }
        else
        {
          v6(a1, 32);
          v4 = *(_WORD *)(a2 + 6);
        }
      }
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * (v4 & 7) + 24),
        33);
      return 1;
    }
  }
  return result;
}

