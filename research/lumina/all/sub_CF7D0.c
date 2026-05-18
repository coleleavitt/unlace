__int64 __fastcall sub_CF7D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r12d
  unsigned int v11; // r13d
  int v12; // edx
  __int64 v13; // rax
  int v14; // edi
  int *v15; // rax
  __int64 v16; // rcx
  unsigned __int8 *v17; // rsi
  __int64 v18; // r15

  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(unsigned __int8 **)a1;
  v6 = v4 + 80;
  if ( !a2 )
  {
    v11 = 1;
    if ( !sub_C2AB0(v4 + 80, *(unsigned __int8 **)a1, nullptr)[2] )
      return *(_QWORD *)(a1 + 72) != 0;
    return v11;
  }
  v7 = *(_QWORD *)(a1 + 72);
  v8 = 0;
  v11 = 1;
  if ( v7 )
  {
    do
    {
      v12 = *(_DWORD *)(v7 + 40);
      if ( v12 > 0 )
      {
        v13 = *(int *)(v7 + 64);
        if ( *(int *)(a2 + 4 * v13) >= 0 || (v14 = *(__int16 *)(a1 + 52), (_DWORD)v13 == v14) && a3 )
        {
LABEL_12:
          v17 = *(unsigned __int8 **)(v7 + 16);
          if ( v5 )
          {
            v8 = 1;
            if ( v17 )
            {
              if ( !(unsigned int)sub_CA2B0(v5, v17) )
                v11 = 2;
            }
          }
          else
          {
            v8 = 1;
            if ( !v17 )
              v11 = 2;
          }
        }
        else
        {
          v15 = (int *)(v7 + 80);
          while ( (int *)(v7 + 80 + 16LL * (unsigned int)(v12 - 1)) != v15 )
          {
            v16 = *v15;
            if ( *(int *)(a2 + 4 * v16) < 0 )
            {
              v15 += 4;
              if ( (_DWORD)v16 != v14 || !a3 )
                continue;
            }
            goto LABEL_12;
          }
        }
      }
      v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v7 );
    v18 = sub_C2AB0(v6, v5, nullptr)[2];
    if ( v18 )
      goto LABEL_18;
LABEL_22:
    if ( v8 )
      return v11;
    return 0;
  }
  v18 = sub_C2AB0(v4 + 80, *(unsigned __int8 **)a1, nullptr)[2];
  if ( !v18 )
    return 0;
LABEL_18:
  while ( !(unsigned int)sub_C4A40(a1, v18, a2, a3) )
  {
LABEL_21:
    v18 = *(_QWORD *)(v18 + 24);
    if ( !v18 )
      goto LABEL_22;
  }
  if ( !*(_BYTE *)(v18 + 46) )
  {
    v8 = 1;
    goto LABEL_21;
  }
  return 2;
}
