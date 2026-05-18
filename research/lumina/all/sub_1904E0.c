__int64 __fastcall sub_1904E0(_BYTE *a1, __int64 a2, __int16 a3, char a4)
{
  __int16 v5; // r14
  unsigned int v6; // r13d
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r11d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r10d
  int v14; // eax
  char v15; // cl
  int v16; // eax
  __int16 v17; // dx
  char v18; // cl
  __int16 v19; // cx
  char v20; // al
  _BYTE *v21; // r9
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rdx
  __int16 v25; // r11
  char v26; // dl
  char v27; // al
  _WORD *v28; // rax
  __int64 v29; // rcx
  _WORD *v30; // rdx
  unsigned int v31; // [rsp+4h] [rbp-64h]
  __int16 v32; // [rsp+4h] [rbp-64h]
  int v33; // [rsp+8h] [rbp-60h]
  int v34; // [rsp+Ch] [rbp-5Ch]
  __int16 v35; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int16 v36; // [rsp+12h] [rbp-56h]
  __int16 v37; // [rsp+14h] [rbp-54h]
  char v38; // [rsp+16h] [rbp-52h]
  char v39; // [rsp+17h] [rbp-51h]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a3 == 5 )
  {
    v31 = 64;
    v6 = 15;
    v5 = 4;
    v7 = 4;
    goto LABEL_7;
  }
  v5 = a3;
  if ( a3 == 1 )
  {
    v31 = 24;
    v6 = 8;
    v7 = 1;
LABEL_7:
    sub_1911A0(a2, &v35);
    v10 = (v35 != 0) << 15;
    if ( v36 )
    {
      v11 = 1;
      v12 = v6;
      v13 = (1 << v6) - 1;
      if ( v36 == 0x7FFF )
      {
LABEL_13:
        if ( v5 != 4 )
        {
          v33 = v10;
          v32 = v13;
          sub_190F60(&v35, 16 - v6, v11, v12, v8, v9);
          v10 = v33;
          LOWORD(v13) = v32;
        }
        LOWORD(v14) = v10 | v13;
        v15 = 15 - v6;
        if ( v6 != 15 )
        {
          v16 = (1 << v15) - 1;
          LOWORD(v16) = v37 & v16;
          v14 = ((unsigned __int16)v13 << v15) | v10 | v16;
        }
        v17 = BYTE1(v14);
        v18 = BYTE1(v14);
        if ( a4 )
          LOBYTE(v17) = v14;
        else
          v18 = v14;
        a1[1] = v17;
        *a1 = v18;
        if ( v7 )
        {
          LOBYTE(v19) = v38;
          v20 = v39;
          if ( a4 )
          {
            v24 = 1;
            while ( 1 )
            {
              a1[2 * v24] = v20;
              a1[2 * v24++ + 1] = v19;
              if ( v7 < (int)v24 )
                break;
              v19 = *(&v37 + v24);
              v20 = HIBYTE(v19);
            }
          }
          else
          {
            v21 = a1 - 2;
            v22 = 1;
            while ( 1 )
            {
              ++v22;
              *v21 = v19;
              v21 -= 2;
              v21[3] = v20;
              if ( v7 < (int)v22 )
                break;
              v19 = *(&v37 + v22);
              v20 = HIBYTE(v19);
            }
          }
        }
        return 1;
      }
      v34 = (v35 != 0) << 15;
      if ( !(unsigned __int8)sub_191200(&v35, 0, 0, (unsigned __int16)(v36 + (1 << (v6 - 1)) - 0x4000), v31)
        || v36 >= (unsigned __int16)((1 << v6) - 1) )
      {
        return 4294967294LL;
      }
      v10 = v34;
      if ( v36 )
      {
        LOWORD(v13) = v36;
        goto LABEL_13;
      }
    }
    v25 = BYTE1(v10);
    v26 = 0;
    v27 = v25;
    if ( !a4 )
    {
      v26 = v25;
      v27 = 0;
    }
    a1[1] = v26;
    *a1 = v27;
    if ( v7 )
    {
      v28 = a1 + 2;
      v29 = (__int64)&a1[2 * (v7 - 1) + 4];
      if ( a4 )
      {
        if ( (((_BYTE)v29 - (_BYTE)v28) & 2) == 0 || (*v28 = 0, v28 = a1 + 4, (_BYTE *)v29 != a1 + 4) )
        {
          do
          {
            v28 += 2;
            *(v28 - 2) = 0;
            *(v28 - 1) = 0;
          }
          while ( (_WORD *)v29 != v28 );
        }
      }
      else
      {
        do
        {
          v30 = v28++;
          *(_WORD *)(2LL * (_QWORD)a1 - (_QWORD)v30) = 0;
        }
        while ( (_WORD *)v29 != v28 );
      }
    }
    return 1;
  }
  if ( (unsigned __int16)a3 <= 1u )
  {
    v31 = 11;
    v6 = 5;
    v5 = 0;
    v7 = 0;
    goto LABEL_7;
  }
  if ( a3 == 3 )
  {
    v31 = 53;
    v6 = 11;
    v7 = 3;
    goto LABEL_7;
  }
  result = 0xFFFFFFFFLL;
  if ( a3 == 4 )
  {
    v31 = 64;
    v6 = 15;
    v7 = 4;
    goto LABEL_7;
  }
  return result;
}
