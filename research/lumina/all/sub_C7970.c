__int64 __fastcall sub_C7970(__int64 a1, char *a2, int a3, __off64_t a4)
{
  int v6; // r12d
  __off64_t v7; // rbx
  __off64_t v8; // rax
  const void *v9; // rsi
  void *v10; // rdi
  int v11; // ebp
  char *v12; // r13
  int v13; // eax
  unsigned int v14; // ecx
  __int64 result; // rax
  int *v16; // rax
  int v17; // [rsp+8h] [rbp-40h]
  int v18; // [rsp+Ch] [rbp-3Ch]

  v6 = a3;
  v7 = a4;
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 > a4 )
  {
    v9 = (const void *)(a4 + *(_QWORD *)(a1 + 104));
    if ( v8 >= a3 + a4 )
    {
      memcpy(a2, v9, a3);
      return 0;
    }
    v10 = a2;
    v6 = a3 - (v8 - a4);
    a2 += (int)v8 - (int)a4;
    v7 = (int)v8 - (int)a4 + a4;
    memcpy(v10, v9, (int)v8 - (int)a4);
  }
  v11 = v6;
  v12 = a2;
  v17 = 0;
  while ( 1 )
  {
    if ( lseek64(*(_DWORD *)(a1 + 24), v7, 0) < 0 )
    {
      v16 = __errno_location();
      v14 = *v16;
      *(_DWORD *)(a1 + 32) = *v16;
      if ( v6 != -1 )
        goto LABEL_12;
      return 0;
    }
    v13 = off_241228(*(_DWORD *)(a1 + 24), v12, v11);
    if ( v11 == v13 )
      break;
    if ( v13 < 0 )
    {
      v18 = v13;
      v14 = *__errno_location();
      if ( v14 != 4 )
      {
        *(_DWORD *)(a1 + 32) = v14;
        if ( v6 != v18 )
        {
LABEL_12:
          result = 266;
          if ( v14 <= 0x22 )
            return ((1LL << v14) & 0x400000060LL) == 0 ? 266 : 8458;
          return result;
        }
        return 0;
      }
    }
    else
    {
      if ( !v13 )
        goto LABEL_19;
      v11 -= v13;
      v17 += v13;
      v7 += v13;
      v12 += v13;
    }
  }
  v17 += v11;
LABEL_19:
  if ( v6 == v17 )
    return 0;
  if ( v17 < 0 )
  {
    v14 = *(_DWORD *)(a1 + 32);
    goto LABEL_12;
  }
  *(_DWORD *)(a1 + 32) = 0;
  memset(&a2[v17], 0, v6 - v17);
  return 522;
}
