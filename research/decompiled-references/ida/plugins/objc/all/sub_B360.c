__int64 __fastcall sub_B360(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // r12
  const char **v10; // rdx
  const char *v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // edx
  _QWORD *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdi
  _QWORD *v17; // rcx
  const char *v18; // rsi
  __int64 v19; // rdi
  char v20; // al
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  __int128 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+18h] [rbp-30h]
  int v26; // [rsp+20h] [rbp-28h]
  unsigned __int64 v27; // [rsp+28h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  if ( a2 != 31 )
  {
    if ( a2 != 52 )
    {
      if ( a2 == 9 && (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 1824LL) & 8) == 0 )
      {
        v18 = "$ dscu";
        netnode_check();
        if ( !(unsigned __int8)netnode_exist()
          || netnode_supfirst() == -1 && (v18 = (_BYTE *)(&dword_0 + 3), !netnode_altval()) )
        {
          if ( (unsigned __int8)sub_28720(*(_QWORD *)(a1 + 16) + 1832LL, v18) )
            (***(void (__fastcall ****)(_QWORD, __int64))(a1 + 16))(*(_QWORD *)(a1 + 16), 4);
          v19 = *(_QWORD *)(a1 + 16);
          v23 = 0;
          v25 = 0;
          v26 = -1;
          v24 = 0;
          v20 = sub_B130(v19, (int)&v23);
          v21 = v23;
          if ( v20 && (v22 = sub_B000(), v21 = v23, v22 == 1) )
          {
            if ( v23 )
            {
              *(_QWORD *)&v24 = 0;
              qfree();
            }
            (***(void (__fastcall ****)(_QWORD, __int64))(a1 + 16))(*(_QWORD *)(a1 + 16), 1);
          }
          else if ( v21 )
          {
            *(_QWORD *)&v24 = 0;
            qfree();
          }
        }
      }
      return 0;
    }
    v6 = *a3;
    if ( (unsigned int)*a3 > 0x2F )
    {
      v17 = (_QWORD *)*((_QWORD *)a3 + 1);
      v10 = (const char **)(v17 + 1);
      *((_QWORD *)a3 + 1) = v17 + 1;
      v9 = *v17;
    }
    else
    {
      v7 = *((_QWORD *)a3 + 2);
      v8 = v6 + 8;
      *a3 = v8;
      v9 = *(_QWORD *)(v7 + v6);
      if ( (unsigned int)v8 <= 0x2F )
      {
        v10 = (const char **)(v8 + v7);
        *a3 = v6 + 16;
LABEL_9:
        v11 = *v10;
        if ( *v10 )
        {
          if ( *v11 )
          {
            if ( !(unsigned __int8)sub_28480(*(_QWORD *)(a1 + 16) + 1832LL, v9, *v10)
              && !(unsigned __int8)sub_28480(*(_QWORD *)(a1 + 16) + 1952LL, v9, v11)
              && !(unsigned __int8)sub_136A0(*(_QWORD *)(a1 + 16), v9, v11) )
            {
              v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1808LL);
              if ( v12 )
              {
                if ( !strcmp(v11, "__objc_opt_data") )
                  sub_18C10(v12, v9);
              }
            }
          }
        }
        return 0;
      }
      v10 = (const char **)*((_QWORD *)a3 + 1);
    }
    *((_QWORD *)a3 + 1) = v10 + 1;
    goto LABEL_9;
  }
  v13 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v14 = (_QWORD *)*((_QWORD *)a3 + 1);
    *((_QWORD *)a3 + 1) = v14 + 1;
  }
  else
  {
    v14 = (_QWORD *)(*((_QWORD *)a3 + 2) + v13);
    *a3 = v13 + 8;
  }
  v15 = *v14;
  sub_28750(*(_QWORD *)(a1 + 16) + 1832LL, *v14);
  sub_28750(*(_QWORD *)(a1 + 16) + 1952LL, v15);
  sub_14650(*(_QWORD *)(a1 + 16), v15);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1808LL);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 120LL))(v16);
  return 0;
}
