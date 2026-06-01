unsigned __int64 __fastcall sub_319CB0(__int64 a1, unsigned __int64 a2, int a3, double a4)
{
  unsigned __int8 v6; // dl
  unsigned __int64 result; // rax
  int v8; // ebp
  unsigned __int64 *v9; // rbx
  const char *v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v6 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 5 )
  {
    v9 = (unsigned __int64 *)(a1 + 48);
    v10 = "stkvar";
    v8 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
LABEL_7:
    v11 = v9[1];
    v12 = v8 + *(_DWORD *)(a2 + 4);
    if ( v11 < v12 )
    {
      if ( a3 == 2 )
        return 0;
      v13 = *v9;
      v18 = -1;
      v14 = v9[2];
      if ( (unsigned __int64)&v18 < v13 || (unsigned __int64)&v18 >= v13 + v14 )
      {
        if ( v14 >= v12
          || (v16 = qvector_reserve((__int64)v9, v13, v12, 1), v11 = v9[1], *v9 = v16, v13 = v16, v11 < v12) )
        {
          while ( 1 )
          {
            *(_BYTE *)(v13 + v11++) = -1;
            if ( v12 == v11 )
              break;
            v13 = *v9;
          }
        }
      }
      else if ( v14 >= v12
             || (v17 = qvector_reserve((__int64)v9, v13, v12, 1), v11 = v9[1], *v9 = v17, v13 = v17, v11 < v12) )
      {
        while ( 1 )
        {
          *(_BYTE *)(v13 + v11++) = -1;
          if ( v12 == v11 )
            break;
          v13 = *v9;
        }
      }
      v9[1] = v12;
      if ( !a3 )
      {
        v15 = sub_1B26E0(a2);
        sub_6D0A0((__int64)"reading undefined %s %s\n", v10, v15);
      }
    }
    return *v9 + v8;
  }
  if ( v6 <= 5u )
  {
    if ( v6 == 1 )
    {
      v8 = *(_DWORD *)(a2 + 8);
      v9 = (unsigned __int64 *)(a1 + 24);
      v10 = "register";
      goto LABEL_7;
    }
    goto LABEL_19;
  }
  result = 0;
  if ( v6 != 6 )
  {
    if ( v6 == 9 )
    {
      if ( !under_debugger )
        sub_383060(0xCE87u, a4);
      BUG();
    }
LABEL_19:
    v8 = 0;
    v10 = nullptr;
    v9 = nullptr;
    goto LABEL_7;
  }
  return result;
}

