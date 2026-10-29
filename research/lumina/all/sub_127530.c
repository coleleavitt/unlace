unsigned __int64 __fastcall sub_127530(__int64 *a1, __int64 a2, unsigned int a3, int a4, unsigned int a5, double a6)
{
  __int64 v9; // rbp
  __int64 v10; // r14
  __int16 v11; // ax
  int v12; // eax
  __int16 v13; // di
  __int64 i; // rax
  _WORD *v15; // rsi
  _WORD *v16; // rsi
  char v17; // si
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int8 v21; // cl
  int v22; // edx
  __int64 v24; // rbp
  __int16 v25; // ax
  int v26; // r12d
  _DWORD *v27; // rax
  unsigned __int8 *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // [rsp+Ch] [rbp-3Ch]
  __int64 v33; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( !a2 )
  {
    sub_E1710((__int64)a1, 94, a3, a4, a5);
    return __readfsqword(0x28u) ^ v34;
  }
  if ( a4 < 0 || *(__int16 *)(a2 + 52) == a4 )
  {
    sub_E1710((__int64)a1, 135, a3, a5, 0);
    return __readfsqword(0x28u) ^ v34;
  }
  v9 = 16LL * a4;
  if ( *(_BYTE *)(a2 + 63) == 1 )
  {
    v17 = -81;
  }
  else
  {
    v10 = v9 + *(_QWORD *)(a2 + 8);
    v11 = *(_WORD *)(v10 + 14);
    if ( (v11 & 0x20) != 0 )
    {
      v24 = a1[3];
      if ( (v11 & 0x100) != 0 )
      {
        sub_DBD10(a1[3], "generated column loop on \"%s\"", *(const char **)v10);
      }
      else
      {
        v26 = *(_DWORD *)(v24 + 64);
        HIBYTE(v11) |= 1u;
        *(_WORD *)(v10 + 14) = v11;
        *(_DWORD *)(v24 + 64) = a3 + 1;
        sub_127410(v24, a2, v10, a5, a6);
        *(_DWORD *)(v24 + 64) = v26;
        *(_WORD *)(v10 + 14) &= ~0x100u;
      }
      return __readfsqword(0x28u) ^ v34;
    }
    v12 = *(_DWORD *)(a2 + 48);
    v13 = a4;
    if ( (v12 & 0x80u) == 0 )
    {
      a4 = (__int16)a4;
      if ( (v12 & 0x20) != 0 && (a4 & 0x8000u) == 0 )
      {
        v32 = a3;
        v25 = sub_CF5E0(a2, a4);
        a3 = v32;
        a4 = v25;
      }
    }
    else
    {
      for ( i = *(_QWORD *)(a2 + 16); i; i = *(_QWORD *)(i + 40) )
      {
        if ( (*(_BYTE *)(i + 99) & 3) == 2 )
          break;
      }
      a4 = -1;
      if ( *(_WORD *)(i + 96) )
      {
        v15 = *(_WORD **)(i + 8);
        if ( *v15 == v13 )
        {
          a4 = 0;
        }
        else
        {
          v16 = v15 + 1;
          a4 = 0;
          do
          {
            if ( ++a4 == *(unsigned __int16 *)(i + 96) )
            {
              a4 = -1;
              goto LABEL_17;
            }
            ++v16;
          }
          while ( *(v16 - 1) != v13 );
          a4 = (__int16)a4;
        }
      }
    }
LABEL_17:
    v17 = 94;
  }
  sub_E1710((__int64)a1, v17, a3, a4, a5);
  v18 = *(_BYTE *)(a2 + 63);
  if ( v18 == 2 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 8) + v9 + 9) != 69 )
      return __readfsqword(0x28u) ^ v34;
    goto LABEL_23;
  }
  v19 = *(_QWORD *)(a2 + 8);
  v33 = 0;
  v20 = v9 + v19;
  v21 = *(_BYTE *)(v20 + 9);
  v22 = *(unsigned __int16 *)(v20 + 12);
  if ( (_WORD)v22 )
  {
    if ( !v18 )
    {
      v27 = *(_DWORD **)(a2 + 80);
      if ( v27 )
      {
        if ( *v27 >= v22 )
        {
          v28 = *(unsigned __int8 **)&v27[6 * v22 - 4];
          if ( v28 )
          {
            sub_F7C20(*a1, v28, *(_BYTE *)(*a1 + 100), v21, &v33, a6);
            if ( v33 )
              sub_D04B0((__int64)a1, v33, 0xFFFFFFF6, v29, v30, v31);
            v21 = *(_BYTE *)(*(_QWORD *)(a2 + 8) + v9 + 9);
          }
        }
      }
    }
  }
  if ( v21 == 69 && *(_BYTE *)(a2 + 63) != 1 )
LABEL_23:
    sub_E1710((__int64)a1, 87, a5, 0, 0);
  return __readfsqword(0x28u) ^ v34;
}
