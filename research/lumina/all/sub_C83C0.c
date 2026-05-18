__int64 __fastcall sub_C83C0(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 *v4; // r15
  int v7; // r9d
  int v8; // r10d
  unsigned __int8 v9; // r11
  unsigned __int8 **v10; // r8
  unsigned int v11; // r13d
  char *v12; // rax
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned __int8 **v15; // r8
  unsigned int v16; // r13d
  unsigned __int8 **v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // eax
  unsigned __int8 **v21; // r8
  unsigned __int8 **p_s; // r10
  char *v23; // rax
  unsigned int v24; // eax
  unsigned int v25; // r12d
  char *v26; // r12
  char *v27; // rax
  __int64 v28; // r8
  char *v29; // rax
  int v30; // eax
  char *v31; // rsi
  char v32; // dl
  char *v33; // rax
  char *v34; // rax
  int v35; // [rsp+8h] [rbp-60h]
  int v36; // [rsp+Ch] [rbp-5Ch]
  char *s; // [rsp+10h] [rbp-58h] BYREF
  char *v38; // [rsp+18h] [rbp-50h] BYREF
  char reject; // [rsp+25h] [rbp-43h] BYREF
  unsigned __int8 v40; // [rsp+26h] [rbp-42h]
  char v41; // [rsp+27h] [rbp-41h]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v4 = nullptr;
  v7 = a3[1];
  v8 = *a3;
  v9 = a3[3];
  s = a2;
  v10 = (unsigned __int8 **)&v38;
  v38 = (char *)a1;
  v42 = __readfsqword(0x28u);
LABEL_2:
  if ( (*a1 & 0x80u) == 0 )
  {
LABEL_3:
    v38 = (char *)(a1 + 1);
    v11 = *a1;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v11 = sub_C2340(v10);
LABEL_4:
    if ( !v11 )
      return *s != 0;
    if ( v11 == v8 )
      break;
    if ( v11 == a4 )
    {
      if ( a3[2] )
      {
        v16 = sub_C2340((unsigned __int8 **)&s);
        if ( !v16 )
          return 1;
        v17 = v15;
        v18 = sub_C2340(v15);
        v36 = 0;
        if ( v18 == 94 )
        {
          v18 = sub_C2340(v17);
          v36 = 1;
        }
        v35 = 0;
        if ( v18 == 93 )
        {
          v35 = v16 == 93;
          v18 = sub_C2340(v10);
        }
        if ( v18 != 93 )
        {
          v19 = 0;
          if ( v18 )
          {
            do
            {
              if ( v18 == 45 && *v38 != 93 && *v38 != 0 && v19 )
              {
                v20 = sub_C2340(v10);
                if ( v16 >= v19 && v16 <= v20 )
                  v35 = 1;
                v19 = 0;
              }
              else
              {
                v19 = v18;
                if ( v16 == v18 )
                {
                  v19 = v16;
                  v35 = 1;
                }
              }
              v18 = sub_C2340(v10);
            }
            while ( v18 && v18 != 93 );
          }
        }
        if ( !v18 || v36 == v35 )
          return 1;
        goto LABEL_20;
      }
      v11 = sub_C2340(v10);
      if ( !v11 )
        return 1;
      v12 = s;
      v4 = (unsigned __int8 *)v38;
      if ( *s >= 0 )
      {
LABEL_8:
        s = v12 + 1;
        v13 = (unsigned __int8)*v12;
        if ( v11 == v13 )
          goto LABEL_20;
        goto LABEL_9;
      }
    }
    else
    {
      v12 = s;
      if ( *s >= 0 )
        goto LABEL_8;
    }
    v13 = sub_C2340((unsigned __int8 **)&s);
    if ( v11 == v13 )
      goto LABEL_20;
LABEL_9:
    if ( !v9 || byte_1BF000[(unsigned __int8)v11] != byte_1BF000[(unsigned __int8)v13] || v11 > 0x7F || v13 > 0x7F )
    {
      if ( v11 != v7 )
        return 1;
      a1 = (unsigned __int8 *)v38;
      if ( !v13 || v38 == (char *)v4 )
        return 1;
      goto LABEL_2;
    }
LABEL_20:
    a1 = (unsigned __int8 *)v38;
    if ( *v38 >= 0 )
      goto LABEL_3;
  }
  v21 = (unsigned __int8 **)&v38;
  p_s = (unsigned __int8 **)&s;
  while ( 1 )
  {
    v23 = v38;
    if ( *v38 >= 0 )
    {
LABEL_50:
      v38 = v23 + 1;
      v24 = (unsigned __int8)*v23;
      goto LABEL_51;
    }
    while ( 1 )
    {
      v24 = sub_C2340(v21);
LABEL_51:
      if ( v24 != v11 )
        break;
      if ( v11 == v7 )
        goto LABEL_54;
      v23 = v38;
      if ( *v38 >= 0 )
        goto LABEL_50;
    }
    if ( v24 != v7 || !v7 )
      break;
LABEL_54:
    if ( !(unsigned int)sub_C2340(p_s) )
      return 2;
  }
  v25 = v24;
  result = 0;
  if ( v25 )
  {
    if ( v25 == a4 )
    {
      if ( a3[2] )
      {
        v31 = s;
        v32 = *s;
        while ( v32 )
        {
          result = sub_C83C0(v38 - 1, v31, a3, v25, v21);
          if ( (_DWORD)result != 1 )
            return result;
          v33 = s;
          v31 = ++s;
          v32 = v33[1];
          if ( (unsigned __int8)*v33 > 0xBFu && (v32 & 0xC0) == 0x80 )
          {
            v34 = v33 + 2;
            do
            {
              s = v34;
              v32 = *v34;
              v31 = v34++;
            }
            while ( (v32 & 0xC0) == 0x80 );
          }
        }
      }
      else
      {
        v25 = sub_C2340((unsigned __int8 **)&v38);
        if ( v25 )
          goto LABEL_61;
      }
    }
    else
    {
LABEL_61:
      if ( v25 > 0x80 )
      {
        while ( 1 )
        {
          v29 = s;
          if ( *s < 0 )
          {
            v30 = sub_C2340((unsigned __int8 **)&s);
          }
          else
          {
            ++s;
            v30 = (unsigned __int8)*v29;
          }
          if ( !v30 )
            break;
          if ( v25 == v30 )
          {
            result = sub_C83C0(v38, s, a3, a4, v21);
            if ( (_DWORD)result != 1 )
              return result;
          }
        }
      }
      else
      {
        if ( v9 )
        {
          v41 = 0;
          reject = ~(byte_1BEF00[v25] & 0x20) & v25;
          v40 = byte_1BF000[v25];
        }
        else
        {
          reject = v25;
          v40 = 0;
        }
        while ( 1 )
        {
          v26 = s;
          v27 = &v26[strcspn(s, &reject)];
          s = v27;
          if ( !*v27 )
            break;
          s = v27 + 1;
          result = sub_C83C0(v38, v27 + 1, a3, a4, v28);
          if ( (_DWORD)result != 1 )
            return result;
        }
      }
    }
    return 2;
  }
  return result;
}
