__int64 __fastcall sub_1A8A0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax

  sub_48620(a1, (unsigned int)"GDB: prepare_to_pause_process\n", a3, a4, a5, a6);
  result = 0xFFFFFFFFLL;
  if ( *(int *)(a1 + 1360) <= 4 )
  {
    sub_39260(*(_QWORD *)(a1 + 864));
    *(_DWORD *)(a1 + 1360) = 1;
    return 1;
  }
  return result;
}

