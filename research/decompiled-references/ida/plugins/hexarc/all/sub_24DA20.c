__int64 __fastcall sub_24DA20(__int64 a1)
{
  __int64 v1; // rdi

  *(_QWORD *)(a1 + 40) = 0;
  v1 = a1 + 48;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 - 40) = 0;
  *(_OWORD *)(v1 - 24) = 0;
  return clear_tinfo_t();
}

