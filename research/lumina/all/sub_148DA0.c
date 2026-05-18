unsigned __int64 __fastcall sub_148DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 i; // r10
  int v11; // edi
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rbx
  unsigned int v15; // r12d
  unsigned int v17; // ecx
  __int16 v18; // si
  _WORD *v19; // rax
  _WORD *v20; // rax
  unsigned int v21; // r8d
  int v22; // r15d
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // eax
  _BYTE *v29; // rdx
  int v30; // r15d
  __int64 v31; // rbx
  __int64 v32; // rbp
  __int64 v33; // rsi
  __m128i *v34; // rbp
  __int64 *v35; // rax
  char v37; // al
  unsigned __int8 v38; // al
  int v39; // r15d
  __int64 v40; // [rsp+0h] [rbp-78h]
  __int64 *v42; // [rsp+8h] [rbp-70h]
  unsigned int v43; // [rsp+10h] [rbp-68h]
  __int64 v44; // [rsp+10h] [rbp-68h]
  __int64 v45; // [rsp+18h] [rbp-60h]
  __int64 v46; // [rsp+20h] [rbp-58h]
  unsigned int v49; // [rsp+38h] [rbp-40h]

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = *(_QWORD *)(a1 + 16);
  v40 = *(_QWORD *)a1;
  v43 = *(_DWORD *)(a2 + 76);
  if ( a2 )
  {
    v9 = a2;
    if ( *(_QWORD *)a2 && a4 != *(_QWORD *)(a2 + 56) )
    {
      do
        v9 = *(_QWORD *)(v9 + 32);
      while ( v9 && *(_QWORD *)v9 && a4 != *(_QWORD *)(v9 + 56) );
    }
  }
  else
  {
    v9 = 0;
  }
  if ( a4 && v43 != a5 )
  {
    if ( *(char *)(a3 + 48) >= 0 )
    {
      v37 = *(_BYTE *)(a1 + 31);
      if ( v37 )
      {
        v38 = v37 - 1;
        *(_BYTE *)(a1 + 31) = v38;
        v39 = *(_DWORD *)(a1 + 4LL * v38 + 216);
      }
      else
      {
        v39 = *(_DWORD *)(a1 + 56) + 1;
        *(_DWORD *)(a1 + 56) = v39;
      }
      sub_E1710(v8, 142, a5, v39, 0);
      sub_E1710(v8, 29, v43, 0, v39);
      if ( v39 )
        sub_CEFE0(a1, v39);
    }
    else
    {
      for ( i = *(_QWORD *)(a3 + 16); i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_BYTE *)(i + 99) & 3) == 2 )
          break;
      }
      v11 = *(unsigned __int16 *)(i + 94);
      v12 = *(_DWORD *)(v5 + 56);
      *(_DWORD *)(v5 + 56) = v11 + v12;
      v49 = v12 + 1;
      if ( v11 )
      {
        v45 = v9;
        v46 = v5;
        v13 = 0;
        v14 = i;
        v15 = v12 + 1;
        do
        {
          v17 = -1;
          v18 = *(_WORD *)(*(_QWORD *)(v14 + 8) + v13);
          if ( *(_WORD *)(a4 + 96) )
          {
            v19 = *(_WORD **)(a4 + 8);
            if ( v18 == *v19 )
            {
              v17 = 0;
            }
            else
            {
              v20 = v19 + 1;
              v17 = 0;
              do
              {
                if ( ++v17 == *(unsigned __int16 *)(a4 + 96) )
                {
                  v17 = -1;
                  goto LABEL_23;
                }
                ++v20;
              }
              while ( v18 != *(v20 - 1) );
              v17 = (__int16)v17;
            }
          }
LABEL_23:
          v21 = v15;
          v13 += 2;
          ++v15;
          sub_E1710(v8, 94, a5, v17, v21);
        }
        while ( 2LL * (unsigned int)(v11 - 1) + 2 != v13 );
        v9 = v45;
        v5 = v46;
        v6 = a2;
        v7 = a3;
      }
      v22 = sub_E1710(v8, 28, v43, 0, v49);
      if ( !*(_BYTE *)(*(_QWORD *)v8 + 103LL) )
      {
        v23 = *(_QWORD *)(v8 + 136) + 24LL * v22;
        *(_BYTE *)(v23 + 1) = -3;
        *(_DWORD *)(v23 + 16) = v11;
      }
      v24 = sub_E1710(v8, 70, 0xBu, 2u, 0);
      sub_DCC50(v8, v24, (__int64)"corrupt database", 0xFFFFFFFFLL, v25, v26);
      v27 = *(_QWORD *)(v5 + 160);
      if ( !v27 )
        v27 = v5;
      *(_BYTE *)(v27 + 33) = 1;
      v28 = *(_DWORD *)(v8 + 144);
      if ( v22 < 0 )
        v22 = v28 - 1;
      v29 = byte_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v8 + 103LL) )
        v29 = (_BYTE *)(*(_QWORD *)(v8 + 136) + 24LL * v22);
      *((_DWORD *)v29 + 2) = v28;
    }
  }
  v42 = sub_DDB50(v40, *(int **)(v6 + 64), 0);
  if ( *(__int16 *)(v7 + 54) > 0 )
  {
    v44 = v9;
    v30 = 0;
    v31 = v7;
    v32 = 0;
    do
    {
      if ( *(_BYTE *)(*(_QWORD *)(v31 + 8) + v32 + 9) == 69 )
        sub_E1710(v8, 87, v30 + *(_DWORD *)(v6 + 72), 0, 0);
      ++v30;
      v32 += 16;
    }
    while ( *(__int16 *)(v31 + 54) > v30 );
    v9 = v44;
  }
  v33 = *(_QWORD *)(v9 + 24);
  v34 = nullptr;
  if ( v33 )
    v34 = sub_DD6E0(v40, v33, 0, nullptr);
  v35 = sub_DD150(v40, *(_DWORD **)(v9 + 16), 0);
  return sub_146720(v5, (__int64)v42, (int *)v35, (__int64)v34, 2, v9);
}
