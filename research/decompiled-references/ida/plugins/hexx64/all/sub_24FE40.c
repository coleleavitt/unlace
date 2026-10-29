__int64 __fastcall sub_24FE40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 *v9; // rbx
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-50h]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v12 = a2;
  v13[1] = __readfsqword(0x28u);
  v5 = *(__int64 **)(a2 + 56);
  if ( !v5 )
    goto LABEL_10;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      a2 = (__int64)v5;
      v13[0] = 0;
      v9 = sub_24EE70(a1, v5, (__int64)v13, 1u, a5);
      clear_tinfo_t();
      if ( !v6 )
        break;
      v7 = j__qalloc_or_throw(64, (__int64)v5, a3, a4);
      *(_QWORD *)v7 = -1;
      v8 = (_QWORD *)v7;
      *(_DWORD *)(v7 + 8) = 1;
      *(_QWORD *)(v7 + 32) = v6;
      v6 = v7;
      *(_QWORD *)(v7 + 12) = -1;
      *(_QWORD *)(v7 + 24) = v9;
      *(_QWORD *)(v7 + 40) = 0;
      *(_QWORD *)(v7 + 48) = 0;
      *(_DWORD *)(v7 + 56) = 0;
      a2 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
      sub_2441C0(v7, a2, 0, a5);
      a3 = *v9;
      *v8 = *v9;
      v5 = (__int64 *)v5[2];
      if ( !v5 )
        goto LABEL_6;
    }
    v5 = (__int64 *)v5[2];
    v6 = (__int64)v9;
  }
  while ( v5 );
LABEL_6:
  if ( !v6 )
  {
LABEL_10:
    v11 = j__qalloc_or_throw(64, a2, a3, a4);
    *(_QWORD *)v11 = -1;
    v6 = v11;
    *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 48) = 0;
    *(_DWORD *)(v11 + 56) = 0;
    *(_OWORD *)(v11 + 24) = 0;
  }
  if ( (*(_BYTE *)(v12 + 24) & 4) != 0 )
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(v12 + 72);
  return v6;
}

