__int64 __fastcall sub_12EB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall *v8)(_QWORD *, char, __int64, __int64, __int64, __int64); // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 24);
  v15 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(v2 + 40) )
    return sub_10B20((__int64)a2, (__int64)"end of file");
  (*(void (__fastcall **)(_QWORD *))(*a2 + 160LL))(a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 27);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4LL) & 4) == 0 )
  {
    v13 = 0;
    v14 = 0;
    v5 = getinf(16);
    if ( get_ea_name(&v13, v5, 3, 0) > 0 )
    {
      v8 = *(__int64 (__fastcall **)(_QWORD *, char, __int64, __int64, __int64, __int64))(*a2 + 96LL);
      if ( v8 == sub_109F0 )
      {
        v9 = a2[4];
        v10 = 2;
        if ( v9 )
          v10 = v9-- + 1;
        v11 = a2[3];
        if ( a2[5] < v10 )
        {
          v12 = qvector_reserve(a2 + 3, v11, v10, 1, v6, v7);
          a2[3] = v12;
          v11 = v12;
        }
        a2[4] = v10;
        *(_BYTE *)(v11 + v9) = 32;
        *(_BYTE *)(a2[3] + v9 + 1) = 0;
      }
      else
      {
        ((void (__fastcall *)(_QWORD *, __int64))v8)(a2, 32);
      }
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 56LL))(a2, v13, 0);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
}

