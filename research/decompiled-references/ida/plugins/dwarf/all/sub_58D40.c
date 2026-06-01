__int64 __fastcall sub_58D40(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  void *exception; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // rbx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d

  result = *(unsigned int *)(a2 + 272);
  if ( (_DWORD)result != 1 )
  {
    result = (unsigned int)(result - 2);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 392);
      if ( (int)result > 0 )
      {
        v6 = *(_QWORD *)(a2 + 384);
        result = 13LL * (unsigned int)(result - 1);
        v7 = v6 + 48;
        v8 = v6 + 8 * result + 152;
        while ( 1 )
        {
          if ( *(_DWORD *)v7 == 1 )
          {
            v9 = *(_QWORD *)(v7 + 8);
            if ( a3 )
            {
              v10 = *(_QWORD **)a3;
              v11 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
              if ( *(_QWORD *)a3 != v11 )
              {
                while ( v9 != *v10 )
                {
                  if ( (_QWORD *)v11 == ++v10 )
                    goto LABEL_13;
                }
                if ( v10 != (_QWORD *)v11 )
                {
LABEL_18:
                  exception = __cxa_allocate_exception(0x18u);
                  sub_94DC0(
                    (_DWORD)exception,
                    (unsigned int)"The DWARF plugin has run into an inconsistent state.",
                    v14,
                    v15,
                    v16,
                    v17);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'die_t::failure_t,
                    (void (*)(void *))sub_52F30);
                }
              }
            }
LABEL_13:
            result = *a1;
            v12 = *a1 + 8 * a1[1];
            if ( *a1 == v12 )
              goto LABEL_18;
            while ( v9 != *(_QWORD *)result )
            {
              result += 8;
              if ( v12 == result )
                goto LABEL_18;
            }
            if ( v12 == result )
              goto LABEL_18;
          }
          v7 += 104;
          if ( v7 == v8 )
            return result;
        }
      }
    }
    return result;
  }
  if ( *(_DWORD *)(a2 + 392) != 1 )
    return result;
  v18 = *(_QWORD *)(a2 + 400);
  if ( a3 )
  {
    v19 = *(_QWORD **)a3;
    v20 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)a3 != v20 )
    {
      while ( v18 != *v19 )
      {
        if ( (_QWORD *)v20 == ++v19 )
          goto LABEL_27;
      }
      if ( (_QWORD *)v20 != v19 )
      {
LABEL_32:
        v22 = __cxa_allocate_exception(0x18u);
        sub_94DC0((_DWORD)v22, (unsigned int)"The DWARF plugin has run into an inconsistent state.", v23, v24, v25, v26);
        __cxa_throw(v22, (struct type_info *)&`typeinfo for'die_t::failure_t, (void (*)(void *))sub_52F30);
      }
    }
  }
LABEL_27:
  result = *a1;
  v21 = *a1 + 8 * a1[1];
  if ( *a1 == v21 )
    goto LABEL_32;
  while ( v18 != *(_QWORD *)result )
  {
    result += 8;
    if ( v21 == result )
      goto LABEL_32;
  }
  if ( result == v21 )
    goto LABEL_32;
  return result;
}

