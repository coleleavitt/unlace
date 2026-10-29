__int64 __fastcall sub_F3950(__int64 a1, unsigned __int8 *a2, double a3)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  unsigned __int8 *v7; // rax
  __int64 v8; // rbp
  __int64 v10; // rax
  unsigned __int8 *v11; // rdx
  int v12; // ecx
  unsigned __int8 **v13; // rax
  unsigned __int8 **v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int16 v17; // dx
  _BYTE *i; // rax

  v4 = *(_QWORD *)a1;
  if ( !a2 )
    return 0;
LABEL_2:
  v5 = *a2;
  if ( v5 != 176 )
    goto LABEL_4;
LABEL_3:
  v5 = a2[2];
LABEL_4:
  while ( 1 )
  {
    if ( ((v5 - 167) & 0xFFFFFFFD) == 0 || v5 == 77 )
    {
      v6 = *((_QWORD *)a2 + 8);
      if ( v6 )
        break;
    }
    switch ( v5 )
    {
      case 36:
      case 174:
        a2 = *((unsigned __int8 **)a2 + 2);
        goto LABEL_17;
      case 177:
        a2 = *(unsigned __int8 **)(*((_QWORD *)a2 + 4) + 8LL);
        goto LABEL_17;
      case 113:
        v8 = sub_F2280(a1, *(_BYTE *)(v4 + 100), 0, *((unsigned __int8 **)a2 + 1), a3);
        goto LABEL_38;
    }
    if ( (a2[5] & 1) == 0 )
      return 0;
    v7 = *((unsigned __int8 **)a2 + 2);
    if ( !v7 || (v7[5] & 1) == 0 )
    {
      v10 = *((_QWORD *)a2 + 4);
      v11 = *((unsigned __int8 **)a2 + 3);
      a2 = v11;
      if ( v10 )
      {
        if ( !*(_BYTE *)(v4 + 103) )
        {
          v12 = *(_DWORD *)v10;
          if ( *(int *)v10 > 0 )
          {
            a2 = *(unsigned __int8 **)(v10 + 8);
            if ( (a2[5] & 1) == 0 )
            {
              v13 = (unsigned __int8 **)(v10 + 32);
              v14 = &v13[3 * (unsigned int)(v12 - 1)];
              while ( v14 != v13 )
              {
                a2 = *v13;
                v13 += 3;
                if ( (a2[5] & 1) != 0 )
                  goto LABEL_17;
              }
              a2 = v11;
            }
          }
        }
      }
LABEL_17:
      if ( a2 )
        goto LABEL_2;
      return 0;
    }
    a2 = *((unsigned __int8 **)a2 + 2);
    v5 = *v7;
    if ( v5 == 176 )
      goto LABEL_3;
  }
  v15 = *((__int16 *)a2 + 24);
  if ( (v15 & 0x8000u) != 0LL )
    return 0;
  v16 = *(_QWORD *)(v6 + 8) + 16 * v15;
  v17 = *(_WORD *)(v16 + 14);
  if ( (v17 & 0x200) == 0 )
    goto LABEL_37;
  for ( i = *(_BYTE **)v16; *i; ++i )
    ;
  if ( (v17 & 4) != 0 )
  {
    do
      ++i;
    while ( *i );
  }
  if ( i == (_BYTE *)-1LL )
LABEL_37:
    v8 = *(_QWORD *)(v4 + 16);
  else
    v8 = sub_E31C0(v4, *(_BYTE *)(v4 + 100), i + 1);
LABEL_38:
  if ( !v8 )
    return 0;
  if ( *(_QWORD *)(v8 + 24) )
    return v8;
  if ( !sub_F2280(a1, *(_BYTE *)(*(_QWORD *)a1 + 100LL), v8, *(unsigned __int8 **)v8, a3) )
    return 0;
  return v8;
}
