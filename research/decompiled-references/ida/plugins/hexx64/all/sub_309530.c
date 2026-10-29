__int64 __fastcall sub_309530(_QWORD *a1, unsigned __int64 a2, __m128i a3, double a4, __m128i a5, double a6)
{
  __int64 v6; // rbp
  bool (__fastcall *v7)(__int64); // rax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ebx
  bool (__fastcall **v12)(__int64); // rdx
  __int64 (__fastcall *v13)(__int64, __int64 *, __m128i); // rdx
  __int64 v14; // rsi
  int v15; // eax
  int v16; // ebx
  bool (__fastcall **v17)(__int64); // rax
  int v18; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 *v19; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-30h] BYREF
  __int64 *v21[5]; // [rsp+20h] [rbp-28h] BYREF

  v21[1] = (__int64 *)__readfsqword(0x28u);
  if ( !sub_309040((__int64)a1, *(double *)a3.m128i_i64, a4, a5, a6) )
    return -1;
  if ( a2 >= a1[6] )
    sub_2ADE00(*(double *)a3.m128i_i64);
  v6 = a1[5] + 88 * a2;
  v7 = **(bool (__fastcall ***)(__int64))v6;
  if ( v7 == sub_2AD660 )
  {
    if ( (unsigned int)sub_257C40(v6 + 8, v6 + 64) )
      goto LABEL_5;
    return -1;
  }
  if ( !v7(v6) )
    return -1;
LABEL_5:
  v8 = a1[9];
  v19 = (__int64 *)v8;
  if ( !v8 )
  {
    v10 = *(_DWORD *)(v6 + 80);
    if ( v10 != -2 )
      goto LABEL_7;
    v17 = *(bool (__fastcall ***)(__int64))v6;
    v20 = nullptr;
    v13 = (__int64 (__fastcall *)(__int64, __int64 *, __m128i))v17[2];
    if ( v13 == sub_2C1E70 )
    {
      v14 = *(_QWORD *)(v6 + 8);
      v18 = -1;
      if ( v14 != -1 )
      {
        v21[0] = nullptr;
        goto LABEL_13;
      }
LABEL_19:
      v15 = -1;
      goto LABEL_14;
    }
LABEL_20:
    v15 = ((__int64 (__fastcall *)(__int64, __int64 **))v13)(v6, &v20);
    goto LABEL_14;
  }
  v9 = *(_DWORD *)(v8 + 104);
  *(_DWORD *)(v8 + 104) = v9 + 1;
  v10 = *(_DWORD *)(v6 + 80);
  if ( v10 != -2 )
  {
LABEL_7:
    sub_140140(&v19);
    return v10;
  }
  v12 = *(bool (__fastcall ***)(__int64))v6;
  v20 = (__int64 *)v8;
  v13 = (__int64 (__fastcall *)(__int64, __int64 *, __m128i))v12[2];
  *(_DWORD *)(v8 + 104) = v9 + 2;
  if ( v13 != sub_2C1E70 )
    goto LABEL_20;
  v14 = *(_QWORD *)(v6 + 8);
  v18 = -1;
  if ( v14 == -1 )
    goto LABEL_19;
  v21[0] = (__int64 *)v8;
  *(_DWORD *)(v8 + 104) = v9 + 3;
LABEL_13:
  sub_2C07C0(v8, v14, nullptr, &v18, a3);
  sub_140140(v21);
  v15 = v18;
LABEL_14:
  *(_DWORD *)(v6 + 80) = v15;
  sub_140140(&v20);
  v16 = *(_DWORD *)(v6 + 80);
  sub_140140(&v19);
  return v16;
}

