__int64 __fastcall sub_1CB40(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v5; // r12d
  __int64 v6; // r12
  char s2[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( !sub_1AA40((_QWORD *)a1, a2, a3) || qlread() != 4 )
    return 0;
  qlseek();
  v5 = *(_DWORD *)s2;
  if ( *(_DWORD *)s2 == -822415874 || *(_DWORD *)s2 == -17958194 )
    return 1;
  if ( *(_DWORD *)s2 == -805638658 || *(_DWORD *)s2 == -17958193 )
    return 2;
  if ( !strncmp("!<arch>\n", s2, 4u) )
  {
    v6 = qlseek();
    v3 = sub_1CA70(*(_QWORD *)(a1 + 48), v6, 0) ? 3 : 0;
    qlseek();
    return v3;
  }
  if ( v5 == 846755426 || v5 == 1886220131 )
  {
    *(_BYTE *)(a1 + 112) = v5 == 1886220131;
    return 4;
  }
  else
  {
    return 0;
  }
}

