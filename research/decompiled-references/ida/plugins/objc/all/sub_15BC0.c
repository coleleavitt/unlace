__int64 __fastcall sub_15BC0(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  _QWORD *v7; // r13
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // cl
  _QWORD *v15; // rax
  __int64 v16; // rax
  char v17; // dl
  unsigned int v18; // r13d
  int v19; // eax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // edx
  __int64 v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  unsigned int v29; // [rsp+Ch] [rbp-6Ch]
  __int64 v30; // [rsp+18h] [rbp-60h] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  __int128 v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 <= 0x400 )
  {
    *(_DWORD *)(a2 + 12) = v3 + 1;
    if ( (*(_BYTE *)(a2 + 8) & 8) != 0 && (unsigned __int8)callui(27) )
    {
      result = 0xFFFFFFFFLL;
LABEL_5:
      --*(_DWORD *)(a2 + 12);
      return result;
    }
    v7 = *(_QWORD **)(a2 + 32);
    v8 = (_QWORD *)(a2 + 24);
    v9 = (_QWORD *)(a2 + 24);
    v10 = v7;
    if ( !v7 )
    {
      if ( v8 == *(_QWORD **)(a2 + 40) || *(_QWORD *)(std::_Rb_tree_decrement() + 32) < a3 )
        goto LABEL_23;
LABEL_24:
      if ( *(_QWORD *)(a2 + 72) && !rangeset_t_find_range() )
      {
        result = 0;
        goto LABEL_5;
      }
      if ( a3 )
      {
        v16 = getseg();
        if ( v16 )
        {
          v17 = *(_BYTE *)(v16 + 184);
          if ( (v17 == 3 || !v17) && (*(_BYTE *)(v16 + 44) & 0x40) == 0 )
          {
            v18 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*a1 + 392))(a1, a3);
            if ( v18 )
            {
              v31 = 0;
              v19 = *(_DWORD *)(a2 + 8);
              v32 = 0;
              if ( (v19 & 0x10) != 0 )
              {
                if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(*a1 + 408))(
                        a1,
                        &v31,
                        a3) )
                {
                  result = 0;
                  goto LABEL_49;
                }
                v19 = *(_DWORD *)(a2 + 8);
              }
              if ( (v19 & 1) != 0 )
              {
                v20 = *a1;
                v30 = 0;
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(v20 + 400))(
                       a1,
                       &v30,
                       a3) )
                {
                  result = sub_15BC0((_DWORD)a1, a2, v30, v21, v22, v23);
                  if ( (_DWORD)result )
                  {
LABEL_49:
                    if ( !v31 )
                      goto LABEL_5;
                    goto LABEL_44;
                  }
                }
                v19 = *(_DWORD *)(a2 + 8);
              }
              if ( (v19 & 4) != 0 )
              {
                if ( (v19 & 2) == 0 )
                {
LABEL_52:
                  result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 16LL))(
                             a2,
                             a3,
                             v18,
                             &v31);
LABEL_43:
                  if ( !v31 )
                    goto LABEL_5;
LABEL_44:
                  v29 = result;
                  *(_QWORD *)&v32 = 0;
                  qfree();
                  result = v29;
                  goto LABEL_5;
                }
              }
              else
              {
                result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 16LL))(
                           a2,
                           a3,
                           v18,
                           &v31);
                if ( (_DWORD)result )
                  goto LABEL_49;
                v24 = *(_DWORD *)(a2 + 8);
                if ( (v24 & 2) == 0 )
                  goto LABEL_42;
              }
              v25 = *a1;
              v30 = 0;
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, unsigned __int64))(v25 + 448))(a1, &v30, a3) )
              {
                result = sub_15BC0((_DWORD)a1, a2, v30, v26, v27, v28);
                if ( (_DWORD)result )
                  goto LABEL_49;
              }
              v24 = *(_DWORD *)(a2 + 8);
LABEL_42:
              result = 0;
              if ( (v24 & 4) == 0 )
                goto LABEL_43;
              goto LABEL_52;
            }
          }
        }
      }
LABEL_13:
      result = 0;
      goto LABEL_5;
    }
    do
    {
      while ( 1 )
      {
        v11 = v10[2];
        v12 = v10[3];
        if ( v10[4] < a3 )
          break;
        v9 = v10;
        v10 = (_QWORD *)v10[2];
        if ( !v11 )
          goto LABEL_11;
      }
      v10 = (_QWORD *)v10[3];
    }
    while ( v12 );
LABEL_11:
    if ( v8 != v9 && a3 >= v9[4] )
      goto LABEL_13;
    while ( 1 )
    {
      v13 = v7[4];
      v14 = 0;
      v15 = (_QWORD *)v7[3];
      if ( a3 < v13 )
      {
        v15 = (_QWORD *)v7[2];
        v14 = 1;
      }
      if ( !v15 )
        break;
      v7 = v15;
    }
    if ( v14 )
    {
      if ( *(_QWORD **)(a2 + 40) == v7 )
        goto LABEL_23;
      v13 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v13 >= a3 )
      goto LABEL_24;
LABEL_23:
    *(_QWORD *)(operator new(0x28u) + 32) = a3;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a2 + 56);
    goto LABEL_24;
  }
  return 0xFFFFFFFFLL;
}
