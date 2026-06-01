bool __fastcall sub_41740(__int64 a1)
{
  __pid_t v1; // edi

  v1 = *(_DWORD *)(a1 + 36);
  return v1 && kill(v1, 2) == 0;
}

