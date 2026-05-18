__int64 __fastcall sub_21623(__int64 a1)
{
  __int64 v2; // rbx
  int i; // ebp
  __int64 v4; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  for ( i = *(_DWORD *)(a1 + 40); i > 0; --i )
  {
    v4 = *(_QWORD *)(v2 + 8);
    if ( v4 )
      result = sub_CCF50(v4, *(unsigned __int8 *)(v2 + 16) | *(_DWORD *)(a1 + 48) & 0x38u);
    v2 += 32;
  }
  return result;
}
