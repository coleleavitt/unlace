__int64 __fastcall sub_265C0(__int64 a1, unsigned __int64 a2)
{
  int v2; // r12d
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]

  if ( *(_QWORD *)(a1 + 120)
    && (a2 == *(_QWORD *)(a1 + 224) || a2 >= *(_QWORD *)(a1 + 224) && a2 < *(_QWORD *)(a1 + 232))
    || *(_QWORD *)(a1 + 248) && rangeset_t_find_range(a1 + 240) )
  {
    BYTE4(v8) = 1;
    LODWORD(v8) = *(_DWORD *)(a1 + 116);
    return v8;
  }
  if ( *(_QWORD *)(a1 + 32) && rangeset_t_find_range(a1 + 24) )
  {
    v5 = sub_1DF80(*(__int64 **)(a1 + 8), a2);
    v4 = HIDWORD(v5);
    if ( BYTE4(v5) )
    {
      HIDWORD(v9) = HIDWORD(v5);
      v2 = v5;
      goto LABEL_9;
    }
    v6 = sub_264C0(a1, a2);
    v4 = HIDWORD(v6);
    if ( BYTE4(v6) )
    {
      HIDWORD(v9) = HIDWORD(v6);
      v2 = v6;
      goto LABEL_9;
    }
    if ( *(_QWORD *)(a1 + 32) && rangeset_t_find_range(a1 + 24) )
    {
      v7 = sub_1DEC0(*(__int64 **)(a1 + 8), a2);
      LOBYTE(v4) = 1;
      v2 = v7;
      goto LABEL_9;
    }
  }
  LOBYTE(v4) = 0;
LABEL_9:
  LODWORD(v9) = v2;
  BYTE4(v9) = v4;
  return v9;
}
