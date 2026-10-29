__int64 __fastcall sub_93670(
        const __m128i *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int *a6)
{
  __int64 v7; // r15
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v12; // eax
  __int64 v13; // rax
  __int64 v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  v16[1] = __readfsqword(0x28u);
  LOBYTE(v9) = sub_125B90(a3, v7, a6, 0);
  v10 = v9;
  if ( !(_BYTE)v9 )
  {
    if ( *a6 != 14 )
    {
      if ( *a6 != 12 )
        return v10;
      v12 = sub_130480(v7, a1, a4, a5, a2, (__int64)(a3 + 32), (__int64)(a3 + 48), 2);
LABEL_6:
      LOBYTE(v10) = v12 != 0;
      return v10;
    }
    v13 = sub_11C8A0((__int64)a3, v16);
    if ( v13 && sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL), *(_DWORD *)(v13 + 4), 0) == 2 )
    {
      v12 = sub_130480(v7, a1, a4, a5, a2, v16[0], v16[0], 0);
      goto LABEL_6;
    }
  }
  return v10;
}

