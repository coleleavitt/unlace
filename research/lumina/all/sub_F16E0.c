void __fastcall sub_F16E0(__int64 a1, __int64 a2, char ***a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 *v9; // rbx
  __int64 v10; // rax
  signed __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdi

  v7 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v7 + 20) >= 0 )
    v9 = (__int64 *)sub_EF2D0((_QWORD *)(a1 + 8), v7, 24, a4, a5, a6);
  else
    v9 = *(__int64 **)(v7 + 8);
  if ( v9 )
  {
    v10 = *v9;
    if ( !*v9 )
    {
      v11 = sub_CD0F0(*a3);
      v9[1] = v11;
      if ( v11 <= 0 )
      {
        v13 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 36) = 1;
        sub_F11D0(
          v13,
          "argument of ntile must be a positive integer",
          -1,
          1,
          (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL,
          v12);
      }
      v10 = *v9;
    }
    *v9 = v10 + 1;
  }
}
