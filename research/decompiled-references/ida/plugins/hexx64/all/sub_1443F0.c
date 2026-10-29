__int64 __fastcall sub_1443F0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7, __m128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rbx
  unsigned int i; // ebp
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned int v26; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v27[11]; // [rsp+10h] [rbp-58h] BYREF

  v27[5] = __readfsqword(0x28u);
  v26 = 0;
  sub_144130((__int64 *)a1, (__m128i *)(a2 & 1), &v26, a4, a5, a6, a7, a8);
  if ( (a2 & 6) != 0 && (~*(_WORD *)a1 & 0x5000) == 0 && (BYTE1(*(_DWORD *)a1) & 0x80u) == 0 )
  {
    if ( (unsigned __int8)sub_69F70(a1) )
      ++v26;
    v12 = *(_QWORD *)(a1 + 520);
    for ( i = v26; v12; v26 = i )
    {
      if ( (*(_DWORD *)(v12 + 24) & 0x600) != 0x200 )
        i += sub_A7590(v12, 0, v8, v9, v10, v11);
      v12 = *(_QWORD *)(v12 + 8);
    }
    if ( (unsigned __int8)sub_221F40(a1, a2) )
    {
      if ( (~*(_DWORD *)a1 & 0x8020) == 0 )
      {
        v22 = *(_DWORD *)(a1 + 64);
        v23 = (unsigned int)(v22 - 1);
        if ( !v22 )
          sub_1346B0(a7);
        v24 = *(_QWORD *)(a1 + 528);
        v25 = *(_QWORD *)(v24 + 8 * v23);
        sub_64640((__int64 *)(a1 + 360), (__int64 *)(v25 + 160), v24, v14, v15, v16);
        sub_317C60((__int64 *)(a1 + 376), v25 + 176);
      }
      ++v26;
      memset(&v27[1], 0, 32);
      v27[0] = (__int64)&off_4DDAA8;
      sub_11F9E0(a1, v27);
      v20 = *(_QWORD *)(a1 + 784);
      if ( v20 )
        *(_DWORD *)(v20 + 48) = 63;
      sub_144130((__int64 *)a1, (__m128i *)&byte_1, &v26, v17, v18, v19, a7, a8);
    }
  }
  return v26;
}

