__int64 __fastcall sub_77C0(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  char v4; // di
  __int64 v5; // rsi
  __int64 v6; // rdi

  v3 = 16;
  v4 = a2 >> *(_DWORD *)(a1 + 28);
  v5 = (v4 & 3u) - 1;
  v6 = v4 & 4;
  if ( (unsigned int)v5 <= 2 )
    v3 = qword_CDA0[v5];
  if ( v6 )
    v3 = -v3;
  *a3 = v3;
  return 0;
}

