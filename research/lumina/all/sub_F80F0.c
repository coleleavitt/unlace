__int64 __fastcall sub_F80F0(__int64 a1, char *a2, __int64 a3, unsigned int a4, double a5)
{
  int v9; // r14d
  int v10; // r12d
  __int16 v11; // r8
  char v13; // al
  unsigned __int8 v14; // dl
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // eax
  __m128i *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // rsi
  int v26; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char *v35; // rdi
  unsigned __int8 *i; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  char v40; // al
  int v41; // eax
  unsigned __int8 *v42; // rsi
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  __int16 v49; // [rsp+Ch] [rbp-4Ch]
  __int16 v50; // [rsp+Ch] [rbp-4Ch]
  int v51; // [rsp+Ch] [rbp-4Ch]
  int v52; // [rsp+Ch] [rbp-4Ch]
  int v53; // [rsp+Ch] [rbp-4Ch]
  __int64 v54[9]; // [rsp+10h] [rbp-48h] BYREF

  v54[1] = __readfsqword(0x28u);
  if ( !a2 || !a3 )
  {
    if ( a2 != (char *)a3 )
      return 2;
    return 0;
  }
  if ( a1 )
  {
    if ( *a2 == -100 )
    {
      v15 = *(_QWORD *)a1;
      v54[0] = 0;
      sub_F7C20(v15, (unsigned __int8 *)a3, 1u, 0x41u, v54, a5);
      if ( v54[0] )
      {
        v16 = (unsigned int)*((__int16 *)a2 + 24);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(_DWORD *)(v17 + 284);
        if ( (int)v16 <= 31 )
          *(_DWORD *)(v17 + 284) = (1 << (v16 - 1)) | v18;
        else
          *(_DWORD *)(v17 + 284) = v18 | 0x80000000;
        v19 = sub_EF170(*(__int64 **)(a1 + 320), v16, a5);
        v24 = (__int64)v19;
        if ( v19 )
        {
          if ( byte_1BAD40[v19[1].m128i_i16[2] & 0x3F] == 3 )
            sub_D9DB0((__int64)v19, 1u, a5, (__int64)byte_1BAD40, v21, v22, v23);
          v25 = v54[0];
          v26 = sub_EE420(v24, v54[0], 0, a5);
          sub_C9940(v54[0], v25, v27, v28, v29, v30);
          sub_C9940(v24, v25, v31, v32, v33, v34);
          if ( !v26 )
            return 0;
        }
        else
        {
          sub_C9940(v54[0], v16, v20, v21, v22, v23);
          sub_C9940(0, v16, v44, v45, v46, v47);
        }
      }
    }
  }
  v9 = *((_DWORD *)a2 + 1);
  v10 = *(_DWORD *)(a3 + 4);
  v11 = v10 | v9;
  if ( ((v10 | v9) & 0x400) != 0 )
  {
    if ( ((unsigned __int16)v9 & v10 & 0x400) == 0 || *((_DWORD *)a2 + 2) != *(_DWORD *)(a3 + 8) )
      return 2;
    return 0;
  }
  v13 = *a2;
  v14 = *(_BYTE *)a3;
  if ( *a2 != *(_BYTE *)a3 || v13 == 71 )
  {
    if ( v13 == 113 )
    {
      if ( (int)sub_F80F0(a1, *((_QWORD *)a2 + 2), a3, a4) <= 1 )
        return 1;
      v14 = *(_BYTE *)a3;
    }
    if ( v14 != 113 || (int)sub_F80F0(a1, a2, *(_QWORD *)(a3 + 16), a4) > 1 )
      return 2;
    return 1;
  }
  v35 = *((char **)a2 + 1);
  if ( !v35 )
    goto LABEL_34;
  if ( (v13 & 0xFB) != 0xA8 )
  {
    if ( v13 != 121 )
    {
      v42 = *(unsigned __int8 **)(a3 + 8);
      if ( v13 == 113 )
      {
        v52 = v10 | *((_DWORD *)a2 + 1);
        if ( !v42 )
          return 2;
        v48 = sub_CA2B0(v35, v42);
        v11 = v52;
        if ( v48 )
          return 2;
      }
      else if ( ((v13 + 89) & 0xFD) != 0 )
      {
        if ( v42 )
        {
          v51 = v10 | *((_DWORD *)a2 + 1);
          v43 = strcmp(v35, (const char *)v42);
          v11 = v51;
          if ( v43 )
            return 2;
        }
      }
LABEL_34:
      if ( (((unsigned __int16)v9 ^ (unsigned __int16)v10) & 0x202) != 0 )
        return 2;
      if ( (v11 & 0x4000) == 0 )
      {
        if ( (v11 & 0x800) != 0 )
          return 2;
        if ( (v11 & 8) == 0 )
        {
          v49 = v11;
          v39 = sub_F80F0(a1, *((_QWORD *)a2 + 2), *(_QWORD *)(a3 + 16), a4);
          v11 = v49;
          if ( v39 )
            return 2;
        }
        v50 = v11;
        if ( (unsigned int)sub_F80F0(a1, *((_QWORD *)a2 + 3), *(_QWORD *)(a3 + 24), a4)
          || (unsigned int)sub_F8530(*((_QWORD *)a2 + 4), *(_QWORD *)(a3 + 32), a4) )
        {
          return 2;
        }
        v40 = *a2;
        if ( *a2 != 117 && v40 != -86 && (v50 & 0x2000) == 0 )
        {
          if ( *((_WORD *)a2 + 24) != *(_WORD *)(a3 + 48) || a2[2] != *(_BYTE *)(a3 + 2) && v40 == -81 )
            return 2;
          if ( v40 != 49 )
          {
            v41 = *((_DWORD *)a2 + 11);
            if ( *(_DWORD *)(a3 + 44) != v41 )
            {
              if ( a4 != v41 )
                return 2;
              return 0;
            }
          }
        }
      }
    }
    return 0;
  }
  for ( i = *(unsigned __int8 **)(a3 + 8); ; ++i )
  {
    v37 = (unsigned __int8)*v35;
    v38 = *i;
    if ( (_DWORD)v37 == (_DWORD)v38 )
      break;
    if ( byte_1BF000[v37] != byte_1BF000[v38] )
      return 2;
LABEL_29:
    ++v35;
  }
  if ( *v35 )
    goto LABEL_29;
  if ( ((v9 & 0x1000000) != 0) == (HIBYTE(v10) & 1) )
  {
    if ( (v9 & 0x1000000) == 0 )
      goto LABEL_34;
    v53 = v10 | *((_DWORD *)a2 + 1);
    if ( !(unsigned int)sub_F8600(a1, *((_QWORD *)a2 + 8), *(_QWORD *)(a3 + 64), 1) )
    {
      v9 = *((_DWORD *)a2 + 1);
      v10 = *(_DWORD *)(a3 + 4);
      v11 = v53;
      goto LABEL_34;
    }
  }
  return 2;
}
