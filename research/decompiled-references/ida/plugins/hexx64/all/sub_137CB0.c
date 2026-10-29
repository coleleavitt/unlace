__int64 __fastcall sub_137CB0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a1;
  result = *a1 + 112 * a1[1];
  if ( *a1 != result )
  {
    while ( (*(_QWORD *)v3 != *(_QWORD *)a2
          || *(_DWORD *)(v3 + 8) != *(_DWORD *)(a2 + 8)
          || *(_DWORD *)(v3 + 12) != *(_DWORD *)(a2 + 12)
          || *(_DWORD *)(v3 + 16) != *(_DWORD *)(a2 + 16)
          || *(_DWORD *)(v3 + 104) != *(_DWORD *)(a2 + 104)
          || *(_DWORD *)(v3 + 24) != *(_DWORD *)(a2 + 24)
          || !sub_125B60((unsigned __int8 *)(v3 + 56), a2 + 56, 0, a3)
          || !sub_125B60((unsigned __int8 *)(v3 + 72), a2 + 72, 0, a3)
          || !sub_125B60((unsigned __int8 *)(v3 + 88), a2 + 88, 0, a3))
         && a2 != v3 )
    {
      v3 += 112;
      result = *a1 + 112 * a1[1];
      if ( v3 == result )
        return result;
    }
    return v3;
  }
  return result;
}

