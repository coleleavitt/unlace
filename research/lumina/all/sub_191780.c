__int64 __fastcall sub_191780(__int64 a1, __int64 a2)
{
  int v2; // r12d
  signed int v4; // r9d
  int v5; // r11d
  __int16 *v6; // r8
  __int16 *v7; // r10
  __int64 v8; // rax
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // r12d
  int v16; // edx
  __int16 *v17; // rcx
  __int16 v18; // ax
  int v19; // r11d
  _BYTE v21[22]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]

  v2 = *(unsigned __int16 *)(a2 + 2);
  v22 = __readfsqword(0x28u);
  sub_190980(a1);
  memset(v21, 0, sizeof(v21));
  v4 = v2 - sub_190980(a2);
  if ( v5 > v4 )
  {
    v15 = 0;
  }
  else
  {
    v6 = (__int16 *)&v21[20];
    v7 = (__int16 *)&v21[2];
    do
    {
      v8 = 4;
      while ( 1 )
      {
        v9 = *(_WORD *)(a1 + v8);
        v10 = *(_WORD *)(a2 + v8);
        if ( v9 != v10 )
          break;
        v8 += 2;
        if ( v8 == 22 )
          goto LABEL_6;
      }
      v15 = 0;
      if ( v10 < v9 )
        goto LABEL_9;
LABEL_6:
      v11 = 20;
      v12 = 0;
      do
      {
        v13 = *(unsigned __int16 *)(a1 + v11);
        v14 = *(unsigned __int16 *)(a2 + v11) - v13 - v12;
        *(_WORD *)(a2 + v11) = *(_WORD *)(a2 + v11) - v13 - v12;
        v11 -= 2;
        v12 = HIWORD(v14) & 1;
      }
      while ( v11 != 2 );
      v15 = 1;
LABEL_9:
      v16 = 0;
      v17 = v6;
      do
      {
        if ( *v17 < 0 )
          v16 |= 1u;
        v18 = 2 * *v17;
        if ( (v16 & 2) != 0 )
          v18 |= 1u;
        --v17;
        v16 *= 2;
        v17[1] = v18;
      }
      while ( v17 != v7 );
      LOWORD(v15) = *(_WORD *)&v21[20] | v15;
      *(_WORD *)&v21[20] = v15;
      sub_190900(a2);
    }
    while ( v19 <= v4 );
  }
  sub_191200(a2, 0, 0, (unsigned int)v4, 0);
  return v15;
}
