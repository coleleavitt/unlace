__int64 __fastcall sub_F8600(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  __int64 result; // rax

  if ( !a2
    || !a3
    || *(_BYTE *)(a2 + 32) != *(_BYTE *)(a3 + 32)
    || *(_BYTE *)(a2 + 33) != *(_BYTE *)(a3 + 33)
    || *(_BYTE *)(a2 + 34) != *(_BYTE *)(a3 + 34)
    || *(_BYTE *)(a2 + 36) != *(_BYTE *)(a3 + 36) )
  {
    return 1;
  }
  if ( (unsigned int)sub_F80F0(a1, *(char **)(a2 + 40), *(_QWORD *)(a3 + 40), 0xFFFFFFFF, a5)
    || (unsigned int)sub_F80F0(a1, *(char **)(a2 + 48), *(_QWORD *)(a3 + 48), 0xFFFFFFFF, a5) )
  {
    return 1;
  }
  result = sub_F8530(*(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16), 0xFFFFFFFF, a5);
  if ( !(_DWORD)result )
  {
    result = sub_F8530(*(_QWORD *)(a2 + 24), *(_QWORD *)(a3 + 24), 0xFFFFFFFF, a5);
    if ( !(_DWORD)result )
    {
      if ( a4 )
        return sub_F80F0(a1, *(char **)(a2 + 72), *(_QWORD *)(a3 + 72), 0xFFFFFFFF, a5);
    }
  }
  return result;
}
