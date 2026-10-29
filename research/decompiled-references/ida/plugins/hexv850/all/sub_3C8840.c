bool __fastcall sub_3C8840(__int64 a1, __int64 a2)
{
  char *v2; // rax
  int v3; // ecx
  int v4; // edx
  int v5; // edi

  v2 = (char *)&unk_40D100;
  v3 = *(_DWORD *)(a2 + 56);
  v4 = 1;
  while ( 1 )
  {
    v5 = v4;
    v4 = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 >= v3 )
      break;
    v2 += 4;
    if ( v2 == "$ mbui.view_id" )
      return v3 != v4;
  }
  return v3 != v5;
}

