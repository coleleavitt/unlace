unsigned __int64 __fastcall sub_849A0(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned int v6; // ecx

  v2 = *a1;
  v3 = *a2;
  if ( ((*a2 ^ *a1) & 0x8000000000000000LL) != 0LL )
    return (v3 >> 63) - (v2 >> 63);
  v4 = *(_QWORD *)(a2[1] + 8LL * ((v3 & 0x8000000000000000LL) == 0LL) + 224) + (v3 & 0x7FFFFFFFFFFFFFFFLL);
  v5 = *(_QWORD *)(a1[1] + 8LL * ((v2 & 0x8000000000000000LL) == 0LL) + 224) + (v2 & 0x7FFFFFFFFFFFFFFFLL);
  v6 = -1;
  if ( v4 >= v5 )
    return v5 < v4;
  return v6;
}

