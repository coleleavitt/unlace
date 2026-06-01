__int64 __fastcall sub_2B8950(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  copy_argloc();
  v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 16) = v2;
  sub_2A9AA0((_QWORD *)(a1 + 24), a2 + 24);
  *(_QWORD *)(a1 + 48) = 0;
  copy_tinfo_t();
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  sub_2A9AA0((_QWORD *)(a1 + 56), a2 + 56);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  result = *(unsigned int *)(a2 + 88);
  *(_DWORD *)(a1 + 88) = result;
  return result;
}

