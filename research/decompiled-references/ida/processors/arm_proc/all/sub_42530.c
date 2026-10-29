__int64 __fastcall sub_42530(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  _DWORD **v15; // rdx
  _DWORD *v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  int *v20; // rax
  __int64 v21; // rsi
  int *v22; // r8
  int v23; // edx
  int v24; // ecx
  int v25; // r13d
  __int64 v26; // rdx
  size_t v27; // r13
  __int64 v28; // r15
  const char *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdi
  const char *v32; // rcx
  __int64 *v33; // rdx
  __int64 *v34; // rcx
  _QWORD *v35; // rdx
  unsigned __int64 v36; // rdx
  void *dest; // [rsp+0h] [rbp-88h]
  void *desta; // [rsp+0h] [rbp-88h]
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+10h] [rbp-78h]
  __int64 v41; // [rsp+18h] [rbp-70h]
  int v42; // [rsp+20h] [rbp-68h] BYREF
  __int128 v43; // [rsp+28h] [rbp-60h]
  int **v44; // [rsp+38h] [rbp-50h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( a2 != 73 )
    return 0;
  v8 = *a3;
  if ( (unsigned int)*a3 > 0x2F )
  {
    v33 = *((__int64 **)a3 + 1);
    v34 = v33 + 1;
    *((_QWORD *)a3 + 1) = v33 + 1;
    v11 = *v33;
LABEL_31:
    v35 = v34 + 1;
    *((_QWORD *)a3 + 1) = v34 + 1;
    v12 = *v34;
LABEL_32:
    v15 = (_DWORD **)(v35 + 1);
    goto LABEL_33;
  }
  v9 = *((_QWORD *)a3 + 2);
  v10 = v8 + 8;
  *a3 = v10;
  v11 = *(_QWORD *)(v9 + v8);
  if ( (unsigned int)v10 > 0x2F )
  {
    v34 = *((__int64 **)a3 + 1);
    goto LABEL_31;
  }
  *a3 = v8 + 16;
  v12 = *(_QWORD *)(v9 + v10);
  if ( v8 + 16 > 0x2F )
  {
    v35 = *((_QWORD **)a3 + 1);
    goto LABEL_32;
  }
  v13 = v8 + 24;
  *a3 = v13;
  if ( (unsigned int)v13 <= 0x2F )
  {
    v14 = v8 + 32;
    v15 = (_DWORD **)(v13 + v9);
    *a3 = v14;
    goto LABEL_8;
  }
  v15 = *((_DWORD ***)a3 + 1);
LABEL_33:
  v14 = (unsigned __int64)(v15 + 1);
  *((_QWORD *)a3 + 1) = v15 + 1;
LABEL_8:
  v16 = *v15;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64, _DWORD **, unsigned __int64, __int64, __int64))callui)(
                          72,
                          v12,
                          v15,
                          v14,
                          a5,
                          a6) )
  {
    v42 = 32;
    v44 = nullptr;
    v43 = 0;
    if ( (unsigned __int8)callui(191, &v42, v12, 1, v17, v18, dest, v39, v40, v41) )
    {
      v19 = *(__int16 *)(v43 + 28);
      v20 = *v44;
      v21 = (__int64)&(*v44)[5 * (_QWORD)v44[1]];
      if ( *v44 != (int *)v21 )
      {
        v22 = nullptr;
        do
        {
          v23 = *v20;
          if ( v19 >= *v20 && v19 < v23 + v20[1] && *((_BYTE *)v20 + 16) == 33 )
          {
            if ( v22 )
            {
              if ( v23 > *v22 )
                v22 = v20;
            }
            else
            {
              v22 = v20;
            }
          }
          v20 += 5;
        }
        while ( (int *)v21 != v20 );
        if ( v22 )
        {
          desta = nullptr;
          if ( v22[1] >= 0 )
          {
            if ( *((_BYTE *)v22 + 16) )
            {
              v24 = v22[2];
              if ( v24 >= 0 )
              {
                v25 = v22[3];
                if ( v24 <= v25 )
                {
                  v26 = *(_QWORD *)(*((_QWORD *)&v43 + 1) + 8LL);
                  if ( v26 )
                  {
                    v36 = v26 - 1;
                    if ( v36 >= v24 && v36 >= v25 )
                    {
                      v27 = v25 - v24;
                      v29 = (const char *)(**((_QWORD **)&v43 + 1) + v24);
                      v28 = v27 + 1;
                      if ( v27 == -1 )
                      {
                        v27 = -1;
                        v30 = 0;
LABEL_26:
                        *(_BYTE *)(v30 + v27) = 0;
                        memmove(desta, v29, v27);
                        v31 = *(_QWORD *)(a1 + 16);
                        if ( v28 )
                          v32 = (const char *)desta;
                        else
                          v32 = &s1;
LABEL_28:
                        sub_41B00(v31, v11, v16, v32);
                        if ( desta )
                          qfree();
                        return 0;
                      }
LABEL_25:
                      v30 = qvector_reserve();
                      desta = (void *)v30;
                      goto LABEL_26;
                    }
                  }
                  else if ( !v24 && !v25 )
                  {
                    v27 = 0;
                    v28 = 1;
                    v29 = &s1;
                    goto LABEL_25;
                  }
                }
              }
            }
          }
          v31 = *(_QWORD *)(a1 + 16);
          v32 = &s1;
          goto LABEL_28;
        }
      }
    }
  }
  return 0;
}

