bool __fastcall sub_306680(__int64 a1, double a2, double a3, __m128i a4, double a5)
{
  __m128i *v6; // rdi
  __int64 *func; // rax
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]
  __int128 v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  switch_dbctx();
  v6 = *(__m128i **)(a1 + 72);
  if ( v6 )
    return v6 != nullptr;
  func = (__int64 *)get_func();
  if ( !func )
  {
LABEL_10:
    v6 = *(__m128i **)(a1 + 72);
    return v6 != nullptr;
  }
  v12 = func;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 112LL);
  v14 = 0;
  v13 = 0;
  sub_14CDC0((__int64 *)&v11, v9, &v12, nullptr, 1, 0.0, a3, a4, a5);
  sub_140140((__int64 **)(a1 + 72));
  v10 = v11;
  *(_QWORD *)(a1 + 72) = v11;
  if ( v10 )
    ++*((_DWORD *)v10 + 26);
  sub_140140(&v11);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  v6 = *(__m128i **)(a1 + 72);
  if ( v6 )
  {
    sub_2581E0(v6);
    goto LABEL_10;
  }
  return v6 != nullptr;
}

