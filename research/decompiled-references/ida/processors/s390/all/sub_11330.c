__int64 __fastcall sub_11330(__int64 a1)
{
  __int16 v1; // ax
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 != 392 && v1 != 397 )
    return 0;
  result = same_value_jpt(a1, a1 + 56, 0);
  if ( !(_BYTE)result )
    return 0;
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = *(_WORD *)(a1 + 104) + 1;
  if ( *(_WORD *)(a1 + 40) == 392 )
    v3 = *(_QWORD *)(a1 + 152);
  else
    v3 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 42);
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = v3;
  return result;
}

