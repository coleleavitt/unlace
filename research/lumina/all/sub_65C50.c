__int64 __fastcall sub_65C50(__int64 *a1, void **a2, __int64 a3, int a4)
{
  char *v4; // rbx
  unsigned int v5; // r14d
  void *v9; // r15
  unsigned int v10; // eax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r15
  unsigned int v14; // eax
  __int64 v15; // r15
  size_t v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-68h]
  unsigned int v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v25[9]; // [rsp+20h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
  src = *a2;
  v4 = (char *)src + a3;
  if ( !__CFADD__(a3, src) )
  {
    v5 = sub_62CE0(a1, &src, a3);
    if ( (_BYTE)v5 )
    {
      v9 = src;
      v25[0] = src;
      v10 = sub_196ED0(v25, v4);
      src = (void *)v25[0];
      if ( (unsigned __int64)v9 < v25[0] )
      {
        v11 = v10;
        v22 = v10;
        sub_653C0(a1 + 6, v10);
        if ( v22 )
        {
          v12 = 11 * v11;
          v13 = 0;
          v23 = 16 * v12;
          while ( (unsigned __int8)sub_64DB0((_QWORD *)(v13 + a1[6]), &src, v4 - (_BYTE *)src, a4) )
          {
            v13 += 176;
            if ( v23 == v13 )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          v14 = sub_196ED0(&src, v4);
          if ( !v14 )
            goto LABEL_16;
          v15 = a1[10];
          v16 = v14;
          v17 = a1[9];
          v18 = v15 + v14;
          if ( a1[11] < v18 )
          {
            v21 = v15 + v14;
            v20 = sub_1987B0(a1 + 9, v17, v18, 1);
            v18 = v21;
            a1[9] = v20;
            v17 = v20;
          }
          v19 = (char *)src;
          a1[10] = v18;
          if ( !__CFADD__(v16, v19) && v4 >= &v19[v16] )
          {
            src = &v19[v16];
            if ( memcpy((void *)(v17 + v15), v19, v16) )
            {
LABEL_16:
              *a2 = src;
              return v5;
            }
          }
        }
      }
    }
  }
  return 0;
}
