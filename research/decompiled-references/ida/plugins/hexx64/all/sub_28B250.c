__int64 __fastcall sub_28B250(__int64 a1, _QWORD *a2, __m128 a3)
{
  _QWORD *v3; // r14
  __int64 *v5; // r12
  __int64 *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  unsigned int v21; // r15d
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v34; // r15
  __int64 *v35; // rax
  int tinfo_size; // [rsp+0h] [rbp-48h]
  int v37; // [rsp+Ch] [rbp-3Ch]

  v3 = a2;
  v5 = (__int64 *)a2[4];
  v6 = (__int64 *)a2[3];
  v7 = a2[5];
  if ( !(unsigned __int8)v5[6]
    || !*(_BYTE *)(v7 + 48)
    || (a2 = (_QWORD *)&word_2, v34 = *(_QWORD *)(a1 + 72), (get_tinfo_property() & 0x3F) == 1)
    || (a2 = (_QWORD *)&word_2, (get_tinfo_property() & 0x3F) == 1)
    || (a2 = (_QWORD *)&byte_1, (unsigned __int8)sub_285160((__int64)v5, 1, *(_DWORD *)(v34 + 644)))
    || (a2 = (_QWORD *)(&dword_40 + 2), (unsigned __int8)sub_285160((__int64)v5, 66, 1))
    || (unsigned __int8)sub_285230((__int64)v5)
    || (a2 = (_QWORD *)&byte_1, (unsigned __int8)sub_285160(v7, 1, *(_DWORD *)(v34 + 644)))
    || (a2 = (_QWORD *)(&dword_40 + 2), (unsigned __int8)sub_285160(v7, 66, 1))
    || (v21 = sub_285230(v7), (_BYTE)v21)
    || (tinfo_size = get_tinfo_size(), v37 = get_tinfo_size(), !sub_11CA80(tinfo_size))
    && (a2 = (_QWORD *)v3[6], !(unsigned __int8)compare_tinfo())
    || !sub_11CA80(v37) && (a2 = (_QWORD *)v3[6], !(unsigned __int8)compare_tinfo()) )
  {
    sub_254DA0((__int64)v3);
    *((_DWORD *)v3 + 2) = 66;
    v10 = sub_241330((__int64)v3, (__int64)a2, v8, v9);
    v3[3] = v10;
    v13 = sub_2413C0((__int64)v10, *v6, v11, v12, *(double *)a3.m128_u64);
    if ( sub_241890(*(_QWORD *)(a1 + 72), (__int64)v6, v14, v15, v16) )
    {
      v6 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__int64)v6, v17, v18, v19, *(double *)a3.m128_u64);
      v35 = v5;
      v5 = (__int64 *)v7;
      v7 = (__int64)v35;
    }
    v20 = (__int64)v6;
    v21 = 1;
    v22 = sub_286930((__int64)v13, (__int64)v6, v17, v18);
    v25 = sub_241330((__int64)v13, v20, v23, v24);
    v26 = *(_QWORD *)(v22 + 64);
    *(_QWORD *)(v22 + 72) = v25;
    v29 = sub_2413C0(v26, *v5, v27, v28, *(double *)a3.m128_u64);
    v32 = sub_2413C0(*(_QWORD *)(v22 + 72), *(_QWORD *)v7, v30, v31, *(double *)a3.m128_u64);
    *((_DWORD *)v29 + 2) = 72;
    *((_DWORD *)v32 + 2) = 72;
    v29[3] = (__int64)v5;
    v32[3] = v7;
    sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a3);
  }
  return v21;
}

