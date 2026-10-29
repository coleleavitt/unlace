__int64 __fastcall sub_2A4A0(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  char *v4; // r14
  bool v6; // zf
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int8 *v14; // r14
  unsigned __int8 *v15; // r14
  unsigned __int8 *v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-60h]
  int v37; // [rsp+4Ch] [rbp-5Ch]
  _DWORD v38[5]; // [rsp+50h] [rbp-58h] BYREF
  int v39; // [rsp+64h] [rbp-44h]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v4 = (char *)a2;
  v6 = *a2 == 67;
  v40 = __readfsqword(0x28u);
  if ( v6 && a2[1] == 80 && a2[2] == 85 && (unsigned __int8)(a2[3] - 48) <= 9u )
  {
    if ( !byte_753F0 )
    {
      sub_EBD0((__int64)"warning: Bochs with SMP support detected (currently CPU switching is unsupported by IDA)\n");
      byte_753F0 = 1;
    }
    v4 = sub_2A250(a2, (const char **)a1, (const char **)v38);
  }
  if ( !strncmp(v4, "eax:", 4u) )
    sub_EB00((__int64)"Got 32-bit registers from Bochs, while expecting 64-bit registers.\n"
                      "Make sure Bochs is compiled with --enable-cpu-level=6 and --enable-x86-64");
  v35 = 0;
  while ( 1 )
  {
    v4 = sub_2A250((unsigned __int8 *)v4, (const char **)a1, (const char **)v38);
    if ( !(unsigned __int8)sub_29F20((const char **)v38, a3, &v35)
      || **(_BYTE **)v38 && !(unsigned __int8)sub_29F20((const char **)v38, a3, &v35) )
    {
      break;
    }
    if ( v35 == 0x1FFFF )
      goto LABEL_17;
  }
  if ( v35 != 0x1FFFF )
    return 2;
