_QWORD *__fastcall sub_247910(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rbx
  int v12; // [rsp+4h] [rbp-54h]
  __int64 v13; // [rsp+8h] [rbp-50h]
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v6 = sub_247800(a1, a2, a3);
  if ( v6 )
    return sub_245B90(a1, v6, a2, (__int64)a3, a4);
  v12 = 8 * (*(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68));
  sub_3269C0(v14, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36), 2);
  v13 = sub_244730(a1, *(__int64 **)(a2 + 24), a2 + 32, v14, v14, 0);
  v8 = j__qalloc_or_throw();
  *(_QWORD *)v8 = -1;
  v9 = v8;
  *(_QWORD *)(v8 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_OWORD *)(v8 + 24) = 0;
  *(_QWORD *)v8 = *(_QWORD *)(a2 + 24);
  sub_23B660(
    v8,
    *(_QWORD *)(a1 + 328),
    *(_QWORD *)(a1 + 176),
    v12,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL),
    1u);
  v10 = j__qalloc_or_throw();
  *(_QWORD *)v10 = -1;
  *(_DWORD *)(v10 + 8) = 33;
  *(_QWORD *)(v10 + 12) = -1;
  *(_QWORD *)(v10 + 32) = v9;
  *(_QWORD *)(v10 + 24) = v13;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  v11 = sub_245A60(a1, a2, v10, a3, a4);
  clear_tinfo_t();
  return v11;
}

