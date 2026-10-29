__int64 __fastcall sub_183A20(unsigned __int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __m128i a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r12d
  char v10; // al
  int v11; // r15d
  __int64 v12; // rcx
  _DWORD *v14; // rdi
  _QWORD v15[11]; // [rsp+0h] [rbp-58h] BYREF

  v15[3] = __readfsqword(0x28u);
  if ( !*(_BYTE *)a2 )
    return 1;
  if ( *(_BYTE *)a2 != 4 || (v14 = *(_DWORD **)(a2 + 8), *v14 != 2) )
  {
    v9 = sub_126F10((int *)a2, a1, a3, a4, *(double *)a5.m128i_i64);
    v10 = *(_BYTE *)a2;
    if ( (_BYTE)v9 )
    {
      *(_DWORD *)(a2 + 4) += a3;
      if ( v10 == 4 )
        *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) += a3;
    }
    else
    {
      if ( v10 != 6 )
        return v9;
      v11 = *(_DWORD *)(a2 + 4);
      sub_11C950((unsigned __int8 *)a2, (__int64)a1, v7, v8, *(double *)a5.m128i_i64);
      v15[0] = 0xFFFFFFFF00000000LL;
      v15[1] = 0;
      sub_1838C0((unsigned __int64)v15, (__int64 *)a1, -1, nullptr, a2, v11);
      if ( !(unsigned __int8)sub_183A20((__int64 *)a1, (unsigned __int64)v15, a3, v12) )
      {
        sub_11CDA0((__int64)v15);
        return v9;
      }
      sub_11CA10((char *)a2, (char *)v15);
      sub_11CDA0((__int64)v15);
    }
    return 1;
  }
  return sub_12CBA0((__int64)v14, a1, a3, a5);
}

