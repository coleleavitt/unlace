unsigned __int64 __fastcall sub_3D940(__int64 a1, const __m128i **a2, const __m128i *a3)
{
  __int64 v3; // r8
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rbx
  const __m128i *v7; // r14
  char v8; // dl
  __int64 v9; // r11
  int v10; // eax
  char v11; // al
  __int64 *v12; // rax
  int v13; // eax
  char v14; // al
  char v16; // al
  char v17; // al
  __int64 v19; // [rsp+10h] [rbp-58h]
  const __m128i *v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+18h] [rbp-50h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v26 = __readfsqword(0x28u);
  if ( !(unsigned __int8)unpack_xleb128(&v25, 64, 1, a1, v3) )
    *(_BYTE *)(a1 + 20) = 0;
  v4 = v25;
  if ( a3 != a2[1] )
    sub_31300(a2, a3);
  v5 = 0;
  v6 = 0;
  v7 = nullptr;
  do
  {
LABEL_6:
    if ( !*(_BYTE *)(a1 + 20) )
      return v26 - __readfsqword(0x28u);
    if ( !(unsigned __int8)unpack_xleb128(&v25, 64, 1, a1, *(_QWORD *)(a1 + 8)) )
      *(_BYTE *)(a1 + 20) = 0;
    v19 = v25;
    if ( !(unsigned __int8)unpack_xleb128(&v25, 64, 1, a1, *(_QWORD *)(a1 + 8)) )
      *(_BYTE *)(a1 + 20) = 0;
    v8 = v25;
    v9 = 0;
    *(_DWORD *)(a1 + 16) = v25;
    LOBYTE(v10) = v8;
    if ( (v8 & 2) != 0 )
    {
      if ( !(unsigned __int8)unpack_xleb128(&v25, 64, 1, a1, *(_QWORD *)(a1 + 8)) )
        *(_BYTE *)(a1 + 20) = 0;
      v9 = v25;
      v10 = *(_DWORD *)(a1 + 16);
    }
    if ( (v10 & 1) != 0 )
    {
      v24 = v9;
      v17 = unpack_xleb128(&v25, 64, 1, a1, *(_QWORD *)(a1 + 8));
      v9 = v24;
      if ( !v17 )
        *(_BYTE *)(a1 + 20) = 0;
      v6 = v25;
      v10 = *(_DWORD *)(a1 + 16);
    }
    if ( (v10 & 4) != 0 )
    {
      if ( (v10 & 8) != 0 )
      {
        v23 = v9;
        v16 = unpack_xleb128(&v25, 64, 1, a1, *(_QWORD *)(a1 + 8));
        v9 = v23;
        if ( !v16 )
          *(_BYTE *)(a1 + 20) = 0;
        v5 += v25;
      }
      else
      {
        v5 = 0;
      }
    }
    else if ( (v10 & 8) == 0 )
    {
      v5 = 0;
    }
  }
  while ( v19 <= 0 );
  v20 = (const __m128i *)((char *)v7 + v19);
  while ( 1 )
  {
    v13 = *(_DWORD *)(a1 + 16);
    if ( (v13 & 2) != 0 )
    {
      v4 += v9;
      if ( (v13 & 1) != 0 )
        goto LABEL_21;
LABEL_31:
      v21 = v9;
      v14 = unpack_xleb128(&v25, 64, 1, a1, *(_QWORD *)(a1 + 8));
      v9 = v21;
      if ( !v14 )
        *(_BYTE *)(a1 + 20) = 0;
      v6 = v25;
      v13 = *(_DWORD *)(a1 + 16);
      goto LABEL_21;
    }
    if ( !(unsigned __int8)unpack_xleb128(&v25, 64, 1, a1, *(_QWORD *)(a1 + 8)) )
      *(_BYTE *)(a1 + 20) = 0;
    v9 = v25;
    v13 = *(_DWORD *)(a1 + 16);
    v4 += v25;
    if ( (v13 & 1) == 0 )
      goto LABEL_31;
LABEL_21:
    if ( (v13 & 8) == 0 || (v13 & 4) != 0 )
    {
      v11 = *(_BYTE *)(a1 + 20);
      goto LABEL_24;
    }
    v22 = v9;
    if ( !(unsigned __int8)unpack_xleb128(&v25, 64, 1, a1, *(_QWORD *)(a1 + 8)) )
      break;
    v11 = *(_BYTE *)(a1 + 20);
    v9 = v22;
    v5 += v25;
LABEL_24:
    if ( !v11 )
      goto LABEL_37;
    if ( a3 == v7 )
      return v26 - __readfsqword(0x28u);
    v7 = (const __m128i *)((char *)v7 + 1);
    v12 = (__int64 *)&(*a2)[-1] + 3 * (_QWORD)v7 - 1;
    *v12 = v4;
    v12[1] = v6;
    v12[2] = v5;
    if ( v20 == v7 )
      goto LABEL_6;
  }
  *(_BYTE *)(a1 + 20) = 0;
LABEL_37:
  if ( v7 != a2[1] )
    return sub_31300(a2, v7);
  return v26 - __readfsqword(0x28u);
}
