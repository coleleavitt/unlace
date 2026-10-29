__int64 __fastcall sub_1949B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 result; // rax

  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a4;
  sub_194850(a1 + 16, a2);
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 192) = -4294967286LL;
  *(_DWORD *)(a1 + 208) = 0;
  v6 = (_QWORD *)j__qalloc_or_throw(24, a2, v4, v5);
  v6[1] = 0;
  *v6 = 0xFFFFFFFF00000000LL;
  v6[2] = -1;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 200) = v6;
  v8 = *(_QWORD *)(v7 + 1352);
  v9 = *(_QWORD *)(v7 + 1504);
  *(_BYTE *)v6 = 6;
  v10 = 8 * *(_DWORD *)(v9 + 84);
  if ( (unsigned __int64)v10 <= 0x3F )
    v8 &= ~(-1LL << v10);
  v6[1] = v8;
  result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1504LL) + 84LL);
  *(_DWORD *)(a1 + 196) = result;
  return result;
}

