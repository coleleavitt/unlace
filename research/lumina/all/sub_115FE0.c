__int64 __fastcall sub_115FE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  int v4; // r13d
  _DWORD *v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // r12d
  unsigned __int32 v9; // eax
  unsigned int v12; // eax

  v3 = a2;
  v4 = a3;
  v6 = *(_DWORD **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
  {
    sub_CC740(a1);
    if ( (_DWORD)a2 != 2 )
      goto LABEL_3;
  }
  else if ( (_DWORD)a2 != 2 )
  {
    goto LABEL_3;
  }
  a2 = 0;
  v8 = sub_115FA0(*((_QWORD *)v6 + 2), 0, 0);
  if ( v8 )
    goto LABEL_10;
LABEL_3:
  v7 = *(_QWORD *)v6;
  v8 = *(_DWORD *)(*(_QWORD *)v6 + 48LL);
  if ( v8 )
    goto LABEL_10;
  if ( *(_DWORD *)(v7 + 128) > v4 )
  {
    a2 = v3;
    v12 = sub_10E540(v7, (_QWORD *)v3, v4);
    if ( v12 )
    {
      v8 = v12;
      goto LABEL_10;
    }
  }
  if ( v4 < 0 && (v6[10] & 0x10) != 0 )
  {
    v6[16] = 0;
    goto LABEL_18;
  }
  if ( !v6[16] )
LABEL_18:
    v8 = sub_1104B0((__int64)v6, a2);
  v9 = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 80LL) + 28LL));
  if ( !v9 )
    v9 = *(_DWORD *)(*(_QWORD *)v6 + 32LL);
  v6[16] = v9;
LABEL_10:
  if ( !*(_BYTE *)(a1 + 17) )
    return v8;
  if ( (*(_DWORD *)(a1 + 20))-- != 1 )
    return v8;
  sub_CC7D0(a1, a2, a3);
  return v8;
}
