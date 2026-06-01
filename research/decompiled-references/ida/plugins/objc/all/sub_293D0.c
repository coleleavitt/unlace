unsigned __int64 __fastcall sub_293D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 *v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  __int64 v16; // rbp
  __int64 *v17; // r14
  __int64 v18; // r12
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 *v26; // rax
  __int64 v29; // [rsp+18h] [rbp-80h]
  __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h] BYREF
  __int64 v34; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v5 = a2;
  v35 = __readfsqword(0x28u);
  if ( a2 < (a3 - 1) / 2 )
  {
    v6 = a2;
    v29 = (a3 - 1) / 2;
    while ( 1 )
    {
      v7 = 2 * (v6 + 1);
      v8 = (__int64 *)(a1 + 16 * (v6 + 1));
      v9 = *(v8 - 1);
      if ( !(unsigned __int8)sub_27400(&v31, *v8) || !(unsigned __int8)sub_27400(&v32, v9) )
        goto LABEL_26;
      v10 = v31;
      hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      v12 = hexdsp(268, v10);
      v13 = v32;
      v14 = *(_QWORD *)(v12 + 8) + *(_QWORD *)(v10 + 8);
      v15 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      if ( v14 < *(_QWORD *)(v15(268, v13) + 8) + *(_QWORD *)(v13 + 8) )
      {
        --v7;
        v8 = (__int64 *)(a1 + 8 * v7);
      }
      *(_QWORD *)(a1 + 8 * v6) = *v8;
      if ( v7 >= v29 )
      {
        v5 = a2;
        if ( (a3 & 1) != 0 || (a3 - 2) / 2 != v7 )
          goto LABEL_10;
        goto LABEL_20;
      }
      v6 = v7;
    }
  }
  if ( (a3 & 1) != 0 || a2 != (a3 - 2) / 2 )
    goto LABEL_24;
  v7 = a2;
LABEL_20:
  *(_QWORD *)(a1 + 8 * v7) = *(_QWORD *)(a1 + 8 * (2 * v7 + 2) - 8);
  v7 = 2 * v7 + 1;
LABEL_10:
  v16 = (v7 - 1) / 2;
  if ( v7 > v5 )
  {
    while ( 1 )
    {
      v17 = (__int64 *)(a1 + 8 * v16);
      if ( !(unsigned __int8)sub_27400(&v33, *v17) || !(unsigned __int8)sub_27400(&v34, a4) )
        break;
      v18 = v33;
      v19 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      v20 = v19(268, v18);
      v21 = v34;
      v22 = *(_QWORD *)(v20 + 8) + *(_QWORD *)(v18 + 8);
      v23 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
      v24 = v23(268, v21);
      v25 = (__int64 *)(a1 + 8 * v7);
      if ( v22 >= *(_QWORD *)(v24 + 8) + *(_QWORD *)(v21 + 8) )
      {
        v26 = (__int64 *)(a1 + 8 * v7);
        goto LABEL_18;
      }
      v7 = v16;
      *v25 = *v17;
      if ( v5 >= v16 )
      {
        v26 = (__int64 *)(a1 + 8 * v16);
        goto LABEL_18;
      }
      v16 = (v16 - 1) / 2;
    }
LABEL_26:
    if ( under_debugger )
      BUG();
    interr();
  }
  v5 = v7;
LABEL_24:
  v26 = (__int64 *)(a1 + 8 * v5);
LABEL_18:
  *v26 = a4;
  return v35 - __readfsqword(0x28u);
}
