_QWORD *__fastcall sub_249C0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL) != -1 )
  {
    v2 = operator new(0x30u);
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)v2 = &off_A9F80;
    *(_QWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 40) = -1;
    *(_OWORD *)(v2 + 24) = 0;
    v3 = qvector_reserve(v2 + 16, 0, 1, 16);
    v4 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 16) = v3;
    *(_QWORD *)(v2 + 24) = v4 + 1;
    v5 = 16 * v4 + v3;
    *(_QWORD *)v5 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 28LL);
  }
  *a1 = v2;
  return a1;
}

