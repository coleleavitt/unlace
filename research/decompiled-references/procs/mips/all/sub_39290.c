unsigned __int64 __fastcall sub_39290(__int64 a1)
{
  int v1; // eax
  char v2; // dl
  _BYTE *v3; // rdx
  _BYTE v5[2]; // [rsp+2h] [rbp-16h] BYREF
  __int16 v6; // [rsp+4h] [rbp-14h]
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 252);
  v7 = __readfsqword(0x28u);
  if ( (v1 & 0x14) != 0 && (v2 = *(_BYTE *)(a1 + 256)) != 0 )
  {
    v5[0] = 46;
    v5[1] = v2;
    if ( v2 == 112 && (v1 & 4) != 0 )
      v6 = 115;
    else
      LOBYTE(v6) = 0;
    v3 = v5;
  }
  else
  {
    v3 = nullptr;
    if ( *(_WORD *)(a1 + 248) == 423 )
      v3 = *(&off_70FC0 + (((unsigned int)get_dword(*(_QWORD *)(a1 + 240)) >> 6) & 0x1F));
  }
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 8, v3);
  return v7 - __readfsqword(0x28u);
}
