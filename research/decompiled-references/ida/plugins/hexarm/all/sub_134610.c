__int64 __fastcall sub_134610(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 *v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r14
  char tinfo_property; // al
  char v16; // al
  __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  __int64 v20; // [rsp+0h] [rbp-58h]
  char v21; // [rsp+Fh] [rbp-49h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int64 v23; // [rsp+18h] [rbp-40h]

  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v4 = **(_QWORD ***)(a1 + 48);
  if ( !v4 )
    return 0;
  v5 = *(unsigned __int64 **)(a2 + 8);
  v6 = 24;
  v7 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
  {
LABEL_12:
    v10 = *(_QWORD *)(v6 + 8);
    if ( v5 != (unsigned __int64 *)v10 )
    {
      v11 = *((int *)v5 + 2);
      if ( (int)v11 > *(_DWORD *)(v10 + 8) )
        v11 = *(int *)(v10 + 8);
      if ( (int)v11 > 0 )
      {
        v21 = 0;
        v12 = 0;
        v20 = 80 * v11;
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
        v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
        do
        {
          v13 = v12 + *(_QWORD *)(v10 + 24);
          v14 = v12 + v5[3];
          if ( !(unsigned __int8)compare_tinfo() )
          {
            tinfo_property = get_tinfo_property();
            if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
            {
              v16 = get_tinfo_property();
              if ( (v16 & 0x3E) != 0 && (v16 & 0xFu) <= 8 )
              {
                copy_tinfo_t();
                v19 = *(_DWORD *)(v13 + 4);
                if ( v19 != *(_DWORD *)(v14 + 4) )
                {
                  sub_120220((char *)v14, v23, (v19 < *(_DWORD *)(v14 + 4)) + 9, v22, v19);
                  sub_133F60(v23, v14, *(_DWORD *)(v14 + 4));
                  v21 = 1;
                }
              }
            }
          }
          v12 += 80;
        }
        while ( v20 != v12 );
        if ( v21 )
        {
          v17 = *(_QWORD *)(a1 + 16);
          v18 = *(_DWORD *)(v17 + 24);
          BYTE1(v18) &= ~2u;
          LOBYTE(v18) = v18 | 0x80;
          *(_DWORD *)(v17 + 24) = v18;
        }
      }
    }
    return 0;
  }
  if ( (*(_BYTE *)v7 & 2) != 0 )
    return 0;
  v8 = *v5;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v7 + 24);
    v6 = v7 + 24;
    if ( v8 >= v9 )
      break;
    v7 = *(_QWORD *)(v7 + 8);
LABEL_9:
    if ( (*(_BYTE *)v7 & 2) != 0 )
      return 0;
  }
  if ( v9 < v8 )
  {
    v7 = *(_QWORD *)(v7 + 16);
    goto LABEL_9;
  }
  if ( v4 != (_QWORD *)v7 )
    goto LABEL_12;
  return 0;
}

