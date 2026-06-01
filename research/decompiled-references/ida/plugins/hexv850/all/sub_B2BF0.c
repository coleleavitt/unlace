_BOOL8 __fastcall sub_B2BF0(__int64 a1, __int64 a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( *(_BYTE *)a2 == 9 )
    return *(_QWORD *)(**(_QWORD **)(a1 + 56) + 8LL * *(int *)(*(_QWORD *)(a2 + 8) + 16LL)) == *(_QWORD *)(a1 + 48);
  return result;
}

