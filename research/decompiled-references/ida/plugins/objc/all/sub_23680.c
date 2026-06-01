__int64 __fastcall sub_23680(__int64 a1, __int64 a2, char a3)
{
  int v4; // eax
  size_t v6; // r12
  __int64 v7; // rdi
  void *v8; // rax
  const void *v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( a3 && (unsigned __int8)callui(27) )
    return 0;
  v4 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v4;
  if ( v4 == *(_DWORD *)(a1 + 60) )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v10 = 0;
    v11 = 0;
    if ( v6 )
    {
      v8 = (void *)qalloc_or_throw();
      v9 = *(const void **)(a1 + 32);
      *((_QWORD *)&v11 + 1) = v6;
      v10 = (__int64)v8;
      memcpy(v8, v9, v6);
      *(_QWORD *)&v11 = v6;
    }
    sub_D8D0(&v10);
    sub_F9D0();
    v7 = v10;
    *(_DWORD *)(a1 + 56) = 0;
    if ( v7 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  return 1;
}
