__int64 __fastcall sub_18E2F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 result; // rax

  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a4;
  sub_18E190(a1 + 16, a2);
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 192) = -4294967286LL;
  *(_DWORD *)(a1 + 208) = 0;
  v4 = (_QWORD *)j__qalloc_or_throw();
  v4[1] = 0;
  *v4 = 0xFFFFFFFF00000000LL;
  v4[2] = -1;
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 200) = v4;
  v6 = *(_QWORD *)(v5 + 1352);
  v7 = *(_QWORD *)(v5 + 1504);
  *(_BYTE *)v4 = 6;
  v8 = 8 * *(_DWORD *)(v7 + 84);
  if ( (unsigned __int64)v8 <= 0x3F )
    v6 &= ~(-1LL << v8);
  v4[1] = v6;
  result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 1504LL) + 84LL);
  *(_DWORD *)(a1 + 196) = result;
  return result;
}

