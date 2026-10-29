bool __fastcall sub_191200(__int64 a1, char a2, char a3, __int64 a4, int a5)
{
  __int16 v9; // r14
  int v10; // eax
  int v11; // r11d
  int v12; // r11d
  int v13; // r14d
  bool result; // al
  _WORD *v15; // r11
  __int16 v16; // cx
  int v17; // r9d
  __int16 v18; // r15
  __int64 v19; // r8
  __int16 v20; // si
  __int16 v21; // dx
  _WORD *v22; // rax
  __int16 v23; // cx
  int v24; // r8d
  __int16 v25; // r10
  __int64 v26; // rax
  unsigned __int16 *v27; // rcx
  unsigned int v28; // esi
  _BYTE *v29; // rdx
  int v30; // eax
  int v31; // edi
  unsigned int v32; // eax
  __int16 v33; // [rsp+4h] [rbp-64h]
  int v34; // [rsp+Ch] [rbp-5Ch]
  _BYTE v35[22]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-40h]

  v9 = *(_WORD *)(a1 + 2);
  v36 = __readfsqword(0x28u);
  v10 = sub_190980(a1);
  if ( v10 > 112 )
  {
    result = v9 != 0;
    goto LABEL_14;
  }
  v12 = v11 - v10;
  v13 = v12;
  if ( v12 <= 32766 )
  {
    if ( v12 >= 0 )
    {
      if ( !a5 )
      {
LABEL_5:
        *(_WORD *)(a1 + 20) = 0;
        goto LABEL_6;
      }
      memset(v35, 0, sizeof(v35));
      if ( a5 != 56 )
      {
LABEL_18:
        if ( a5 <= 56 )
        {
          if ( a5 != 24 )
          {
            if ( a5 == 53 )
            {
              *(_WORD *)&v35[12] = 2048;
              if ( v13 > 0 )
              {
                v15 = (_WORD *)(a1 + 12);
                v16 = -2048;
                v17 = 7;
                v18 = 1024;
                v19 = 6;
                v20 = 2048;
                v21 = *(_WORD *)(a1 + 12) & 0x7FF;
LABEL_45:
                v26 = v17;
                do
                {
                  if ( *(_WORD *)(a1 + 2 * v26) )
                    v21 |= 1u;
                  *(_WORD *)(a1 + 2 * v26++) = 0;
                }
                while ( (_DWORD)v26 != 11 );
                *v15 &= v16;
                if ( ((unsigned __int16)v18 & (unsigned __int16)v21) == 0 )
                  goto LABEL_55;
                goto LABEL_50;
              }
              goto LABEL_43;
            }
LABEL_24:
            *(_WORD *)&v35[18] = 1;
            goto LABEL_25;
          }
          *(_WORD *)&v35[8] = 256;
          if ( v13 > 0 )
          {
            v21 = *(unsigned __int8 *)(a1 + 8);
            v15 = (_WORD *)(a1 + 8);
            v16 = -256;
            v17 = 5;
            v18 = 128;
            v19 = 4;
            v20 = 256;
            goto LABEL_45;
          }
          goto LABEL_73;
        }
        goto LABEL_31;
      }
      *(_WORD *)&v35[12] = 256;
      if ( v12 )
      {
        v21 = *(unsigned __int8 *)(a1 + 12);
        v15 = (_WORD *)(a1 + 12);
        v16 = -256;
        v17 = 7;
        v18 = 128;
        v19 = 6;
        v20 = 256;
        goto LABEL_45;
      }
LABEL_65:
      v23 = -256;
      v18 = 128;
      v24 = 6;
      v20 = 256;
      goto LABEL_44;
    }
    if ( v12 < -112 )
    {
LABEL_12:
      result = 0;
      goto LABEL_14;
    }
    if ( (unsigned int)sub_190F60(a1, v12) == 1 )
    {
      if ( a5 )
      {
        memset(v35, 0, sizeof(v35));
        if ( a5 != 56 )
          goto LABEL_18;
        *(_WORD *)&v35[12] = 256;
        goto LABEL_65;
      }
    }
    else if ( a5 )
    {
      memset(v35, 0, sizeof(v35));
      if ( a5 != 56 )
      {
        if ( a5 <= 56 )
        {
          if ( a5 != 24 )
          {
            if ( a5 == 53 )
            {
              a2 = 1;
              *(_WORD *)&v35[12] = 2048;
LABEL_43:
              v23 = -2048;
              v18 = 1024;
              v24 = 6;
              v20 = 2048;
LABEL_44:
              v34 = v24;
              v33 = v23;
              sub_190880(a1);
              v16 = v33;
              v19 = v34;
              v21 = v25 & *v15;
              goto LABEL_45;
            }
            a2 = 1;
            goto LABEL_24;
          }
          a2 = 1;
          *(_WORD *)&v35[8] = 256;
LABEL_73:
          v23 = -256;
          v18 = 128;
          v24 = 4;
          v20 = 256;
          goto LABEL_44;
        }
        a2 = 1;
LABEL_31:
        if ( a5 == 64 )
        {
          v21 = *(_WORD *)(a1 + 14);
          *(_WORD *)&v35[12] = 1;
          v22 = (_WORD *)(a1 + 16);
          do
          {
            if ( *v22 )
              v21 |= 1u;
            *v22++ = 0;
          }
          while ( (_WORD *)(a1 + 22) != v22 );
          if ( v21 >= 0 )
            goto LABEL_27;
          v19 = 6;
          v18 = 0x8000;
          v20 = 1;
LABEL_50:
          if ( v21 == v18 )
          {
            if ( a2 )
            {
              if ( a3 )
                goto LABEL_55;
            }
            else if ( (*(_WORD *)(a1 + 2 * v19) & (unsigned __int16)v20) == 0 )
            {
              goto LABEL_55;
            }
          }
          v27 = (unsigned __int16 *)(a1 + 20);
          v28 = 0;
          v29 = &v35[20];
          do
          {
            v30 = *(unsigned __int16 *)v29;
            v31 = *v27;
            v29 -= 2;
            --v27;
            v32 = v28 + v31 + v30;
            v27[1] = v32;
            v28 = HIWORD(v32);
          }
          while ( v29 != &v35[2] );
LABEL_55:
          if ( a5 <= 63 && v13 <= 0 )
          {
LABEL_57:
            sub_190900(a1);
            if ( *(_WORD *)(a1 + 4) )
            {
              ++v13;
              sub_190880(a1);
              goto LABEL_5;
            }
            goto LABEL_11;
          }
          goto LABEL_27;
        }
        *(_WORD *)&v35[18] = 1;
        if ( a5 > 63 )
        {
          v21 = *(_WORD *)(a1 + 20);
          if ( v21 >= 0 )
            goto LABEL_27;
LABEL_61:
          v19 = 9;
          v18 = 0x8000;
          v20 = 1;
          goto LABEL_50;
        }
LABEL_25:
        if ( v13 <= 0 )
        {
          sub_190880(a1);
          v21 = *(_WORD *)(a1 + 20);
          *(_WORD *)(a1 + 20) = 0;
          if ( v21 >= 0 )
            goto LABEL_57;
        }
        else
        {
          v21 = *(_WORD *)(a1 + 20);
          *(_WORD *)(a1 + 20) = 0;
          if ( v21 >= 0 )
          {
LABEL_27:
            if ( !*(_WORD *)(a1 + 4) )
              goto LABEL_5;
            ++v13;
            sub_190880(a1);
            *(_WORD *)(a1 + 20) = 0;
            if ( v13 != 0x7FFF )
            {
LABEL_6:
              if ( v13 > 0 )
              {
                *(_WORD *)(a1 + 2) = v13;
                return 1;
              }
              goto LABEL_12;
            }
            goto LABEL_29;
          }
        }
        goto LABEL_61;
      }
      a2 = 1;
      *(_WORD *)&v35[12] = 256;
      goto LABEL_65;
    }
LABEL_11:
    *(_WORD *)(a1 + 20) = 0;
    goto LABEL_12;
  }
LABEL_29:
  result = 1;
LABEL_14:
  if ( a1 )
  {
    *(_OWORD *)a1 = 0;
    *(_QWORD *)(a1 + 14) = 0;
  }
  return result;
}
