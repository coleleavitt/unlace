__int64 __fastcall sub_23E3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx

  v4 = j__qalloc_or_throw(64, a2, a3, a4);
  *(_QWORD *)v4 = -1;
  *(_QWORD *)(v4 + 8) = -4294967230LL;
  *(_QWORD *)(v4 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  v7 = j__qalloc_or_throw(32, a2, v5, v6);
  *(_DWORD *)(v7 + 8) = 70;
  *(_QWORD *)(v7 + 12) = -1;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v4 + 24) = v7;
  *(_QWORD *)v7 = a1;
  *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) = 82;
  v10 = qalloc_or_throw(24, a2, v8, v9);
  *(_OWORD *)(v10 + 8) = 0;
  v11 = (_QWORD *)v10;
  *(_QWORD *)v10 = 0;
  v12 = qvector_reserve(v10, 0, 1, 8);
  v13 = v11[1];
  *v11 = v12;
  *(_QWORD *)(v12 + 8 * v13) = a1;
  ++v11[1];
  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL) = v11;
  *(_QWORD *)v4 = a1;
  return v4;
}

