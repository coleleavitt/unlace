bool __fastcall sub_3C9600(__int64 a1, __int64 a2)
{
  char *v2; // rax
  int v3; // ecx
  int v4; // edx

  v2 = (char *)&unk_40B204;
  v3 = *(_DWORD *)(a2 + 56);
  v4 = 1;
  while ( v4 <= v3 )
  {
    if ( v2 == "$ mbui.view_id" )
      return 0;
    v4 = *(_DWORD *)v2;
    v2 += 4;
  }
  return v3 != v4;
}

