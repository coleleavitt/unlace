__int64 __fastcall sub_F9B10(__int64 a1, __int64 a2, double a3)
{
  char v4; // dl
  __int64 v5; // rax
  _BYTE **v6; // r13
  __int64 v7; // r12
  unsigned int v8; // ebp
  int *v10; // rdx
  _DWORD *v11; // rax
  int v12; // ecx
  _DWORD *v13; // rdx
  __int64 *v14; // r15
  char *v15; // rsi
  int v16; // r14d
  __int64 *v17; // rax
  unsigned __int8 v18; // cl
  __int64 *v19; // r9
  int v20; // eax
  unsigned int *v21; // rax
  int v22; // eax
  int v23; // edi
  __int64 v24; // rax
  int v25; // edx
  __int64 *v26; // rax
  __int64 *v27; // rax
  int v28; // ecx
  _DWORD *v29; // rsi
  _QWORD *v30; // rcx
  int v31; // esi
  __int16 v32; // di
  _QWORD *v33; // r8
  _BYTE *v34; // rsi
  int v35; // ecx
  unsigned __int8 v36; // [rsp+8h] [rbp-50h]
  __int64 *v37; // [rsp+8h] [rbp-50h]
  int v38; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-40h]

  v4 = *(_BYTE *)a2;
  v39 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE ***)v5;
  v7 = *(_QWORD *)(v5 + 16);
  if ( v4 == -88 )
  {
    v8 = *(_DWORD *)(v5 + 40) & 0x20000;
    if ( v8 )
      return 0;
    if ( *(_DWORD *)(a1 + 32) != *(unsigned __int8 *)(a2 + 2) )
      return v8;
    v14 = *(__int64 **)(v7 + 48);
    if ( *(int *)(v7 + 56) > 0 )
    {
      v15 = (char *)*v14;
      if ( a2 == *v14 )
      {
        LOWORD(v16) = 0;
LABEL_28:
        *(_WORD *)(a2 + 50) = v16;
        *(_QWORD *)(a2 + 56) = v7;
        return 1;
      }
      v16 = 0;
      while ( (unsigned int)sub_F80F0(0, v15, a2, 0xFFFFFFFF, a3) )
      {
        ++v16;
        v14 += 4;
        if ( *(_DWORD *)(v7 + 56) <= v16 )
          goto LABEL_22;
        v15 = (char *)*v14;
        if ( *v14 == a2 )
          goto LABEL_28;
      }
      if ( *(_DWORD *)(v7 + 56) > v16 )
        goto LABEL_28;
LABEL_22:
      v14 = *(__int64 **)(v7 + 48);
    }
    v36 = (*v6)[100];
    v17 = sub_E14E0((__int64)*v6, v14, (int *)(v7 + 56), &v38);
    *(_QWORD *)(v7 + 48) = v17;
    LOWORD(v16) = v38;
    if ( v38 >= 0 )
    {
      v18 = v36;
      v19 = &v17[4 * v38];
      *v19 = a2;
      v20 = *((_DWORD *)v6 + 14) + 1;
      *((_DWORD *)v6 + 14) = v20;
      *((_DWORD *)v19 + 4) = v20;
      v21 = *(unsigned int **)(a2 + 32);
      if ( v21 )
        v8 = *v21;
      v37 = v19;
      v19[1] = sub_E32F0(*v6, *(char **)(a2 + 8), v8, v18, 0);
      if ( (*(_BYTE *)(a2 + 4) & 2) != 0 )
      {
        v22 = *((_DWORD *)v6 + 13);
        *((_DWORD *)v6 + 13) = v22 + 1;
        *((_DWORD *)v37 + 5) = v22;
      }
      else
      {
        *((_DWORD *)v37 + 5) = -1;
      }
    }
    goto LABEL_28;
  }
  if ( v4 != -87 && v4 != -89 )
    return 0;
  v10 = *(int **)(v5 + 8);
  v8 = 1;
  if ( v10 )
  {
    v11 = v10 + 2;
    if ( *v10 > 0 )
    {
      v12 = *(_DWORD *)(a2 + 44);
      if ( v12 != v10[18] )
      {
        v13 = &v11[26 * (*v10 - 1) + 26];
        do
        {
          v11 += 26;
          if ( v13 == v11 )
            return 1;
        }
        while ( v11[16] != v12 );
      }
      v23 = *(_DWORD *)(v7 + 40);
      if ( v23 <= 0 )
      {
LABEL_35:
        v26 = sub_E14E0((__int64)*v6, *(__int64 **)(v7 + 32), (int *)(v7 + 40), &v38);
        *(_QWORD *)(v7 + 32) = v26;
        LOWORD(v25) = v38;
        if ( v38 >= 0 )
        {
          v27 = &v26[4 * v38];
          *v27 = *(_QWORD *)(a2 + 64);
          *((_DWORD *)v27 + 4) = *(_DWORD *)(a2 + 44);
          *((_WORD *)v27 + 12) = *(_WORD *)(a2 + 48);
          v28 = *((_DWORD *)v6 + 14) + 1;
          *((_DWORD *)v6 + 14) = v28;
          *((_DWORD *)v27 + 5) = v28;
          *((_WORD *)v27 + 13) = -1;
          v27[1] = a2;
          v29 = *(_DWORD **)(v7 + 24);
          if ( !v29 )
            goto LABEL_44;
          v30 = v29 + 2;
          v31 = *v29;
          if ( v31 <= 0 )
            goto LABEL_44;
          v32 = 0;
          v33 = &v30[3 * (unsigned int)(v31 - 1) + 3];
          while ( 1 )
          {
            v34 = (_BYTE *)*v30;
            if ( *(_BYTE *)*v30 == 0xA7
              && *((_DWORD *)v34 + 11) == *(_DWORD *)(a2 + 44)
              && *((_WORD *)v34 + 24) == *(_WORD *)(a2 + 48) )
            {
              break;
            }
            v30 += 3;
            ++v32;
            if ( v33 == v30 )
              goto LABEL_44;
          }
          *((_WORD *)v27 + 13) = v32;
          if ( v32 < 0 )
          {
LABEL_44:
            v35 = *(_DWORD *)(v7 + 12);
            *(_DWORD *)(v7 + 12) = v35 + 1;
            *((_WORD *)v27 + 13) = v35;
          }
        }
      }
      else
      {
        v24 = *(_QWORD *)(v7 + 32);
        v25 = 0;
        while ( *(_DWORD *)(v24 + 16) != v12 || *(_WORD *)(v24 + 24) != *(_WORD *)(a2 + 48) )
        {
          ++v25;
          v24 += 32;
          if ( v25 == v23 )
            goto LABEL_35;
        }
      }
      *(_QWORD *)(a2 + 56) = v7;
      *(_BYTE *)a2 = -87;
      v8 = 1;
      *(_WORD *)(a2 + 50) = v25;
    }
  }
  return v8;
}
