__int64 __fastcall sub_14680(__int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // edx

  sub_14600(a1, a3);
  result = *a1;
  v7 = *a1 + 16 * a1[1];
  if ( *a1 != v7 )
  {
    do
    {
      *(_BYTE *)(result + 4) = *(_BYTE *)(a2 + 4);
      *(_BYTE *)(result + 5) = *(_BYTE *)(a2 + 5);
      v9 = *(_DWORD *)a2;
      if ( a4 )
      {
        *(_DWORD *)result = _byteswap_ulong(v9);
        *(_WORD *)(result + 6) = __ROL2__(*(_WORD *)(a2 + 6), 8);
        v8 = _byteswap_ulong(*(_DWORD *)(a2 + 8));
      }
      else
      {
        *(_DWORD *)result = v9;
        *(_WORD *)(result + 6) = *(_WORD *)(a2 + 6);
        v8 = *(unsigned int *)(a2 + 8);
      }
      *(_QWORD *)(result + 8) = v8;
      result += 16;
      a2 += 12;
    }
    while ( v7 != result );
  }
  return result;
}

