__int64 __fastcall sub_5E7B0(__int64 a1, __int64 a2, char a3, __int64 *a4, _BYTE *a5, int a6)
{
  int v7; // ecx
  __int64 result; // rax
  unsigned __int64 v9; // r12
  size_t v11; // rax
  size_t v12; // r13
  unsigned __int64 v14; // rbx
  const char *v15; // rsi
  void *v16; // rdi
  size_t v17; // r14
  const void *v18; // r14
  void *v19; // rdi
  __int64 v20; // rax
  const void *v21; // r14
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  char v25[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a2 )
  {
    v7 = *(unsigned __int8 *)(a2 + 8);
    result = 0;
    if ( (_BYTE)v7 != a3 )
    {
      if ( (_BYTE)v7 == 11 )
      {
        if ( a4 && a4 != (__int64 *)(a2 + 16) )
        {
          v9 = *(_QWORD *)(a2 + 24);
          if ( v9 > 1 )
          {
            v18 = *(const void **)(a2 + 16);
            v19 = (void *)*a4;
            if ( a4[2] < v9 )
            {
              v23 = sub_1987B0(a4, *a4, v9, 1);
              *a4 = v23;
              v19 = (void *)v23;
            }
            a4[1] = v9;
            memmove(v19, v18, v9 - 1);
            *(_BYTE *)(*a4 + v9 - 1) = 0;
          }
          else
          {
            a4[1] = 0;
          }
        }
        if ( *(_QWORD *)(a2 + 24) )
          sub_18FAC0(0, *(_QWORD *)(a2 + 16));
        else
          sub_18FAC0(0, s1);
        return *(unsigned int *)(a2 + 12);
      }
      else
      {
        sub_19D9D0((unsigned int)v25, 16, (unsigned int)"%d", v7, (_DWORD)a5, a6);
        if ( a4 )
        {
          v11 = strlen(v25);
          v12 = v11;
          if ( v11 )
          {
            v16 = (void *)*a4;
            v17 = v11 + 1;
            if ( a4[2] < v11 + 1 )
            {
              v20 = sub_1987B0(a4, *a4, v11 + 1, 1);
              *a4 = v20;
              v16 = (void *)v20;
            }
            a4[1] = v17;
            memmove(v16, v25, v12);
            *(_BYTE *)(*a4 + v12) = 0;
          }
          else
          {
            a4[1] = 0;
          }
        }
        sub_18FAC0(0, v25);
        if ( a5 )
          *a5 = 1;
        return 1;
      }
    }
  }
  else
  {
    if ( a4 && a4 != (__int64 *)(a1 + 16) )
    {
      v14 = *(_QWORD *)(a1 + 24);
      if ( v14 > 1 )
      {
        v21 = *(const void **)(a1 + 16);
        v22 = (void *)*a4;
        if ( a4[2] < v14 )
        {
          v24 = sub_1987B0(a4, *a4, v14, 1);
          *a4 = v24;
          v22 = (void *)v24;
        }
        a4[1] = v14;
        memmove(v22, v21, v14 - 1);
        *(_BYTE *)(*a4 + v14 - 1) = 0;
      }
      else
      {
        a4[1] = 0;
      }
    }
    v15 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v15 = *(const char **)(a1 + 16);
    sub_18FAC0(0, v15);
    return 2;
  }
  return result;
}
