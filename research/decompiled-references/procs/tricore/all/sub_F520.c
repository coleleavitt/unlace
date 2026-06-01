__int64 __fastcall sub_F520(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 (__fastcall *v6)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax

  result = BYTE1(a1[5 * (int)a2 + 33]);
  if ( (_BYTE)result )
  {
    if ( (_BYTE)result != 9 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v6 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a1 + 96LL);
      if ( v6 == sub_EB20 )
      {
        v7 = a1[4];
        if ( v7 )
        {
          v9 = v7 + 1;
          v8 = a1[4];
          --v7;
        }
        else
        {
          v8 = 1;
          v9 = 2;
        }
        v10 = a1[3];
        if ( a1[5] < v9 )
        {
          v11 = qvector_reserve(a1 + 3, v10, v9, 1, v4, v5);
          a1[3] = v11;
          v10 = v11;
        }
        a1[4] = v9;
        *(_BYTE *)(v10 + v7) = 32;
        *(_BYTE *)(a1[3] + v8) = 0;
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, __int64))v6)(a1, 32);
      }
    }
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, a2);
  }
  return result;
}
