__int64 __fastcall sub_12190(__int64 a1, int *a2)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  _BOOL8 v6; // rdx
  int v8; // esi

  v2 = *a2;
  LOBYTE(v2) = 0;
  v3 = *a2 & 0x7F;
  *a2 = v2;
  if ( (unsigned int)v3 <= 0x23 )
  {
    if ( (_DWORD)v3 )
    {
      v4 = 0x88200007ELL;
      if ( _bittest64(&v4, v3) )
        goto LABEL_4;
    }
LABEL_10:
    v8 = v3;
    LODWORD(v3) = 0;
    sub_11BE0((__int64)"Unknown mcpu field (%u). Ignored", v8);
    goto LABEL_4;
  }
  if ( (_DWORD)v3 != 51 && (unsigned int)(v3 - 101) > 6 )
    goto LABEL_10;
LABEL_4:
  netnode_check(a1 + 348, "$ atmel", 0, 1);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 1;
  if ( *(_BYTE *)(v5 + 248) && *(_QWORD *)(v5 + 120) )
    v6 = *(_WORD *)(v5 + 520) != 1;
  sub_101F0(0xBB8u, (unsigned int)v3, v6);
  return 0;
}
