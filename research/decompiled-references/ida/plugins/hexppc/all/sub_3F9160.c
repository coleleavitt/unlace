__int64 __fastcall sub_3F9160(__int64 a1)
{
  __int64 v1; // rax
  const char *v3; // rdx
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  int v7; // edx
  char v8; // al
  char v9; // dl
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  char v13; // al

  v1 = *(_QWORD *)(a1 + 96);
  v3 = "HEXPPC64";
  if ( !*(_BYTE *)(v1 + 144) )
    v3 = "HEXPPC";
  *(_QWORD *)(a1 + 24) = v3;
  if ( *(_BYTE *)(v1 + 144) )
  {
    v4 = 32;
    v5 = 16;
    v6 = 8;
  }
  else
  {
    v4 = 16;
    v5 = 8;
    v6 = 4;
  }
  *(_DWORD *)(a1 + 80) = v6;
  v7 = 4;
  if ( *(_BYTE *)(v1 + 144) )
    v7 = 8;
  *(_DWORD *)(a1 + 84) = v7;
  *(_DWORD *)(a1 + 88) = v5;
  *(_DWORD *)(a1 + 92) = v4;
  v8 = sub_CC530();
  v9 = 0;
  v10 = v8 & 0xF;
  *(_BYTE *)(a1 + 4412) = v10 == 1;
  if ( v10 != 1 )
    v9 = getinf_flag();
  v11 = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(a1 + 4413) = v9;
  v12 = 8;
  if ( !*(_BYTE *)(v11 + 144) && !*(_BYTE *)(a1 + 4412) )
    v12 = 4;
  *(_DWORD *)(a1 + 4408) = v12;
  v13 = 0;
  if ( *(_DWORD *)(v11 + 152) == 18 )
    v13 = sub_326550(v11);
  *(_BYTE *)(a1 + 4414) = v13;
  sub_3F76E0(a1);
  sub_3F7810(a1);
  return 1;
}

