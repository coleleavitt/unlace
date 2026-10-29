_QWORD *__fastcall sub_24B220(__int64 a1, __int64 a2, int a3, _QWORD *a4, _QWORD *a5, char a6, double a7)
{
  int v10; // edx
  __int64 v11; // rsi
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v10 = *(_DWORD *)(a2 + 36);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
  v24[1] = __readfsqword(0x28u);
  sub_32C270(v24, v11, v10);
  v13 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, v24, 0, a7);
  clear_tinfo_t();
  if ( a3 == 49 )
  {
    v21 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v13, v14, v15, v16, a7);
  }
  else
  {
    v17 = 2;
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    {
      sub_32C430(v24, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 36), (a3 != 47) + 1);
      v17 = *(_QWORD *)(a1 + 328);
      sub_246B40(v13, v17, v24, a7);
      clear_tinfo_t();
    }
    v20 = j__qalloc_or_throw(64, v17, v18, v19);
    *(_QWORD *)v20 = -1;
    v21 = (_QWORD *)v20;
    *(_DWORD *)(v20 + 8) = a3;
    *(_QWORD *)(v20 + 12) = -1;
    *(_QWORD *)(v20 + 24) = v13;
    *(_QWORD *)(v20 + 32) = 0;
    *(_QWORD *)(v20 + 40) = 0;
    *(_QWORD *)(v20 + 48) = 0;
    *(_DWORD *)(v20 + 56) = 0;
  }
  return sub_24AE20(a1, a2, (__int64)v21, a5, a6, a7);
}

