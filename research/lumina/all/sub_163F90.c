__int64 __fastcall sub_163F90(__int64 a1, unsigned __int8 *a2, unsigned __int64 *a3, char a4, double a5)
{
  unsigned __int8 *v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v14; // rbp
  void *v15; // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  int v18; // r15d
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rsi
  int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rdi
  size_t v28; // rbx
  unsigned __int64 v29; // rax
  __int64 v30; // rbp
  int v31; // eax
  __int64 v32; // r13
  int v33; // r12d
  void *v34; // rbp
  int v35; // [rsp+Ch] [rbp-5Ch]
  __m128i *v36; // [rsp+18h] [rbp-50h] BYREF
  __int64 v37[9]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a2;
  v37[1] = __readfsqword(0x28u);
  v36 = nullptr;
  if ( !a2 )
    v7 = **(unsigned __int8 ***)(a1 + 32);
  sub_D3350(a1, (__int64)v7);
  v8 = (__int64)v7;
  v9 = sub_CA320(a1, v7);
  if ( a3 )
    *a3 = -1;
  if ( v9 < 0 )
    return 0;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( a3 )
      *a3 = *(_QWORD *)v11;
    if ( (a4 & 1) != 0 )
      return *(_QWORD *)(v11 + 24);
    v14 = *(_QWORD *)v11;
    if ( !(unsigned int)sub_FEBD0(a1, v8) )
    {
      v15 = (void *)sub_D1E10(v14, v8);
      v12 = (__int64)v15;
      if ( v15 )
        memcpy(v15, *(const void **)(v11 + 24), *(_QWORD *)v11);
      return v12;
    }
    return 0;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL * v9 + 8);
  if ( !v16 )
    return 0;
  v17 = (__int64)v7;
  v18 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 52LL);
  v19 = sub_105970("PRAGMA \"%w\".page_count", v7);
  v20 = (__int64)v19;
  if ( !v19 )
  {
    sub_C91C0(0, v17);
    return 0;
  }
  v21 = v19;
  v22 = sub_157230(a1, (__int64)v19, -1, 128, 0, &v36, nullptr);
  sub_C91C0(v20, (__int64)v21);
  if ( v22 )
    return 0;
  if ( (unsigned int)sub_141DB0(v36, (__int64)v21, a5) != 100 )
    goto LABEL_19;
  v27 = (__int64 *)v36;
  v21 = nullptr;
  v28 = v18;
  v29 = v18 * sub_D43C0(v36->m128i_i64, 0, v23, v24, v25, v26);
  v30 = v29;
  if ( a3 )
    *a3 = v29;
  if ( (a4 & 1) != 0 || (unsigned int)sub_FEBD0((__int64)v27, 0) || (v12 = sub_D1E10(v30, 0)) == 0 )
  {
LABEL_19:
    v12 = 0;
  }
  else
  {
    v21 = nullptr;
    v31 = sub_D4390(v36->m128i_i64, 0, v23, v24, v25, v26);
    v23 = (unsigned int)v31;
    v35 = v31;
    v32 = **(_QWORD **)(v16 + 8);
    if ( v31 > 0 )
    {
      v33 = 1;
      do
      {
        v37[0] = 0;
        v34 = (void *)(v12 + v28 * (v33 - 1));
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(v32 + 272))(
               v32,
               (unsigned int)v33,
               v37,
               0) )
        {
          v21 = nullptr;
          memset(v34, 0, v28);
        }
        else
        {
          v21 = *(__int64 **)(v37[0] + 8);
          memcpy(v34, v21, v28);
        }
        if ( v37[0] )
          sub_C36A0(v37[0]);
        ++v33;
      }
      while ( v35 >= v33 );
    }
  }
  sub_11E660((__int64)v36, (__int64)v21, (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))v23, v24, v25, v26);
  return v12;
}
