char __fastcall sub_12F320(__int128 a1, unsigned __int64 a2, _BYTE *a3, _BYTE *a4)
{
  char result; // al
  __int64 v8; // rbp
  int v9; // r12d
  __int16 v10; // di
  __int16 v11; // si
  int v12; // ecx
  __int64 v13; // rdx
  char v14; // [rsp+Fh] [rbp-49h]
  char v15; // [rsp+Fh] [rbp-49h]
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  sub_11D5B0((const __m128i *)a1, *((__int64 *)&a1 + 1), a2);
  sub_11D3C0(a1, a3, a4);
  if ( *(_BYTE *)a2 != 4 )
  {
    if ( *(_DWORD *)a4 == 4 )
      return sub_12EC20(a1, a2, (__int64)a3, (__int64)(a4 + 32), 0);
    return 0;
  }
  result = sub_12E210((const __m128i *)a1, *((_BYTE **)&a1 + 1), *(_QWORD *)(a2 + 8), a3, (__int64)a4, 0);
  if ( !result )
    return 0;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_DWORD *)(v8 + 68);
  *(_DWORD *)(a2 + 4) = v9;
  if ( *(_DWORD *)v8 == 4 )
  {
    if ( a2 )
    {
      v14 = result;
      v17 = 0;
      sub_11F840((__int64)&v16, (unsigned __int8 *)(v8 + 32));
      v10 = *(_WORD *)a2;
      v11 = *(_WORD *)(a2 + 2);
      v12 = *(_DWORD *)(a2 + 4);
      *(_QWORD *)a2 = v16;
      v13 = *(_QWORD *)(a2 + 8);
      LOWORD(v16) = v10;
      *(_QWORD *)(a2 + 8) = v17;
      WORD1(v16) = v11;
      HIDWORD(v16) = v12;
      v17 = v13;
      sub_118BA0((__int64)&v16);
      return v14;
    }
  }
  else
  {
    v15 = result;
    sub_118BA0(v8 + 64);
    *(_DWORD *)(v8 + 68) = v9;
    return v15;
  }
  return result;
}

