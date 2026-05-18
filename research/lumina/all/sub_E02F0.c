__int64 __fastcall sub_E02F0(__int64 a1)
{
  __int64 result; // rax

  result = sub_E0020(a1, (unsigned int)(*(_DWORD *)(a1 + 16) + 3), 1);
  if ( (_DWORD)result )
    return 7;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 16)) = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 16) + 1LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 16) + 2LL) = 0;
  *(_WORD *)(a1 + 20) |= 0x200u;
  return result;
}
