__int64 __fastcall sub_50F0(_QWORD *a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rdx
  __int64 *v5; // r14
  unsigned __int16 *v6; // rbx
  int v7; // r12d
  int v8; // ecx
  __int64 *v9; // rax
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // r14
  int v13; // r12d
  unsigned __int16 v14; // si
  int v15; // ecx

  v3 = *((_WORD *)a1 + 124);
  v4 = a1[77];
  if ( v3 == 96 )
  {
    v11 = (unsigned __int16 *)qword_A8F0;
    goto LABEL_12;
  }
  if ( v3 > 0x60u )
  {
    if ( v3 != 97 )
      goto LABEL_16;
    v11 = asc_A8D0;
LABEL_12:
    *(_BYTE *)(v4 + 224) = 0;
    v12 = v11 + 8;
    v13 = 128;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
    do
    {
      v14 = *v11;
      v15 = v13;
      ++v11;
      v13 >>= 1;
      sub_4FF0(a1, v14, *(_QWORD *)(a2 + 8), v15);
    }
    while ( v11 != v12 );
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
  }
  if ( v3 == 94 )
  {
    *(_BYTE *)(v4 + 224) = 0;
    v5 = qword_A900;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
LABEL_7:
    v6 = (unsigned __int16 *)v5 + 7;
    v7 = 1;
    do
    {
      v8 = v7;
      v7 *= 2;
      sub_4FF0(a1, *v6, *(_QWORD *)(a2 + 8), v8);
      v9 = (__int64 *)v6--;
    }
    while ( v5 != v9 );
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 41);
  }
  if ( v3 == 95 )
  {
    *(_BYTE *)(v4 + 224) = 0;
    v5 = qword_A8E0;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 40);
    goto LABEL_7;
  }
LABEL_16:
  if ( under_debugger )
    BUG();
  interr();
  return sub_5240(10018);
}

