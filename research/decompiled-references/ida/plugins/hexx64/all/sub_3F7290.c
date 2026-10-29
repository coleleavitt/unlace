__int64 __fastcall sub_3F7290(__int64 a1, int a2, unsigned __int8 *a3, __m128i a4, __m128 a5, __m128 a6)
{
  __int16 v6; // ax
  bool v7; // zf
  char *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v6 = *(_WORD *)(a1 + 48);
  if ( v6 == 44 )
  {
    a3 = nullptr;
    v8 = "inc";
  }
  else
  {
    v7 = v6 == 6;
    v8 = "write";
    if ( v7 )
      v8 = "add";
  }
  v9 = sub_3F7170(a1, a4, a5, (__int64)v8, a2, a3, 0xFFFFFFFF, a6);
  sub_316CB0((__int64 *)(*(_QWORD *)(v9 + 72) + 152LL), (const void **)(*(_QWORD *)(v9 + 72) + 216LL), v10, v11);
  return v9;
}

