void *__fastcall sub_EF2D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  void *result; // rax

  if ( (int)a3 <= 0 )
  {
    if ( (*(_WORD *)(a2 + 20) & 0x9000) != 0 )
      sub_C93F0(a2, a2, a3, a4, a5, a6);
    else
      *(_WORD *)(a2 + 20) = 1;
    *(_QWORD *)(a2 + 8) = 0;
    return nullptr;
  }
  else
  {
    v6 = a3;
    if ( (int)a3 > *(_DWORD *)(a2 + 32) )
    {
      sub_E0020(a2, (unsigned int)a3, 0);
      result = *(void **)(a2 + 8);
    }
    else
    {
      result = *(void **)(a2 + 40);
      *(_QWORD *)(a2 + 8) = result;
    }
    *(_WORD *)(a2 + 20) = 0x8000;
    *(_QWORD *)a2 = *a1;
    if ( result )
    {
      memset(result, 0, v6);
      return *(void **)(a2 + 8);
    }
  }
  return result;
}
