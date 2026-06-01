__int64 __fastcall sub_7DE0(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v3; // ax

  v3 = a3 + 4 * *(_DWORD *)(a1 + 676) + 27;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 5LL) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

