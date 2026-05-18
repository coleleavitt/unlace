__int64 *__fastcall sub_DDD90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rbp
  __int64 v6; // rsi
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rax
  __int64 v10; // rsi
  __m128i *v11; // rax

  if ( !a3 )
    return nullptr;
  v5 = sub_DC1C0(a1, 0x90u);
  if ( !v5 )
    return nullptr;
  *v5 = (__int64)sub_DC720(a1, *(const char **)a3);
  v5[1] = (__int64)sub_DC720(a1, *(const char **)(a3 + 8));
  v6 = *(_QWORD *)(a3 + 72);
  v7 = nullptr;
  if ( v6 )
    v7 = sub_DD6E0(a1, v6, 0, nullptr);
  v5[9] = (__int64)v7;
  v5[10] = *(_QWORD *)(a3 + 80);
  v5[2] = (__int64)sub_DD150(a1, *(_DWORD **)(a3 + 16), 0);
  v5[3] = (__int64)sub_DD150(a1, *(_DWORD **)(a3 + 24), 0);
  *((_BYTE *)v5 + 32) = *(_BYTE *)(a3 + 32);
  *((_BYTE *)v5 + 34) = *(_BYTE *)(a3 + 34);
  *((_BYTE *)v5 + 33) = *(_BYTE *)(a3 + 33);
  *((_BYTE *)v5 + 36) = *(_BYTE *)(a3 + 36);
  *((_DWORD *)v5 + 24) = *(_DWORD *)(a3 + 96);
  *((_DWORD *)v5 + 23) = *(_DWORD *)(a3 + 92);
  *((_DWORD *)v5 + 31) = *(_DWORD *)(a3 + 124);
  *((_DWORD *)v5 + 22) = *(_DWORD *)(a3 + 88);
  *((_BYTE *)v5 + 140) = *(_BYTE *)(a3 + 140);
  v8 = *(_QWORD *)(a3 + 40);
  v9 = nullptr;
  if ( v8 )
    v9 = sub_DD6E0(a1, v8, 0, nullptr);
  v5[5] = (__int64)v9;
  v10 = *(_QWORD *)(a3 + 48);
  v11 = nullptr;
  if ( v10 )
    v11 = sub_DD6E0(a1, v10, 0, nullptr);
  v5[6] = (__int64)v11;
  v5[14] = a2;
  *((_BYTE *)v5 + 35) = *(_BYTE *)(a3 + 35);
  return v5;
}
