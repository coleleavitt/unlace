void __fastcall sub_4FF0(_QWORD *a1, unsigned __int16 a2, __int64 a3, int a4)
{
  __int64 v5; // r12
  __int64 (__fastcall *v6)(_QWORD *, char); // rax
  __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax

  if ( (a4 & (unsigned __int64)~a3) == 0 )
  {
    v5 = a1[77];
    if ( *(_BYTE *)(v5 + 224) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
      v6 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v6 == sub_4D30 )
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
      }
      else
      {
        v6(a1, 32);
      }
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2),
      33);
    *(_BYTE *)(v5 + 224) = 1;
  }
}

