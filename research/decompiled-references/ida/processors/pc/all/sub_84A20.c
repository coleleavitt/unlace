__int64 __fastcall sub_84A20(__int64 *a1, int a2, unsigned __int64 a3, char a4)
{
  __int64 *v5; // rbx
  _UNKNOWN **v6; // rdx
  const char *v7; // rbp
  unsigned __int64 v8; // rcx
  char v9; // r14
  size_t v10; // rax
  __int64 v11; // r12
  size_t v12; // r13
  size_t v13; // r15
  size_t v14; // rdx
  __int64 v15; // rsi
  char v17; // r12
  __int64 v18; // r13
  _BYTE *v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // r14
  __int64 v22; // rbp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  _BYTE *v26; // rsi
  char *v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v31; // [rsp+0h] [rbp-40h]

  if ( (unsigned int)a2 <= 0xAC )
  {
    v5 = a1;
    LOBYTE(a1) = (unsigned int)(a2 - 64) <= 0xF || (unsigned int)(a2 - 45) <= 7;
    LODWORD(v6) = (_DWORD)a1;
    if ( (_BYTE)a1 || (unsigned int)(a2 - 101) <= 0xF )
    {
      v6 = &off_175520;
      v7 = (const char *)*(&off_175520 + a2);
    }
    else
    {
      if ( a3 == 0 || ((a3 - 1) & a3) != 0 )
        return (unsigned int)v6;
      LODWORD(v6) = a2 - 81;
      LOBYTE(v6) = (unsigned int)(a2 - 117) <= 0xF || (unsigned int)(a2 - 81) <= 0xF;
      if ( (_BYTE)v6 )
      {
        LODWORD(v6) = 0;
        if ( a3 > 0x20 )
          return (unsigned int)v6;
        goto LABEL_40;
      }
      if ( (unsigned int)(a2 - 133) <= 0x1F )
      {
        if ( a3 > 0x40 )
          return (unsigned int)v6;
        goto LABEL_40;
      }
      if ( (unsigned int)(a2 - 97) <= 3 )
      {
        if ( a3 > 0x10 )
          return (unsigned int)v6;
        goto LABEL_40;
      }
      if ( a3 > 8 )
        return (unsigned int)v6;
      if ( a2 > 34 )
      {
        if ( (unsigned int)(a2 - 35) > 3 )
        {
LABEL_40:
          v6 = &off_175520;
          v7 = (const char *)*(&off_175520 + a2);
          goto LABEL_6;
        }
LABEL_67:
        if ( a3 != 1 )
          return (unsigned int)v6;
        goto LABEL_40;
      }
      if ( a2 <= 27 )
      {
        if ( a2 > 7 )
        {
          if ( (unsigned int)(a2 - 16) <= 0xB )
            goto LABEL_67;
          if ( a4 )
          {
            v6 = &off_175520;
            v7 = (const char *)*(&off_175520 + a2);
            if ( v5 )
            {
              v9 = aBwddddd[a3 - 1];
              if ( (unsigned __int64)v5[2] > 0xF )
                goto LABEL_57;
              goto LABEL_56;
            }
            goto LABEL_31;
          }
LABEL_69:
          LODWORD(v6) = 0;
          return (unsigned int)v6;
        }
        if ( a3 != 1 )
        {
          v6 = &off_175520;
          v7 = (const char *)*(&off_175520 + a2);
          goto LABEL_22;
        }
        goto LABEL_70;
      }
      if ( a3 == 1 )
      {
LABEL_70:
        if ( (unsigned int)a2 > 7 )
          return (unsigned int)v6;
        v30 = dword_15A580[a2];
        if ( v30 == -1 )
          return (unsigned int)v6;
        v7 = (const char *)*(&off_175520 + v30);
        LODWORD(v6) = v30 - 8;
        if ( (unsigned int)(v30 - 8) <= 7 )
        {
          if ( !a4 )
            goto LABEL_69;
          if ( !v5 )
            goto LABEL_31;
          v9 = 98;
          if ( (unsigned __int64)v5[2] <= 0xF )
          {
LABEL_56:
            *v5 = qvector_reserve();
LABEL_57:
            if ( !v7 )
              goto LABEL_14;
            goto LABEL_30;
          }
          if ( !v7 )
          {
            v22 = v5[1];
            if ( !v22 )
            {
              v26 = (_BYTE *)*v5;
              v24 = 2;
              v25 = 1;
              goto LABEL_35;
            }
            v23 = v5[2];
            goto LABEL_33;
          }
LABEL_30:
          v8 = v5[2];
LABEL_9:
          v31 = v8;
          v10 = strlen(v7);
          v11 = v5[1];
          v12 = v10;
          v13 = v10;
          if ( v11 )
          {
            --v11;
            v13 = v10 + v11;
          }
          v14 = v13 + 1;
          v15 = *v5;
          if ( v31 < v13 + 1 )
          {
            v28 = qvector_reserve();
            v14 = v13 + 1;
            *v5 = v28;
            v15 = v28;
          }
          v5[1] = v14;
          *(_BYTE *)(v15 + v13) = 0;
          memmove((void *)(v11 + *v5), v7, v12);
LABEL_14:
          if ( !v9 )
            goto LABEL_15;
          v22 = v5[1];
          v23 = v5[2];
          if ( !v22 )
          {
            v25 = 1;
            v24 = 2;
LABEL_34:
            v26 = (_BYTE *)*v5;
            if ( v23 < v24 )
            {
              v29 = qvector_reserve();
              *v5 = v29;
              v27 = (char *)(v29 + v22);
              goto LABEL_36;
            }
LABEL_35:
            v27 = &v26[v22];
LABEL_36:
            v5[1] = v24;
            *v27 = v9;
            *(_BYTE *)(*v5 + v25) = 0;
            goto LABEL_15;
          }
LABEL_33:
          v24 = v22 + 1;
          v25 = v22--;
          goto LABEL_34;
        }
        goto LABEL_6;
      }
      LODWORD(v6) = a2;
      v7 = (const char *)*(&off_175520 + a2);
    }
    if ( a2 <= 7 || a2 == 28 )
    {
LABEL_22:
      if ( a3 == 4 )
      {
        if ( !v5 )
          goto LABEL_31;
        v17 = 101;
        if ( (unsigned __int64)v5[2] > 0xF )
          goto LABEL_27;
      }
      else
      {
        if ( a3 != 8 )
          goto LABEL_6;
        LODWORD(v6) = 0;
        if ( !a4 )
          return (unsigned int)v6;
        if ( !v5 )
          goto LABEL_31;
        v17 = 114;
        if ( (unsigned __int64)v5[2] > 0xF )
        {
LABEL_27:
          v18 = v5[1];
          v19 = (_BYTE *)*v5;
          if ( !v18 )
          {
            v20 = 1;
            v21 = 2;
            goto LABEL_29;
          }
          goto LABEL_51;
        }
      }
      v19 = (_BYTE *)qvector_reserve();
      v18 = v5[1];
      *v5 = (__int64)v19;
      if ( !v18 )
      {
        v20 = 1;
        v21 = 2;
LABEL_48:
        if ( v5[2] < v21 )
        {
          v19 = (_BYTE *)qvector_reserve();
          *v5 = (__int64)v19;
        }
        v19 += v18;
LABEL_29:
        v5[1] = v21;
        v9 = 0;
        *v19 = v17;
        *(_BYTE *)(*v5 + v20) = 0;
        if ( !v7 )
          goto LABEL_15;
        goto LABEL_30;
      }
LABEL_51:
      v21 = v18 + 1;
      v20 = v18--;
      goto LABEL_48;
    }
LABEL_6:
    if ( v5 )
    {
      v8 = v5[2];
      v9 = 0;
      if ( v8 > 0xF )
      {
        if ( !v7 )
        {
LABEL_15:
          LOBYTE(v6) = (unsigned __int64)v5[1] > 1;
          return (unsigned int)v6;
        }
        goto LABEL_9;
      }
      goto LABEL_56;
    }
LABEL_31:
    LOBYTE(v6) = *v7 != 0;
    return (unsigned int)v6;
  }
  return 0;
}
