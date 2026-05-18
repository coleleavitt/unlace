__int64 __fastcall sub_D9920(__int64 a1, unsigned __int8 a2, char a3, int a4, int a5, int a6, double a7)
{
  __int16 v10; // ax
  _DWORD *v11; // r13
  __int16 v12; // ax
  unsigned __int16 v13; // dx
  int v14; // eax
  __int16 v15; // ax
  __int64 v17; // r11
  unsigned __int64 v18; // rcx
  int v19; // r8d
  _BYTE *v20; // rsi
  int v21; // edi
  int v22; // edx
  unsigned int v23; // eax
  char *v24; // rdi
  unsigned __int64 v25; // rdx
  char *v26; // r13
  char *v27; // rdi
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rsi
  _QWORD v32[3]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-50h]
  __int16 v34; // [rsp+2Ch] [rbp-4Ch]
  _BYTE v35[20]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v36[4]; // [rsp+44h] [rbp-34h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 32) <= 31 )
  {
    if ( (unsigned int)sub_E0020(a1, 32, 0) )
    {
      *(_BYTE *)(a1 + 22) = 0;
      return 7;
    }
    v12 = *(_WORD *)(a1 + 20);
    v11 = *(_DWORD **)(a1 + 8);
    v13 = v12 & 4;
    if ( (v12 & 4) == 0 )
      goto LABEL_3;
LABEL_11:
    __memcpy_chk(v32, a1, 2 * v13, 8);
    v17 = v32[0];
    v18 = v32[0];
    if ( v32[0] < 0LL )
    {
      v18 = -v32[0];
      if ( v32[0] == 0x8000000000000000LL )
        v18 = 0x8000000000000000LL;
    }
    v36[1] = 0;
    v19 = 20;
    v20 = v36;
    while ( 1 )
    {
      --v20;
      v21 = v19 - 1;
      v20[1] = v18 % 0xA + 48;
      v18 /= 0xAu;
      if ( !v18 )
        break;
      --v19;
    }
    if ( v17 < 0 )
    {
      v35[v21] = 45;
      v21 = v19 - 2;
    }
    v22 = v21;
    v23 = 21 - v21;
    v24 = &v35[v21 + 1];
    if ( (unsigned int)(21 - v22) < 8 )
    {
      if ( (v23 & 4) != 0 )
      {
        *v11 = *(_DWORD *)v24;
        *(_DWORD *)((char *)v11 + v23 - 4) = *(_DWORD *)&v24[v23 - 4];
      }
      else if ( v23 )
      {
        *(_BYTE *)v11 = *v24;
        if ( (v23 & 2) != 0 )
          *(_WORD *)((char *)v11 + v23 - 2) = *(_WORD *)&v24[v23 - 2];
      }
    }
    else
    {
      *(_QWORD *)v11 = *(_QWORD *)v24;
      *(_QWORD *)((char *)v11 + v23 - 8) = *(_QWORD *)&v24[v23 - 8];
      v25 = (unsigned __int64)(v11 + 2) & 0xFFFFFFFFFFFFFFF8LL;
      v26 = (char *)v11 - v25;
      v27 = (char *)(v24 - v26);
      v28 = ((_DWORD)v26 + v23) & 0xFFFFFFF8;
      if ( v28 >= 8 )
      {
        v29 = v28 & 0xFFFFFFF8;
        v30 = 0;
        do
        {
          v31 = v30;
          v30 += 8;
          *(_QWORD *)(v25 + v31) = *(_QWORD *)&v27[v31];
        }
        while ( v30 < v29 );
      }
    }
    goto LABEL_6;
  }
  v10 = *(_WORD *)(a1 + 20);
  v11 = *(_DWORD **)(a1 + 40);
  *(_QWORD *)(a1 + 8) = v11;
  v12 = v10 & 0x2D;
  *(_WORD *)(a1 + 20) = v12;
  v13 = v12 & 4;
  if ( (v12 & 4) != 0 )
    goto LABEL_11;
LABEL_3:
  v32[1] = v11;
  v32[0] = 0;
  v32[2] = 32;
  v33 = 0;
  v34 = 0;
  a7 = *(double *)a1;
  if ( (v12 & 0x20) != 0 )
    a7 = (double)SLODWORD(a7);
  sub_DBBA0((unsigned int)v32, (unsigned int)"%!.15g", 0, a4, a5, a6);
  *((_BYTE *)v11 + v33) = 0;
LABEL_6:
  v14 = strlen(*(const char **)(a1 + 8));
  *(_BYTE *)(a1 + 22) = 1;
  *(_DWORD *)(a1 + 16) = v14 & 0x3FFFFFFF;
  v15 = *(_WORD *)(a1 + 20);
  if ( a3 )
    v15 &= 0xFFD3u;
  *(_WORD *)(a1 + 20) = v15 | 0x202;
  sub_E0AA0(a1, a2, a7);
  return 0;
}
