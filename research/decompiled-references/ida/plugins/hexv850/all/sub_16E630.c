__int64 __fastcall sub_16E630(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  const __m128i *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r14
  _DWORD v11[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v12; // [rsp+8h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  if ( !a4 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v7 = *(const __m128i **)(a1 + 16);
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_DWORD *)(v5 + 68);
    v12 = v5;
    v10 = a2;
    v11[0] = 4;
    v11[1] = v9;
    if ( (unsigned __int8)sub_129EC0(*(_QWORD *)(v7[4].m128i_i64[0] + 1504), v7, v8, a2, v5, (__int64)v11, 0) )
    {
      sub_1205C0(v10, (unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 64LL));
      ++*(_DWORD *)(a1 + 56);
    }
    LOBYTE(v11[0]) = 0;
    sub_1181E0((__int64)v11);
  }
  return 0;
}

