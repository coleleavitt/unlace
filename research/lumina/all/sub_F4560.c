__int64 __fastcall sub_F4560(__int64 a1, int a2, unsigned int a3, unsigned int a4, int *a5, unsigned int a6, double a7)
{
  int v7; // r15d
  __int64 v8; // rbp
  int v11; // eax
  unsigned __int8 **v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r15
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  char v21; // al
  unsigned __int8 v22; // al
  int v23; // ebx
  __int64 v24; // rax
  unsigned int v25; // [rsp+4h] [rbp-54h]
  signed int v26; // [rsp+8h] [rbp-50h]
  unsigned int v27; // [rsp+Ch] [rbp-4Ch]
  __int64 v28; // [rsp+10h] [rbp-48h]
  unsigned int v29; // [rsp+18h] [rbp-40h]

  v7 = *a5;
  v8 = *(_QWORD *)(a1 + 16);
  v25 = 0;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v11 = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 56) = v7 + v11;
      v27 = v11 + 1;
      v25 = v11 + 1;
      v29 = v7 + *(_DWORD *)(v8 + 144);
      v26 = v7 - 1;
      if ( v7 > 0 )
      {
        v12 = (unsigned __int8 **)(a5 + 2);
        v13 = 0;
        v28 = (unsigned int)(v7 - 1) + 1LL;
        do
        {
          v14 = sub_F3950(a1, *v12, a7);
          v15 = a6 + v13;
          v16 = v27 + v13;
          if ( v26 <= (int)v13 )
            sub_E1710(v8, 53, v15, a4, v16);
          else
            sub_E1710(v8, 52, v15, v29, v16);
          sub_DCC50(v8, -1, v14, 4294967294LL, v17, v18);
          v19 = *(int *)(v8 + 144);
          if ( (int)v19 > 0 )
            *(_WORD *)(*(_QWORD *)(v8 + 136) + 24 * v19 - 22) = 128;
          ++v13;
          v12 += 3;
        }
        while ( v28 != v13 );
      }
      sub_E1710(v8, 80, a6, v27, v26);
    }
    else
    {
      v21 = *(_BYTE *)(a1 + 31);
      if ( v21 )
      {
        v22 = v21 - 1;
        *(_BYTE *)(a1 + 31) = v22;
        v23 = *(_DWORD *)(a1 + 4LL * v22 + 216);
      }
      else
      {
        v23 = *(_DWORD *)(a1 + 56) + 1;
        *(_DWORD *)(a1 + 56) = v23;
      }
      sub_E1770((_QWORD *)v8, 28, a3, a4, a6, v7);
      sub_E1710(v8, 97, a6, v7, v23);
      sub_E1770((_QWORD *)v8, 138, a3, v23, a6, v7);
      v24 = *(int *)(v8 + 144);
      if ( (int)v24 > 0 )
        *(_WORD *)(*(_QWORD *)(v8 + 136) + 24 * v24 - 22) = 16;
      v25 = a3;
      if ( v23 )
        sub_CEFE0(a1, v23);
    }
  }
  return v25;
}
