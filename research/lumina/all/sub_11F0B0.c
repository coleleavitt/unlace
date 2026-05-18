__int64 __fastcall sub_11F0B0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 *v7; // rax
  __int64 v8; // rbp

  v4 = *(_QWORD *)a1;
  v5 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v6 & 0xFFFFFFFFFFFFFFBBLL | 0x40;
  sub_CFDC0(a1, a2, 0);
  *(_QWORD *)(v4 + 48) = v6;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    while ( *(_QWORD *)(v5 + 80) )
      v5 = *(_QWORD *)(v5 + 80);
    v7 = sub_DC1C0(v4, 0x68u);
    v8 = (__int64)v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 11) = 1;
      *v7 = 0;
      *((_WORD *)v7 + 29) = 200;
      sub_11EBA0(*(_QWORD *)a1, *(int **)(v5 + 32), (_WORD *)v7 + 27, (__int64 **)v7 + 1);
      sub_F41F0(a1, v8, v5, a3);
      *(_WORD *)(v8 + 52) = -1;
      if ( !*(_BYTE *)(v4 + 103) )
        return v8;
      sub_D8230(v4, (_QWORD *)v8);
    }
  }
  return 0;
}
