__int64 __fastcall sub_119750(__int64 a1, _BYTE *a2)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v11; // r13
  __int64 i; // rax
  unsigned int v13; // r12d
  int v14; // eax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD); // r9
  int v17; // edx
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // edx
  bool v25; // al
  int v26; // ecx
  unsigned __int32 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  unsigned __int32 v29; // [rsp+18h] [rbp-40h]
  int v30; // [rsp+1Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740(a1);
  if ( !*(_BYTE *)(v4 + 33) )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 8);
  v28 = *(_QWORD *)v11;
  for ( i = *(_QWORD *)(v11 + 16); i; i = *(_QWORD *)(i + 40) )
    *(_BYTE *)(i + 1) &= ~4u;
  if ( *(_BYTE *)(v11 + 34) )
    goto LABEL_4;
  v13 = *(_DWORD *)(v11 + 64);
  v14 = 0;
  if ( v13 > 1 )
    v14 = sub_CCA10((_DWORD *)(v11 + 52), (_DWORD *)(v11 + 56), v13);
  if ( v13 == v14 || v13 == (unsigned int)dword_241470 / *(_DWORD *)(v11 + 52) + 1 )
  {
    v26 = 70757;
LABEL_44:
    v6 = (__int64)"%s at line %d of [%.10s]";
    v8 = 11;
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v26,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    goto LABEL_7;
  }
  v15 = *(_QWORD *)a1;
  v16 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 336LL);
  v29 = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 80LL) + 36LL));
  if ( v16 )
  {
    v17 = *(_DWORD *)(v15 + 40);
    v18 = *(_QWORD **)(v15 + 32);
    if ( v17 > 0 && a1 != v18[1] )
    {
      v19 = v18 + 4;
      v20 = (__int64)&v18[4 * (unsigned int)(v17 - 1) + 4];
      do
      {
        v18 = v19;
        if ( (_QWORD *)v20 == v19 )
          break;
        v19 += 4;
      }
      while ( a1 != *(v19 - 3) );
    }
    v21 = v16(*(_QWORD *)(v15 + 320), *v18, v13, v29);
    if ( v29 <= v21 )
      v21 = v29;
    v30 = v21;
    if ( !v21 )
      goto LABEL_4;
  }
  else
  {
    v30 = v29;
  }
  v6 = v13;
  v22 = sub_CCA50(v11, v13, v30);
  v27 = v22;
  if ( v13 < v22 )
  {
    v26 = 70784;
    goto LABEL_44;
  }
  if ( v13 > v22 )
  {
    v6 = 0;
    v23 = sub_115FA0(*(_QWORD *)(v11 + 16), 0, 0);
    v8 = v23;
    if ( v23 )
    {
      v25 = v23 == 101;
    }
    else
    {
      do
      {
        v6 = v27;
        v24 = v13--;
        v8 = sub_1123D0(v11, v27, v24, v29 == v30);
      }
      while ( v27 < v13 && !v8 );
      v25 = v8 == 101 || v8 == 0;
    }
    if ( !v29 || !v25 )
      goto LABEL_33;
  }
  else if ( !v29 )
  {
    goto LABEL_4;
  }
  v8 = sub_10D290(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 112LL), v6);
  if ( v29 == v30 )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 80LL) + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 80LL) + 36LL) = 0;
  }
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 80LL) + 28LL) = _byteswap_ulong(v27);
  *(_BYTE *)(v11 + 35) = 1;
  *(_DWORD *)(v11 + 64) = v27;
LABEL_33:
  if ( v8 )
  {
    sub_10F210(v28);
    goto LABEL_7;
  }
LABEL_4:
  v5 = *(_QWORD *)v4;
  if ( *(_BYTE *)(v4 + 35) )
  {
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(v4 + 64);
    v5 = *(_QWORD *)v4;
  }
  v6 = (__int64)a2;
  v8 = sub_119290(v5, a2, 0);
LABEL_7:
  if ( *(_BYTE *)(a1 + 17) )
  {
    if ( (*(_DWORD *)(a1 + 20))-- == 1 )
      sub_CC7D0(a1, v6, v7);
  }
  return v8;
}
