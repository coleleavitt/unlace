__int64 __fastcall sub_14620(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // r13
  __int64 v6; // rax

  if ( !(unsigned __int8)sub_8FD90(a3) )
    return 0;
  v5 = *(_DWORD **)(a1 + 16);
  if ( !(unsigned __int8)sub_90150(a3, v5 + 2) )
    return 0;
  v6 = sub_82460(a3);
  *v5 = *(_DWORD *)(v6 + 4);
  v5[1] = *(_DWORD *)(v6 + 8);
  **(_QWORD **)(a1 + 8) = a2;
  return 1;
}

