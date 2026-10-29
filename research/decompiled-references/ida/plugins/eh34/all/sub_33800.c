__int64 __fastcall sub_33800(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  __int64 (__fastcall *v5)(__int64, int); // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  int v8; // r14d
  unsigned int v9; // esi
  __int64 (__fastcall *v10)(__int64, int, int); // rax
  int v12; // r9d
  const char *v13; // r8
  const char *v14; // rcx
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 *v19; // [rsp+10h] [rbp-B8h]
  __int64 v21; // [rsp+28h] [rbp-A0h]
  __int64 v22; // [rsp+30h] [rbp-98h] BYREF
  __int64 v23; // [rsp+38h] [rbp-90h]
  __int64 v24; // [rsp+50h] [rbp-78h] BYREF
  __int64 v25; // [rsp+58h] [rbp-70h]
  __int64 v26; // [rsp+70h] [rbp-58h] BYREF
  __m128i v27; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v5 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 104LL);
  if ( v5 == sub_BA60 )
  {
    if ( !*(_QWORD *)(a2 + 80) )
    {
LABEL_17:
      *(_BYTE *)(a1 + 24) = 0;
      return a1;
    }
    v6 = *(int *)(*(_QWORD *)(a2 + 72) + 24LL * a3 + 8);
  }
  else
  {
    v6 = (int)v5(a2, a3);
  }
  if ( (int)v6 <= 0 )
    goto LABEL_17;
  v7 = 0;
  v19 = (__int64 *)(a2 + 560);
  while ( 1 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 120LL);
    if ( v10 == sub_BAA0 )
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL * a3) + 4 * v7);
    else
      v8 = v10(a2, a3, v7);
    if ( v8 <= 0 || v8 > *(_DWORD *)(a2 + 204) )
      goto LABEL_14;
    if ( !*(_BYTE *)(a2 + 672) || v8 < *(_DWORD *)(a2 + 652) || v8 > *(_DWORD *)(a2 + 656) )
      break;
    v9 = *(_DWORD *)(a2 + 660);
LABEL_13:
    sub_32300(a4, v9);
LABEL_14:
    if ( ++v7 == v6 )
      goto LABEL_17;
  }
  v21 = sub_322C0(v19, v8);
  v9 = v21;
  if ( BYTE4(v21) )
    goto LABEL_13;
  sub_28EA0((__int64)&v22, a2, a3);
  sub_28EA0((__int64)&v24, a2, v8);
  v13 = s1;
  if ( v25 )
  {
    LODWORD(v13) = v24;
    v14 = s1;
    if ( v23 )
      goto LABEL_27;
  }
  else
  {
    v14 = s1;
    if ( !v23 )
      goto LABEL_22;
LABEL_27:
    LODWORD(v14) = v22;
  }
LABEL_22:
  sub_64B50(
    (unsigned int)&v26,
    *(_QWORD *)(a2 + 176),
    (unsigned int)"initialize_state_counts(%s): pred %s has no state",
    (_DWORD)v14,
    (_DWORD)v13,
    v12);
  v15 = _mm_loadu_si128(&v27);
  v16 = v24;
  *(_QWORD *)a1 = v26;
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v15;
  if ( v16 )
  {
    v25 = 0;
    qfree(v16);
  }
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
  }
  return a1;
}

