__int64 __fastcall sub_13D020(__int64 a1, __int64 a2, __int64 a3, char a4, __m128i a5)
{
  char v5; // al
  __int64 v6; // rdx
  unsigned __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r12
  int v16; // eax
  __int64 func; // rax
  int v18; // eax
  _QWORD v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v19[3] = __readfsqword(0x28u);
  if ( a4 )
    return 0;
  v5 = *(_BYTE *)a2;
  v6 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)a2 == 4 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
  }
  else
  {
    if ( v5 == 10 )
    {
LABEL_12:
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    if ( v5 != 1 )
      return 0;
    v15 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(v6 + 24);
    v16 = *(_DWORD *)(a2 + 8);
    if ( v16 != *(_DWORD *)(*(_QWORD *)(v15 + 1504) + 60LL) )
    {
      if ( v16 != *(_DWORD *)(v15 + 1184) )
        return 0;
      sub_330F80(*(_QWORD **)(a1 + 8), *(_QWORD *)(v6 + 24));
      func = get_func();
      v18 = func ? *(_DWORD *)(func + 16) : *(_DWORD *)(v15 + 112);
      if ( (v18 & 0x10) == 0 )
        return 0;
      v6 = *(_QWORD *)(a1 + 32);
    }
  }
  v10 = *(_QWORD *)(a1 + 16);
  v19[1] = 0;
  v19[0] = 0xFFFFFFFF00000000LL;
  if ( (unsigned __int8)sub_13C7E0(v10, (__int64)v19, (int *)v6, a1 + 64, a2, 0xFFFFFFFF, a5) )
  {
    sub_11CA10((char *)a2, (char *)v19);
    sub_11C950((unsigned __int8 *)a2, *(_QWORD *)(a1 + 48), v11, v12, *(double *)a5.m128i_i64);
    if ( *(_DWORD *)(a2 + 4) < SHIDWORD(v19[0]) )
      sub_1207E0(
        (char *)a2,
        *(unsigned __int64 **)(a1 + 48),
        9,
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL),
        SHIDWORD(v19[0]),
        a5);
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(_DWORD *)(v13 + 24);
    BYTE1(v14) &= ~2u;
    LOBYTE(v14) = v14 | 0x80;
    *(_DWORD *)(v13 + 24) = v14;
    ++*(_DWORD *)(a1 + 56);
    sub_11CDA0((__int64)v19);
    if ( (unsigned int)(**(_DWORD **)(a1 + 32) - 10) <= 1 )
    {
      sub_3311F0(*(_QWORD **)(a1 + 8), v9, 0x10u);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
      **(_DWORD **)(a1 + 32) = 4;
    }
    goto LABEL_12;
  }
  sub_11CDA0((__int64)v19);
  if ( *(_BYTE *)a2 == 1 )
    ++*(_DWORD *)(a1 + 60);
  return 0;
}

