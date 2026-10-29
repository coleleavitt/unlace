__int64 __fastcall sub_154B00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v7; // rdi
  int *v8; // r12
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  bool v12; // al
  unsigned int v13; // eax
  __int64 v14; // r8
  char v15; // al
  int v16; // eax
  __int64 v17; // rax
  char *v18; // [rsp+8h] [rbp-A8h]
  __int64 v19; // [rsp+10h] [rbp-A0h]
  __int64 v20; // [rsp+10h] [rbp-A0h]
  unsigned __int8 *v21; // [rsp+18h] [rbp-98h]
  __int64 v22; // [rsp+20h] [rbp-90h]
  __int64 v23; // [rsp+28h] [rbp-88h]
  _BYTE *v24; // [rsp+38h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-70h] BYREF
  __m128i *v26; // [rsp+48h] [rbp-68h]
  _QWORD v27[2]; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v28[10]; // [rsp+60h] [rbp-50h] BYREF

  v28[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a3 + 48) != 4 )
    return 0;
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( !sub_118760(v23, 0xDu, 2 * *(_DWORD *)(a3 + 68)) )
    return 0;
  v7 = *(_QWORD *)(a3 + 56);
  v24 = nullptr;
  if ( *(_DWORD *)v7 == 12 )
  {
    v7 = sub_118420(v7, &v24, 9);
    if ( !v7 )
      return 0;
  }
  else if ( *(_DWORD *)v7 != 9 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v7 + 32) == 4 )
  {
    v8 = *(int **)(v7 + 40);
    v26 = nullptr;
    v25 = 0xFFFFFFFF00000000LL;
    v9 = *v8;
    if ( *v8 == 35 )
    {
      v10 = (__int64)(v8 + 8);
      v21 = (unsigned __int8 *)(v8 + 12);
    }
    else if ( v9 == 36 )
    {
      v10 = (__int64)(v8 + 12);
      v21 = (unsigned __int8 *)(v8 + 8);
    }
    else
    {
      if ( v9 != 33 || !(unsigned __int8)sub_11B8C0((char *)v8 + 48, v28, 0) || v28[0] )
        goto LABEL_11;
      sub_120CC0((__int64)&v25, (unsigned __int8 *)v8 + 48);
      v21 = (unsigned __int8 *)&v25;
      v10 = (__int64)(v8 + 8);
      v26[1] = _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL);
    }
    if ( *(_DWORD *)(v10 + 4) == *(_DWORD *)(a3 + 36) )
    {
      v18 = (char *)(a3 + 32);
      v22 = a3 + 32;
      if ( !v24 && *(_BYTE *)(a3 + 32) == 4 )
      {
        v17 = *(_QWORD *)(a3 + 40);
        if ( *(_DWORD *)v17 == 13 )
        {
          v24 = (_BYTE *)(v17 + 48);
          v22 = v17 + 32;
        }
      }
      v19 = v10;
      if ( sub_14A040(v10, (_BYTE *)v22) )
      {
        v11 = v19;
        if ( !v24 || (v12 = sub_14A040((__int64)v21, v24), v11 = v19, v12) )
        {
          v20 = v11;
          v13 = sub_152D80(a1, v11, v22);
          v14 = v20;
          v3 = v13;
          if ( (_BYTE)v13 )
          {
            if ( !v24 || (v15 = sub_152D80(a1, (__int64)v21, (__int64)v24), v14 = v20, v15) )
            {
              v27[1] = 0;
              v27[0] = 0xFFFFFFFF00000000LL;
              if ( (char *)v22 == v18 )
              {
                sub_AD060(a1, a2, v22, a2, v14, a2, v22, 0);
              }
              else
              {
                sub_AD060(a1, a2, (__int64)v27, a2, v14, a2, v22, 0);
                sub_118550(v18, (char *)v27);
              }
              sub_11F580((__int64)v28, v21);
              if ( v24 )
                sub_AD060(a1, a2, (__int64)v28, a2, (__int64)v28, a2, (__int64)v24, 0);
              else
                sub_11C320((char *)v28, v23, 9, *(_QWORD *)(a3 + 24), *(_DWORD *)(v22 + 4));
              sub_118550((char *)(a3 + 48), (char *)v28);
              sub_127230(a3, v23, 11, -1, 1);
              v16 = 2 * HIDWORD(v28[0]);
              *(_DWORD *)(*(_QWORD *)(a3 + 40) + 68LL) = 2 * HIDWORD(v28[0]);
              *(_DWORD *)(a3 + 36) = v16;
              sub_1188E0((__int64)v28);
              sub_1188E0((__int64)v27);
              goto LABEL_12;
            }
          }
        }
      }
    }
LABEL_11:
    v3 = 0;
LABEL_12:
    sub_1188E0((__int64)&v25);
    return v3;
  }
  return 0;
}

