__int64 __fastcall sub_17A700(_QWORD *a1, _DWORD *a2, unsigned __int8 **a3)
{
  __int64 v4; // rax
  void *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rbx
  __int64 v13; // rax
  size_t v14; // rbx
  __int64 v15; // rbp
  _BYTE *v16; // rsi
  __int64 v17; // r12
  size_t v18; // rax
  const char *v19; // rsi
  size_t v20; // rbp
  __int64 v21; // rbx
  size_t v22; // r12
  _BYTE *v23; // rsi
  void *v24; // rax
  const void *v25; // rsi
  size_t v26; // [rsp+0h] [rbp-80h]
  void *ptr; // [rsp+8h] [rbp-78h] BYREF
  __int128 v28; // [rsp+10h] [rbp-70h]
  void *v29; // [rsp+28h] [rbp-58h] BYREF
  __int128 v30; // [rsp+30h] [rbp-50h]
  unsigned __int64 v31; // [rsp+40h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *a2 = -1;
  v28 = 0;
  ptr = nullptr;
  v4 = sub_178260((__int64)a1, (__int64)&ptr);
  v5 = ptr;
  v6 = v4;
  if ( v4 )
  {
    v26 = v28;
    v7 = sub_1871B0(*(int *)(v4 + 52));
    v8 = sub_172480(v7, (__int64)&ptr);
    if ( v8 != -1 )
    {
      *a2 = v8;
LABEL_4:
      v9 = 1;
      goto LABEL_5;
    }
    v11 = (unsigned __int8 *)sub_1726E0(v6, (__int64)&ptr);
    if ( v11 != (unsigned __int8 *)(v6 + 8) )
    {
      v12 = v11 + 56;
      sub_176730(*a3, v11 + 56);
      *a3 = v12;
      goto LABEL_4;
    }
    if ( (unsigned __int8)sub_1796D0(a1, v6, (__int64)&ptr, a3) )
      goto LABEL_4;
    sub_18FA40(88);
    v13 = sub_1871B0(*(int *)(v6 + 52));
    v14 = *(_QWORD *)(v13 + 64);
    v15 = v13;
    v16 = nullptr;
    v29 = nullptr;
    v17 = 2;
    v30 = 0;
    if ( v14 )
    {
      v24 = (void *)sub_198760(v14);
      v25 = *(const void **)(v15 + 56);
      v29 = v24;
      *((_QWORD *)&v30 + 1) = v14;
      v17 = v14 + 1;
      memcpy(v24, v25, v14);
      *(_QWORD *)&v30 = v14;
      v16 = v29;
      v18 = v14 - 1;
      if ( *((_QWORD *)&v30 + 1) >= v14 + 1 )
      {
LABEL_13:
        *(_QWORD *)&v30 = v17;
        v16[v18] = 46;
        *((_BYTE *)v29 + v18 + 1) = 0;
        if ( v26 )
        {
          v20 = v26 - 1;
          if ( v26 != 1 )
          {
            v21 = v30;
            v22 = v26 - 1;
            if ( (_QWORD)v30 )
            {
              v21 = v30 - 1;
              v22 = v20 + v30 - 1;
              v26 = v20 + v30;
            }
            v23 = v29;
            if ( *((_QWORD *)&v30 + 1) < v26 )
            {
              v29 = (void *)sub_1987B0(&v29, v29, v26, 1);
              v23 = v29;
            }
            *(_QWORD *)&v30 = v26;
            v23[v22] = 0;
            memcpy((char *)v29 + v21, v5, v20);
          }
        }
        v19 = s1;
        if ( (_QWORD)v30 )
          v19 = (const char *)v29;
        sub_18FAC0(0, v19);
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          j__free(v29);
        }
        goto LABEL_18;
      }
      --v14;
    }
    v29 = (void *)sub_1987B0(&v29, v16, v17, 1);
    v16 = v29;
    v18 = v14;
    goto LABEL_13;
  }
LABEL_18:
  v9 = 0;
LABEL_5:
  if ( v5 )
    j__free(v5);
  return v9;
}
