_QWORD *__fastcall sub_24CCD0(__int64 a1, __int64 a2, _QWORD *a3, char a4, double a5)
{
  __int64 v8; // rax
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rbx
  int v20; // [rsp+4h] [rbp-54h]
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22[9]; // [rsp+10h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  v8 = sub_24CBC0(a1, a2, a3, a5);
  if ( v8 )
    return sub_24AF50(a1, v8, a2, (__int64)a3, a4, a5);
  v20 = 8 * (*(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68));
  sub_32C430(v22, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 36), 2);
  v10 = *(__int64 **)(a2 + 24);
  v21 = sub_249AF0(a1, v10, a2 + 32, v22, v22, 0, a5);
  v13 = j__qalloc_or_throw(64, (__int64)v10, v11, v12);
  *(_QWORD *)v13 = -1;
  v14 = v13;
  *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v13 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  *(_OWORD *)(v13 + 24) = 0;
  *(_QWORD *)v13 = *(_QWORD *)(a2 + 24);
  v15 = *(_QWORD *)(a1 + 328);
  sub_240A20(v13, v15, *(_QWORD *)(a1 + 176), v20, *(unsigned __int8 *)(v15 + 130), 1, 0.0);
  v18 = j__qalloc_or_throw(64, v15, v16, v17);
  *(_QWORD *)v18 = -1;
  *(_DWORD *)(v18 + 8) = 33;
  *(_QWORD *)(v18 + 12) = -1;
  *(_QWORD *)(v18 + 32) = v14;
  *(_QWORD *)(v18 + 24) = v21;
  *(_QWORD *)(v18 + 40) = 0;
  *(_QWORD *)(v18 + 48) = 0;
  *(_DWORD *)(v18 + 56) = 0;
  v19 = sub_24AE20(a1, a2, v18, a3, a4, 0.0);
  clear_tinfo_t();
  return v19;
}

