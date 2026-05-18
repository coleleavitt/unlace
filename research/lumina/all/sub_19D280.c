const char *__fastcall sub_19D280(const char *a1, _BYTE *a2, __int64 a3)
{
  const char *v3; // r12
  char *v5; // rax
  unsigned __int64 v6; // r13
  char *v7; // rbp
  char v8; // cl
  char *v9; // rbx
  char *v11; // r14
  char *v12; // rax
  char v13; // r15
  char *v14; // rax
  char v15; // r15
  char *v16; // rax
  char v17; // si
  int v18; // esi
  int v19; // esi
  _BYTE *v20; // rdi
  char *i; // rdx
  char v22; // al
  unsigned int v23; // [rsp+0h] [rbp-68h]
  _BYTE *v24; // [rsp+8h] [rbp-60h]
  _BYTE v25[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v24 = a2;
  v26 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1225);
    goto LABEL_68;
  }
  v3 = a1;
  if ( strchr(a1, 37) )
  {
    v5 = a2;
    v6 = (unsigned __int64)&a2[a3];
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = (char *)(v3 + 1);
          v8 = *v3;
          if ( (unsigned __int64)v5 >= v6 )
          {
LABEL_62:
            if ( !unk_2439A0 )
              sub_198E10(518);
            goto LABEL_68;
          }
          v9 = v5 + 1;
          *v5 = v8;
          if ( (unsigned __int64)(v5 + 1) >= v6 )
          {
            *(_BYTE *)(v6 - 1) = 0;
            v9 = (char *)(v6 - 1);
          }
          if ( !v8 )
            return v24;
          if ( v8 == 37 )
            break;
          v5 = v9;
          ++v3;
        }
        if ( v3[1] != 37 )
          break;
        v3 += 2;
        if ( (unsigned __int64)v9 >= v6 )
          goto LABEL_62;
        v5 = v9 + 1;
        *v9 = 37;
        if ( (unsigned __int64)(v9 + 1) >= v6 )
          goto LABEL_12;
      }
      v11 = (char *)(v3 + 1);
      while ( 1 )
      {
        v13 = *v11;
        if ( !strchr("+-0123456789*#.", *v11) )
          break;
        ++v11;
        if ( (unsigned __int64)v9 >= v6 )
          goto LABEL_62;
        v12 = v9 + 1;
        *v9 = v13;
        if ( (unsigned __int64)(v9 + 1) >= v6 )
        {
          *(_BYTE *)(v6 - 1) = 0;
          v12 = (char *)(v6 - 1);
        }
        v9 = v12;
      }
      if ( v13 == 97 )
      {
        if ( v11 != v7 )
        {
          v9 -= v11 - v7;
          while ( 1 )
          {
            v23 = *v7;
            if ( !strchr("+-0*#.", v23) )
              break;
            ++v7;
            if ( (unsigned __int64)v9 >= v6 )
              goto LABEL_62;
            *v9++ = v23;
            if ( (unsigned __int64)v9 >= v6 )
            {
              *(_BYTE *)(v6 - 1) = 0;
              v9 = (char *)(v6 - 1);
            }
          }
          if ( v23 <= 0x7F )
          {
            v18 = 0;
            do
            {
              if ( v23 - 48 > 9 )
                break;
              ++v7;
              v18 = v23 + 10 * v18 - 48;
              v23 = *v7;
            }
            while ( v23 <= 0x7F );
            if ( v18 )
            {
              v19 = 2 * v18;
              v20 = v25;
              do
              {
                *v20++ = v19 % 10 + 48;
                v19 /= 10;
              }
              while ( v19 );
              *v20 = 0;
              sub_199780(v25, v20 - v25);
              if ( (unsigned __int64)v9 < v6 )
              {
                for ( i = v25; v9 != (char *)(v6 - 1); ++v9 )
                {
                  v22 = *i++;
                  *v9 = v22;
                  if ( !v22 )
                    goto LABEL_38;
                }
                *(_BYTE *)(v6 - 1) = 0;
                v9 = (char *)(v6 - 1);
                goto LABEL_38;
              }
LABEL_66:
              if ( !unk_2439A0 )
                sub_198E10(520);
LABEL_68:
              BUG();
            }
          }
LABEL_38:
          while ( 1 )
          {
            v15 = *v7;
            if ( !strchr("+-0123456789*#.", *v7) )
              break;
            ++v7;
            if ( (unsigned __int64)v9 >= v6 )
              goto LABEL_62;
            v14 = v9 + 1;
            *v9 = v15;
            if ( (unsigned __int64)(v9 + 1) >= v6 )
            {
              *(_BYTE *)(v6 - 1) = 0;
              v14 = (char *)(v6 - 1);
            }
            v9 = v14;
          }
        }
        if ( (unsigned __int64)v9 >= v6 )
          goto LABEL_66;
        v16 = "ll";
        if ( v9 == (char *)(v6 - 1) )
        {
          *(_BYTE *)(v6 - 1) = 0;
        }
        else
        {
          while ( 1 )
          {
            v17 = *v16++;
            *v9 = v17;
            if ( !v17 )
              break;
            if ( ++v9 == (char *)(v6 - 1) )
            {
              *(_BYTE *)(v6 - 1) = 0;
              break;
            }
          }
          if ( (unsigned __int64)v9 >= v6 )
            goto LABEL_62;
        }
        v5 = v9 + 1;
        *v9 = 88;
        if ( (unsigned __int64)(v9 + 1) >= v6 )
        {
          *(_BYTE *)(v6 - 1) = 0;
          v5 = (char *)(v6 - 1);
        }
        v3 = v11 + 1;
      }
      else
      {
        v3 = v11 + 1;
        if ( (unsigned __int64)v9 >= v6 )
          goto LABEL_62;
        v5 = v9 + 1;
        *v9 = v13;
        if ( (unsigned __int64)(v9 + 1) >= v6 )
        {
LABEL_12:
          *(_BYTE *)(v6 - 1) = 0;
          v5 = (char *)(v6 - 1);
        }
      }
    }
  }
  return a1;
}
