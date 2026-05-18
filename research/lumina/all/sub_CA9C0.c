_BOOL8 __fastcall sub_CA9C0(unsigned __int8 *a1)
{
  unsigned __int8 v1; // r11
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  int v7; // edx
  unsigned __int8 *v9; // rdx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // dl
  unsigned __int8 *v12; // rax
  unsigned __int8 v13; // cl
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // r14
  char v17; // cl
  __int64 v18; // rsi
  int v19; // eax
  char *v20; // rsi
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // [rsp+0h] [rbp-48h]
  __int64 v27; // [rsp+0h] [rbp-48h]
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+0h] [rbp-48h]
  __int64 v31; // [rsp+8h] [rbp-40h]
  __int64 v32; // [rsp+8h] [rbp-40h]
  __int64 v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+8h] [rbp-40h]
  __int64 v35; // [rsp+8h] [rbp-40h]
  __int64 v36; // [rsp+10h] [rbp-38h]
  __int64 v37; // [rsp+10h] [rbp-38h]
  __int64 v38; // [rsp+10h] [rbp-38h]
  __int64 v39; // [rsp+10h] [rbp-38h]
  __int64 v40; // [rsp+10h] [rbp-38h]

  v1 = *a1;
  if ( *a1 )
  {
    v2 = 1;
    v3 = 0;
    v4 = 0x2000000020000LL;
    v5 = 0x100000001LL;
    while ( 1 )
    {
      v6 = a1[1];
      switch ( v1 )
      {
        case 9u:
        case 0xAu:
        case 0xCu:
        case 0xDu:
        case 0x20u:
          v1 = a1[1];
          v7 = 1;
          goto LABEL_5;
        case 0x22u:
        case 0x27u:
        case 0x60u:
          v9 = a1 + 1;
          if ( !(_BYTE)v6 )
            return 0;
          if ( v1 == (_BYTE)v6 )
          {
            v1 = a1[2];
            ++a1;
            v7 = 2;
          }
          else
          {
            while ( 1 )
            {
              v10 = v9[1];
              a1 = v9 + 1;
              if ( !v10 )
                return 0;
              if ( v10 == v1 )
                break;
              ++v9;
            }
            v1 = v9[2];
            v7 = 2;
          }
          goto LABEL_5;
        case 0x2Du:
          v1 = a1[1];
          v7 = 2;
          if ( (_BYTE)v6 != 45 )
            goto LABEL_5;
          if ( *a1 && *a1 != 10 )
          {
            while ( 1 )
            {
              ++a1;
              if ( !(_BYTE)v6 || (_BYTE)v6 == 10 )
                break;
              LOBYTE(v6) = a1[1];
            }
          }
          else
          {
            LOBYTE(v6) = *a1;
          }
          if ( !(_BYTE)v6 )
            return (_BYTE)v3 == 1;
          v1 = a1[1];
          v7 = 1;
          goto LABEL_5;
        case 0x2Fu:
          v1 = a1[1];
          v7 = 2;
          if ( (_BYTE)v6 != 42 )
            goto LABEL_5;
          v11 = a1[2];
          v12 = a1 + 2;
          if ( !v11 )
            return 0;
          while ( 1 )
          {
            v13 = v12[1];
            if ( v11 == 42 && v13 == 47 )
              break;
            ++v12;
            v11 = v13;
            if ( !v13 )
              return 0;
          }
          a1 = v12 + 1;
          v1 = v12[2];
          v7 = 1;
          goto LABEL_5;
        case 0x3Bu:
          v1 = a1[1];
          v7 = 0;
          goto LABEL_5;
        case 0x5Bu:
          ++a1;
          if ( (_BYTE)v6 )
          {
            do
            {
              if ( (_BYTE)v6 == 93 )
                break;
              LOBYTE(v6) = *++a1;
            }
            while ( *a1 );
          }
          if ( !(_BYTE)v6 )
            return 0;
          v1 = a1[1];
          v7 = 2;
          goto LABEL_5;
        default:
          v14 = v1;
          v7 = 2;
          v1 = a1[1];
          if ( (byte_1BEF00[v14] & 0x46) == 0 )
            goto LABEL_5;
          if ( (byte_1BEF00[v6] & 0x46) != 0 )
          {
            v15 = 1;
            do
              ++v15;
            while ( (byte_1BEF00[a1[v15]] & 0x46) != 0 );
            v16 = (__int64)&a1[v15 - 1];
            v1 = a1[v15];
          }
          else
          {
            v16 = (__int64)a1;
            v15 = 1;
          }
          v17 = v14 - 67;
          v7 = 2;
          if ( (unsigned __int8)(v14 - 67) > 0x31u )
            goto LABEL_48;
          v18 = v2 << v17;
          if ( ((v2 << v17) & 0x400000004LL) != 0 )
          {
            if ( v15 == 3 )
            {
              if ( a1 )
              {
                v38 = v5;
                v33 = v4;
                v28 = v2;
                v23 = sub_CA590(a1, (unsigned __int8 *)"end", 3);
                v2 = v28;
                v4 = v33;
                v5 = v38;
                v7 = v23 == 0 ? 7 : 2;
              }
            }
            else
            {
              if ( !a1 || v15 != 7 )
              {
LABEL_47:
                v7 = 2;
                goto LABEL_48;
              }
              v36 = v5;
              v31 = v4;
              v26 = v2;
              v19 = sub_CA590(a1, "explain", 7);
              v2 = v26;
              v4 = v31;
              v5 = v36;
              v7 = (v19 == 0) + 2;
            }
          }
          else if ( (v4 & v18) != 0 )
          {
            if ( v15 == 7 )
            {
              if ( a1 )
              {
                v39 = v5;
                v34 = v4;
                v29 = v2;
                v24 = sub_CA590(a1, "trigger", 7);
                v2 = v29;
                v4 = v34;
                v5 = v39;
                v7 = v24 == 0 ? 6 : 2;
              }
              goto LABEL_48;
            }
            if ( v15 == 4 )
            {
              if ( !a1 )
                goto LABEL_48;
              v37 = v5;
              v32 = v4;
              v21 = 4;
              v27 = v2;
              v20 = "temp";
            }
            else
            {
              if ( !a1 || v15 != 9 )
                goto LABEL_47;
              v20 = "temporary";
              v37 = v5;
              v32 = v4;
              v27 = v2;
              v21 = 9;
            }
            v22 = sub_CA590(a1, (unsigned __int8 *)v20, v21);
            v2 = v27;
            v4 = v32;
            v5 = v37;
            v7 = v22 == 0 ? 5 : 2;
          }
          else
          {
            if ( v15 != 6 || (v5 & v18) == 0 || !a1 )
              goto LABEL_47;
            v40 = v5;
            v35 = v4;
            v30 = v2;
            v25 = sub_CA590(a1, (unsigned __int8 *)"create", 6);
            v2 = v30;
            v4 = v35;
            v5 = v40;
            v7 = v25 == 0 ? 4 : 2;
          }
LABEL_48:
          a1 = (unsigned __int8 *)v16;
LABEL_5:
          ++a1;
          LOBYTE(v3) = byte_1BAA20[8 * v3 + v7];
          if ( !v1 )
            return (_BYTE)v3 == 1;
          break;
      }
    }
  }
  return 0;
}
