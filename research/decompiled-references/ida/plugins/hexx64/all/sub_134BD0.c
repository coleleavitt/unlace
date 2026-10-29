__int64 __fastcall sub_134BD0(__int64 a1, __int64 a2, __m128i a3)
{
  _QWORD *v5; // rdx
  unsigned __int64 *v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // r14
  char tinfo_property; // al
  char v17; // al
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  __int64 v21; // [rsp+0h] [rbp-58h]
  char v22; // [rsp+Fh] [rbp-49h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  unsigned __int64 *v24; // [rsp+18h] [rbp-40h]

  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v5 = **(_QWORD ***)(a1 + 48);
  if ( !v5 )
    return 0;
  v6 = *(unsigned __int64 **)(a2 + 8);
  v7 = 24;
  v8 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v8 )
  {
LABEL_12:
    v11 = *(_QWORD *)(v7 + 8);
    if ( v6 != (unsigned __int64 *)v11 )
    {
      v12 = *((int *)v6 + 2);
      if ( (int)v12 > *(_DWORD *)(v11 + 8) )
        v12 = *(int *)(v11 + 8);
      if ( (int)v12 > 0 )
      {
        v22 = 0;
        v13 = 0;
        v21 = 80 * v12;
        v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
        v24 = *(unsigned __int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
        do
        {
          v14 = v13 + *(_QWORD *)(v11 + 24);
          v15 = v13 + v6[3];
          if ( !(unsigned __int8)compare_tinfo() )
          {
            tinfo_property = get_tinfo_property();
            if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
            {
              v17 = get_tinfo_property();
              if ( (v17 & 0x3E) != 0 && (v17 & 0xFu) <= 8 )
              {
                copy_tinfo_t();
                v20 = *(_DWORD *)(v14 + 4);
                if ( v20 != *(_DWORD *)(v15 + 4) )
                {
                  sub_1207E0((char *)v15, v24, (unsigned int)(v20 < *(_DWORD *)(v15 + 4)) + 9, v23, v20, a3);
                  sub_134520(v24, v15, *(_DWORD *)(v15 + 4));
                  v22 = 1;
                }
              }
            }
          }
          v13 += 80;
        }
        while ( v21 != v13 );
        if ( v22 )
        {
          v18 = *(_QWORD *)(a1 + 16);
          v19 = *(_DWORD *)(v18 + 24);
          BYTE1(v19) &= ~2u;
          LOBYTE(v19) = v19 | 0x80;
          *(_DWORD *)(v18 + 24) = v19;
        }
      }
    }
    return 0;
  }
  if ( (*(_BYTE *)v8 & 2) != 0 )
    return 0;
  v9 = *v6;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v8 + 24);
    v7 = v8 + 24;
    if ( v9 >= v10 )
      break;
    v8 = *(_QWORD *)(v8 + 8);
LABEL_9:
    if ( (*(_BYTE *)v8 & 2) != 0 )
      return 0;
  }
  if ( v10 < v9 )
  {
    v8 = *(_QWORD *)(v8 + 16);
    goto LABEL_9;
  }
  if ( v5 != (_QWORD *)v8 )
    goto LABEL_12;
  return 0;
}

