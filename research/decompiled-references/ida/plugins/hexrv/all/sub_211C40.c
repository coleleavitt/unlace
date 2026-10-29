__int64 __fastcall sub_211C40(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 i; // r12

  result = sub_2B3AB0(*(_QWORD *)(a1 + 1504), a1 + 1256, *(_QWORD *)(a1 + 40));
  if ( (_BYTE)result )
  {
    result = *(_QWORD *)(a1 + 1264);
    v2 = *(_QWORD *)(a1 + 1256);
    for ( i = v2 + 96 * result; v2 != i; *(_QWORD *)(v2 - 16) = result )
    {
      v2 += 96;
      result = get_tinfo_size();
    }
    if ( (*(_BYTE *)(a1 + 1304) & 1) == 0 )
      *(_DWORD *)a1 &= ~1u;
  }
  return result;
}

