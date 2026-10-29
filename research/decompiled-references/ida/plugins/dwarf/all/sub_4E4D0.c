__int64 __fastcall sub_4E4D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbx

  sub_4DC70(**(_QWORD **)(a1 + 8), *(__int64 **)(a1 + 8), a2, a2 + 8);
  v4 = *(_QWORD *)(a2 + 392);
  v5 = 0;
  if ( v4 )
  {
    v6 = *(_QWORD *)(a2 + 384) + 104 * v4 - 104;
    LOBYTE(v5) = *(_QWORD *)(v6 + 40) + (int)sub_5E020((_DWORD *)(v6 + 48), 1u, **(_QWORD ***)(a1 + 8)) < a3;
  }
  return v5;
}

