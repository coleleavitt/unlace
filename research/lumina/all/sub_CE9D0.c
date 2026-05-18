unsigned __int64 __fastcall sub_CE9D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  int v5; // eax
  __int64 *v6; // rbx
  int v7; // r10d
  __int64 v9; // r12
  __int16 v10; // r14
  __int64 *v11; // r8
  __int64 v12; // rsi
  int v13; // r15d
  __int64 v14; // r9
  int v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 *v25; // [rsp+10h] [rbp-58h]
  int v26; // [rsp+1Ch] [rbp-4Ch]
  int v27; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8) | *(_QWORD *)a2;
  v28 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(__int64 **)(a1 + 32);
  v7 = *(unsigned __int16 *)(a2 + 22);
  if ( v5 > 0 )
  {
    v9 = ~v4;
    v10 = 0;
    v11 = &v6[7 * (unsigned int)(v5 - 1) + 7];
    while ( 1 )
    {
      v12 = v6[6];
      v13 = v10;
      if ( (v9 & v12) != 0 )
        goto LABEL_16;
      v14 = *(_QWORD *)(a2 + 8);
      if ( (v14 & v12) == 0 || (*((_BYTE *)v6 + 18) & 2) != 0 )
        goto LABEL_16;
      v15 = *(unsigned __int16 *)(a2 + 52) - 1;
      if ( *(_WORD *)(a2 + 52) )
      {
        v16 = (__int64 *)(*(_QWORD *)(a2 + 64) + 8LL * v15);
        v17 = (__int64)&v16[-v15 - 1];
        do
        {
          v18 = *v16;
          if ( *v16 )
          {
            if ( (__int64 *)v18 == v6 )
              goto LABEL_16;
            v19 = *(int *)(v18 + 24);
            if ( (int)v19 >= 0 && v6 == (__int64 *)(*(_QWORD *)(a1 + 32) + 56 * v19) )
              goto LABEL_16;
          }
          --v16;
        }
        while ( (__int64 *)v17 != v16 );
      }
      if ( v12 == v14
        && ((*((_BYTE *)v6 + 20) & 0x3F) != 0
         || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 104LL * *(unsigned __int8 *)(a2 + 16) + 68) & 0x48) == 0) )
      {
        break;
      }
      v20 = *((unsigned __int16 *)v6 + 8);
      if ( (__int16)v20 <= 0 )
      {
LABEL_23:
        v6 += 7;
        v7 += v20;
        *(_WORD *)(a2 + 22) = v7;
        if ( v6 == v11 )
          goto LABEL_17;
      }
      else
      {
LABEL_15:
        *(_WORD *)(a2 + 22) = --v7;
        if ( (*((_BYTE *)v6 + 20) & 0x82) != 0 )
        {
          v22 = *v6;
          v26 = a3;
          v25 = v11;
          v27 = 0;
          v23 = sub_CE930(*(_QWORD *)(v22 + 24), &v27);
          v11 = v25;
          a3 = v26;
          if ( v23 && (unsigned int)(v27 + 1) <= 2 )
          {
            v27 = 10;
            v24 = 10;
          }
          else
          {
            v27 = 20;
            v24 = 20;
          }
          if ( v24 > v10 )
          {
            *((_WORD *)v6 + 9) |= 0x2000u;
            v10 = v24;
            v13 = v24;
          }
          v6 += 7;
          v7 = *(unsigned __int16 *)(a2 + 22);
          if ( v6 == v25 )
            goto LABEL_17;
        }
        else
        {
LABEL_16:
          v6 += 7;
          if ( v6 == v11 )
            goto LABEL_17;
        }
      }
    }
    *(_DWORD *)(a2 + 48) |= 0x800000u;
    v20 = *((unsigned __int16 *)v6 + 8);
    if ( (__int16)v20 <= 0 )
      goto LABEL_23;
    goto LABEL_15;
  }
  v13 = 0;
  v10 = 0;
LABEL_17:
  if ( (__int16)v7 > (__int16)a3 - v13 )
    *(_WORD *)(a2 + 22) = a3 - v10;
  return __readfsqword(0x28u) ^ v28;
}
