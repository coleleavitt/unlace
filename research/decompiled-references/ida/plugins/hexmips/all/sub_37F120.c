__int64 __fastcall sub_37F120(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  result = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = result;
  return result;
}

