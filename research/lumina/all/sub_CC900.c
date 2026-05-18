__int64 __fastcall sub_CC900(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ebp
  int v4; // r12d
  __int64 result; // rax
  __int64 v6; // rdx

  if ( !*(_BYTE *)(a1 + 17) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(unsigned __int8 *)(v2 + 38);
    v4 = *(_DWORD *)(v2 + 52) - *(_DWORD *)(v2 + 56);
LABEL_3:
    result = (unsigned int)v4;
    if ( v3 >= v4 )
      return (unsigned int)v3;
    return result;
  }
  sub_CC740(a1);
  v6 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned __int8 *)(v6 + 38);
  v4 = *(_DWORD *)(v6 + 52) - *(_DWORD *)(v6 + 56);
  if ( !*(_BYTE *)(a1 + 17) )
    goto LABEL_3;
  if ( (*(_DWORD *)(a1 + 20))-- != 1 )
    goto LABEL_3;
  sub_CC7D0(a1, a2, v6);
  result = (unsigned int)v4;
  if ( v3 >= v4 )
    return (unsigned int)v3;
  return result;
}
