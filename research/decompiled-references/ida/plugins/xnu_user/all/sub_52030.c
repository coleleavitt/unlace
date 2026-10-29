unsigned __int64 __fastcall sub_52030(__int64 a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *func; // rax
  const char *v13; // r12
  char *v14; // rax
  _QWORD *v15; // r15
  __int64 v16; // r14
  const char *v17; // rsi
  _QWORD *v18; // r12
  const char *v19; // rdi
  int v20; // eax
  _QWORD *v21; // rcx
  int v22; // r12d
  const char *v23; // rsi
  const char *v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // [rsp+18h] [rbp-90h]
  char *v28; // [rsp+20h] [rbp-88h]
  int v29; // [rsp+40h] [rbp-68h] BYREF
  __int64 v30; // [rsp+48h] [rbp-60h]
  __int128 v31; // [rsp+50h] [rbp-58h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( *(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 120) != 12 )
    return v32 - __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 984) == 0;
  v29 = -2;
  v30 = -1;
  v31 = 0;
  if ( !v9 )
  {
    v13 = *(const char **)(a1 + 976);
    v14 = strstr(v13, "-cpu 4Km");
    if ( v14 )
    {
      if ( v14 - v13 != -1 )
      {
        v28 = (char *)qvector_reserve();
        strcpy(v28, "status");
        v15 = *(_QWORD **)(a1 + 1256);
        v27 = a1 + 1248;
        if ( !v15 )
          goto LABEL_32;
        v16 = a1 + 1248;
        do
        {
          if ( v15[5] )
          {
            v19 = (const char *)v15[4];
            v17 = v28;
            v18 = v15;
          }
          else
          {
            v17 = v28;
            v18 = v15;
            v19 = src;
          }
          v20 = strcmp(v19, v17);
          v21 = (_QWORD *)v15[2];
          v15 = (_QWORD *)v15[3];
          if ( v20 >= 0 )
          {
            v16 = (__int64)v18;
            v15 = v21;
          }
        }
        while ( v15 );
        v22 = -1;
        if ( v27 == v16 )
          goto LABEL_28;
        if ( *(_QWORD *)(v16 + 40) )
        {
          v23 = *(const char **)(v16 + 32);
          v24 = v28;
        }
        else
        {
          v24 = v28;
          v23 = src;
        }
        if ( strcmp(v24, v23) >= 0 )
          v22 = *(_DWORD *)(v16 + 56);
        else
LABEL_32:
          v22 = -1;
LABEL_28:
        if ( v28 )
          qfree();
        if ( (unsigned __int8)sub_519A0(a1, *(unsigned int *)(a1 + 1364), (__int64)&v29, v22, 0.0, a4, a5, a6) )
        {
          v25 = *(unsigned int *)(a1 + 1364);
          v30 |= 0x14uLL;
          sub_51B60(a1, v25, (__int64)&v29, v22, 0.0, a4, a5, a6);
        }
      }
    }
  }
  netnode_check();
  netnode_altval();
  v10 = node2ea();
  if ( v10 != -1 )
  {
    v11 = *(unsigned int *)(a1 + 1364);
    v30 = v10;
    sub_51B60(a1, v11, (__int64)&v29, 28, 0.0, a4, a5, a6);
  }
  func = (_QWORD *)get_func();
  if ( func && *func == a2 )
  {
    v26 = *(unsigned int *)(a1 + 1364);
    v30 = a2;
    sub_51B60(a1, v26, (__int64)&v29, 25, 0.0, a4, a5, a6);
  }
  if ( v29 >= -1 && v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  return v32 - __readfsqword(0x28u);
}

