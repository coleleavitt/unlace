__int64 __fastcall sub_530A0(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v3; // dl
  char v4; // dl

  *(_DWORD *)(a1 + 48) = 0;
  v2 = sub_309E0((_QWORD *)a1);
  v3 = *(_BYTE *)(a1 + 112) & 0xF;
  if ( (v2 & 0xFFFFFF0F) != 0 || v2 == 192 )
  {
    v4 = v3 | 0xC0;
  }
  else
  {
    v4 = v2 | v3;
    v2 = 0;
  }
  *(_BYTE *)(a1 + 112) = v4;
  *(_DWORD *)(a1 + 52) = v2;
  return create_tinfo(a2, 12, 12, a1 + 24);
}
