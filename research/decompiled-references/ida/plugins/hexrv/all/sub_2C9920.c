__int64 __fastcall sub_2C9920(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &off_4B3F68;
  *(_DWORD *)(a1 + 8) = 0;
  copy_argloc();
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  sub_2B85D0(a1 + 48, a2 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  copy_argloc();
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a2 + 176);
  result = *(unsigned int *)(a2 + 184);
  *(_DWORD *)(a1 + 184) = result;
  return result;
}