LABEL_17:
  sub_2A250((unsigned __int8 *)v4, (const char **)a1, (const char **)v38);
  if ( !(unsigned __int8)sub_2A1A0((const char **)v38, "eflags", (_QWORD *)(a3 + 140), 4u) )
    return 2;
  *(_DWORD *)a3 |= 1u;
  if ( (a4 & 0x18) != 0 )
  {
    v9 = (unsigned __int8)*v4;
    if ( *(int *)(a1 + 24) > 241 )
    {
      if ( (unsigned __int8)v9 > 0xDu )
      {
LABEL_84:
        v29 = -9218;
        do
        {
          do
            v9 = (unsigned __int8)*++v4;
          while ( (unsigned __int8)v9 > 0xDu );
        }
        while ( _bittest64(&v29, v9) );
LABEL_87:
        if ( (_BYTE)v9 == 10 || (_BYTE)v9 == 13 )
        {
          do
          {
            do
              v30 = *++v4;
            while ( v30 == 13 );
          }
          while ( v30 == 10 );
        }
        goto LABEL_31;
      }
    }
    else
    {
      if ( (unsigned __int8)v9 <= 0xDu )
      {
        v10 = -9218;
        if ( !_bittest64(&v10, v9) )
        {
          if ( (_BYTE)v9 != 13 && (_BYTE)v9 != 10 )
            goto LABEL_31;
          do
          {
            do
LABEL_27:
              v12 = (unsigned __int8)*++v4;
            while ( (_BYTE)v12 == 13 );
          }
          while ( (_BYTE)v12 == 10 );
          if ( (unsigned __int8)v12 <= 0xDu )
          {
            v13 = -9218;
            if ( !_bittest64(&v13, v12) )
            {
LABEL_31:
              v14 = sub_2A250((unsigned __int8 *)v4, (const char **)a1, (const char **)v38);
              if ( (unsigned __int8)sub_2A1A0((const char **)v38, "status  word:", (_QWORD *)(a3 + 144), 4u) )
              {
                v15 = sub_2A250(v14, (const char **)a1, (const char **)v38);
                if ( (unsigned __int8)sub_2A1A0((const char **)v38, "control word:", (_QWORD *)(a3 + 148), 4u) )
                {
                  v16 = sub_2A250(v15, (const char **)a1, (const char **)v38);
                  if ( (unsigned __int8)sub_2A1A0((const char **)v38, "tag word:", (_QWORD *)(a3 + 152), 4u) )
                  {
                    v17 = *v16;
                    if ( (unsigned __int8)v17 > 0xDu || (v18 = -9218, _bittest64(&v18, v17)) )
                    {
                      v19 = -9218;
                      do
                      {
                        do
                          v17 = *++v16;
                        while ( (unsigned __int8)v17 > 0xDu );
                      }
                      while ( _bittest64(&v19, v17) );
                    }
                    if ( (_BYTE)v17 == 10 || (_BYTE)v17 == 13 )
                    {
                      do
                      {
                        do
                          v17 = *++v16;
                        while ( (_BYTE)v17 == 13 );
                      }
                      while ( (_BYTE)v17 == 10 );
                      if ( (unsigned __int8)v17 > 0xDu )
                        goto LABEL_59;
                    }
                    v31 = -9218;
                    if ( _bittest64(&v31, v17) )
                    {
LABEL_59:
                      v20 = -9218;
                      do
                      {
                        do
                          v17 = *++v16;
                        while ( (unsigned __int8)v17 > 0xDu );
                      }
                      while ( _bittest64(&v20, v17) );
                      if ( (_BYTE)v17 == 10 || (_BYTE)v17 == 13 )
                      {
                        do
                        {
                          do
                            v17 = *++v16;
                          while ( (_BYTE)v17 == 10 );
                        }
                        while ( (_BYTE)v17 == 13 );
                        if ( (unsigned __int8)v17 > 0xDu )
                          goto LABEL_104;
                      }
                      v34 = -9218;
                      if ( _bittest64(&v34, v17) )
                      {
LABEL_104:
                        v21 = -9218;
                        do
                        {
                          do
                            v17 = *++v16;
                          while ( (unsigned __int8)v17 > 0xDu );
                        }
                        while ( _bittest64(&v21, v17) );
                        if ( (_BYTE)v17 == 13 || (_BYTE)v17 == 10 )
                        {
                          do
                          {
                            do
                              v17 = *++v16;
                            while ( (_BYTE)v17 == 10 );
                          }
                          while ( (_BYTE)v17 == 13 );
                          if ( (unsigned __int8)v17 > 0xDu )
                            goto LABEL_60;
                        }
                      }
                    }
                    v32 = -9218;
                    if ( _bittest64(&v32, v17) )
                    {
LABEL_60:
                      v22 = -9218;
                      do
                      {
                        do
                          v23 = *++v16;
                        while ( (unsigned __int8)v23 > 0xDu );
                      }
                      while ( _bittest64(&v22, v23) );
                      if ( (_BYTE)v23 == 10 || (_BYTE)v23 == 13 )
                      {
                        do
                        {
                          do
                            v23 = *++v16;
                          while ( (_BYTE)v23 == 10 );
                        }
                        while ( (_BYTE)v23 == 13 );
                        if ( (unsigned __int8)v23 > 0xDu )
                          goto LABEL_68;
                      }
                      v33 = -9218;
                      if ( _bittest64(&v33, v23) )
                      {
LABEL_68:
                        v24 = -9218;
                        do
                        {
                          do
                            v25 = *++v16;
                          while ( (unsigned __int8)v25 > 0xDu );
                        }
                        while ( _bittest64(&v24, v25) );
                        while ( (_BYTE)v25 == 10 || (_BYTE)v25 == 13 )
                          LOBYTE(v25) = *++v16;
                      }
                    }
                    v26 = 8;
                    do
                    {
                      v16 = sub_2A250(v16, (const char **)a1, (const char **)v38);
                      if ( (unsigned int)qsscanf() != 6 )
                        break;
                      if ( v36 > 7 )
                        break;
                      v27 = a3 + 12LL * (int)v36 + 304;
                      LOWORD(v39) = v37;
                      *(_QWORD *)(v27 + 4) = *(_QWORD *)&v38[3];
                      *(_DWORD *)(v27 + 12) = v39;
                      --v26;
                    }
                    while ( v26 );
                    *(_DWORD *)a3 |= 8u;
                    if ( (a4 & 0x10) != 0 )
                      sub_2A390((const char **)a1, v16, a3);
                  }
                }
              }
              return 0;
            }
          }
          goto LABEL_84;
        }
      }
      v11 = -9218;
      do
      {
        do
          v9 = (unsigned __int8)*++v4;
        while ( (unsigned __int8)v9 > 0xDu );
      }
      while ( _bittest64(&v11, v9) );
      if ( (_BYTE)v9 == 10 || (_BYTE)v9 == 13 )
        goto LABEL_27;
    }
    v28 = -9218;
    if ( !_bittest64(&v28, v9) )
      goto LABEL_87;
    goto LABEL_84;
  }
  return 0;
}

