unsigned __int64 __fastcall sub_24673(_QWORD *a1, int a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r14
  __int64 v14; // rax
  char v15; // bp
  char v16; // al
  int i; // r8d
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r12
  int v25; // eax
  __int64 v27; // [rsp+8h] [rbp-90h]
  int v28; // [rsp+10h] [rbp-88h]
  __int16 v29; // [rsp+18h] [rbp-80h]
  int v30; // [rsp+18h] [rbp-80h]
  int v31; // [rsp+18h] [rbp-80h]
  int v32; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+28h] [rbp-70h]
  char v35[4]; // [rsp+30h] [rbp-68h] BYREF
  int v36; // [rsp+34h] [rbp-64h]
  int v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+3Ch] [rbp-5Ch]
  __int64 v39; // [rsp+48h] [rbp-50h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]

  v9 = *(_QWORD *)(a5 + 40);
  v40 = __readfsqword(0x28u);
  v27 = *a1;
  v10 = sub_DDB50(*a1, a5, 0);
  v28 = 0;
  if ( a6 )
    v28 = sub_DD6E0(v27, a6, 0, 0);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 40);
    *(_BYTE *)(v10 + 70) |= 1u;
    *(_DWORD *)(v10 + 72) = -1;
    --*(_DWORD *)(v11 + 44);
    *(_QWORD *)(v10 + 40) = 0;
  }
  if ( a3 )
  {
    v12 = 0;
    v13 = 0;
    while ( *(unsigned __int16 *)(a3 + 94) > (int)v12 )
    {
      v34 = v12;
      v29 = *(_WORD *)(*(_QWORD *)(a3 + 8) + 2 * v12);
      v14 = sub_F04A0(a1, 75, 0, 0);
      if ( v14 )
        *(_WORD *)(v14 + 48) = v29 + 1;
      v13 = sub_E0F20(a1, v13, v14);
      v12 = v34 + 1;
    }
    v15 = (*(_BYTE *)(v9 + 63) != 1) + 14;
  }
  else
  {
    v16 = *(_BYTE *)(v9 + 63);
    if ( v16 == 2 )
    {
      v13 = 0;
      for ( i = 0; i < *(__int16 *)(v9 + 54); i = v30 + 1 )
      {
        v30 = i;
        v18 = sub_F04A0(a1, 75, 0, 0);
        if ( v18 )
          *(_WORD *)(v18 + 48) = v30 + 1;
        v13 = sub_E0F20(a1, v13, v18);
      }
      v15 = 14;
    }
    else
    {
      v15 = (v16 != 1) + 14;
      v19 = sub_F04A0(a1, 75, 0, 0);
      v13 = sub_DEBF0(a1, v19);
    }
  }
  v20 = 0;
  if ( a4 )
  {
    while ( v20 < *a4 )
    {
      v21 = *(_QWORD *)&a4[6 * v20 + 2];
      v22 = 0;
      if ( v21 )
      {
        v31 = v20;
        v22 = sub_DD6E0(v27, v21, 0, 0);
        v20 = v31;
      }
      v32 = v20;
      v13 = sub_E0F20(a1, v13, v22);
      v20 = v32 + 1;
    }
  }
  v23 = sub_DF550((_DWORD)a1, v13, v10, v28, 0, 0, 0, 8519680, 0);
  v24 = v23;
  if ( v23 )
    *(_DWORD *)(v23 + 4) |= 0x8000000u;
  v35[0] = v15;
  v39 = 0;
  v38 = 0;
  v36 = a2;
  v25 = -1;
  if ( a3 )
    v25 = *(unsigned __int16 *)(a3 + 94);
  v37 = v25;
  sub_11F190(a1, v24, v35);
  if ( v24 )
    sub_D75C0(v27, v24, 1);
  return __readfsqword(0x28u) ^ v40;
}
