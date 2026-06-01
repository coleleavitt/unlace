__int64 __fastcall sub_248F0(__int64 *a1, unsigned int a2, unsigned __int64 a3)
{
  const char *v3; // rbp
  __int64 result; // rax
  _BOOL8 v5; // r13
  char v6; // r14
  __int64 v7; // r12
  __int64 v8; // r8
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  const char *v12; // r14
  size_t v13; // rax
  __int64 v14; // r12
  size_t v15; // r15
  size_t v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdx
  char v19; // r12
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-48h]
  __int64 v28; // [rsp+0h] [rbp-48h]
  size_t v29; // [rsp+8h] [rbp-40h]

  if ( a2 > 0xC2 )
    return -1;
  v3 = (const char *)*(&off_A0000 + (int)a2);
  if ( a2 - 129 > 0x1F )
  {
    if ( a2 == 161 )
    {
      if ( a3 == 4 )
      {
        if ( !a1 )
        {
          v20 = 87;
          v3 = "SP";
          goto LABEL_53;
        }
        v6 = 0;
        v3 = "SP";
        if ( (unsigned __int64)a1[2] > 0xF )
        {
LABEL_59:
          v22 = a1[1];
          if ( v22 )
          {
            v23 = v22 + 1;
            v24 = a1[1];
            --v22;
          }
          else
          {
            v24 = 1;
            v23 = 2;
          }
          v25 = *a1;
          if ( a1[2] < v23 )
          {
            v26 = qvector_reserve((__int64)a1, v25, v23, 1);
            *a1 = v26;
            v25 = v26;
          }
          a1[1] = v23;
          v5 = 1;
          *(_BYTE *)(v25 + v22) = 87;
          *(_BYTE *)(*a1 + v24) = 0;
LABEL_64:
          if ( v6 )
          {
LABEL_8:
            v7 = a1[1];
            if ( !v7 )
            {
              v8 = 1;
              v9 = 2;
              goto LABEL_10;
            }
LABEL_45:
            v9 = v7 + 1;
            v8 = v7--;
LABEL_10:
            v10 = *a1;
            if ( a1[2] < v9 )
            {
              v27 = v8;
              v11 = qvector_reserve((__int64)a1, v10, v9, 1);
              v8 = v27;
              *a1 = v11;
              v10 = v11;
            }
            goto LABEL_12;
          }
          goto LABEL_29;
        }
        v19 = 87;
        v6 = 0;
        v3 = "SP";
LABEL_58:
        v5 = 0;
        *a1 = qvector_reserve((__int64)a1, *a1, 16, 1);
        if ( !v19 )
          goto LABEL_64;
        goto LABEL_59;
      }
      if ( a3 != 8 )
        return -1;
      if ( !a1 )
      {
        v20 = 0;
        v3 = "SP";
        goto LABEL_53;
      }
      v12 = "SP";
      if ( (unsigned __int64)a1[2] <= 0xF )
      {
        v19 = 0;
        v6 = 0;
        v3 = "SP";
        goto LABEL_58;
      }
    }
    else
    {
      if ( a2 != 162 )
      {
        if ( a2 - 163 <= 0x1F )
        {
          if ( a3 <= 0x20 )
          {
            if ( a3 )
            {
              switch ( a3 )
              {
                case 1uLL:
                  if ( !a1 )
                    goto LABEL_52;
                  v6 = 66;
                  if ( (unsigned __int64)a1[2] > 0xF )
                    goto LABEL_44;
                  v19 = 0;
                  v6 = 66;
                  break;
                case 2uLL:
                  if ( !a1 )
                    goto LABEL_52;
                  v6 = 72;
                  if ( (unsigned __int64)a1[2] > 0xF )
                    goto LABEL_44;
                  v19 = 0;
                  v6 = 72;
                  break;
                case 4uLL:
                  if ( !a1 )
                    goto LABEL_52;
                  v6 = 83;
                  if ( (unsigned __int64)a1[2] > 0xF )
                    goto LABEL_44;
                  v19 = 0;
                  v6 = 83;
                  break;
                case 8uLL:
                  if ( !a1 )
                    goto LABEL_52;
                  v6 = 68;
                  if ( (unsigned __int64)a1[2] > 0xF )
                    goto LABEL_44;
                  v19 = 0;
                  v6 = 68;
                  break;
                case 0x10uLL:
                  if ( !a1 )
                    goto LABEL_52;
                  v6 = 81;
                  if ( (unsigned __int64)a1[2] > 0xF )
                    goto LABEL_44;
                  v19 = 0;
                  v6 = 81;
                  break;
                case 0x20uLL:
                  v6 = 80;
                  goto LABEL_82;
                default:
                  return -1;
              }
              goto LABEL_58;
            }
            return -1;
          }
          v6 = 90;
          if ( a3 != 64 )
            return -1;
        }
        else
        {
          if ( a2 <= 0xF && a3 > 4 )
            return -1;
          if ( a2 - 93 <= 0x1F )
          {
            if ( a3 <= 4 )
            {
              v5 = 0;
              if ( !a1 )
                return v5 + strlen(v3);
              if ( (unsigned __int64)a1[2] > 0xF )
              {
LABEL_29:
                if ( v3 )
                {
                  v12 = v3;
                  goto LABEL_13;
                }
                return v5 + strlen(v3);
              }
              goto LABEL_57;
            }
            return -1;
          }
          if ( a2 - 61 <= 0x1F )
          {
            if ( a3 <= 8 )
            {
              if ( !a1 )
                goto LABEL_52;
              if ( (unsigned __int64)a1[2] > 0xF )
              {
                v5 = 0;
                goto LABEL_29;
              }
LABEL_57:
              v19 = 0;
              v6 = 0;
              goto LABEL_58;
            }
            return -1;
          }
          v6 = 0;
LABEL_82:
          if ( a2 - 45 <= 0xF && a3 > 0x10 )
            return -1;
        }
LABEL_84:
        if ( a1 )
        {
          if ( (unsigned __int64)a1[2] > 0xF )
          {
            v5 = 0;
            goto LABEL_64;
          }
          goto LABEL_92;
        }
        goto LABEL_52;
      }
      if ( a3 == 32 )
      {
        v6 = 0;
        v3 = "ZT0";
        goto LABEL_84;
      }
      if ( a3 == 64 )
      {
        v6 = 0;
        v3 = "ZA";
        goto LABEL_84;
      }
      result = -1;
      if ( a3 != 8 )
        return result;
      if ( !a1 )
      {
        v20 = 0;
        v3 = "PC";
        goto LABEL_53;
      }
      v12 = "PC";
      if ( (unsigned __int64)a1[2] <= 0xF )
      {
        v19 = 0;
        v6 = 0;
        v3 = "PC";
        goto LABEL_58;
      }
    }
    v3 = v12;
    v5 = 0;
    goto LABEL_13;
  }
  if ( a3 == 4 )
    goto LABEL_42;
  if ( a3 > 4 )
  {
    result = -1;
    if ( a3 != 8 )
      return result;
    if ( a1 )
    {
      v5 = 0;
      v6 = 88;
      if ( (unsigned __int64)a1[2] > 0xF )
        goto LABEL_8;
LABEL_92:
      v19 = 0;
      goto LABEL_58;
    }
    goto LABEL_52;
  }
  result = -1;
  if ( a3 - 1 <= 1 )
  {
LABEL_42:
    if ( a1 )
    {
      v6 = 87;
      if ( (unsigned __int64)a1[2] > 0xF )
      {
LABEL_44:
        v7 = a1[1];
        v5 = 0;
        if ( !v7 )
        {
          v10 = *a1;
          v9 = 2;
          v8 = 1;
LABEL_12:
          a1[1] = v9;
          *(_BYTE *)(v10 + v7) = v6;
          v12 = v3 + 1;
          *(_BYTE *)(*a1 + v8) = 0;
LABEL_13:
          v13 = strlen(v12);
          v14 = a1[1];
          v15 = v13;
          v16 = v13;
          if ( v14 )
          {
            --v14;
            v16 = v13 + v14;
          }
          v17 = *a1;
          v18 = v16 + 1;
          if ( a1[2] < v16 + 1 )
          {
            v29 = v16;
            v28 = v16 + 1;
            v21 = qvector_reserve((__int64)a1, v17, v18, 1);
            v16 = v29;
            v18 = v28;
            *a1 = v21;
            v17 = v21;
          }
          a1[1] = v18;
          *(_BYTE *)(v17 + v16) = 0;
          memmove((void *)(v14 + *a1), v12, v15);
          return v5 + strlen(v3);
        }
        goto LABEL_45;
      }
      v19 = 0;
      v6 = 87;
      goto LABEL_58;
    }
LABEL_52:
    v20 = 0;
LABEL_53:
    v5 = v20 != 0;
    return v5 + strlen(v3);
  }
  return result;
}
