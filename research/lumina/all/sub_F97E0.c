__int64 __fastcall sub_F97E0(__int64 a1, __int64 a2, double a3)
{
  __int64 *v3; // rbp
  unsigned __int8 v4; // al
  int *v6; // rax
  int v7; // edx
  int v8; // r8d
  _DWORD *v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // r13
  __int64 v14; // rdi
  int *v15; // rax
  int v16; // r12d
  __int64 *v17; // rax
  int v18; // r14d
  __int16 v19; // ax
  __int64 v20; // rax
  __m128i *v21; // rax
  __int64 v22; // rdx

  v3 = *(__int64 **)(a1 + 40);
  v4 = *(_BYTE *)a2;
  if ( v3[4] )
  {
    if ( v4 != 0xA7 )
      return 0;
    v6 = (int *)v3[1];
    v7 = *v6;
    if ( *v6 <= 0 )
    {
      if ( !v7 )
        return 0;
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 44);
      if ( v8 != v6[18] )
      {
        v9 = v6 + 44;
        v10 = 0;
        while ( v7 != ++v10 )
        {
          v9 += 26;
          if ( *(v9 - 26) == v8 )
            goto LABEL_19;
        }
        return 0;
      }
    }
  }
  else
  {
    if ( v4 < 0xA7u )
      return 0;
    if ( v4 > 0xA8u )
    {
      if ( v4 != 0xAC || (*(_BYTE *)(a2 + 7) & 1) == 0 )
        return 0;
      v11 = *v3;
      if ( *v3 )
      {
        v12 = *(_QWORD *)(a2 + 64);
        if ( v11 == v12 )
          return 1;
        while ( 1 )
        {
          v11 = *(_QWORD *)(v11 + 64);
          if ( !v11 )
            break;
          if ( v11 == v12 )
            return 1;
        }
      }
    }
  }
LABEL_19:
  v13 = *(__int64 **)a1;
  v14 = **(_QWORD **)a1;
  if ( !*(_BYTE *)(v14 + 103) )
  {
    v15 = (int *)v3[2];
    if ( v15 && *v15 > 0 )
    {
      v16 = 0;
      while ( (unsigned int)sub_F80F0(0, *(char **)&v15[6 * v16 + 2], a2, 0xFFFFFFFF, a3) )
      {
        v15 = (int *)v3[2];
        if ( *v15 <= ++v16 )
        {
          v14 = *v13;
          v16 = -1;
          goto LABEL_36;
        }
      }
      if ( v16 >= 0 )
      {
        v17 = (__int64 *)v3[2];
        goto LABEL_27;
      }
      v14 = *v13;
    }
    else
    {
      v16 = -1;
    }
LABEL_36:
    if ( a2 && (v21 = sub_DD6E0(v14, a2, 0, nullptr), (v22 = (__int64)v21) != 0) )
    {
      if ( v21->m128i_i8[0] == -88 )
        v21->m128i_i8[0] = -84;
    }
    else
    {
      v22 = 0;
    }
    v17 = sub_E0F20(v13, (int *)v3[2], v22);
    v3[2] = (__int64)v17;
LABEL_27:
    if ( v17 )
    {
      v18 = *(_DWORD *)(a2 + 4) & 0x100;
      *(_DWORD *)(a2 + 4) |= 0x8000000u;
      if ( a2 )
        sub_D7720(*v13, a2);
      *(_QWORD *)(a2 + 64) = 0;
      v19 = v16;
      *(_OWORD *)a2 = 0;
      *(_BYTE *)a2 = -89;
      *(_OWORD *)(a2 + 16) = 0;
      *(_OWORD *)(a2 + 32) = 0;
      *(_OWORD *)(a2 + 48) = 0;
      if ( v16 < 0 )
        v19 = *(_DWORD *)v3[2] - 1;
      *(_WORD *)(a2 + 48) = v19;
      *(_DWORD *)(a2 + 44) = *(_DWORD *)(*v3 + 88);
      v20 = v3[3];
      *(_DWORD *)(a2 + 4) = v18;
      *(_QWORD *)(a2 + 64) = v20;
    }
    if ( !*(_BYTE *)(*v13 + 103) )
      return 0;
  }
  return 2;
}
