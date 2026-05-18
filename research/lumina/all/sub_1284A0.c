void __fastcall sub_1284A0(__int64 a1, __int64 a2, unsigned int a3, int a4, double a5)
{
  unsigned __int8 v5; // al
  int v6; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int8 **v10; // r12
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned int v13; // eax

  if ( !a2 )
    goto LABEL_5;
  v5 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 0xB0 )
  {
    v5 = *(_BYTE *)(a2 + 2);
    if ( v5 != 0xB1 )
      goto LABEL_4;
LABEL_7:
    v6 = **(_DWORD **)(a2 + 32);
    goto LABEL_8;
  }
  if ( v5 == 0xB1 )
    goto LABEL_7;
LABEL_4:
  if ( v5 != 0x8A )
    goto LABEL_5;
  v6 = **(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
LABEL_8:
  if ( v6 <= 1 )
  {
LABEL_5:
    if ( *(_QWORD *)(a1 + 16) )
      sub_127300(a1, (unsigned __int8 *)a2, a3, a5);
    return;
  }
  v8 = a3;
  if ( (*(_BYTE *)(a2 + 5) & 8) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = sub_123390(a1, (char *)a2);
    sub_E1710(v12, 80, v13, v8, a4 - 1);
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( a4 )
    {
      v10 = (unsigned __int8 **)(v9 + 8);
      v11 = v9 + 24LL * (unsigned int)(a4 - 1) + 32;
      do
      {
        if ( *(_QWORD *)(a1 + 16) )
          sub_127300(a1, *v10, v8, a5);
        v10 += 3;
        ++v8;
      }
      while ( v10 != (unsigned __int8 **)v11 );
    }
  }
}
