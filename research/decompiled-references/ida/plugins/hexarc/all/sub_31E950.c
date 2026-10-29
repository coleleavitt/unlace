char __fastcall sub_31E950(__int64 a1, __int64 a2, double a3)
{
  __int64 i; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  __int64 *v14; // rsi
  int v15; // edx
  char result; // al

  LODWORD(i) = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)i > 0x54 )
    sub_31C300(0xC5F1u, a2, a1 + 16, a3);
  v5 = *(int *)(a2 + 12);
  if ( (int)v5 < -1 )
    sub_31C300(0xC5F2u, a2, a1 + 16, a3);
  if ( (_DWORD)v5 != -1 )
  {
    v6 = *(int *)(*(_QWORD *)(a1 + 8) + 64LL);
    if ( v6 * v6 < v5 )
      sub_31C300(0xCD27u, a2, a1 + 16, a3);
  }
  if ( (_DWORD)i == 82 )
  {
    i = *(_QWORD *)(a2 + 24);
    if ( !*(_QWORD *)(i + 8) )
      sub_31C300(0xC5F8u, a2, a1 + 16, a3);
LABEL_24:
    if ( *(_QWORD *)a2 == -1 )
      sub_31C300(0xC5FCu, a2, a1 + 16, a3);
  }
  else
  {
    if ( (unsigned int)i <= 0x52 )
    {
      if ( (_DWORD)i == 77 )
      {
        sub_31E460(a1, *(_QWORD *)(a2 + 24));
        LODWORD(i) = *(_DWORD *)(a2 + 8);
      }
      else if ( (_DWORD)i == 81 )
      {
        i = *(_QWORD *)(a2 + 24);
        if ( *(int *)i < 0 )
          sub_31C300(0xC5F7u, a2, a1 + 16, a3);
        return i;
      }
      goto LABEL_22;
    }
    if ( (_DWORD)i == 83 )
    {
      v7 = *(_QWORD *)(a2 + 24);
      i = *(_QWORD *)(v7 + 32);
      if ( *(_BYTE *)(v7 + 64) )
      {
        if ( i != 1 )
          sub_31C300(0xCDE3u, a2, a1 + 16, a3);
        v8 = *(_QWORD *)(v7 + 24);
        if ( *(_QWORD *)(v8 + 32) )
          sub_31C300(0xCDE4u, a2, a1 + 16, a3);
      }
      else
      {
        if ( !i )
          sub_31C300(0xCE02u, a2, a1 + 16, a3);
        v8 = *(_QWORD *)(v7 + 24);
      }
      v9 = v8 + 48 * i;
      if ( v9 != v8 )
      {
        do
        {
          v10 = *(_QWORD *)(v8 + 32);
          v11 = *(_QWORD *)(v8 + 24);
          v12 = v11 + 88 * v10;
          if ( v12 != v11 )
          {
            do
            {
              v13 = v11;
              v11 += 88;
              sub_31C740(a1, a2, v13, a3);
            }
            while ( v12 != v11 );
            v10 = *(_QWORD *)(v8 + 32);
          }
          if ( v10 > 1 )
            sub_31C300(0xCEC3u, a2, a1 + 16, a3);
          v8 += 48;
        }
        while ( v8 != v9 );
        LODWORD(i) = *(_DWORD *)(a2 + 8);
LABEL_22:
        LODWORD(i) = i - 71;
        switch ( (int)i )
        {
          case 0:
            if ( *(_QWORD *)a2 == -1 )
            {
              v14 = *(__int64 **)(a2 + 24);
              for ( i = *v14; (__int64 *)i != v14; i = *(_QWORD *)i )
              {
                v15 = *(_DWORD *)(i + 24);
                if ( (unsigned int)(v15 - 78) > 3 && v15 != 70 )
                  sub_31C300(0xC5F9u, a2, a1 + 16, a3);
              }
            }
            break;
          case 1:
            if ( *(_QWORD *)a2 == -1 )
            {
              LOBYTE(i) = sub_24DA50(*(_QWORD *)(a2 + 24));
              if ( !(_BYTE)i )
              {
                LODWORD(i) = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
                if ( (_DWORD)i )
                  sub_31C300(0xC5FAu, a2, a1 + 16, a3);
              }
            }
            return result;
          case 2:
            LODWORD(i) = *(_DWORD *)(a1 + 56) - 2;
            if ( (unsigned int)i <= 4 )
              goto LABEL_24;
            i = sub_23A530(*(_QWORD *)(a2 + 24));
            if ( i == -1 )
              goto LABEL_24;
            if ( i != *(_QWORD *)a2 )
              sub_31C300(0xC5FBu, a2, a1 + 16, a3);
            return result;
          case 3:
          case 4:
          case 5:
          case 6:
          case 11:
            goto LABEL_24;
          default:
            return i;
        }
      }
    }
  }
  return i;
}

