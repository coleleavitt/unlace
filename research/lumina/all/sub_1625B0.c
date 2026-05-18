__int64 __fastcall sub_1625B0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7)
{
  unsigned __int8 *v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r15
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 *v23; // rax
  __m128i *v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _QWORD *, _QWORD, _QWORD); // [rsp-8h] [rbp-70h]
  __int64 v33; // [rsp+18h] [rbp-50h]
  __int64 v34[9]; // [rsp+20h] [rbp-48h] BYREF

  v10 = a2;
  v11 = *(_QWORD *)(a1 + 24);
  v34[1] = __readfsqword(0x28u);
  v34[0] = 0;
  if ( v11 )
    xmmword_241500(v11);
  if ( !a2 )
    v10 = **(unsigned __int8 ***)(a1 + 32);
  v12 = (__int64)v10;
  v13 = sub_CA320(a1, v10);
  v18 = v13;
  if ( v13 <= 1 && v13 )
    goto LABEL_7;
  v12 = (__int64)v10;
  v23 = sub_105970("ATTACH x AS %Q", v10);
  if ( !v23 )
  {
    v19 = 7;
    goto LABEL_8;
  }
  v12 = (__int64)v23;
  v33 = (__int64)v23;
  v19 = sub_157230(a1, (__int64)v23, -1, 128, 0, v34, nullptr);
  sub_C91C0(v33, v12);
  v14 = v30;
  if ( v19 )
  {
LABEL_8:
    sub_11E660(v34[0], v12, v14, v15, v16, v17);
    if ( a3 && (a6 & 1) != 0 )
      sub_C91C0(a3, v12);
    goto LABEL_11;
  }
  *(_BYTE *)(a1 + 198) |= 4u;
  v24 = (__m128i *)v34[0];
  *(_BYTE *)(a1 + 196) = v18;
  v25 = sub_141DB0(v24, v12, a7);
  *(_BYTE *)(a1 + 198) &= ~4u;
  if ( v25 != 101 || (v12 = (__int64)v10, (v26 = sub_D3350(a1, (__int64)v10)) == 0) )
  {
LABEL_7:
    v19 = 1;
    goto LABEL_8;
  }
  v27 = *(_QWORD *)(v26 + 8);
  *(_QWORD *)(v27 + 24) = a3;
  *(_QWORD *)(v27 + 8) = a5;
  *(_QWORD *)v27 = a4;
  *(_QWORD *)(v27 + 16) = a5;
  v28 = (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))qword_241608;
  if ( qword_241608 > a5 )
    *(_QWORD *)(v27 + 16) = qword_241608;
  v29 = v34[0];
  *(_DWORD *)(v27 + 44) = a6;
  sub_11E660(v29, (__int64)v10, v28, a5, v16, v17);
LABEL_11:
  v21 = *(_QWORD *)(a1 + 24);
  if ( v21 )
    xmmword_241510(v21, v12, v20);
  return v19;
}
